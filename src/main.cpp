#define GLAD_GL_IMPLEMENTATION
#include "../lib/gl/gl.h"
#include "../lib/glfw/glfw3.h"
#include "engine-core/globals.h"
#include <glm/glm.hpp>
#include <iostream>

int main() {
    glfwInit();

    std::cout << ErrPrefix << WarnPrefix << InfoPrefix << std::endl;

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_TRUE);

    GLFWwindow* window = glfwCreateWindow(1280, 720, "Lapis", nullptr, nullptr);

    if (window == NULL) {
        std::cout << ErrPrefix << "Failed to create Window!" << std::endl;
        glfwTerminate();
        return 0;
    }

    glfwMakeContextCurrent(window);

    int version = gladLoadGL(glfwGetProcAddress);
    if (version == 0) {
        std::cout << ErrPrefix << "Failed to initialize OenGL!" << std::endl;
        glfwTerminate();
        return -1;
    }

    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);

    while (!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT);
        glfwPollEvents();
        glfwSwapBuffers(window);
    }

    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}
