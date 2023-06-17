#pragma once
#ifndef SHADER_H
#define SHADER_H

#include <filesystem>

namespace Flower{
	class Shader {
	public:
		unsigned int program;
		virtual unsigned int generate_program();
		virtual void terminate_program();
	private:
	};
}

#endif // !SHADER_H
