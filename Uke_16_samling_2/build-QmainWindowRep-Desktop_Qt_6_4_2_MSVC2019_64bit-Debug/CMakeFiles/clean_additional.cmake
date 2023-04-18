# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\QmainWindowRep_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\QmainWindowRep_autogen.dir\\ParseCache.txt"
  "QmainWindowRep_autogen"
  )
endif()
