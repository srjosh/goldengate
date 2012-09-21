# Set DB variables
export DB_NAME='d7_goldengate'
export DB_USER='root'
export DB_HOST='localhost'

export HOSTNAME='gglocal.srjoshinteractive.com'
export BASE_DIR='/Users/jturton/htdocs/SJI/goldengate'
export FILE_DIR="$BASE_DIR/sites/goldengate.srjoshinteractive.com/uploaded_files/drupal"
export OUTPUT_DIR="$BASE_DIR/httpdocs"

export MEMCACHE_SERVERS='$conf["memcache_servers"] = array("localhost:11213" => "default");'
export MEMCACHE_BINS='$conf["memcache_bins"] = array("cache" => "default");'
