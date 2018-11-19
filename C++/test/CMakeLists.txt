cmake_minimum_required(VERSION 3.6)
project(GildedRoseTests)

set(CMAKE_CXX_STANDARD 14)

enable_testing()
find_package(GTest MODULE REQUIRED)
if(NOT TARGET GildedRose)
  find_package(GildedRose CONFIG REQUIRED)
endif()

add_executable(GildedRoseTests gilded_rose_tests.cpp)
target_link_libraries(GildedRoseTests
  PRIVATE
    GildedRose
    GTest::Main
)
add_test(NAME GildedRose.UnitTests
  COMMAND GildedRoseTests
)
