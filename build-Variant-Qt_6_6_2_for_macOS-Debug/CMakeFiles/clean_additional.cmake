# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/Variant_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/Variant_autogen.dir/ParseCache.txt"
  "Variant_autogen"
  )
endif()
