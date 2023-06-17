#include "opengl_shader.h"

unsigned int Flower::opengl_shader::generate_program(std::string shader) {
	const char* fragment_shader_source = Flower::utils::stringToCharArray(Flower::utils::readfile(USER_DIRECTORY));
}