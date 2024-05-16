#include "sdl_platform.h"
#include "../vulkan/vulkan_instance.h"

namespace k0bin::dreieck {

	SDLPlatform::SDLPlatform() 
		: window_handle(1280, 720, "Test") {
	}

	void SDLPlatform::start() {
		this->window_handle.start();
	}

	std::unique_ptr<core::gpu::Instance> SDLPlatform::createInstance() {
		return std::make_unique<vulkan::VulkanInstance>();
	}

}
