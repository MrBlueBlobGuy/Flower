#pragma once
#ifndef WINDOW_H

#include <glad/glad.h>
#include <GLFW/glfw3.h>

namespace Flower {
	// class Application;
	class Window {
	public:
		Window(GLuint height, GLuint width, const char* title);
	private:
		GLFWwindow* m_window;
		GLuint m_height, m_width;
		const char* m_title;
		bool run();
		void loop();
	};
}

#endif // !WINDOW_H
