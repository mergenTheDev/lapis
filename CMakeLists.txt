cmake_minimum_required(VERSION 3.22.2)

project(Lapis)

find_package(OpenGL REQUIRED)

add_executable(
    Lapis
    src/main.cpp
    src/engine-core/shader/shader.cpp
)

target_link_libraries(
    Lapis
    OpenGL::GL
    glfw
    ${GLM_BINARY_DIR}
)
