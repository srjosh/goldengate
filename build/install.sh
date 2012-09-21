#/bin/sh

######################## 
# CONFIGURATION
######################## 

# Take input variables from CLI
export SITE=$1
export DEPLOY=$2
export DB_PASS=$3
export DEBUG=$4
if [ "$SITE" == "" ] 
then 
	echo "No site designated"
	exit
fi
if [ "$DEPLOY" == "" ] 
then 
	echo "No deployment designated"
	exit
fi
if [ "$DB_PASS" == "" ] 
then 
	echo "No database password designated"
	exit
fi
source $SITE/$DEPLOY.properties.sh

######################## 
# PRE-RUN CLEANUP
######################## 

# Remove tmp directory if exists
if [ -d "$OUTPUT_DIR/tmp" ]
then
	echo "Removing tmp directory"
	rm -r $OUTPUT_DIR/tmp
fi



######################## 
# DRUSH
######################## 
# Normal drush make - uses site specific make file, which includes base drush make file
if [ "$DEBUG" != 'debug' ] 
then
	drush make ./$SITE/site.make $OUTPUT_DIR/tmp
else
	mkdir $OUTPUT_DIR/tmp
	mkdir $OUTPUT_DIR/tmp/sites
	mkdir $OUTPUT_DIR/tmp/sites/all
	mkdir $OUTPUT_DIR/tmp/sites/all/modules
	mkdir $OUTPUT_DIR/tmp/sites/all/themes
fi


######################## 
# PLATFORM FILES
######################## 

# copy site-specific additional root-level files to base directory
cp -r $BASE_DIR/platform/httpdocs/ $OUTPUT_DIR/tmp/

# copy platform modules and themes to site directories
if [ "$DEPLOY" == 'local' ] 
then
	echo "Linking platform modules"
	for dir in `ls "$BASE_DIR"/platform/modules/`
	do
		if [ -d "$BASE_DIR/platform/modules/$dir" ]; then
			ln -s $BASE_DIR/platform/modules/"$dir" $OUTPUT_DIR/tmp/sites/all/modules/"$dir"
		fi
	done
	
	echo "Linking platform themes"
	for dir in `ls "$BASE_DIR"/platform/themes/`
	do
		if [ -d "$BASE_DIR/platform/themes/$dir" ]; then
			ln -s $BASE_DIR/platform/themes/"$dir" $OUTPUT_DIR/tmp/sites/all/themes/"$dir"
		fi
	done
	
#	for dir in $BASE_DIR/platform/themes
#	do
#		ln -s $BASE_DIR/platform/themes/${directory} $OUTPUT_DIR/tmp/sites/all/themes/
#	done
else
	echo "Copying platform files"
	cp -r $BASE_DIR/platform/modules $OUTPUT_DIR/tmp/sites/all/
	cp -r $BASE_DIR/platform/themes $OUTPUT_DIR/tmp/sites/all/
fi


######################## 
# SITE-SPECIFIC FILES
######################## 

# Create additional paths not created with the make.
echo "Creating site-specific directory"
mkdir $OUTPUT_DIR/tmp/sites/$HOSTNAME/

# copy site-specific additional root-level files to base directory
cp -r $BASE_DIR/sites/$SITE/httpdocs/ $OUTPUT_DIR/tmp/

# Symlink or copy site-specific modules and themes to site directories; 
# Symlink uploaded files directory
if [ "$DEPLOY" == 'local' ] 
then
	echo "Creating site-specific symlinks for dev"
	ln -s $BASE_DIR/sites/$SITE/modules $OUTPUT_DIR/tmp/sites/$HOSTNAME/modules
	ln -s $BASE_DIR/sites/$SITE/themes $OUTPUT_DIR/tmp/sites/$HOSTNAME/themes
	ln -s $FILE_DIR $OUTPUT_DIR/tmp/sites/default/files
else 
	echo "Copying site-specific files"
	cp -r $BASE_DIR/sites/$SITE/modules $OUTPUT_DIR/tmp/sites/$HOSTNAME/
	cp -r $BASE_DIR/sites/$SITE/themes $OUTPUT_DIR/tmp/sites/$HOSTNAME/
	ln -s $FILE_DIR $OUTPUT_DIR/tmp/files
fi



######################## 
# SETTINGS FILE
######################## 

# Creating settings.php
echo "Copying and filling settings.php"
sed -e"s/@DB_NAME@/$DB_NAME/g" -e"s/@DB_USER@/$DB_USER/g" -e"s/@DB_PASS@/$DB_PASS/g" -e"s/@DB_HOST@/$DB_HOST/g" -e"s/@MEMCACHE_SERVERS@/$MEMCACHE_SERVERS/g" -e"s/@MEMCACHE_BINS@/$MEMCACHE_BINS/g" <$BASE_DIR/sites/$SITE/settings.php >$OUTPUT_DIR/tmp/sites/$HOSTNAME/settings.php



######################## 
# SITE-SPECIFIC BUILD
######################## 

# Check to see if there is a site-specific build script; implement if exists - can be used to create site-specific symlinks, for example
if [ -e "./$SITE/site.sh" ]
then
	echo "Implementing Site-specific build script"
	source $SITE/site.sh
else 
	echo "Site-specific build script does not exist"
fi



######################## 
# WRAPUP
######################## 

# Remove symlinks
echo "Removing symlinks"

if [ "$DEPLOY" == 'local' ] 
then
	if [ -e "$OUTPUT_DIR/$SITE/sites/$HOSTNAME/modules" ]
	then 
		chmod -R 777 $OUTPUT_DIR/$SITE/sites/$HOSTNAME/
		rm $OUTPUT_DIR/$SITE/sites/$HOSTNAME/modules
	fi
	if [ -e "$OUTPUT_DIR/$SITE/sites/$HOSTNAME/themes" ]
	then 
		chmod -R 777 $OUTPUT_DIR/$SITE/sites/$HOSTNAME/
		rm $OUTPUT_DIR/$SITE/sites/$HOSTNAME/themes
	fi
fi
if [ -e "$OUTPUT_DIR/$SITE/sites/$HOSTNAME/files" ]
then 
	chmod -R 777 $OUTPUT_DIR/$SITE/sites/$HOSTNAME/files
	rm $OUTPUT_DIR/$SITE/files
fi

# Move files from tmp to final home
echo "Moving files to final destination"
if [ -e "$OUTPUT_DIR/$SITE/" ]; then rm -r $OUTPUT_DIR/$SITE/; fi
mv $OUTPUT_DIR/tmp/ $OUTPUT_DIR/$SITE/