#include "ffx_fsr2_compute_luminance_pyramid_pass_8b69404fafdf0f113a402c202e1ce3c4.h"

typedef union ffx_fsr2_compute_luminance_pyramid_pass_PermutationKey {
    struct {
        uint32_t FFX_FSR2_OPTION_REPROJECT_USE_LANCZOS_TYPE : 1;
        uint32_t FFX_FSR2_OPTION_HDR_COLOR_INPUT : 1;
        uint32_t FFX_FSR2_OPTION_LOW_RESOLUTION_MOTION_VECTORS : 1;
        uint32_t FFX_FSR2_OPTION_JITTERED_MOTION_VECTORS : 1;
        uint32_t FFX_FSR2_OPTION_INVERTED_DEPTH : 1;
        uint32_t FFX_FSR2_OPTION_APPLY_SHARPENING : 1;
    };
    uint32_t index;
} ffx_fsr2_compute_luminance_pyramid_pass_PermutationKey;

typedef struct ffx_fsr2_compute_luminance_pyramid_pass_PermutationInfo {
    const uint32_t       blobSize;
    const unsigned char* blobData;

    const uint32_t  numSamplerResources;
    const char**    samplerResourceNames;
    const uint32_t* samplerResourceBindings;
    const uint32_t* samplerResourceCounts;
    const uint32_t* samplerResourceSets;

    const uint32_t  numCombinedSamplerResources;
    const char**    combinedSamplerResourceNames;
    const uint32_t* combinedSamplerResourceBindings;
    const uint32_t* combinedSamplerResourceCounts;
    const uint32_t* combinedSamplerResourceSets;

    const uint32_t  numSampledImageResources;
    const char**    sampledImageResourceNames;
    const uint32_t* sampledImageResourceBindings;
    const uint32_t* sampledImageResourceCounts;
    const uint32_t* sampledImageResourceSets;

    const uint32_t  numStorageImageResources;
    const char**    storageImageResourceNames;
    const uint32_t* storageImageResourceBindings;
    const uint32_t* storageImageResourceCounts;
    const uint32_t* storageImageResourceSets;

    const uint32_t  numUniformTexelBufferResources;
    const char**    uniformTexelBufferResourceNames;
    const uint32_t* uniformTexelBufferResourceBindings;
    const uint32_t* uniformTexelBufferResourceCounts;
    const uint32_t* uniformTexelBufferResourceSets;

    const uint32_t  numStorageTexelBufferResources;
    const char**    storageTexelBufferResourceNames;
    const uint32_t* storageTexelBufferResourceBindings;
    const uint32_t* storageTexelBufferResourceCounts;
    const uint32_t* storageTexelBufferResourceSets;

    const uint32_t  numUniformBufferResources;
    const char**    uniformBufferResourceNames;
    const uint32_t* uniformBufferResourceBindings;
    const uint32_t* uniformBufferResourceCounts;
    const uint32_t* uniformBufferResourceSets;

    const uint32_t  numStorageBufferResources;
    const char**    storageBufferResourceNames;
    const uint32_t* storageBufferResourceBindings;
    const uint32_t* storageBufferResourceCounts;
    const uint32_t* storageBufferResourceSets;

    const uint32_t  numInputAttachmentResources;
    const char**    inputAttachmentResourceNames;
    const uint32_t* inputAttachmentResourceBindings;
    const uint32_t* inputAttachmentResourceCounts;
    const uint32_t* inputAttachmentResourceSets;

    const uint32_t  numRTAccelerationStructureResources;
    const char**    rtAccelerationStructureResourceNames;
    const uint32_t* rtAccelerationStructureResourceBindings;
    const uint32_t* rtAccelerationStructureResourceCounts;
    const uint32_t* rtAccelerationStructureResourceSets;

} ffx_fsr2_compute_luminance_pyramid_pass_PermutationInfo;

static const uint32_t g_ffx_fsr2_compute_luminance_pyramid_pass_IndirectionTable[] = {
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
};

static const ffx_fsr2_compute_luminance_pyramid_pass_PermutationInfo g_ffx_fsr2_compute_luminance_pyramid_pass_PermutationInfo[] = {
    { g_ffx_fsr2_compute_luminance_pyramid_pass_8b69404fafdf0f113a402c202e1ce3c4_size, g_ffx_fsr2_compute_luminance_pyramid_pass_8b69404fafdf0f113a402c202e1ce3c4_data, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_compute_luminance_pyramid_pass_8b69404fafdf0f113a402c202e1ce3c4_SampledImageResourceNames, g_ffx_fsr2_compute_luminance_pyramid_pass_8b69404fafdf0f113a402c202e1ce3c4_SampledImageResourceBindings, g_ffx_fsr2_compute_luminance_pyramid_pass_8b69404fafdf0f113a402c202e1ce3c4_SampledImageResourceCounts, g_ffx_fsr2_compute_luminance_pyramid_pass_8b69404fafdf0f113a402c202e1ce3c4_SampledImageResourceSets, 4, g_ffx_fsr2_compute_luminance_pyramid_pass_8b69404fafdf0f113a402c202e1ce3c4_StorageImageResourceNames, g_ffx_fsr2_compute_luminance_pyramid_pass_8b69404fafdf0f113a402c202e1ce3c4_StorageImageResourceBindings, g_ffx_fsr2_compute_luminance_pyramid_pass_8b69404fafdf0f113a402c202e1ce3c4_StorageImageResourceCounts, g_ffx_fsr2_compute_luminance_pyramid_pass_8b69404fafdf0f113a402c202e1ce3c4_StorageImageResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, g_ffx_fsr2_compute_luminance_pyramid_pass_8b69404fafdf0f113a402c202e1ce3c4_UniformBufferResourceNames, g_ffx_fsr2_compute_luminance_pyramid_pass_8b69404fafdf0f113a402c202e1ce3c4_UniformBufferResourceBindings, g_ffx_fsr2_compute_luminance_pyramid_pass_8b69404fafdf0f113a402c202e1ce3c4_UniformBufferResourceCounts, g_ffx_fsr2_compute_luminance_pyramid_pass_8b69404fafdf0f113a402c202e1ce3c4_UniformBufferResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
};

