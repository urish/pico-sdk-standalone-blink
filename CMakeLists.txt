cmake_minimum_required(VERSION 3.12)
include($ENV{PICO_SDK_PATH}/external/pico_sdk_import.cmake)
project(my_app)

# Initialize the SDK
pico_sdk_init()


add_executable(app
        main.c
        )

# Pull in our pico_stdlib which pulls in commonly used features
target_link_libraries(app pico_stdlib)

# create map/bin/hex file etc.
pico_add_extra_outputs(app)
