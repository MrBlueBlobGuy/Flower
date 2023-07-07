#pragma once
#ifndef VERTEX_ARRAY_OBJECT_H
#define VERTEX_ARRAY_OBJECT_H

#include "vertex_buffer_object.h"
#include "opengl_shader.h"

#include <glad/glad.h>
#include <iostream>
#include <map>

namespace Flower {
	class vertex_array_object{
	public:
		vertex_array_object(Flower::BaseVBO VBO_OBJ, std::string shader_name);
		void use();
	private:
		GLuint VAO;
		Flower::Shader* shader;
		Flower::BaseVBO* VBO;
	};
}

#endif // !VERTEX_ARRAY_OBJECT_H
