#include "vertex_buffer_object.h"

Flower::BaseVBO::BaseVBO() {
	this->get_vertex_data();
	if (this->vertex_data != nullptr) {
		glGenBuffers(1, &(this->VBO));
		glBindBuffer(GL_ARRAY_BUFFER, this->VBO);
		glBufferData(GL_ARRAY_BUFFER, sizeof(this->vertex_data), this->vertex_data, GL_STATIC_DRAW);
	}
}

GLuint Flower::BaseVBO::getVBO() {
	return this->VBO;
}

Flower::BaseVBO::~BaseVBO() {
	glBindBuffer(GL_ARRAY_BUFFER, 0);
	delete(this->vertex_data);
}

void Flower::TriangleVBO::get_vertex_data() {
	this->vertex_data = new glm::vec3{
		glm::vec3(-0.5, 0.5, 0.0),
		glm::vec3( 0.5, 0.5, 0.0),
		glm::vec3( 0.0, 0.5, 0.0)
	};
}

