#pragma once

namespace k0bin::dreieck::core::gpu {

    enum class Format {
        Unknown,
        R32UNorm,
        R16Unorm,
        R8Unorm,
        R8G8B8A8Unorm,
        R8G8B8A8Srgb,
        B8G8R8Unorm,
        B8G8R8A8Unorm,
        BC1,
        BC1Alpha,
        BC2,
        BC3,
        R16Float,
        R32Float,
        R32G32Float,
        R16G16Float,
        R32G32B32Float,
        R32G32B32A32Float,
        R16G16UNorm,
        R8G8UNorm,
        R32UInt,
        R16G16B16A16Float,
        R11G11B10Float,
        R16G16UInt,
        R16UInt,
        R16SNorm,

        D16,
        D16S8,
        D32,
        D32S8,
        D24S8
    };

}
