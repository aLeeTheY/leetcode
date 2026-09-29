# CMakeList.txt : CMake project for leetcode_cpp, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("leetcode")

# Add source to this project's executable.
add_executable (7_reverse_integer "7_reverse_integer/main.cpp")
add_executable (9_palindrome "9_palindrome/main.cpp")
add_executable (13_roman_to_integer "13_roman_to_integer/main.cpp")
add_executable (14_longest_common_prefix "14_longest_common_prefix/main.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET 7_reverse_integer PROPERTY CXX_STANDARD 20)
  set_property(TARGET 9_palindrome PROPERTY CXX_STANDARD 20)
  set_property(TARGET 13_roman_to_integer PROPERTY CXX_STANDARD 20)
  set_property(TARGET 14_longest_common_prefix PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
