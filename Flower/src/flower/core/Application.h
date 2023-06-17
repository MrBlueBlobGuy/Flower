#pragma once
#include "Window.h"
#include "Scene.h"

namespace Flower {
	class Application {
	public:
		Application(int width, int height, const char* title);
		Flower::Window* getWindow();
		static inline Flower::Scene CurrentScene = Scene();
		static void Update();
		static void terminate() {
			delete(Flower::Application::m_window);
		}
	private:
		static inline Flower::Window* m_window;
	};
}