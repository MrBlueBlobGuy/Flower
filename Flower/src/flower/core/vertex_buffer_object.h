#pragma once
#ifndef VERTEX_BUFFER_OBJECT_H
#define VEREX_BUFFER_OBJECT_H

#include <glad/glad.h>
#include <glm/vec3.hpp>
#include <vector>
#include <iostream>
#include <string>
#include <map>

namespace Flower{

	class BaseVBO {
	public:
		BaseVBO();
		~BaseVBO();

		glm::vec3* vertex_data;		//	With the vertex and texture mapping and indices in the format V3 position
		
		virtual void get_vertex_data();
		GLuint getVBO();
	private:
		GLuint VBO;
	};

	class TriangleVBO:public BaseVBO{
	public:
		void get_vertex_data();
		TriangleVBO();
	};

	static inline std::map<std::string, Flower::BaseVBO> VBOs;
}

#endif // !VERTEX_BUFFER_OBJECT_H
