cmake_minimum_required(VERSION 3.22.2)

project(Lapis)

find_package(OpenGL REQUIRED)

add_executable(
    Lapis
    src/main.cpp
    src/gui/gui.cpp
    src/engine-core/shader/shader.cpp
    lib/imgui/imgui_draw.cpp
    lib/imgui/imgui_impl_glfw.cpp
    lib/imgui/imgui_demo.cpp
    lib/imgui/imgui_impl_opengl3.cpp
    lib/imgui/imgui_tables.cpp
    lib/imgui/imgui_widgets.cpp
    lib/imgui/imgui.cpp
)

target_link_libraries(
    Lapis
    OpenGL::GL
    glfw
    ${GLM_BINARY_DIR}
)
