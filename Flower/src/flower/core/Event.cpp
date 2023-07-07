#include "Event.h"

Flower::Runtime::Event::Event(std::string name){
	Flower::Runtime::events[name] = this;
}

void Flower::Runtime::Event::run_event(std::string event) {
	Flower::Runtime::events[event]->set_event();
}