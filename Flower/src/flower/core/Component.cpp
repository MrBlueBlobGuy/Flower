#include "Component.h"
#include "Scene.h"

Flower::Component::Component(Flower::Scene scene, std::string name){
	UUID uuid;
	UuidCreate(&uuid);
	UuidToStringA(&uuid, (RPC_CSTR*)&this->uuid);
}