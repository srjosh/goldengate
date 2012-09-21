PROCESS:
build/install.sh is the executable build file.  It takes three parameters:

    Site: the url of the site you are building. This corresponds to the build/subdirectory name
    Install profile: local, dev, stg, test, production, etc.  This corresponds to the build/{site}/{deployment}.properties.sh filename.  Do not include ".properties.sh".
    DB Password: For security's sake, the DB password is not committed to git. You must enter it manually.
  
So, for example, the command to run a local example.com build would be:

    sudo ./install.sh example.com local dbpass

First, build/install.sh grabs settings from build/{site}/{deployment}.properties.sh

build/install.sh then runs a series of commands to create a file structure in {output_dir}/tmp.  It then runs drush make, invoking the site-specific build/{site}/site.make file.

build/{site}/site.make invokes the build/install.make file, downloading pressflow, common modules, libraries, and base theme, installing them in {output_dir}/tmp/

build/{site}/site.make then also has the ability to override/add to the presets in the platform build/install.make file.

build/install.sh copies platform-level modules and themes into {output_dir}/tmp/sites/default/

build/install.sh then creates site directories at {output_dir}/tmp/sites/{site}, symlinks {output_dir}/tmp/sites/{site} to the uploaded_files directory, and copies site-level custom site modules and themes directory into {output_dir}/tmp/sites/{site}.

Next, build/install.sh copies the settings.php file from sites/{site}/settings.php, and does a search&replace on specific terms 

build/install.sh then invokes build/{site}/site.sh, which will allow for site-specific additional directories, or other custom build scripts.  A good example would be creating the symlink to a forums directory.

Finally, build/install.sh moves from {output_dir}/tmp to {output_dir}/{site}.


````
WHAT'S WHERE:
|--build
|  |--install.make (platform-level drush make file)
|  |--install.sh (platform-level build script; this is the one you run)
|  \--example.com
|     |--local.properties.sh (local environment config file)
|     |--stg.properties.sh (stg environment config file)
|     |--production.properties.sh (production environment config file)
|     |--site.make (site-level drush make file)
|     \--site.sh (site-level build script)
|--platform
|  |--httpdocs (platform-level html/script files, for in the root directory)
|  |--modules  (platform-level custom modules)
|  \--themes   (platform-level custom themes)
|--README.md
|--sites/
|  \--example.com
|     |--httpdocs (site-level html/script files, for in the root directory)
|     |--modules  (site-level custom modules)
|     |--settings.php (site-level settings.php template)
|     \--themes   (site-level custom themes)
````


EXAMPLE.COM SHELL SCRIPT CHEAT-SHEET:
cd build
./install.sh example.com local dbpass

That's it!