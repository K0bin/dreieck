#pragma once

#include "../core/gpu/instance.h"

namespace k0bin::dreieck::vulkan {

	class VulkanInstance : public core::gpu::Instance {
	private:
		VulkanInstance();

	public:
		static void create();
	};

}
