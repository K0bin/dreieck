#include "vulkan_instance.h"

#include "volk.h"

namespace k0bin::dreieck::vulkan {

	VulkanInstance::VulkanInstance() {
	}

	void VulkanInstance::create() {
		VkResult result = volkInitialize();

		VkInstance instance;
		VkInstanceCreateInfo instanceCreateInfo;
		vkCreateInstance(&instanceCreateInfo, nullptr, &instance);


		volkLoadInstance(instance);
	}

}
