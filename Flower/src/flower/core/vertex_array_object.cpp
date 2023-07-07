#include <string>

#include "vertex_array_object.h"

Flower::vertex_array_object::vertex_array_object(Flower::BaseVBO VBO_OBJ, std::string shader_name) {
	this->shader = &Flower::shaders[shader_name];
	glGenVertexArrays(1, &this->VAO);
	glBindVertexArray(this->VAO);	
	VBO_OBJ.bind();
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3*sizeof(float), (void*)0);
}

void Flower::vertex_array_object::use(){
	glUseProgram(this->shader->ID);
	glBindVertexArray(this->VAO);
	glDrawArrays(GL_TRIANGLES, 0, sizeof(this->VBO->vertex_count));
}
