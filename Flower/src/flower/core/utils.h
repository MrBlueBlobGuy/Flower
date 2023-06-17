#pragma once

#include <iostream>
#include <filesystem>
#include <fstream>
#include <string>

namespace Flower {
	namespace utils {
		static std::string readfile(const std::string& filename) {
			std::vector<char> buffer;
			std::ifstream file(filename);
			std::string content;
			if (file) {
				std::string line;
				while (std::getline(file, line)) {
				content += line;
				content += '\n';
				}
			}
			return content;
		}

		static char* stringToCharArray(const std::string& str) {
			char* charArray = new char[str.length() + 1];
			std::strcpy(charArray, str.c_str());
			return charArray;
		}
	}
}