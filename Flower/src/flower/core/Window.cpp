#include "Window.h"
#include "Application.h"
#include "utils.h"

#include <iostream>

Flower::Window::Window(GLuint height, GLuint width, const char* title) {
	this->m_width = width;
	this->m_height = height;
	this->m_title = title;
	std::cout << utils::working_dir << std::endl;
	if (this->run()) this->loop();
}

bool Flower::Window::run() {
	if (!glfwInit()) {
		return false;
	}

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 0x03);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0x03);

	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	glfwWindowHint(GLFW_RESIZABLE, GL_TRUE);

	this->m_window = glfwCreateWindow(this->m_width, this->m_height, this->m_title, NULL, NULL);

	if (m_window == NULL) {
		return false;
	}
	glfwMakeContextCurrent(this->m_window);
	gladLoadGL();
	glViewport(0, 0, this->m_width, this->m_height);
	return true;
}

void Flower::Window::loop() {
	while (!glfwWindowShouldClose(this->m_window)) {
		glClear(GL_COLOR_BUFFER_BIT);
		glClearColor(0, 0.8, 0.5, 1);
		Flower::Application::Update();
		glfwPollEvents();
		glfwSwapBuffers(this->m_window);
	}


	glfwDestroyWindow(this->m_window);
	glfwTerminate();
	// delete(this->m_title);		IDK how to delete this pointer. If I delete it the program just crashes
}