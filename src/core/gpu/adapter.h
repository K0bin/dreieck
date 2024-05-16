#pragma once

#include <string>

namespace k0bin::dreieck::core::gpu {

    enum class AdapterType {
        Discrete,
        Integrated,
        Virtual,
        Software,
        Other
    };

    enum class Manufacturer {
        AMD,
        Nvidia,
        Intel,
        Qualcomm,
        ARM,
        Apple
    };

    class Adapter {
    public:
        virtual AdapterType adapterType() const = 0;
        virtual const std::string& name() const = 0;
        virtual Manufacturer manufacturer() const = 0;

        virtual void createDevice() = 0;
    };

}
