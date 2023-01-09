# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\QObect_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\QObect_autogen.dir\\ParseCache.txt"
  "QObect_autogen"
  )
endif()
