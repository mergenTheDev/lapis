cmake_minimum_required(VERSION 3.22.2)

project(Moonstone)

find_package(OpenGL REQUIRED)

add_executable(
    Moonstone
    lib/gl/gl.h
    lib/glfw/glfw3.h
    src/main.cpp
)

target_link_libraries(
    Moonstone
    OpenGL::GL
    glfw
)
