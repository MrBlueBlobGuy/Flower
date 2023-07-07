#include "Application.h"
#include "Scene.h"
#include "utils.h"

Flower::Application::Application(int width, int height, const char* title, Flower::Scene CurrentScene) {
	Scene::changeScene(CurrentScene);
	utils::setup_working_dir();
	m_window = new Window(height, width, title);
}

Flower::Window* Flower::Application::getWindow() {
	return Application::m_window;
}

void Flower::Application::Update() {
	Flower::Application::s_CurrentScene.render();
	Flower::Application::s_CurrentScene.update();
}
