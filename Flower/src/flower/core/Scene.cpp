#include "Scene.h"
#include "Application.h"

void Flower::Scene::changeScene(Flower::Scene next_scene) {
	Flower::Application::CurrentScene = next_scene;
}

void Flower::Scene::render() {

}

void Flower::Scene::update() {

}