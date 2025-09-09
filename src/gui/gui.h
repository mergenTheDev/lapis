#pragma once

#define FIXED_WINDOW_FLAG ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse

#include "../../lib/imgui/imgui.h"
#include "../../lib/imgui/imgui_impl_glfw.h"
#include "../../lib/imgui/imgui_impl_opengl3.h"

void InitGui(GLFWwindow *window);
void NewFrame();
void RenderGui();
void ShutdownGui();
void SetUI(int x, int y, int width, int height);

namespace GUI {
     void GUI();
};
