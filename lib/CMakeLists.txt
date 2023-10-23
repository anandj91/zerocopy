cmake_minimum_required(VERSION 3.9)

add_library(zerocopylib SHARED
    src/zerocopylib.c
)

target_include_directories(zerocopylib PRIVATE include/)
