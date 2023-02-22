# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\filsystemer_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\filsystemer_autogen.dir\\ParseCache.txt"
  "filsystemer_autogen"
  )
endif()
