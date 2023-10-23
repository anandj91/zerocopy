cmake_minimum_required(VERSION 3.9)

project(zerocopy VERSION 0.1)

add_subdirectory(lib)

add_executable(zerocopy main.c)
target_link_libraries(zerocopy PUBLIC zerocopylib)
target_include_directories(zerocopy PRIVATE lib/include/)
