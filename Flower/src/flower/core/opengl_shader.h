#pragma once

#ifndef OPENGL_SHADER_H
#define OPENGL_SHADER_H

#include <glad/glad.h>

#include <fstream>
#include <sstream>
#include <iostream>
#include <map>

#include "Shader.h"

namespace Flower {
	static inline std::map<std::string, Flower::Shader> shaders;
	class openglShader : public Flower::Shader {
	public:
		openglShader(const char* vertexPath, const char* fragmentPath, const char* name);
		void use();
		void set_bool(const std::string& name, bool value) const;
		void set_int(const std::string& name, int value) const;
		void set_float(const std::string& name, float value) const;
	};
}

#endif // !OPENGL_SHADER_H
