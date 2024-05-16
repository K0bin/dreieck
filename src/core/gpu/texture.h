#pragma once

#include <stdint.h>

#include "format.h"

namespace k0bin::dreieck::core::gpu {

    enum class TextureUsage : uint32_t {
        Sampled = 1,
        RenderTarget = 2,
        DepthStencil = 4,
        Storage = 8,
        CopySrc = 16,
        CopyDst = 32,
        ResolveSrc = 64,
        ResolveDst = 128,
        BlitSrc = 256,
        BlitDst = 512,

        GPUMutable = RenderTarget | DepthStencil | Storage | CopyDst | ResolveDst | BlitDst
    };

    enum class TextureLayout {
        Undefined,
        General,
        Sampled,
        Present,
        RenderTarget,
        DepthStencilRead,
        DepthStencilReadWrite,
        Storage,
        CopySrc,
        CopyDst,
        ResolveSrc,
        ResolveDst,
        BlitSrc,
        BlitDst
    };

    enum class TextureDimension {
        Dim1D,
        Dim2D,
        Dim3D,
        Dim1DArray,
        Dim2DArray
    };

    enum class SampleCount {
        Samples1,
        Samples2,
        Samples4,
        Samples8
    };

    struct TextureInfo {
        TextureDimension dimension;
        Format format;
        uint32_t width;
        uint32_t height;
        uint32_t depth;
        uint32_t mipLevels;
        uint32_t arrayLength;
        SampleCount samples;
        TextureUsage usage;
        bool supportsSrgb;
    };

    class Texture {};

}
