#pragma once

#include <string>

#include "../core/window.h"
#include <SDL3/SDL.h>

namespace k0bin::dreieck {

	class SDLWindow : public core::Window {
	public:
		SDLWindow(uint32_t width, uint32_t height, const std::string& title);
		void start();

	private:
		SDL_Window* window;
	};

}
