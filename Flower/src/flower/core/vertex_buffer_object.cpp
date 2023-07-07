#include "vertex_buffer_object.h"

Flower::BaseVBO::BaseVBO() {
	this->get_vertex_data();
	if (this->vertex_data != nullptr) {
		glGenBuffers(1, &(this->VBO));
		this->status = true;
	}
	else {
		this->status = false;
	}
}

GLuint Flower::BaseVBO::get_VBO() {
	return this->VBO;
}

void Flower::BaseVBO::bind() {
	if(this->status)
	{
		glBindBuffer(GL_ARRAY_BUFFER, this->VBO);
		glBufferData(GL_ARRAY_BUFFER, sizeof(this->vertex_data), this->vertex_data, GL_STATIC_DRAW);
	}
	else {
		std::cout << "VBO not set up properly please run a status check on current VBO \n";		// TODO : ADD A STATUS CHECK FUNCTION
		return;
	}
}

void Flower::BaseVBO::unbind() {
	glBindBuffer(GL_ARRAY_BUFFER, 0);
}

void Flower::TriangleVBO::get_vertex_data() {
	this->vertex_data[0] = glm::vec3(-0.5f, 0.5f, 0.0f);
	this->vertex_data[1] = glm::vec3( 0.5f,-0.5f, 0.0f);
	this->vertex_data[2] = glm::vec3( 0.0f, 0.0f, 0.0f);
}
