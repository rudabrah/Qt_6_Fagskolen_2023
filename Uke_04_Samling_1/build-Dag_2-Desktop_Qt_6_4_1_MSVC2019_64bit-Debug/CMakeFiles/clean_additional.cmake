# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Dag_2_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Dag_2_autogen.dir\\ParseCache.txt"
  "Dag_2_autogen"
  )
endif()
