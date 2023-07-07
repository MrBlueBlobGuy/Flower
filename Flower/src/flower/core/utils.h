#pragma once

#ifndef UTILS_H
#define UTILS_H

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
		static inline char* working_dir = WORKING_DIR;
		
		static inline void setup_working_dir() {
			for (int i = 0; i < sizeof(working_dir); i++) {
				if (working_dir[i] == '\\') {
					working_dir[i] = '/';
				}
			// #undef WORKING_DIR
			}
		}

		static inline float q_rsqrt(float number) {
			long i;
			float x2, y;
			const float threehalfs = 1.5f;

			x2 = number * 0.5f;
			y = number;
			i = *(long*)&y;
			i = 0x5f3759df - (i >> 1);
			i = *(float*)&i;
			y = y * (threehalfs - (x2 * y * y));

			return y;
		}
	}
}

#endif