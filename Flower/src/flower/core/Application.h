#pragma once
#include "Window.h"
#include "Scene.h"

namespace Flower {
	class Application {
	public:
		static inline Flower::Scene s_CurrentScene = Scene();
		Application(int width, int height, const char* title, Flower::Scene CurrentScene);
		Flower::Window* getWindow();
		static void Update();
		static void terminate() {
			delete(Flower::Application::m_window);
		}
	private:
		static inline Flower::Window* m_window;
	};
}