#pragma once
#ifndef SHADER_H
#define SHADER_H

#include <filesystem>
#include <string>

#include "utils.h"

namespace Flower{
	class Shader {
	public:
		unsigned int ID;
		virtual void use();
		virtual void setBool(const std::string &name, bool value);
		virtual void setInt(const std::string& name, int value);
		virtual void setFloat(const std::string& name, float value);
	private:
	};
}

#endif // !SHADER_H
