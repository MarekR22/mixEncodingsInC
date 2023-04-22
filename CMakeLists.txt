cmake_minimum_required(VERSION 3.16)

project(MixEncodingsInC LANGUAGES C CXX)

add_executable(read_file 
    main.c
    example_utf-8.txt
)

add_custom_command(
    TARGET read_file POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy
            ${CMAKE_SOURCE_DIR}/example_utf-8.txt
            $<TARGET_FILE_DIR:read_file>/example_utf-8.txt
)

