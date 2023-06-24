#pragma once
#pragma comment(lib, "rpcrt4.lib")
#ifndef COMPONENT_H
#define COMPONENT_H

#include <string>
#include <windows.h>

namespace Flower {
	class Scene;

	class Component {
	public:
		Component(Flower::Scene scene, std::string parent);
	private:
		std::string uuid;
	};
}

#endif