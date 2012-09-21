; Core version
; ------------
; Each makefile should begin by declaring the core version of Drupal that all
; projects should be compatible with.
  
core = 7.x
  
; API version
; ------------
; Every makefile needs to declare its Drush Make API version. This version of
; drush make uses API version `2`.
  
api = 2
  
; Core project
; ------------
; In order for your makefile to generate a full Drupal site, you must include
; a core project. This is usually Drupal core, but you can also specify
; alternative core projects like Pressflow. Note that makefiles included with
; install profiles *should not* include a core project.
  
; Use Pressflow instead of Drupal core:
projects[pressflow][type] = "core"
projects[pressflow][download][type] = "git"
projects[pressflow][download][url] = "git://github.com/pressflow/7.git"
  
; Modules
; --------
projects[ctools][version] = 1.2
projects[entity][version] = 1.0-rc3
projects[features][version] = 1.0
projects[field_group][version] = 1.1
projects[field_permissions][version] = 1.0-beta2
projects[gmap][version] = 1.x-dev
projects[graphapi][version] = 1.x-dev
projects[jquery_update][version] = 2.2
projects[libraries][version] = 1.0
projects[link][version] = 1.0
projects[location][version] = 3.0-alpha1
projects[pathauto][version] = 1.2
projects[relation][version] = 1.0-rc3
projects[relation_add][version] = 1.0-beta1
projects[strongarm][version] = 2.0
projects[thejit][version] = 1.x-dev
projects[token][version] = 1.2
projects[views][version] = 3.5
projects[views_pdf][version] = 1.0-rc1
projects[wysiwyg][version] = 2.x-dev

; Themes
; --------
projects[mayo][version] = 1.2
  
  
; Libraries
; ---------
libraries[tinymce][download][type] = "file"
libraries[tinymce][download][url] = "http://github.com/downloads/tinymce/tinymce/tinymce_3.5b3.zip"

libraries[tcpdf][download][type] = "file"
libraries[tcpdf][download][url] = "http://sourceforge.net/projects/tcpdf/files/latest/download?source=files"

libraries[Jit][download][type] = "file"
libraries[Jit][download][url] = "http://thejit.org/downloads/Jit-2.0.1.zip"

libraries[fpdi][download][type] = "file"
libraries[fpdi][download][url] = "http://www.srjoshinteractive.com/downloads/fpdi.zip"
