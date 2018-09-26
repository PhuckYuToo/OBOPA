cmake_minimum_required(VERSION 3.12)
project(Huiswerk2)

set(CMAKE_CXX_STANDARD 14)
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

find_package(OpenGL REQUIRED)

add_subdirectory(${PROJECT_SOURCE_DIR}/glfw-3.2.1/)
add_subdirectory(${PROJECT_SOURCE_DIR}/glew-2.1.0/build/cmake)

add_executable(Huiswerk2 Main.cpp Map.cpp Map.h Cell.h Rule.h BaseRule.h Rule.cpp Cell.cpp BaseRule.cpp HardcoreRandomRule.cpp HardcoreRandomRule.h DarwinRule.cpp DarwinRule.h Entities.h Entity.h Entities.cpp Entity.cpp)

target_include_directories(Huiswerk2 PRIVATE
        ${PROJECT_SOURCE_DIR}/glew-2.1.0/include
        )

target_link_libraries(Huiswerk2 glfw glew)