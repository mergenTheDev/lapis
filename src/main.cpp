#include "gui/gui.h"

#define GLAD_GL_IMPLEMENTATION
//#include "../lib/gl/gl.h"
#include "engine-core/shader/shader.h"
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

    glfwSwapInterval(0);

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

    InitGui(window);

    glViewport(0, 0, 1280, 720);
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);

    GLuint program = LoadShader("aww.glsl", "aww.glsl");

    while (!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT);

        NewFrame();

        ImGui::Begin("Lapis");
        ImGui::Text("ImGui Works well!");
        ImGui::End();

        RenderGui();

        glfwPollEvents();
        glfwSwapBuffers(window);
    }

    ShutdownGui();

    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}
