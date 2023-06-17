#include <flower/Flower.h>
#include "demo_scene.h"

int main() 
{
	Flower::Scene DefaultScene = demo_scene();
	Flower::Application app = Flower::Application(800, 450, "Hello");
	Flower::Application::terminate();
	return 0;
}