# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Uke_5_view_settings_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Uke_5_view_settings_autogen.dir\\ParseCache.txt"
  "Uke_5_view_settings_autogen"
  )
endif()
