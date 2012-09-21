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
  
; Include base build file for platform
; ------------

includes[base] = "../install.make"


; Site-specific overrides to base platform
; ------------
; Modules
; --------
