#pragma once

#include <span>

#include "adapter.h"

namespace k0bin::dreieck::core::gpu {

	class Instance {
	public:
		virtual std::span<Adapter> listAdapters() const = 0;
	};

}
