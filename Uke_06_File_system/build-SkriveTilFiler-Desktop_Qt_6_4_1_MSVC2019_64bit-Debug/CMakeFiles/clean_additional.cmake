# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\SkriveTilFiler_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\SkriveTilFiler_autogen.dir\\ParseCache.txt"
  "SkriveTilFiler_autogen"
  )
endif()
