#include <iostream>
#include <memory>

#include "sdl/sdl_platform.h"
#include "sdl/sdl_window.h"

using namespace k0bin::dreieck;

int main(int argc, char* argv[]) {
	std::unique_ptr<SDLPlatform> platform = std::make_unique<SDLPlatform>();
	platform->start();
	core::Window& window = platform->window();

	std::cout << "Hello World!" << std::endl;
	return 0;
}
