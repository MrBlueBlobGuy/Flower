#pragma once
#ifndef EVENT_H
#define EVENT_H

#include <map>
#include <string>

namespace Flower {
	namespace Runtime {
		class Event {
		public:
			Event(std::string name);
			virtual void set_event();		// Code that gets run when the event is started. This function cannot return anything for design reasons
			static inline void run_event(std::string event);
		private:
		};
		static inline std::map<std::string, Flower::Runtime::Event*> events;
	}

}

#endif // !EVENT_H