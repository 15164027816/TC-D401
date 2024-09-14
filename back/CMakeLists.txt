cmake_minimum_required(VERSION 3.10)
project(lvgl)

set(CMAKE_C_STANDARD 11) # C11
set(CMAKE_CXX_STANDARD 17) # C++17
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include directories
include_directories(${PROJECT_SOURCE_DIR})
include_directories(${SDL2_INCLUDE_DIRS})
include_directories("lv_drivers" "lvgl" "lvgl/src" "custom" "generated" "generated/images" "generated/guider_fonts" "generated/guider_customer_fonts" "lvgl-simulator")

# File globbing
file(GLOB_RECURSE HEADERS "lv_drivers/*.h" "lvgl/*.h" "lvgl/src/*.h" "custom/*.h" "generated/*.h" "generated/images/*.h" "generated/guider_fonts/*.h" "generated/guider_customer_fonts/*.h" "lvgl-simulator/*.h")
file(GLOB_RECURSE SOURCES "lv_drivers/*.c" "lvgl/*.c" "lvgl/src/*.c" "custom/*.c" "generated/*.c" "generated/images/*.c" "generated/guider_fonts/*.c" "generated/guider_customer_fonts/*.c")

# Output directory for executables
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

# Compiler flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3")

# Find and link SDL2
find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

# Add executable
add_executable(main main.c ${SOURCES})

# Define preprocessor macros
add_compile_definitions(LV_CONF_INCLUDE_SIMPLE)

# Link SDL2 library
target_link_libraries(main PRIVATE SDL2::SDL2)

# Custom target to run the executable
add_custom_target(run COMMAND ${EXECUTABLE_OUTPUT_PATH}/main)
