#pragma once

#ifndef OPENGL_SHADER_H
#define OPENGL_SHADER_H

#include <glad/glad.h>

#include <fstream>
#include <sstream>
#include <iostream>

#include "Shader.h"

namespace Flower {
	class openglShader :public Flower::Shader {
	public:
		openglShader(const char* vertexPath, const char* fragmentPath);
		void use();
		void setBool(const std::string& name, bool value) const;
		void setInt(const std::string& name, int value) const;
		void setFloat(const std::string& name, float value) const;
	};
}

#endif // !OPENGL_SHADER_H
