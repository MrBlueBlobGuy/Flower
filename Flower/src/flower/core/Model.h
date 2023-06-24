#pragma once
#ifndef MODEL_H

#define MODEL_H

#include <string>
#include <glm/glm.hpp>
#include <glad/glad.h>

namespace Flower {
	class Model {
	public:
		Model(std::string vao, unsigned int tex_id);
		~Model();
	private:
		glm::mat4 m_model;
		unsigned int tex_id;
		std::string vao_name;
		GLuint vao;
		

	};
}
#endif // !MODEL_H