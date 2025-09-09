#include "ui.h"

GLFWwindow* Editor::init() {
    glfwInit();

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_TRUE);

    GLFWwindow* window = glfwCreateWindow(1280, 720, "Lapis - OpenGL 4.6", nullptr, nullptr);

    if (window == NULL) {
        glfwTerminate();
        std::cout << ErrPrefix << "Failed to init window!" << std::endl;
        return nullptr;
    }

    glfwMakeContextCurrent(window);

    int version = gladLoadGL(glfwGetProcAddress);
    if (version == 0) {
        glfwTerminate();
        std::cout << ErrPrefix << "Failed to init OpenGL!" << std::endl;
        return nullptr;
    }

    return window;
}