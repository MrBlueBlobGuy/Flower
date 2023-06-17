#include "Application.h"
#include "Scene.h"

Flower::Application::Application(int width, int height, const char* title) {
	m_window = new Window(height, width, title);
}

Flower::Window* Flower::Application::getWindow() {
	return Application::m_window;
}

void Flower::Application::Update() {
	Flower::Application::CurrentScene.render();
	Flower::Application::CurrentScene.update();
}
