#pragma once
#ifndef OPENGL_SHADER_H
#define OPENGL_SHADER_H

#include "Shader.h"
#include "utils.h"

#include <cstdlib>

#define USER_DIRECTORY std::getenv("USER")

namespace Flower {
	class opengl_shader:Flower::Shader {
	private:
	public:
		unsigned int generate_program(std::string shader);
		void terminate_program();
	};
}

#endif // !OPENGL_SHADER_H
