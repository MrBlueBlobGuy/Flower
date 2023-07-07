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

		unsigned int vertex_count = 3;									// TODO : CHANGE HOW THIS WORKS *URGENT* ALL THIS IMPLEMENTATION IS GOOD FOR IS AVOIDING ERRORS AND IS NOT SCALEABLE 
		glm::vec3* vertex_data{ new glm::vec3[vertex_count]{} };		// With the vertex in the format V3 position

		virtual void get_vertex_data();
		void bind();
		void unbind();

		GLuint get_VBO();
	private:
		bool status;
		GLuint VBO;
	};

	static inline std::map<std::string, Flower::BaseVBO> VBOs;
	
	class TriangleVBO:public BaseVBO{
	public:
		void get_vertex_data();
		TriangleVBO():BaseVBO(){
			Flower::VBOs["Triangle"] = *this;							// WHY AM I DOING THIS THIS IS GONNA BITE ME IN THE ASS REAL SOON
		}
	};

}

#endif // !VERTEX_BUFFER_OBJECT_H
