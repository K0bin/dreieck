#include "../core/platform.h"
#include "sdl_window.h"

namespace k0bin::dreieck {

	class SDLPlatform : public core::Platform {
	public:
		SDLPlatform();

		core::Window& window() {
			return this->window_handle;
		}

		std::unique_ptr<core::gpu::Instance> createInstance();

		void start();

	private:
		SDLWindow window_handle;
	};

}
