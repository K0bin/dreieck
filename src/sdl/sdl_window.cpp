#include "sdl_window.h"

#include <SDL3/SDL.h>

namespace k0bin::dreieck {

	SDLWindow::SDLWindow(uint32_t width, uint32_t height, const std::string& title) {
		SDL_Init(SDL_INIT_VIDEO);

		window = SDL_CreateWindow(title.c_str(), width, height, SDL_WINDOW_VULKAN);
	}

	void SDLWindow::start() {
		SDL_Event event;
		while (true) {
			SDL_PollEvent(&event);
		}
	}

}
