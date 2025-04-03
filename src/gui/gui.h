#pragma once

#include "../../lib/imgui/imgui.h"
#include "../../lib/imgui/imgui_impl_glfw.h"
#include "../../lib/imgui/imgui_impl_opengl3.h"

void InitGui(GLFWwindow *window);
void NewFrame();
void RenderGui();
void ShutdownGui();
