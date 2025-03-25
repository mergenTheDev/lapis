cmake_minimum_required(VERSION 3.22.2)

find_package(OpenGL REQUIRED)
find_package(GLFW REQUIRED)

project(Lapis VERSION 0.0.1)

add_executable(
    Lapis
    src/main.cpp
)

target_link_libraries(
    Lapis
    OpenGl::GL
    glfw
)
