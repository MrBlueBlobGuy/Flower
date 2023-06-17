#pragma once

#ifndef SCENE_H
#define SCENE_H
namespace Flower {
	class Application;
	class Scene {
	private:
	public:
		static void changeScene(Scene next_scene);
		virtual void update();
		void render();
	};
}
#endif // !SCENE_H
