#pragma once

#include <memory>

#include "window.h"

#include "gpu/instance.h"

namespace k0bin::dreieck::core {

	class Platform {
		virtual Window& window() = 0;
		virtual std::unique_ptr<gpu::Instance> createInstance() = 0;
	};

}
