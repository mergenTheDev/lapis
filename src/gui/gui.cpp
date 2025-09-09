#include "gui.h"

//ImGUI shortcuts
void InitGui(GLFWwindow *window) {
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    ImGui::StyleColorsDark();
    ImGui_ImplGlfw_InitForOpenGL(window, true);
    ImGui_ImplOpenGL3_Init("#version 330");
}

void NewFrame() {
    ImGui_ImplOpenGL3_NewFrame();
    ImGui_ImplGlfw_NewFrame();
    ImGui::NewFrame();
}

void RenderGui() {
    ImGui::Render();
    ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
}

void ShutdownGui() {
    ImGui_ImplOpenGL3_Shutdown();
    ImGui_ImplGlfw_Shutdown();
    ImGui::DestroyContext();
}

void SetUI(int x, int y, int width, int height) {
    ImGui::SetNextWindowPos(ImVec2(x, y), ImGuiCond_Always);
    ImGui::SetNextWindowSize(ImVec2(width, height), ImGuiCond_Always);
}

//Main GUI of Engine
void GUI::GUI() {
    NewFrame();

    SetUI(300, 0, 700, 30);

    ImGui::Begin("##NoTitle", nullptr, ImGuiWindowFlags_NoTitleBar | FIXED_WINDOW_FLAG);
    ImGui::Button("Save", ImVec2(60, 16));
    ImGui::SameLine();
    ImGui::Button("Button 2", ImVec2(60, 16));
    ImGui::End();

    SetUI(0, 0, 300, 180);

    ImGui::Begin("Lapis", nullptr, FIXED_WINDOW_FLAG);
    ImGui::Text("ImGui Works well!");
    ImGui::End();

    SetUI(0, 180, 300, 540);

    ImGui::Begin("Wow", nullptr, FIXED_WINDOW_FLAG);
    ImGui::Text("I think it is okay!");
    ImGui::End();

    SetUI(1000, 0, 280, 720);

    ImGui::Begin("Another Window", nullptr, FIXED_WINDOW_FLAG);
    ImGui::Text("Another text.");
    ImGui::End();

    RenderGui();
}
