#pragma once

#include <stdint.h>
#include <optional>

namespace k0bin::dreieck::core::gpu {

    enum class BufferUsage : uint32_t {
        Vertex = 1,
        Index = 2,
        Storage = 4,
        Uniform = 8,
        CopySrc = 16,
        CopyDst = 32,
        Indirect = 64,
        AccelerationStructure = 128,
        AccelerationStructureBuild = 256,
        ShaderBindingTable = 512,

        GPUWritable = Storage | CopyDst | AccelerationStructure | AccelerationStructureBuild
    };

    struct BufferInfo {
        uint64_t size;
        BufferUsage usage;
        // QueueSharingMode sharingMode;
    };

    class Buffer {
    public:
        virtual std::optional<void*> map(uint64_t offset, uint64_t length, bool invalidate) = 0;
        virtual void unmap(uint64_t offset, uint64_t length, bool flush) = 0;
    };

}
