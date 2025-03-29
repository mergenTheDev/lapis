cmake_minimum_required(VERSION 3.22.2)

project(Lapis)

find_package(OpenGL REQUIRED)

add_executable(
    Lapis
    lib/gl/gl.h
    lib/glfw/glfw3.h
    lib/nuklear/nuklear.h
    src/main.cpp
)

target_link_libraries(
    Lapis
    OpenGL::GL
    glfw
    ${GLM_BINARY_DIR}
)
