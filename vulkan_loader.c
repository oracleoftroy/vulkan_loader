#include <vulkan_loader.h>

#if !defined(VKLG_ASSERT_MACRO)
	#include <assert.h>
	#define VKLG_ASSERT_MACRO assert;
#endif

#if VK_HEADER_VERSION > 323 && !defined(VK_NO_PROTOTYPES) && !defined(VGEN_VULKAN_LOADER_DISABLE_VERSION_CHECK)
// If you get an error here, the version of vulkan.h you are using is newer than this generator was expecting. Things should mostly work, but newer functions will not have definitions created and will cause linking errors.
// Please check for a newer version of vulkan_loader at https://github.com/oracleoftroy/vulkan_loader
// define VK_NO_PROTOTYPES for a purely dynamic interface or disable this check by defining VGEN_VULKAN_LOADER_DISABLE_VERSION_CHECK.
#error vulkan.h is newer than vulkan_loader. Define VK_NO_PROTOTYPES for the dynamic interface or disable this check via VGEN_VULKAN_LOADER_DISABLE_VERSION_CHECK.
#endif

#if defined(VK_NO_PROTOTYPES)

void vgen_init_vulkan_loader(PFN_vkGetInstanceProcAddr get_address, struct vgen_vulkan_api *vk)
{
	vk->vkGetInstanceProcAddr = get_address;
	vk->vkCreateInstance = (PFN_vkCreateInstance)vk->vkGetInstanceProcAddr(0, "vkCreateInstance");
	vk->vkEnumerateInstanceExtensionProperties = (PFN_vkEnumerateInstanceExtensionProperties)vk->vkGetInstanceProcAddr(0, "vkEnumerateInstanceExtensionProperties");
	vk->vkEnumerateInstanceLayerProperties = (PFN_vkEnumerateInstanceLayerProperties)vk->vkGetInstanceProcAddr(0, "vkEnumerateInstanceLayerProperties");
}

void vgen_load_instance_procs(VkInstance instance, struct vgen_vulkan_api *vk)
{

#if defined(VK_VERSION_1_0)

	vk->vkDestroyInstance = (PFN_vkDestroyInstance)vk->vkGetInstanceProcAddr(instance, "vkDestroyInstance");
	vk->vkEnumeratePhysicalDevices = (PFN_vkEnumeratePhysicalDevices)vk->vkGetInstanceProcAddr(instance, "vkEnumeratePhysicalDevices");
	vk->vkGetPhysicalDeviceFeatures = (PFN_vkGetPhysicalDeviceFeatures)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceFeatures");
	vk->vkGetPhysicalDeviceFormatProperties = (PFN_vkGetPhysicalDeviceFormatProperties)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceFormatProperties");
	vk->vkGetPhysicalDeviceImageFormatProperties = (PFN_vkGetPhysicalDeviceImageFormatProperties)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceImageFormatProperties");
	vk->vkGetPhysicalDeviceProperties = (PFN_vkGetPhysicalDeviceProperties)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceProperties");
	vk->vkGetPhysicalDeviceQueueFamilyProperties = (PFN_vkGetPhysicalDeviceQueueFamilyProperties)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceQueueFamilyProperties");
	vk->vkGetPhysicalDeviceMemoryProperties = (PFN_vkGetPhysicalDeviceMemoryProperties)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceMemoryProperties");
	vk->vkGetInstanceProcAddr = (PFN_vkGetInstanceProcAddr)vk->vkGetInstanceProcAddr(instance, "vkGetInstanceProcAddr");
	vk->vkGetDeviceProcAddr = (PFN_vkGetDeviceProcAddr)vk->vkGetInstanceProcAddr(instance, "vkGetDeviceProcAddr");

	vk->vkCreateDevice = (PFN_vkCreateDevice)vk->vkGetInstanceProcAddr(instance, "vkCreateDevice");
	vk->vkDestroyDevice = (PFN_vkDestroyDevice)vk->vkGetInstanceProcAddr(instance, "vkDestroyDevice");

	vk->vkEnumerateDeviceExtensionProperties = (PFN_vkEnumerateDeviceExtensionProperties)vk->vkGetInstanceProcAddr(instance, "vkEnumerateDeviceExtensionProperties");

	vk->vkEnumerateDeviceLayerProperties = (PFN_vkEnumerateDeviceLayerProperties)vk->vkGetInstanceProcAddr(instance, "vkEnumerateDeviceLayerProperties");

	vk->vkGetDeviceQueue = (PFN_vkGetDeviceQueue)vk->vkGetInstanceProcAddr(instance, "vkGetDeviceQueue");
	vk->vkQueueSubmit = (PFN_vkQueueSubmit)vk->vkGetInstanceProcAddr(instance, "vkQueueSubmit");
	vk->vkQueueWaitIdle = (PFN_vkQueueWaitIdle)vk->vkGetInstanceProcAddr(instance, "vkQueueWaitIdle");
	vk->vkDeviceWaitIdle = (PFN_vkDeviceWaitIdle)vk->vkGetInstanceProcAddr(instance, "vkDeviceWaitIdle");

	vk->vkAllocateMemory = (PFN_vkAllocateMemory)vk->vkGetInstanceProcAddr(instance, "vkAllocateMemory");
	vk->vkFreeMemory = (PFN_vkFreeMemory)vk->vkGetInstanceProcAddr(instance, "vkFreeMemory");
	vk->vkMapMemory = (PFN_vkMapMemory)vk->vkGetInstanceProcAddr(instance, "vkMapMemory");
	vk->vkUnmapMemory = (PFN_vkUnmapMemory)vk->vkGetInstanceProcAddr(instance, "vkUnmapMemory");
	vk->vkFlushMappedMemoryRanges = (PFN_vkFlushMappedMemoryRanges)vk->vkGetInstanceProcAddr(instance, "vkFlushMappedMemoryRanges");
	vk->vkInvalidateMappedMemoryRanges = (PFN_vkInvalidateMappedMemoryRanges)vk->vkGetInstanceProcAddr(instance, "vkInvalidateMappedMemoryRanges");
	vk->vkGetDeviceMemoryCommitment = (PFN_vkGetDeviceMemoryCommitment)vk->vkGetInstanceProcAddr(instance, "vkGetDeviceMemoryCommitment");

	vk->vkBindBufferMemory = (PFN_vkBindBufferMemory)vk->vkGetInstanceProcAddr(instance, "vkBindBufferMemory");
	vk->vkBindImageMemory = (PFN_vkBindImageMemory)vk->vkGetInstanceProcAddr(instance, "vkBindImageMemory");
	vk->vkGetBufferMemoryRequirements = (PFN_vkGetBufferMemoryRequirements)vk->vkGetInstanceProcAddr(instance, "vkGetBufferMemoryRequirements");
	vk->vkGetImageMemoryRequirements = (PFN_vkGetImageMemoryRequirements)vk->vkGetInstanceProcAddr(instance, "vkGetImageMemoryRequirements");

	vk->vkGetImageSparseMemoryRequirements = (PFN_vkGetImageSparseMemoryRequirements)vk->vkGetInstanceProcAddr(instance, "vkGetImageSparseMemoryRequirements");
	vk->vkGetPhysicalDeviceSparseImageFormatProperties = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSparseImageFormatProperties");
	vk->vkQueueBindSparse = (PFN_vkQueueBindSparse)vk->vkGetInstanceProcAddr(instance, "vkQueueBindSparse");

	vk->vkCreateFence = (PFN_vkCreateFence)vk->vkGetInstanceProcAddr(instance, "vkCreateFence");
	vk->vkDestroyFence = (PFN_vkDestroyFence)vk->vkGetInstanceProcAddr(instance, "vkDestroyFence");
	vk->vkResetFences = (PFN_vkResetFences)vk->vkGetInstanceProcAddr(instance, "vkResetFences");
	vk->vkGetFenceStatus = (PFN_vkGetFenceStatus)vk->vkGetInstanceProcAddr(instance, "vkGetFenceStatus");
	vk->vkWaitForFences = (PFN_vkWaitForFences)vk->vkGetInstanceProcAddr(instance, "vkWaitForFences");

	vk->vkCreateSemaphore = (PFN_vkCreateSemaphore)vk->vkGetInstanceProcAddr(instance, "vkCreateSemaphore");
	vk->vkDestroySemaphore = (PFN_vkDestroySemaphore)vk->vkGetInstanceProcAddr(instance, "vkDestroySemaphore");

	vk->vkCreateEvent = (PFN_vkCreateEvent)vk->vkGetInstanceProcAddr(instance, "vkCreateEvent");
	vk->vkDestroyEvent = (PFN_vkDestroyEvent)vk->vkGetInstanceProcAddr(instance, "vkDestroyEvent");
	vk->vkGetEventStatus = (PFN_vkGetEventStatus)vk->vkGetInstanceProcAddr(instance, "vkGetEventStatus");
	vk->vkSetEvent = (PFN_vkSetEvent)vk->vkGetInstanceProcAddr(instance, "vkSetEvent");
	vk->vkResetEvent = (PFN_vkResetEvent)vk->vkGetInstanceProcAddr(instance, "vkResetEvent");

	vk->vkCreateQueryPool = (PFN_vkCreateQueryPool)vk->vkGetInstanceProcAddr(instance, "vkCreateQueryPool");
	vk->vkDestroyQueryPool = (PFN_vkDestroyQueryPool)vk->vkGetInstanceProcAddr(instance, "vkDestroyQueryPool");
	vk->vkGetQueryPoolResults = (PFN_vkGetQueryPoolResults)vk->vkGetInstanceProcAddr(instance, "vkGetQueryPoolResults");

	vk->vkCreateBuffer = (PFN_vkCreateBuffer)vk->vkGetInstanceProcAddr(instance, "vkCreateBuffer");
	vk->vkDestroyBuffer = (PFN_vkDestroyBuffer)vk->vkGetInstanceProcAddr(instance, "vkDestroyBuffer");

	vk->vkCreateBufferView = (PFN_vkCreateBufferView)vk->vkGetInstanceProcAddr(instance, "vkCreateBufferView");
	vk->vkDestroyBufferView = (PFN_vkDestroyBufferView)vk->vkGetInstanceProcAddr(instance, "vkDestroyBufferView");

	vk->vkCreateImage = (PFN_vkCreateImage)vk->vkGetInstanceProcAddr(instance, "vkCreateImage");
	vk->vkDestroyImage = (PFN_vkDestroyImage)vk->vkGetInstanceProcAddr(instance, "vkDestroyImage");
	vk->vkGetImageSubresourceLayout = (PFN_vkGetImageSubresourceLayout)vk->vkGetInstanceProcAddr(instance, "vkGetImageSubresourceLayout");

	vk->vkCreateImageView = (PFN_vkCreateImageView)vk->vkGetInstanceProcAddr(instance, "vkCreateImageView");
	vk->vkDestroyImageView = (PFN_vkDestroyImageView)vk->vkGetInstanceProcAddr(instance, "vkDestroyImageView");

	vk->vkCreateShaderModule = (PFN_vkCreateShaderModule)vk->vkGetInstanceProcAddr(instance, "vkCreateShaderModule");
	vk->vkDestroyShaderModule = (PFN_vkDestroyShaderModule)vk->vkGetInstanceProcAddr(instance, "vkDestroyShaderModule");

	vk->vkCreatePipelineCache = (PFN_vkCreatePipelineCache)vk->vkGetInstanceProcAddr(instance, "vkCreatePipelineCache");
	vk->vkDestroyPipelineCache = (PFN_vkDestroyPipelineCache)vk->vkGetInstanceProcAddr(instance, "vkDestroyPipelineCache");
	vk->vkGetPipelineCacheData = (PFN_vkGetPipelineCacheData)vk->vkGetInstanceProcAddr(instance, "vkGetPipelineCacheData");
	vk->vkMergePipelineCaches = (PFN_vkMergePipelineCaches)vk->vkGetInstanceProcAddr(instance, "vkMergePipelineCaches");

	vk->vkCreateGraphicsPipelines = (PFN_vkCreateGraphicsPipelines)vk->vkGetInstanceProcAddr(instance, "vkCreateGraphicsPipelines");
	vk->vkCreateComputePipelines = (PFN_vkCreateComputePipelines)vk->vkGetInstanceProcAddr(instance, "vkCreateComputePipelines");
	vk->vkDestroyPipeline = (PFN_vkDestroyPipeline)vk->vkGetInstanceProcAddr(instance, "vkDestroyPipeline");

	vk->vkCreatePipelineLayout = (PFN_vkCreatePipelineLayout)vk->vkGetInstanceProcAddr(instance, "vkCreatePipelineLayout");
	vk->vkDestroyPipelineLayout = (PFN_vkDestroyPipelineLayout)vk->vkGetInstanceProcAddr(instance, "vkDestroyPipelineLayout");

	vk->vkCreateSampler = (PFN_vkCreateSampler)vk->vkGetInstanceProcAddr(instance, "vkCreateSampler");
	vk->vkDestroySampler = (PFN_vkDestroySampler)vk->vkGetInstanceProcAddr(instance, "vkDestroySampler");

	vk->vkCreateDescriptorSetLayout = (PFN_vkCreateDescriptorSetLayout)vk->vkGetInstanceProcAddr(instance, "vkCreateDescriptorSetLayout");
	vk->vkDestroyDescriptorSetLayout = (PFN_vkDestroyDescriptorSetLayout)vk->vkGetInstanceProcAddr(instance, "vkDestroyDescriptorSetLayout");
	vk->vkCreateDescriptorPool = (PFN_vkCreateDescriptorPool)vk->vkGetInstanceProcAddr(instance, "vkCreateDescriptorPool");
	vk->vkDestroyDescriptorPool = (PFN_vkDestroyDescriptorPool)vk->vkGetInstanceProcAddr(instance, "vkDestroyDescriptorPool");
	vk->vkResetDescriptorPool = (PFN_vkResetDescriptorPool)vk->vkGetInstanceProcAddr(instance, "vkResetDescriptorPool");
	vk->vkAllocateDescriptorSets = (PFN_vkAllocateDescriptorSets)vk->vkGetInstanceProcAddr(instance, "vkAllocateDescriptorSets");
	vk->vkFreeDescriptorSets = (PFN_vkFreeDescriptorSets)vk->vkGetInstanceProcAddr(instance, "vkFreeDescriptorSets");
	vk->vkUpdateDescriptorSets = (PFN_vkUpdateDescriptorSets)vk->vkGetInstanceProcAddr(instance, "vkUpdateDescriptorSets");

	vk->vkCreateFramebuffer = (PFN_vkCreateFramebuffer)vk->vkGetInstanceProcAddr(instance, "vkCreateFramebuffer");
	vk->vkDestroyFramebuffer = (PFN_vkDestroyFramebuffer)vk->vkGetInstanceProcAddr(instance, "vkDestroyFramebuffer");
	vk->vkCreateRenderPass = (PFN_vkCreateRenderPass)vk->vkGetInstanceProcAddr(instance, "vkCreateRenderPass");
	vk->vkDestroyRenderPass = (PFN_vkDestroyRenderPass)vk->vkGetInstanceProcAddr(instance, "vkDestroyRenderPass");
	vk->vkGetRenderAreaGranularity = (PFN_vkGetRenderAreaGranularity)vk->vkGetInstanceProcAddr(instance, "vkGetRenderAreaGranularity");

	vk->vkCreateCommandPool = (PFN_vkCreateCommandPool)vk->vkGetInstanceProcAddr(instance, "vkCreateCommandPool");
	vk->vkDestroyCommandPool = (PFN_vkDestroyCommandPool)vk->vkGetInstanceProcAddr(instance, "vkDestroyCommandPool");
	vk->vkResetCommandPool = (PFN_vkResetCommandPool)vk->vkGetInstanceProcAddr(instance, "vkResetCommandPool");

	vk->vkAllocateCommandBuffers = (PFN_vkAllocateCommandBuffers)vk->vkGetInstanceProcAddr(instance, "vkAllocateCommandBuffers");
	vk->vkFreeCommandBuffers = (PFN_vkFreeCommandBuffers)vk->vkGetInstanceProcAddr(instance, "vkFreeCommandBuffers");
	vk->vkBeginCommandBuffer = (PFN_vkBeginCommandBuffer)vk->vkGetInstanceProcAddr(instance, "vkBeginCommandBuffer");
	vk->vkEndCommandBuffer = (PFN_vkEndCommandBuffer)vk->vkGetInstanceProcAddr(instance, "vkEndCommandBuffer");
	vk->vkResetCommandBuffer = (PFN_vkResetCommandBuffer)vk->vkGetInstanceProcAddr(instance, "vkResetCommandBuffer");

	vk->vkCmdBindPipeline = (PFN_vkCmdBindPipeline)vk->vkGetInstanceProcAddr(instance, "vkCmdBindPipeline");
	vk->vkCmdSetViewport = (PFN_vkCmdSetViewport)vk->vkGetInstanceProcAddr(instance, "vkCmdSetViewport");
	vk->vkCmdSetScissor = (PFN_vkCmdSetScissor)vk->vkGetInstanceProcAddr(instance, "vkCmdSetScissor");
	vk->vkCmdSetLineWidth = (PFN_vkCmdSetLineWidth)vk->vkGetInstanceProcAddr(instance, "vkCmdSetLineWidth");
	vk->vkCmdSetDepthBias = (PFN_vkCmdSetDepthBias)vk->vkGetInstanceProcAddr(instance, "vkCmdSetDepthBias");
	vk->vkCmdSetBlendConstants = (PFN_vkCmdSetBlendConstants)vk->vkGetInstanceProcAddr(instance, "vkCmdSetBlendConstants");
	vk->vkCmdSetDepthBounds = (PFN_vkCmdSetDepthBounds)vk->vkGetInstanceProcAddr(instance, "vkCmdSetDepthBounds");
	vk->vkCmdSetStencilCompareMask = (PFN_vkCmdSetStencilCompareMask)vk->vkGetInstanceProcAddr(instance, "vkCmdSetStencilCompareMask");
	vk->vkCmdSetStencilWriteMask = (PFN_vkCmdSetStencilWriteMask)vk->vkGetInstanceProcAddr(instance, "vkCmdSetStencilWriteMask");
	vk->vkCmdSetStencilReference = (PFN_vkCmdSetStencilReference)vk->vkGetInstanceProcAddr(instance, "vkCmdSetStencilReference");
	vk->vkCmdBindDescriptorSets = (PFN_vkCmdBindDescriptorSets)vk->vkGetInstanceProcAddr(instance, "vkCmdBindDescriptorSets");
	vk->vkCmdBindIndexBuffer = (PFN_vkCmdBindIndexBuffer)vk->vkGetInstanceProcAddr(instance, "vkCmdBindIndexBuffer");
	vk->vkCmdBindVertexBuffers = (PFN_vkCmdBindVertexBuffers)vk->vkGetInstanceProcAddr(instance, "vkCmdBindVertexBuffers");
	vk->vkCmdDraw = (PFN_vkCmdDraw)vk->vkGetInstanceProcAddr(instance, "vkCmdDraw");
	vk->vkCmdDrawIndexed = (PFN_vkCmdDrawIndexed)vk->vkGetInstanceProcAddr(instance, "vkCmdDrawIndexed");
	vk->vkCmdDrawIndirect = (PFN_vkCmdDrawIndirect)vk->vkGetInstanceProcAddr(instance, "vkCmdDrawIndirect");
	vk->vkCmdDrawIndexedIndirect = (PFN_vkCmdDrawIndexedIndirect)vk->vkGetInstanceProcAddr(instance, "vkCmdDrawIndexedIndirect");
	vk->vkCmdDispatch = (PFN_vkCmdDispatch)vk->vkGetInstanceProcAddr(instance, "vkCmdDispatch");
	vk->vkCmdDispatchIndirect = (PFN_vkCmdDispatchIndirect)vk->vkGetInstanceProcAddr(instance, "vkCmdDispatchIndirect");
	vk->vkCmdCopyBuffer = (PFN_vkCmdCopyBuffer)vk->vkGetInstanceProcAddr(instance, "vkCmdCopyBuffer");
	vk->vkCmdCopyImage = (PFN_vkCmdCopyImage)vk->vkGetInstanceProcAddr(instance, "vkCmdCopyImage");
	vk->vkCmdBlitImage = (PFN_vkCmdBlitImage)vk->vkGetInstanceProcAddr(instance, "vkCmdBlitImage");
	vk->vkCmdCopyBufferToImage = (PFN_vkCmdCopyBufferToImage)vk->vkGetInstanceProcAddr(instance, "vkCmdCopyBufferToImage");
	vk->vkCmdCopyImageToBuffer = (PFN_vkCmdCopyImageToBuffer)vk->vkGetInstanceProcAddr(instance, "vkCmdCopyImageToBuffer");
	vk->vkCmdUpdateBuffer = (PFN_vkCmdUpdateBuffer)vk->vkGetInstanceProcAddr(instance, "vkCmdUpdateBuffer");
	vk->vkCmdFillBuffer = (PFN_vkCmdFillBuffer)vk->vkGetInstanceProcAddr(instance, "vkCmdFillBuffer");
	vk->vkCmdClearColorImage = (PFN_vkCmdClearColorImage)vk->vkGetInstanceProcAddr(instance, "vkCmdClearColorImage");
	vk->vkCmdClearDepthStencilImage = (PFN_vkCmdClearDepthStencilImage)vk->vkGetInstanceProcAddr(instance, "vkCmdClearDepthStencilImage");
	vk->vkCmdClearAttachments = (PFN_vkCmdClearAttachments)vk->vkGetInstanceProcAddr(instance, "vkCmdClearAttachments");
	vk->vkCmdResolveImage = (PFN_vkCmdResolveImage)vk->vkGetInstanceProcAddr(instance, "vkCmdResolveImage");
	vk->vkCmdSetEvent = (PFN_vkCmdSetEvent)vk->vkGetInstanceProcAddr(instance, "vkCmdSetEvent");
	vk->vkCmdResetEvent = (PFN_vkCmdResetEvent)vk->vkGetInstanceProcAddr(instance, "vkCmdResetEvent");
	vk->vkCmdWaitEvents = (PFN_vkCmdWaitEvents)vk->vkGetInstanceProcAddr(instance, "vkCmdWaitEvents");
	vk->vkCmdPipelineBarrier = (PFN_vkCmdPipelineBarrier)vk->vkGetInstanceProcAddr(instance, "vkCmdPipelineBarrier");
	vk->vkCmdBeginQuery = (PFN_vkCmdBeginQuery)vk->vkGetInstanceProcAddr(instance, "vkCmdBeginQuery");
	vk->vkCmdEndQuery = (PFN_vkCmdEndQuery)vk->vkGetInstanceProcAddr(instance, "vkCmdEndQuery");
	vk->vkCmdResetQueryPool = (PFN_vkCmdResetQueryPool)vk->vkGetInstanceProcAddr(instance, "vkCmdResetQueryPool");
	vk->vkCmdWriteTimestamp = (PFN_vkCmdWriteTimestamp)vk->vkGetInstanceProcAddr(instance, "vkCmdWriteTimestamp");
	vk->vkCmdCopyQueryPoolResults = (PFN_vkCmdCopyQueryPoolResults)vk->vkGetInstanceProcAddr(instance, "vkCmdCopyQueryPoolResults");
	vk->vkCmdPushConstants = (PFN_vkCmdPushConstants)vk->vkGetInstanceProcAddr(instance, "vkCmdPushConstants");
	vk->vkCmdBeginRenderPass = (PFN_vkCmdBeginRenderPass)vk->vkGetInstanceProcAddr(instance, "vkCmdBeginRenderPass");
	vk->vkCmdNextSubpass = (PFN_vkCmdNextSubpass)vk->vkGetInstanceProcAddr(instance, "vkCmdNextSubpass");
	vk->vkCmdEndRenderPass = (PFN_vkCmdEndRenderPass)vk->vkGetInstanceProcAddr(instance, "vkCmdEndRenderPass");
	vk->vkCmdExecuteCommands = (PFN_vkCmdExecuteCommands)vk->vkGetInstanceProcAddr(instance, "vkCmdExecuteCommands");

#endif // defined(VK_VERSION_1_0)

#if defined(VK_VERSION_1_1)

	vk->vkEnumerateInstanceVersion = (PFN_vkEnumerateInstanceVersion)vk->vkGetInstanceProcAddr(instance, "vkEnumerateInstanceVersion");

	vk->vkBindBufferMemory2 = (PFN_vkBindBufferMemory2)vk->vkGetInstanceProcAddr(instance, "vkBindBufferMemory2");
	vk->vkBindImageMemory2 = (PFN_vkBindImageMemory2)vk->vkGetInstanceProcAddr(instance, "vkBindImageMemory2");

	vk->vkGetDeviceGroupPeerMemoryFeatures = (PFN_vkGetDeviceGroupPeerMemoryFeatures)vk->vkGetInstanceProcAddr(instance, "vkGetDeviceGroupPeerMemoryFeatures");
	vk->vkCmdSetDeviceMask = (PFN_vkCmdSetDeviceMask)vk->vkGetInstanceProcAddr(instance, "vkCmdSetDeviceMask");
	vk->vkCmdDispatchBase = (PFN_vkCmdDispatchBase)vk->vkGetInstanceProcAddr(instance, "vkCmdDispatchBase");

	vk->vkEnumeratePhysicalDeviceGroups = (PFN_vkEnumeratePhysicalDeviceGroups)vk->vkGetInstanceProcAddr(instance, "vkEnumeratePhysicalDeviceGroups");

	vk->vkGetImageMemoryRequirements2 = (PFN_vkGetImageMemoryRequirements2)vk->vkGetInstanceProcAddr(instance, "vkGetImageMemoryRequirements2");
	vk->vkGetBufferMemoryRequirements2 = (PFN_vkGetBufferMemoryRequirements2)vk->vkGetInstanceProcAddr(instance, "vkGetBufferMemoryRequirements2");
	vk->vkGetImageSparseMemoryRequirements2 = (PFN_vkGetImageSparseMemoryRequirements2)vk->vkGetInstanceProcAddr(instance, "vkGetImageSparseMemoryRequirements2");

	vk->vkGetPhysicalDeviceFeatures2 = (PFN_vkGetPhysicalDeviceFeatures2)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceFeatures2");
	vk->vkGetPhysicalDeviceProperties2 = (PFN_vkGetPhysicalDeviceProperties2)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceProperties2");
	vk->vkGetPhysicalDeviceFormatProperties2 = (PFN_vkGetPhysicalDeviceFormatProperties2)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceFormatProperties2");
	vk->vkGetPhysicalDeviceImageFormatProperties2 = (PFN_vkGetPhysicalDeviceImageFormatProperties2)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceImageFormatProperties2");
	vk->vkGetPhysicalDeviceQueueFamilyProperties2 = (PFN_vkGetPhysicalDeviceQueueFamilyProperties2)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceQueueFamilyProperties2");
	vk->vkGetPhysicalDeviceMemoryProperties2 = (PFN_vkGetPhysicalDeviceMemoryProperties2)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceMemoryProperties2");
	vk->vkGetPhysicalDeviceSparseImageFormatProperties2 = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties2)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSparseImageFormatProperties2");

	vk->vkTrimCommandPool = (PFN_vkTrimCommandPool)vk->vkGetInstanceProcAddr(instance, "vkTrimCommandPool");

	vk->vkGetDeviceQueue2 = (PFN_vkGetDeviceQueue2)vk->vkGetInstanceProcAddr(instance, "vkGetDeviceQueue2");

	vk->vkCreateSamplerYcbcrConversion = (PFN_vkCreateSamplerYcbcrConversion)vk->vkGetInstanceProcAddr(instance, "vkCreateSamplerYcbcrConversion");
	vk->vkDestroySamplerYcbcrConversion = (PFN_vkDestroySamplerYcbcrConversion)vk->vkGetInstanceProcAddr(instance, "vkDestroySamplerYcbcrConversion");

	vk->vkCreateDescriptorUpdateTemplate = (PFN_vkCreateDescriptorUpdateTemplate)vk->vkGetInstanceProcAddr(instance, "vkCreateDescriptorUpdateTemplate");
	vk->vkDestroyDescriptorUpdateTemplate = (PFN_vkDestroyDescriptorUpdateTemplate)vk->vkGetInstanceProcAddr(instance, "vkDestroyDescriptorUpdateTemplate");
	vk->vkUpdateDescriptorSetWithTemplate = (PFN_vkUpdateDescriptorSetWithTemplate)vk->vkGetInstanceProcAddr(instance, "vkUpdateDescriptorSetWithTemplate");

	vk->vkGetPhysicalDeviceExternalBufferProperties = (PFN_vkGetPhysicalDeviceExternalBufferProperties)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceExternalBufferProperties");

	vk->vkGetPhysicalDeviceExternalFenceProperties = (PFN_vkGetPhysicalDeviceExternalFenceProperties)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceExternalFenceProperties");

	vk->vkGetPhysicalDeviceExternalSemaphoreProperties = (PFN_vkGetPhysicalDeviceExternalSemaphoreProperties)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceExternalSemaphoreProperties");

	vk->vkGetDescriptorSetLayoutSupport = (PFN_vkGetDescriptorSetLayoutSupport)vk->vkGetInstanceProcAddr(instance, "vkGetDescriptorSetLayoutSupport");

#endif // defined(VK_VERSION_1_1)

#if defined(VK_VERSION_1_2)

	vk->vkCmdDrawIndirectCount = (PFN_vkCmdDrawIndirectCount)vk->vkGetInstanceProcAddr(instance, "vkCmdDrawIndirectCount");
	vk->vkCmdDrawIndexedIndirectCount = (PFN_vkCmdDrawIndexedIndirectCount)vk->vkGetInstanceProcAddr(instance, "vkCmdDrawIndexedIndirectCount");

	vk->vkCreateRenderPass2 = (PFN_vkCreateRenderPass2)vk->vkGetInstanceProcAddr(instance, "vkCreateRenderPass2");
	vk->vkCmdBeginRenderPass2 = (PFN_vkCmdBeginRenderPass2)vk->vkGetInstanceProcAddr(instance, "vkCmdBeginRenderPass2");
	vk->vkCmdNextSubpass2 = (PFN_vkCmdNextSubpass2)vk->vkGetInstanceProcAddr(instance, "vkCmdNextSubpass2");
	vk->vkCmdEndRenderPass2 = (PFN_vkCmdEndRenderPass2)vk->vkGetInstanceProcAddr(instance, "vkCmdEndRenderPass2");

	vk->vkResetQueryPool = (PFN_vkResetQueryPool)vk->vkGetInstanceProcAddr(instance, "vkResetQueryPool");

	vk->vkGetSemaphoreCounterValue = (PFN_vkGetSemaphoreCounterValue)vk->vkGetInstanceProcAddr(instance, "vkGetSemaphoreCounterValue");
	vk->vkWaitSemaphores = (PFN_vkWaitSemaphores)vk->vkGetInstanceProcAddr(instance, "vkWaitSemaphores");
	vk->vkSignalSemaphore = (PFN_vkSignalSemaphore)vk->vkGetInstanceProcAddr(instance, "vkSignalSemaphore");

	vk->vkGetBufferDeviceAddress = (PFN_vkGetBufferDeviceAddress)vk->vkGetInstanceProcAddr(instance, "vkGetBufferDeviceAddress");
	vk->vkGetBufferOpaqueCaptureAddress = (PFN_vkGetBufferOpaqueCaptureAddress)vk->vkGetInstanceProcAddr(instance, "vkGetBufferOpaqueCaptureAddress");
	vk->vkGetDeviceMemoryOpaqueCaptureAddress = (PFN_vkGetDeviceMemoryOpaqueCaptureAddress)vk->vkGetInstanceProcAddr(instance, "vkGetDeviceMemoryOpaqueCaptureAddress");

#endif // defined(VK_VERSION_1_2)

#if defined(VK_VERSION_1_3)

	vk->vkGetPhysicalDeviceToolProperties = (PFN_vkGetPhysicalDeviceToolProperties)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceToolProperties");

	vk->vkCreatePrivateDataSlot = (PFN_vkCreatePrivateDataSlot)vk->vkGetInstanceProcAddr(instance, "vkCreatePrivateDataSlot");
	vk->vkDestroyPrivateDataSlot = (PFN_vkDestroyPrivateDataSlot)vk->vkGetInstanceProcAddr(instance, "vkDestroyPrivateDataSlot");
	vk->vkSetPrivateData = (PFN_vkSetPrivateData)vk->vkGetInstanceProcAddr(instance, "vkSetPrivateData");
	vk->vkGetPrivateData = (PFN_vkGetPrivateData)vk->vkGetInstanceProcAddr(instance, "vkGetPrivateData");

	vk->vkCmdSetEvent2 = (PFN_vkCmdSetEvent2)vk->vkGetInstanceProcAddr(instance, "vkCmdSetEvent2");
	vk->vkCmdResetEvent2 = (PFN_vkCmdResetEvent2)vk->vkGetInstanceProcAddr(instance, "vkCmdResetEvent2");
	vk->vkCmdWaitEvents2 = (PFN_vkCmdWaitEvents2)vk->vkGetInstanceProcAddr(instance, "vkCmdWaitEvents2");
	vk->vkCmdPipelineBarrier2 = (PFN_vkCmdPipelineBarrier2)vk->vkGetInstanceProcAddr(instance, "vkCmdPipelineBarrier2");
	vk->vkCmdWriteTimestamp2 = (PFN_vkCmdWriteTimestamp2)vk->vkGetInstanceProcAddr(instance, "vkCmdWriteTimestamp2");
	vk->vkQueueSubmit2 = (PFN_vkQueueSubmit2)vk->vkGetInstanceProcAddr(instance, "vkQueueSubmit2");

	vk->vkCmdCopyBuffer2 = (PFN_vkCmdCopyBuffer2)vk->vkGetInstanceProcAddr(instance, "vkCmdCopyBuffer2");
	vk->vkCmdCopyImage2 = (PFN_vkCmdCopyImage2)vk->vkGetInstanceProcAddr(instance, "vkCmdCopyImage2");
	vk->vkCmdCopyBufferToImage2 = (PFN_vkCmdCopyBufferToImage2)vk->vkGetInstanceProcAddr(instance, "vkCmdCopyBufferToImage2");
	vk->vkCmdCopyImageToBuffer2 = (PFN_vkCmdCopyImageToBuffer2)vk->vkGetInstanceProcAddr(instance, "vkCmdCopyImageToBuffer2");
	vk->vkCmdBlitImage2 = (PFN_vkCmdBlitImage2)vk->vkGetInstanceProcAddr(instance, "vkCmdBlitImage2");
	vk->vkCmdResolveImage2 = (PFN_vkCmdResolveImage2)vk->vkGetInstanceProcAddr(instance, "vkCmdResolveImage2");

	vk->vkCmdBeginRendering = (PFN_vkCmdBeginRendering)vk->vkGetInstanceProcAddr(instance, "vkCmdBeginRendering");
	vk->vkCmdEndRendering = (PFN_vkCmdEndRendering)vk->vkGetInstanceProcAddr(instance, "vkCmdEndRendering");

	vk->vkCmdSetCullMode = (PFN_vkCmdSetCullMode)vk->vkGetInstanceProcAddr(instance, "vkCmdSetCullMode");
	vk->vkCmdSetFrontFace = (PFN_vkCmdSetFrontFace)vk->vkGetInstanceProcAddr(instance, "vkCmdSetFrontFace");
	vk->vkCmdSetPrimitiveTopology = (PFN_vkCmdSetPrimitiveTopology)vk->vkGetInstanceProcAddr(instance, "vkCmdSetPrimitiveTopology");
	vk->vkCmdSetViewportWithCount = (PFN_vkCmdSetViewportWithCount)vk->vkGetInstanceProcAddr(instance, "vkCmdSetViewportWithCount");
	vk->vkCmdSetScissorWithCount = (PFN_vkCmdSetScissorWithCount)vk->vkGetInstanceProcAddr(instance, "vkCmdSetScissorWithCount");
	vk->vkCmdBindVertexBuffers2 = (PFN_vkCmdBindVertexBuffers2)vk->vkGetInstanceProcAddr(instance, "vkCmdBindVertexBuffers2");
	vk->vkCmdSetDepthTestEnable = (PFN_vkCmdSetDepthTestEnable)vk->vkGetInstanceProcAddr(instance, "vkCmdSetDepthTestEnable");
	vk->vkCmdSetDepthWriteEnable = (PFN_vkCmdSetDepthWriteEnable)vk->vkGetInstanceProcAddr(instance, "vkCmdSetDepthWriteEnable");
	vk->vkCmdSetDepthCompareOp = (PFN_vkCmdSetDepthCompareOp)vk->vkGetInstanceProcAddr(instance, "vkCmdSetDepthCompareOp");
	vk->vkCmdSetDepthBoundsTestEnable = (PFN_vkCmdSetDepthBoundsTestEnable)vk->vkGetInstanceProcAddr(instance, "vkCmdSetDepthBoundsTestEnable");
	vk->vkCmdSetStencilTestEnable = (PFN_vkCmdSetStencilTestEnable)vk->vkGetInstanceProcAddr(instance, "vkCmdSetStencilTestEnable");
	vk->vkCmdSetStencilOp = (PFN_vkCmdSetStencilOp)vk->vkGetInstanceProcAddr(instance, "vkCmdSetStencilOp");

	vk->vkCmdSetRasterizerDiscardEnable = (PFN_vkCmdSetRasterizerDiscardEnable)vk->vkGetInstanceProcAddr(instance, "vkCmdSetRasterizerDiscardEnable");
	vk->vkCmdSetDepthBiasEnable = (PFN_vkCmdSetDepthBiasEnable)vk->vkGetInstanceProcAddr(instance, "vkCmdSetDepthBiasEnable");
	vk->vkCmdSetPrimitiveRestartEnable = (PFN_vkCmdSetPrimitiveRestartEnable)vk->vkGetInstanceProcAddr(instance, "vkCmdSetPrimitiveRestartEnable");

	vk->vkGetDeviceBufferMemoryRequirements = (PFN_vkGetDeviceBufferMemoryRequirements)vk->vkGetInstanceProcAddr(instance, "vkGetDeviceBufferMemoryRequirements");
	vk->vkGetDeviceImageMemoryRequirements = (PFN_vkGetDeviceImageMemoryRequirements)vk->vkGetInstanceProcAddr(instance, "vkGetDeviceImageMemoryRequirements");
	vk->vkGetDeviceImageSparseMemoryRequirements = (PFN_vkGetDeviceImageSparseMemoryRequirements)vk->vkGetInstanceProcAddr(instance, "vkGetDeviceImageSparseMemoryRequirements");

#endif // defined(VK_VERSION_1_3)

#if defined(VK_VERSION_1_4)

	vk->vkCmdSetLineStipple = (PFN_vkCmdSetLineStipple)vk->vkGetInstanceProcAddr(instance, "vkCmdSetLineStipple");

	vk->vkMapMemory2 = (PFN_vkMapMemory2)vk->vkGetInstanceProcAddr(instance, "vkMapMemory2");
	vk->vkUnmapMemory2 = (PFN_vkUnmapMemory2)vk->vkGetInstanceProcAddr(instance, "vkUnmapMemory2");

	vk->vkCmdBindIndexBuffer2 = (PFN_vkCmdBindIndexBuffer2)vk->vkGetInstanceProcAddr(instance, "vkCmdBindIndexBuffer2");
	vk->vkGetRenderingAreaGranularity = (PFN_vkGetRenderingAreaGranularity)vk->vkGetInstanceProcAddr(instance, "vkGetRenderingAreaGranularity");
	vk->vkGetDeviceImageSubresourceLayout = (PFN_vkGetDeviceImageSubresourceLayout)vk->vkGetInstanceProcAddr(instance, "vkGetDeviceImageSubresourceLayout");
	vk->vkGetImageSubresourceLayout2 = (PFN_vkGetImageSubresourceLayout2)vk->vkGetInstanceProcAddr(instance, "vkGetImageSubresourceLayout2");

	vk->vkCmdPushDescriptorSet = (PFN_vkCmdPushDescriptorSet)vk->vkGetInstanceProcAddr(instance, "vkCmdPushDescriptorSet");
	vk->vkCmdPushDescriptorSetWithTemplate = (PFN_vkCmdPushDescriptorSetWithTemplate)vk->vkGetInstanceProcAddr(instance, "vkCmdPushDescriptorSetWithTemplate");

	vk->vkCmdSetRenderingAttachmentLocations = (PFN_vkCmdSetRenderingAttachmentLocations)vk->vkGetInstanceProcAddr(instance, "vkCmdSetRenderingAttachmentLocations");
	vk->vkCmdSetRenderingInputAttachmentIndices = (PFN_vkCmdSetRenderingInputAttachmentIndices)vk->vkGetInstanceProcAddr(instance, "vkCmdSetRenderingInputAttachmentIndices");

	vk->vkCmdBindDescriptorSets2 = (PFN_vkCmdBindDescriptorSets2)vk->vkGetInstanceProcAddr(instance, "vkCmdBindDescriptorSets2");
	vk->vkCmdPushConstants2 = (PFN_vkCmdPushConstants2)vk->vkGetInstanceProcAddr(instance, "vkCmdPushConstants2");
	vk->vkCmdPushDescriptorSet2 = (PFN_vkCmdPushDescriptorSet2)vk->vkGetInstanceProcAddr(instance, "vkCmdPushDescriptorSet2");
	vk->vkCmdPushDescriptorSetWithTemplate2 = (PFN_vkCmdPushDescriptorSetWithTemplate2)vk->vkGetInstanceProcAddr(instance, "vkCmdPushDescriptorSetWithTemplate2");

	vk->vkCopyMemoryToImage = (PFN_vkCopyMemoryToImage)vk->vkGetInstanceProcAddr(instance, "vkCopyMemoryToImage");
	vk->vkCopyImageToMemory = (PFN_vkCopyImageToMemory)vk->vkGetInstanceProcAddr(instance, "vkCopyImageToMemory");
	vk->vkCopyImageToImage = (PFN_vkCopyImageToImage)vk->vkGetInstanceProcAddr(instance, "vkCopyImageToImage");
	vk->vkTransitionImageLayout = (PFN_vkTransitionImageLayout)vk->vkGetInstanceProcAddr(instance, "vkTransitionImageLayout");

#endif // defined(VK_VERSION_1_4)

#if defined(VKSC_VERSION_1_0)

	vk->vkGetCommandPoolMemoryConsumption = (PFN_vkGetCommandPoolMemoryConsumption)vk->vkGetInstanceProcAddr(instance, "vkGetCommandPoolMemoryConsumption");

	vk->vkGetFaultData = (PFN_vkGetFaultData)vk->vkGetInstanceProcAddr(instance, "vkGetFaultData");

#endif // defined(VKSC_VERSION_1_0)
#if defined(VK_AMDX_shader_enqueue)
	vk->vkGetExecutionGraphPipelineScratchSizeAMDX = (PFN_vkGetExecutionGraphPipelineScratchSizeAMDX)vk->vkGetInstanceProcAddr(instance, "vkGetExecutionGraphPipelineScratchSizeAMDX");
	vk->vkCreateExecutionGraphPipelinesAMDX = (PFN_vkCreateExecutionGraphPipelinesAMDX)vk->vkGetInstanceProcAddr(instance, "vkCreateExecutionGraphPipelinesAMDX");
	vk->vkGetExecutionGraphPipelineNodeIndexAMDX = (PFN_vkGetExecutionGraphPipelineNodeIndexAMDX)vk->vkGetInstanceProcAddr(instance, "vkGetExecutionGraphPipelineNodeIndexAMDX");
	vk->vkCmdInitializeGraphScratchMemoryAMDX = (PFN_vkCmdInitializeGraphScratchMemoryAMDX)vk->vkGetInstanceProcAddr(instance, "vkCmdInitializeGraphScratchMemoryAMDX");
	vk->vkCmdDispatchGraphAMDX = (PFN_vkCmdDispatchGraphAMDX)vk->vkGetInstanceProcAddr(instance, "vkCmdDispatchGraphAMDX");
	vk->vkCmdDispatchGraphIndirectAMDX = (PFN_vkCmdDispatchGraphIndirectAMDX)vk->vkGetInstanceProcAddr(instance, "vkCmdDispatchGraphIndirectAMDX");
	vk->vkCmdDispatchGraphIndirectCountAMDX = (PFN_vkCmdDispatchGraphIndirectCountAMDX)vk->vkGetInstanceProcAddr(instance, "vkCmdDispatchGraphIndirectCountAMDX");
#endif // defined(VK_AMDX_shader_enqueue)
#if defined(VK_AMD_anti_lag)
	vk->vkAntiLagUpdateAMD = (PFN_vkAntiLagUpdateAMD)vk->vkGetInstanceProcAddr(instance, "vkAntiLagUpdateAMD");
#endif // defined(VK_AMD_anti_lag)
#if defined(VK_AMD_buffer_marker)
	vk->vkCmdWriteBufferMarkerAMD = (PFN_vkCmdWriteBufferMarkerAMD)vk->vkGetInstanceProcAddr(instance, "vkCmdWriteBufferMarkerAMD");
	vk->vkCmdWriteBufferMarker2AMD = (PFN_vkCmdWriteBufferMarker2AMD)vk->vkGetInstanceProcAddr(instance, "vkCmdWriteBufferMarker2AMD");
#endif // defined(VK_AMD_buffer_marker)
#if defined(VK_AMD_display_native_hdr)
	vk->vkSetLocalDimmingAMD = (PFN_vkSetLocalDimmingAMD)vk->vkGetInstanceProcAddr(instance, "vkSetLocalDimmingAMD");
#endif // defined(VK_AMD_display_native_hdr)
#if defined(VK_AMD_draw_indirect_count)
	vk->vkCmdDrawIndirectCountAMD = (PFN_vkCmdDrawIndirectCountAMD)vk->vkGetInstanceProcAddr(instance, "vkCmdDrawIndirectCountAMD");
	vk->vkCmdDrawIndexedIndirectCountAMD = (PFN_vkCmdDrawIndexedIndirectCountAMD)vk->vkGetInstanceProcAddr(instance, "vkCmdDrawIndexedIndirectCountAMD");
#endif // defined(VK_AMD_draw_indirect_count)
#if defined(VK_AMD_shader_info)
	vk->vkGetShaderInfoAMD = (PFN_vkGetShaderInfoAMD)vk->vkGetInstanceProcAddr(instance, "vkGetShaderInfoAMD");
#endif // defined(VK_AMD_shader_info)
#if defined(VK_ANDROID_external_memory_android_hardware_buffer)
	vk->vkGetAndroidHardwareBufferPropertiesANDROID = (PFN_vkGetAndroidHardwareBufferPropertiesANDROID)vk->vkGetInstanceProcAddr(instance, "vkGetAndroidHardwareBufferPropertiesANDROID");
	vk->vkGetMemoryAndroidHardwareBufferANDROID = (PFN_vkGetMemoryAndroidHardwareBufferANDROID)vk->vkGetInstanceProcAddr(instance, "vkGetMemoryAndroidHardwareBufferANDROID");
#endif // defined(VK_ANDROID_external_memory_android_hardware_buffer)
#if defined(VK_ARM_data_graph)
	vk->vkCreateDataGraphPipelinesARM = (PFN_vkCreateDataGraphPipelinesARM)vk->vkGetInstanceProcAddr(instance, "vkCreateDataGraphPipelinesARM");
	vk->vkGetDataGraphPipelinePropertiesARM = (PFN_vkGetDataGraphPipelinePropertiesARM)vk->vkGetInstanceProcAddr(instance, "vkGetDataGraphPipelinePropertiesARM");
	vk->vkGetDataGraphPipelineSessionBindPointRequirementsARM = (PFN_vkGetDataGraphPipelineSessionBindPointRequirementsARM)vk->vkGetInstanceProcAddr(instance, "vkGetDataGraphPipelineSessionBindPointRequirementsARM");
	vk->vkGetPhysicalDeviceQueueFamilyDataGraphProcessingEnginePropertiesARM = (PFN_vkGetPhysicalDeviceQueueFamilyDataGraphProcessingEnginePropertiesARM)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceQueueFamilyDataGraphProcessingEnginePropertiesARM");
	vk->vkCreateDataGraphPipelineSessionARM = (PFN_vkCreateDataGraphPipelineSessionARM)vk->vkGetInstanceProcAddr(instance, "vkCreateDataGraphPipelineSessionARM");
	vk->vkGetDataGraphPipelineSessionMemoryRequirementsARM = (PFN_vkGetDataGraphPipelineSessionMemoryRequirementsARM)vk->vkGetInstanceProcAddr(instance, "vkGetDataGraphPipelineSessionMemoryRequirementsARM");
	vk->vkBindDataGraphPipelineSessionMemoryARM = (PFN_vkBindDataGraphPipelineSessionMemoryARM)vk->vkGetInstanceProcAddr(instance, "vkBindDataGraphPipelineSessionMemoryARM");
	vk->vkDestroyDataGraphPipelineSessionARM = (PFN_vkDestroyDataGraphPipelineSessionARM)vk->vkGetInstanceProcAddr(instance, "vkDestroyDataGraphPipelineSessionARM");
	vk->vkCmdDispatchDataGraphARM = (PFN_vkCmdDispatchDataGraphARM)vk->vkGetInstanceProcAddr(instance, "vkCmdDispatchDataGraphARM");
	vk->vkGetDataGraphPipelineAvailablePropertiesARM = (PFN_vkGetDataGraphPipelineAvailablePropertiesARM)vk->vkGetInstanceProcAddr(instance, "vkGetDataGraphPipelineAvailablePropertiesARM");
	vk->vkGetPhysicalDeviceQueueFamilyDataGraphPropertiesARM = (PFN_vkGetPhysicalDeviceQueueFamilyDataGraphPropertiesARM)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceQueueFamilyDataGraphPropertiesARM");
#endif // defined(VK_ARM_data_graph)
#if defined(VK_ARM_tensors)
	vk->vkCreateTensorARM = (PFN_vkCreateTensorARM)vk->vkGetInstanceProcAddr(instance, "vkCreateTensorARM");
	vk->vkGetTensorViewOpaqueCaptureDescriptorDataARM = (PFN_vkGetTensorViewOpaqueCaptureDescriptorDataARM)vk->vkGetInstanceProcAddr(instance, "vkGetTensorViewOpaqueCaptureDescriptorDataARM");
	vk->vkDestroyTensorARM = (PFN_vkDestroyTensorARM)vk->vkGetInstanceProcAddr(instance, "vkDestroyTensorARM");
	vk->vkBindTensorMemoryARM = (PFN_vkBindTensorMemoryARM)vk->vkGetInstanceProcAddr(instance, "vkBindTensorMemoryARM");
	vk->vkGetTensorMemoryRequirementsARM = (PFN_vkGetTensorMemoryRequirementsARM)vk->vkGetInstanceProcAddr(instance, "vkGetTensorMemoryRequirementsARM");
	vk->vkGetPhysicalDeviceExternalTensorPropertiesARM = (PFN_vkGetPhysicalDeviceExternalTensorPropertiesARM)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceExternalTensorPropertiesARM");
	vk->vkGetDeviceTensorMemoryRequirementsARM = (PFN_vkGetDeviceTensorMemoryRequirementsARM)vk->vkGetInstanceProcAddr(instance, "vkGetDeviceTensorMemoryRequirementsARM");
	vk->vkCreateTensorViewARM = (PFN_vkCreateTensorViewARM)vk->vkGetInstanceProcAddr(instance, "vkCreateTensorViewARM");
	vk->vkDestroyTensorViewARM = (PFN_vkDestroyTensorViewARM)vk->vkGetInstanceProcAddr(instance, "vkDestroyTensorViewARM");
	vk->vkCmdCopyTensorARM = (PFN_vkCmdCopyTensorARM)vk->vkGetInstanceProcAddr(instance, "vkCmdCopyTensorARM");
	vk->vkGetTensorOpaqueCaptureDescriptorDataARM = (PFN_vkGetTensorOpaqueCaptureDescriptorDataARM)vk->vkGetInstanceProcAddr(instance, "vkGetTensorOpaqueCaptureDescriptorDataARM");
#endif // defined(VK_ARM_tensors)
#if defined(VK_EXT_acquire_drm_display)
	vk->vkAcquireDrmDisplayEXT = (PFN_vkAcquireDrmDisplayEXT)vk->vkGetInstanceProcAddr(instance, "vkAcquireDrmDisplayEXT");
	vk->vkGetDrmDisplayEXT = (PFN_vkGetDrmDisplayEXT)vk->vkGetInstanceProcAddr(instance, "vkGetDrmDisplayEXT");
#endif // defined(VK_EXT_acquire_drm_display)
#if defined(VK_EXT_acquire_xlib_display)
	vk->vkAcquireXlibDisplayEXT = (PFN_vkAcquireXlibDisplayEXT)vk->vkGetInstanceProcAddr(instance, "vkAcquireXlibDisplayEXT");
	vk->vkGetRandROutputDisplayEXT = (PFN_vkGetRandROutputDisplayEXT)vk->vkGetInstanceProcAddr(instance, "vkGetRandROutputDisplayEXT");
#endif // defined(VK_EXT_acquire_xlib_display)
#if defined(VK_EXT_attachment_feedback_loop_dynamic_state)
	vk->vkCmdSetAttachmentFeedbackLoopEnableEXT = (PFN_vkCmdSetAttachmentFeedbackLoopEnableEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetAttachmentFeedbackLoopEnableEXT");
#endif // defined(VK_EXT_attachment_feedback_loop_dynamic_state)
#if defined(VK_EXT_buffer_device_address)
	vk->vkGetBufferDeviceAddressEXT = (PFN_vkGetBufferDeviceAddressEXT)vk->vkGetInstanceProcAddr(instance, "vkGetBufferDeviceAddressEXT");
#endif // defined(VK_EXT_buffer_device_address)
#if defined(VK_EXT_calibrated_timestamps)
	vk->vkGetPhysicalDeviceCalibrateableTimeDomainsEXT = (PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceCalibrateableTimeDomainsEXT");
	vk->vkGetCalibratedTimestampsEXT = (PFN_vkGetCalibratedTimestampsEXT)vk->vkGetInstanceProcAddr(instance, "vkGetCalibratedTimestampsEXT");
#endif // defined(VK_EXT_calibrated_timestamps)
#if defined(VK_EXT_color_write_enable)
	vk->vkCmdSetColorWriteEnableEXT = (PFN_vkCmdSetColorWriteEnableEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetColorWriteEnableEXT");
#endif // defined(VK_EXT_color_write_enable)
#if defined(VK_EXT_conditional_rendering)
	vk->vkCmdBeginConditionalRenderingEXT = (PFN_vkCmdBeginConditionalRenderingEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdBeginConditionalRenderingEXT");
	vk->vkCmdEndConditionalRenderingEXT = (PFN_vkCmdEndConditionalRenderingEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdEndConditionalRenderingEXT");
#endif // defined(VK_EXT_conditional_rendering)
#if defined(VK_EXT_debug_marker)
	vk->vkCmdDebugMarkerEndEXT = (PFN_vkCmdDebugMarkerEndEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdDebugMarkerEndEXT");
	vk->vkCmdDebugMarkerBeginEXT = (PFN_vkCmdDebugMarkerBeginEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdDebugMarkerBeginEXT");
	vk->vkDebugMarkerSetObjectTagEXT = (PFN_vkDebugMarkerSetObjectTagEXT)vk->vkGetInstanceProcAddr(instance, "vkDebugMarkerSetObjectTagEXT");
	vk->vkDebugMarkerSetObjectNameEXT = (PFN_vkDebugMarkerSetObjectNameEXT)vk->vkGetInstanceProcAddr(instance, "vkDebugMarkerSetObjectNameEXT");
	vk->vkCmdDebugMarkerInsertEXT = (PFN_vkCmdDebugMarkerInsertEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdDebugMarkerInsertEXT");
#endif // defined(VK_EXT_debug_marker)
#if defined(VK_EXT_debug_report)
	vk->vkDestroyDebugReportCallbackEXT = (PFN_vkDestroyDebugReportCallbackEXT)vk->vkGetInstanceProcAddr(instance, "vkDestroyDebugReportCallbackEXT");
	vk->vkDebugReportMessageEXT = (PFN_vkDebugReportMessageEXT)vk->vkGetInstanceProcAddr(instance, "vkDebugReportMessageEXT");
	vk->vkCreateDebugReportCallbackEXT = (PFN_vkCreateDebugReportCallbackEXT)vk->vkGetInstanceProcAddr(instance, "vkCreateDebugReportCallbackEXT");
#endif // defined(VK_EXT_debug_report)
#if defined(VK_EXT_debug_utils)
	vk->vkCmdInsertDebugUtilsLabelEXT = (PFN_vkCmdInsertDebugUtilsLabelEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdInsertDebugUtilsLabelEXT");
	vk->vkCmdEndDebugUtilsLabelEXT = (PFN_vkCmdEndDebugUtilsLabelEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdEndDebugUtilsLabelEXT");
	vk->vkSubmitDebugUtilsMessageEXT = (PFN_vkSubmitDebugUtilsMessageEXT)vk->vkGetInstanceProcAddr(instance, "vkSubmitDebugUtilsMessageEXT");
	vk->vkSetDebugUtilsObjectTagEXT = (PFN_vkSetDebugUtilsObjectTagEXT)vk->vkGetInstanceProcAddr(instance, "vkSetDebugUtilsObjectTagEXT");
	vk->vkSetDebugUtilsObjectNameEXT = (PFN_vkSetDebugUtilsObjectNameEXT)vk->vkGetInstanceProcAddr(instance, "vkSetDebugUtilsObjectNameEXT");
	vk->vkQueueInsertDebugUtilsLabelEXT = (PFN_vkQueueInsertDebugUtilsLabelEXT)vk->vkGetInstanceProcAddr(instance, "vkQueueInsertDebugUtilsLabelEXT");
	vk->vkQueueBeginDebugUtilsLabelEXT = (PFN_vkQueueBeginDebugUtilsLabelEXT)vk->vkGetInstanceProcAddr(instance, "vkQueueBeginDebugUtilsLabelEXT");
	vk->vkQueueEndDebugUtilsLabelEXT = (PFN_vkQueueEndDebugUtilsLabelEXT)vk->vkGetInstanceProcAddr(instance, "vkQueueEndDebugUtilsLabelEXT");
	vk->vkCmdBeginDebugUtilsLabelEXT = (PFN_vkCmdBeginDebugUtilsLabelEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdBeginDebugUtilsLabelEXT");
	vk->vkCreateDebugUtilsMessengerEXT = (PFN_vkCreateDebugUtilsMessengerEXT)vk->vkGetInstanceProcAddr(instance, "vkCreateDebugUtilsMessengerEXT");
	vk->vkDestroyDebugUtilsMessengerEXT = (PFN_vkDestroyDebugUtilsMessengerEXT)vk->vkGetInstanceProcAddr(instance, "vkDestroyDebugUtilsMessengerEXT");
#endif // defined(VK_EXT_debug_utils)
#if defined(VK_EXT_depth_bias_control)
	vk->vkCmdSetDepthBias2EXT = (PFN_vkCmdSetDepthBias2EXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetDepthBias2EXT");
#endif // defined(VK_EXT_depth_bias_control)
#if defined(VK_EXT_depth_clamp_control) || defined(VK_EXT_shader_object)
	vk->vkCmdSetDepthClampRangeEXT = (PFN_vkCmdSetDepthClampRangeEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetDepthClampRangeEXT");
#endif // defined(VK_EXT_depth_clamp_control) || defined(VK_EXT_shader_object)
#if defined(VK_EXT_descriptor_buffer)
	vk->vkGetImageOpaqueCaptureDescriptorDataEXT = (PFN_vkGetImageOpaqueCaptureDescriptorDataEXT)vk->vkGetInstanceProcAddr(instance, "vkGetImageOpaqueCaptureDescriptorDataEXT");
	vk->vkCmdBindDescriptorBuffersEXT = (PFN_vkCmdBindDescriptorBuffersEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdBindDescriptorBuffersEXT");
	vk->vkCmdSetDescriptorBufferOffsetsEXT = (PFN_vkCmdSetDescriptorBufferOffsetsEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetDescriptorBufferOffsetsEXT");
	vk->vkGetSamplerOpaqueCaptureDescriptorDataEXT = (PFN_vkGetSamplerOpaqueCaptureDescriptorDataEXT)vk->vkGetInstanceProcAddr(instance, "vkGetSamplerOpaqueCaptureDescriptorDataEXT");
	vk->vkGetDescriptorSetLayoutSizeEXT = (PFN_vkGetDescriptorSetLayoutSizeEXT)vk->vkGetInstanceProcAddr(instance, "vkGetDescriptorSetLayoutSizeEXT");
	vk->vkGetDescriptorSetLayoutBindingOffsetEXT = (PFN_vkGetDescriptorSetLayoutBindingOffsetEXT)vk->vkGetInstanceProcAddr(instance, "vkGetDescriptorSetLayoutBindingOffsetEXT");
	vk->vkGetDescriptorEXT = (PFN_vkGetDescriptorEXT)vk->vkGetInstanceProcAddr(instance, "vkGetDescriptorEXT");
	vk->vkCmdBindDescriptorBufferEmbeddedSamplersEXT = (PFN_vkCmdBindDescriptorBufferEmbeddedSamplersEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdBindDescriptorBufferEmbeddedSamplersEXT");
	vk->vkGetBufferOpaqueCaptureDescriptorDataEXT = (PFN_vkGetBufferOpaqueCaptureDescriptorDataEXT)vk->vkGetInstanceProcAddr(instance, "vkGetBufferOpaqueCaptureDescriptorDataEXT");
	vk->vkGetImageViewOpaqueCaptureDescriptorDataEXT = (PFN_vkGetImageViewOpaqueCaptureDescriptorDataEXT)vk->vkGetInstanceProcAddr(instance, "vkGetImageViewOpaqueCaptureDescriptorDataEXT");
	vk->vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT = (PFN_vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT)vk->vkGetInstanceProcAddr(instance, "vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT");
#endif // defined(VK_EXT_descriptor_buffer)
#if defined(VK_EXT_device_fault)
	vk->vkGetDeviceFaultInfoEXT = (PFN_vkGetDeviceFaultInfoEXT)vk->vkGetInstanceProcAddr(instance, "vkGetDeviceFaultInfoEXT");
#endif // defined(VK_EXT_device_fault)
#if defined(VK_EXT_device_generated_commands)
	vk->vkCreateIndirectCommandsLayoutEXT = (PFN_vkCreateIndirectCommandsLayoutEXT)vk->vkGetInstanceProcAddr(instance, "vkCreateIndirectCommandsLayoutEXT");
	vk->vkDestroyIndirectCommandsLayoutEXT = (PFN_vkDestroyIndirectCommandsLayoutEXT)vk->vkGetInstanceProcAddr(instance, "vkDestroyIndirectCommandsLayoutEXT");
	vk->vkUpdateIndirectExecutionSetShaderEXT = (PFN_vkUpdateIndirectExecutionSetShaderEXT)vk->vkGetInstanceProcAddr(instance, "vkUpdateIndirectExecutionSetShaderEXT");
	vk->vkCmdPreprocessGeneratedCommandsEXT = (PFN_vkCmdPreprocessGeneratedCommandsEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdPreprocessGeneratedCommandsEXT");
	vk->vkUpdateIndirectExecutionSetPipelineEXT = (PFN_vkUpdateIndirectExecutionSetPipelineEXT)vk->vkGetInstanceProcAddr(instance, "vkUpdateIndirectExecutionSetPipelineEXT");
	vk->vkGetGeneratedCommandsMemoryRequirementsEXT = (PFN_vkGetGeneratedCommandsMemoryRequirementsEXT)vk->vkGetInstanceProcAddr(instance, "vkGetGeneratedCommandsMemoryRequirementsEXT");
	vk->vkCmdExecuteGeneratedCommandsEXT = (PFN_vkCmdExecuteGeneratedCommandsEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdExecuteGeneratedCommandsEXT");
	vk->vkCreateIndirectExecutionSetEXT = (PFN_vkCreateIndirectExecutionSetEXT)vk->vkGetInstanceProcAddr(instance, "vkCreateIndirectExecutionSetEXT");
	vk->vkDestroyIndirectExecutionSetEXT = (PFN_vkDestroyIndirectExecutionSetEXT)vk->vkGetInstanceProcAddr(instance, "vkDestroyIndirectExecutionSetEXT");
#endif // defined(VK_EXT_device_generated_commands)
#if defined(VK_EXT_direct_mode_display)
	vk->vkReleaseDisplayEXT = (PFN_vkReleaseDisplayEXT)vk->vkGetInstanceProcAddr(instance, "vkReleaseDisplayEXT");
#endif // defined(VK_EXT_direct_mode_display)
#if defined(VK_EXT_directfb_surface)
	vk->vkGetPhysicalDeviceDirectFBPresentationSupportEXT = (PFN_vkGetPhysicalDeviceDirectFBPresentationSupportEXT)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceDirectFBPresentationSupportEXT");
	vk->vkCreateDirectFBSurfaceEXT = (PFN_vkCreateDirectFBSurfaceEXT)vk->vkGetInstanceProcAddr(instance, "vkCreateDirectFBSurfaceEXT");
#endif // defined(VK_EXT_directfb_surface)
#if defined(VK_EXT_discard_rectangles)
	vk->vkCmdSetDiscardRectangleEXT = (PFN_vkCmdSetDiscardRectangleEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetDiscardRectangleEXT");
	vk->vkCmdSetDiscardRectangleEnableEXT = (PFN_vkCmdSetDiscardRectangleEnableEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetDiscardRectangleEnableEXT");
	vk->vkCmdSetDiscardRectangleModeEXT = (PFN_vkCmdSetDiscardRectangleModeEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetDiscardRectangleModeEXT");
#endif // defined(VK_EXT_discard_rectangles)
#if defined(VK_EXT_display_control)
	vk->vkDisplayPowerControlEXT = (PFN_vkDisplayPowerControlEXT)vk->vkGetInstanceProcAddr(instance, "vkDisplayPowerControlEXT");
	vk->vkGetSwapchainCounterEXT = (PFN_vkGetSwapchainCounterEXT)vk->vkGetInstanceProcAddr(instance, "vkGetSwapchainCounterEXT");
	vk->vkRegisterDeviceEventEXT = (PFN_vkRegisterDeviceEventEXT)vk->vkGetInstanceProcAddr(instance, "vkRegisterDeviceEventEXT");
	vk->vkRegisterDisplayEventEXT = (PFN_vkRegisterDisplayEventEXT)vk->vkGetInstanceProcAddr(instance, "vkRegisterDisplayEventEXT");
#endif // defined(VK_EXT_display_control)
#if defined(VK_EXT_display_surface_counter)
	vk->vkGetPhysicalDeviceSurfaceCapabilities2EXT = (PFN_vkGetPhysicalDeviceSurfaceCapabilities2EXT)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSurfaceCapabilities2EXT");
#endif // defined(VK_EXT_display_surface_counter)
#if defined(VK_EXT_extended_dynamic_state) || defined(VK_EXT_shader_object)
	vk->vkCmdBindVertexBuffers2EXT = (PFN_vkCmdBindVertexBuffers2EXT)vk->vkGetInstanceProcAddr(instance, "vkCmdBindVertexBuffers2EXT");
	vk->vkCmdSetCullModeEXT = (PFN_vkCmdSetCullModeEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetCullModeEXT");
	vk->vkCmdSetDepthTestEnableEXT = (PFN_vkCmdSetDepthTestEnableEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetDepthTestEnableEXT");
	vk->vkCmdSetFrontFaceEXT = (PFN_vkCmdSetFrontFaceEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetFrontFaceEXT");
	vk->vkCmdSetPrimitiveTopologyEXT = (PFN_vkCmdSetPrimitiveTopologyEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetPrimitiveTopologyEXT");
	vk->vkCmdSetViewportWithCountEXT = (PFN_vkCmdSetViewportWithCountEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetViewportWithCountEXT");
	vk->vkCmdSetScissorWithCountEXT = (PFN_vkCmdSetScissorWithCountEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetScissorWithCountEXT");
	vk->vkCmdSetDepthWriteEnableEXT = (PFN_vkCmdSetDepthWriteEnableEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetDepthWriteEnableEXT");
	vk->vkCmdSetDepthCompareOpEXT = (PFN_vkCmdSetDepthCompareOpEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetDepthCompareOpEXT");
	vk->vkCmdSetDepthBoundsTestEnableEXT = (PFN_vkCmdSetDepthBoundsTestEnableEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetDepthBoundsTestEnableEXT");
	vk->vkCmdSetStencilTestEnableEXT = (PFN_vkCmdSetStencilTestEnableEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetStencilTestEnableEXT");
	vk->vkCmdSetStencilOpEXT = (PFN_vkCmdSetStencilOpEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetStencilOpEXT");
#endif // defined(VK_EXT_extended_dynamic_state) || defined(VK_EXT_shader_object)
#if defined(VK_EXT_extended_dynamic_state2) || defined(VK_EXT_shader_object)
	vk->vkCmdSetDepthBiasEnableEXT = (PFN_vkCmdSetDepthBiasEnableEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetDepthBiasEnableEXT");
	vk->vkCmdSetPrimitiveRestartEnableEXT = (PFN_vkCmdSetPrimitiveRestartEnableEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetPrimitiveRestartEnableEXT");
	vk->vkCmdSetLogicOpEXT = (PFN_vkCmdSetLogicOpEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetLogicOpEXT");
	vk->vkCmdSetPatchControlPointsEXT = (PFN_vkCmdSetPatchControlPointsEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetPatchControlPointsEXT");
	vk->vkCmdSetRasterizerDiscardEnableEXT = (PFN_vkCmdSetRasterizerDiscardEnableEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetRasterizerDiscardEnableEXT");
#endif // defined(VK_EXT_extended_dynamic_state2) || defined(VK_EXT_shader_object)
#if defined(VK_EXT_extended_dynamic_state3) || defined(VK_EXT_shader_object)
	vk->vkCmdSetLineStippleEnableEXT = (PFN_vkCmdSetLineStippleEnableEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetLineStippleEnableEXT");
	vk->vkCmdSetRasterizationSamplesEXT = (PFN_vkCmdSetRasterizationSamplesEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetRasterizationSamplesEXT");
	vk->vkCmdSetRepresentativeFragmentTestEnableNV = (PFN_vkCmdSetRepresentativeFragmentTestEnableNV)vk->vkGetInstanceProcAddr(instance, "vkCmdSetRepresentativeFragmentTestEnableNV");
	vk->vkCmdSetPolygonModeEXT = (PFN_vkCmdSetPolygonModeEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetPolygonModeEXT");
	vk->vkCmdSetDepthClipNegativeOneToOneEXT = (PFN_vkCmdSetDepthClipNegativeOneToOneEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetDepthClipNegativeOneToOneEXT");
	vk->vkCmdSetCoverageModulationTableEnableNV = (PFN_vkCmdSetCoverageModulationTableEnableNV)vk->vkGetInstanceProcAddr(instance, "vkCmdSetCoverageModulationTableEnableNV");
	vk->vkCmdSetProvokingVertexModeEXT = (PFN_vkCmdSetProvokingVertexModeEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetProvokingVertexModeEXT");
	vk->vkCmdSetDepthClipEnableEXT = (PFN_vkCmdSetDepthClipEnableEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetDepthClipEnableEXT");
	vk->vkCmdSetShadingRateImageEnableNV = (PFN_vkCmdSetShadingRateImageEnableNV)vk->vkGetInstanceProcAddr(instance, "vkCmdSetShadingRateImageEnableNV");
	vk->vkCmdSetCoverageToColorLocationNV = (PFN_vkCmdSetCoverageToColorLocationNV)vk->vkGetInstanceProcAddr(instance, "vkCmdSetCoverageToColorLocationNV");
	vk->vkCmdSetSampleLocationsEnableEXT = (PFN_vkCmdSetSampleLocationsEnableEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetSampleLocationsEnableEXT");
	vk->vkCmdSetLineRasterizationModeEXT = (PFN_vkCmdSetLineRasterizationModeEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetLineRasterizationModeEXT");
	vk->vkCmdSetConservativeRasterizationModeEXT = (PFN_vkCmdSetConservativeRasterizationModeEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetConservativeRasterizationModeEXT");
	vk->vkCmdSetDepthClampEnableEXT = (PFN_vkCmdSetDepthClampEnableEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetDepthClampEnableEXT");
	vk->vkCmdSetColorWriteMaskEXT = (PFN_vkCmdSetColorWriteMaskEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetColorWriteMaskEXT");
	vk->vkCmdSetColorBlendAdvancedEXT = (PFN_vkCmdSetColorBlendAdvancedEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetColorBlendAdvancedEXT");
	vk->vkCmdSetLogicOpEnableEXT = (PFN_vkCmdSetLogicOpEnableEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetLogicOpEnableEXT");
	vk->vkCmdSetAlphaToOneEnableEXT = (PFN_vkCmdSetAlphaToOneEnableEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetAlphaToOneEnableEXT");
	vk->vkCmdSetViewportWScalingEnableNV = (PFN_vkCmdSetViewportWScalingEnableNV)vk->vkGetInstanceProcAddr(instance, "vkCmdSetViewportWScalingEnableNV");
	vk->vkCmdSetRasterizationStreamEXT = (PFN_vkCmdSetRasterizationStreamEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetRasterizationStreamEXT");
	vk->vkCmdSetColorBlendEquationEXT = (PFN_vkCmdSetColorBlendEquationEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetColorBlendEquationEXT");
	vk->vkCmdSetSampleMaskEXT = (PFN_vkCmdSetSampleMaskEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetSampleMaskEXT");
	vk->vkCmdSetAlphaToCoverageEnableEXT = (PFN_vkCmdSetAlphaToCoverageEnableEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetAlphaToCoverageEnableEXT");
	vk->vkCmdSetColorBlendEnableEXT = (PFN_vkCmdSetColorBlendEnableEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetColorBlendEnableEXT");
	vk->vkCmdSetTessellationDomainOriginEXT = (PFN_vkCmdSetTessellationDomainOriginEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetTessellationDomainOriginEXT");
	vk->vkCmdSetExtraPrimitiveOverestimationSizeEXT = (PFN_vkCmdSetExtraPrimitiveOverestimationSizeEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetExtraPrimitiveOverestimationSizeEXT");
	vk->vkCmdSetViewportSwizzleNV = (PFN_vkCmdSetViewportSwizzleNV)vk->vkGetInstanceProcAddr(instance, "vkCmdSetViewportSwizzleNV");
	vk->vkCmdSetCoverageToColorEnableNV = (PFN_vkCmdSetCoverageToColorEnableNV)vk->vkGetInstanceProcAddr(instance, "vkCmdSetCoverageToColorEnableNV");
	vk->vkCmdSetCoverageModulationModeNV = (PFN_vkCmdSetCoverageModulationModeNV)vk->vkGetInstanceProcAddr(instance, "vkCmdSetCoverageModulationModeNV");
	vk->vkCmdSetCoverageModulationTableNV = (PFN_vkCmdSetCoverageModulationTableNV)vk->vkGetInstanceProcAddr(instance, "vkCmdSetCoverageModulationTableNV");
	vk->vkCmdSetCoverageReductionModeNV = (PFN_vkCmdSetCoverageReductionModeNV)vk->vkGetInstanceProcAddr(instance, "vkCmdSetCoverageReductionModeNV");
#endif // defined(VK_EXT_extended_dynamic_state3) || defined(VK_EXT_shader_object)
#if defined(VK_EXT_external_memory_host)
	vk->vkGetMemoryHostPointerPropertiesEXT = (PFN_vkGetMemoryHostPointerPropertiesEXT)vk->vkGetInstanceProcAddr(instance, "vkGetMemoryHostPointerPropertiesEXT");
#endif // defined(VK_EXT_external_memory_host)
#if defined(VK_EXT_external_memory_metal)
	vk->vkGetMemoryMetalHandleEXT = (PFN_vkGetMemoryMetalHandleEXT)vk->vkGetInstanceProcAddr(instance, "vkGetMemoryMetalHandleEXT");
	vk->vkGetMemoryMetalHandlePropertiesEXT = (PFN_vkGetMemoryMetalHandlePropertiesEXT)vk->vkGetInstanceProcAddr(instance, "vkGetMemoryMetalHandlePropertiesEXT");
#endif // defined(VK_EXT_external_memory_metal)
#if defined(VK_EXT_fragment_density_map_offset)
	vk->vkCmdEndRendering2EXT = (PFN_vkCmdEndRendering2EXT)vk->vkGetInstanceProcAddr(instance, "vkCmdEndRendering2EXT");
#endif // defined(VK_EXT_fragment_density_map_offset)
#if defined(VK_EXT_full_screen_exclusive)
	vk->vkGetDeviceGroupSurfacePresentModes2EXT = (PFN_vkGetDeviceGroupSurfacePresentModes2EXT)vk->vkGetInstanceProcAddr(instance, "vkGetDeviceGroupSurfacePresentModes2EXT");
	vk->vkGetPhysicalDeviceSurfacePresentModes2EXT = (PFN_vkGetPhysicalDeviceSurfacePresentModes2EXT)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSurfacePresentModes2EXT");
	vk->vkAcquireFullScreenExclusiveModeEXT = (PFN_vkAcquireFullScreenExclusiveModeEXT)vk->vkGetInstanceProcAddr(instance, "vkAcquireFullScreenExclusiveModeEXT");
	vk->vkReleaseFullScreenExclusiveModeEXT = (PFN_vkReleaseFullScreenExclusiveModeEXT)vk->vkGetInstanceProcAddr(instance, "vkReleaseFullScreenExclusiveModeEXT");
#endif // defined(VK_EXT_full_screen_exclusive)
#if defined(VK_EXT_hdr_metadata)
	vk->vkSetHdrMetadataEXT = (PFN_vkSetHdrMetadataEXT)vk->vkGetInstanceProcAddr(instance, "vkSetHdrMetadataEXT");
#endif // defined(VK_EXT_hdr_metadata)
#if defined(VK_EXT_headless_surface)
	vk->vkCreateHeadlessSurfaceEXT = (PFN_vkCreateHeadlessSurfaceEXT)vk->vkGetInstanceProcAddr(instance, "vkCreateHeadlessSurfaceEXT");
#endif // defined(VK_EXT_headless_surface)
#if defined(VK_EXT_host_image_copy)
	vk->vkCopyImageToImageEXT = (PFN_vkCopyImageToImageEXT)vk->vkGetInstanceProcAddr(instance, "vkCopyImageToImageEXT");
	vk->vkCopyMemoryToImageEXT = (PFN_vkCopyMemoryToImageEXT)vk->vkGetInstanceProcAddr(instance, "vkCopyMemoryToImageEXT");
	vk->vkCopyImageToMemoryEXT = (PFN_vkCopyImageToMemoryEXT)vk->vkGetInstanceProcAddr(instance, "vkCopyImageToMemoryEXT");
	vk->vkTransitionImageLayoutEXT = (PFN_vkTransitionImageLayoutEXT)vk->vkGetInstanceProcAddr(instance, "vkTransitionImageLayoutEXT");
#endif // defined(VK_EXT_host_image_copy)
#if defined(VK_EXT_host_image_copy) || defined(VK_EXT_image_compression_control)
	vk->vkGetImageSubresourceLayout2EXT = (PFN_vkGetImageSubresourceLayout2EXT)vk->vkGetInstanceProcAddr(instance, "vkGetImageSubresourceLayout2EXT");
#endif // defined(VK_EXT_host_image_copy) || defined(VK_EXT_image_compression_control)
#if defined(VK_EXT_host_query_reset)
	vk->vkResetQueryPoolEXT = (PFN_vkResetQueryPoolEXT)vk->vkGetInstanceProcAddr(instance, "vkResetQueryPoolEXT");
#endif // defined(VK_EXT_host_query_reset)
#if defined(VK_EXT_image_drm_format_modifier)
	vk->vkGetImageDrmFormatModifierPropertiesEXT = (PFN_vkGetImageDrmFormatModifierPropertiesEXT)vk->vkGetInstanceProcAddr(instance, "vkGetImageDrmFormatModifierPropertiesEXT");
#endif // defined(VK_EXT_image_drm_format_modifier)
#if defined(VK_EXT_line_rasterization)
	vk->vkCmdSetLineStippleEXT = (PFN_vkCmdSetLineStippleEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetLineStippleEXT");
#endif // defined(VK_EXT_line_rasterization)
#if defined(VK_EXT_mesh_shader)
	vk->vkCmdDrawMeshTasksEXT = (PFN_vkCmdDrawMeshTasksEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdDrawMeshTasksEXT");
	vk->vkCmdDrawMeshTasksIndirectEXT = (PFN_vkCmdDrawMeshTasksIndirectEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdDrawMeshTasksIndirectEXT");
	vk->vkCmdDrawMeshTasksIndirectCountEXT = (PFN_vkCmdDrawMeshTasksIndirectCountEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdDrawMeshTasksIndirectCountEXT");
#endif // defined(VK_EXT_mesh_shader)
#if defined(VK_EXT_metal_objects)
	vk->vkExportMetalObjectsEXT = (PFN_vkExportMetalObjectsEXT)vk->vkGetInstanceProcAddr(instance, "vkExportMetalObjectsEXT");
#endif // defined(VK_EXT_metal_objects)
#if defined(VK_EXT_metal_surface)
	vk->vkCreateMetalSurfaceEXT = (PFN_vkCreateMetalSurfaceEXT)vk->vkGetInstanceProcAddr(instance, "vkCreateMetalSurfaceEXT");
#endif // defined(VK_EXT_metal_surface)
#if defined(VK_EXT_multi_draw)
	vk->vkCmdDrawMultiEXT = (PFN_vkCmdDrawMultiEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdDrawMultiEXT");
	vk->vkCmdDrawMultiIndexedEXT = (PFN_vkCmdDrawMultiIndexedEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdDrawMultiIndexedEXT");
#endif // defined(VK_EXT_multi_draw)
#if defined(VK_EXT_opacity_micromap)
	vk->vkGetDeviceMicromapCompatibilityEXT = (PFN_vkGetDeviceMicromapCompatibilityEXT)vk->vkGetInstanceProcAddr(instance, "vkGetDeviceMicromapCompatibilityEXT");
	vk->vkGetMicromapBuildSizesEXT = (PFN_vkGetMicromapBuildSizesEXT)vk->vkGetInstanceProcAddr(instance, "vkGetMicromapBuildSizesEXT");
	vk->vkCopyMicromapEXT = (PFN_vkCopyMicromapEXT)vk->vkGetInstanceProcAddr(instance, "vkCopyMicromapEXT");
	vk->vkCopyMemoryToMicromapEXT = (PFN_vkCopyMemoryToMicromapEXT)vk->vkGetInstanceProcAddr(instance, "vkCopyMemoryToMicromapEXT");
	vk->vkCmdWriteMicromapsPropertiesEXT = (PFN_vkCmdWriteMicromapsPropertiesEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdWriteMicromapsPropertiesEXT");
	vk->vkCreateMicromapEXT = (PFN_vkCreateMicromapEXT)vk->vkGetInstanceProcAddr(instance, "vkCreateMicromapEXT");
	vk->vkDestroyMicromapEXT = (PFN_vkDestroyMicromapEXT)vk->vkGetInstanceProcAddr(instance, "vkDestroyMicromapEXT");
	vk->vkBuildMicromapsEXT = (PFN_vkBuildMicromapsEXT)vk->vkGetInstanceProcAddr(instance, "vkBuildMicromapsEXT");
	vk->vkCmdBuildMicromapsEXT = (PFN_vkCmdBuildMicromapsEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdBuildMicromapsEXT");
	vk->vkCopyMicromapToMemoryEXT = (PFN_vkCopyMicromapToMemoryEXT)vk->vkGetInstanceProcAddr(instance, "vkCopyMicromapToMemoryEXT");
	vk->vkWriteMicromapsPropertiesEXT = (PFN_vkWriteMicromapsPropertiesEXT)vk->vkGetInstanceProcAddr(instance, "vkWriteMicromapsPropertiesEXT");
	vk->vkCmdCopyMicromapEXT = (PFN_vkCmdCopyMicromapEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdCopyMicromapEXT");
	vk->vkCmdCopyMicromapToMemoryEXT = (PFN_vkCmdCopyMicromapToMemoryEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdCopyMicromapToMemoryEXT");
	vk->vkCmdCopyMemoryToMicromapEXT = (PFN_vkCmdCopyMemoryToMicromapEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdCopyMemoryToMicromapEXT");
#endif // defined(VK_EXT_opacity_micromap)
#if defined(VK_EXT_pageable_device_local_memory)
	vk->vkSetDeviceMemoryPriorityEXT = (PFN_vkSetDeviceMemoryPriorityEXT)vk->vkGetInstanceProcAddr(instance, "vkSetDeviceMemoryPriorityEXT");
#endif // defined(VK_EXT_pageable_device_local_memory)
#if defined(VK_EXT_pipeline_properties)
	vk->vkGetPipelinePropertiesEXT = (PFN_vkGetPipelinePropertiesEXT)vk->vkGetInstanceProcAddr(instance, "vkGetPipelinePropertiesEXT");
#endif // defined(VK_EXT_pipeline_properties)
#if defined(VK_EXT_private_data)
	vk->vkDestroyPrivateDataSlotEXT = (PFN_vkDestroyPrivateDataSlotEXT)vk->vkGetInstanceProcAddr(instance, "vkDestroyPrivateDataSlotEXT");
	vk->vkSetPrivateDataEXT = (PFN_vkSetPrivateDataEXT)vk->vkGetInstanceProcAddr(instance, "vkSetPrivateDataEXT");
	vk->vkCreatePrivateDataSlotEXT = (PFN_vkCreatePrivateDataSlotEXT)vk->vkGetInstanceProcAddr(instance, "vkCreatePrivateDataSlotEXT");
	vk->vkGetPrivateDataEXT = (PFN_vkGetPrivateDataEXT)vk->vkGetInstanceProcAddr(instance, "vkGetPrivateDataEXT");
#endif // defined(VK_EXT_private_data)
#if defined(VK_EXT_sample_locations)
	vk->vkCmdSetSampleLocationsEXT = (PFN_vkCmdSetSampleLocationsEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetSampleLocationsEXT");
	vk->vkGetPhysicalDeviceMultisamplePropertiesEXT = (PFN_vkGetPhysicalDeviceMultisamplePropertiesEXT)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceMultisamplePropertiesEXT");
#endif // defined(VK_EXT_sample_locations)
#if defined(VK_EXT_shader_module_identifier)
	vk->vkGetShaderModuleCreateInfoIdentifierEXT = (PFN_vkGetShaderModuleCreateInfoIdentifierEXT)vk->vkGetInstanceProcAddr(instance, "vkGetShaderModuleCreateInfoIdentifierEXT");
	vk->vkGetShaderModuleIdentifierEXT = (PFN_vkGetShaderModuleIdentifierEXT)vk->vkGetInstanceProcAddr(instance, "vkGetShaderModuleIdentifierEXT");
#endif // defined(VK_EXT_shader_module_identifier)
#if defined(VK_EXT_shader_object)
	vk->vkDestroyShaderEXT = (PFN_vkDestroyShaderEXT)vk->vkGetInstanceProcAddr(instance, "vkDestroyShaderEXT");
	vk->vkGetShaderBinaryDataEXT = (PFN_vkGetShaderBinaryDataEXT)vk->vkGetInstanceProcAddr(instance, "vkGetShaderBinaryDataEXT");
	vk->vkCmdBindShadersEXT = (PFN_vkCmdBindShadersEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdBindShadersEXT");
	vk->vkCreateShadersEXT = (PFN_vkCreateShadersEXT)vk->vkGetInstanceProcAddr(instance, "vkCreateShadersEXT");
#endif // defined(VK_EXT_shader_object)
#if defined(VK_EXT_shader_object) || defined(VK_EXT_vertex_input_dynamic_state)
	vk->vkCmdSetVertexInputEXT = (PFN_vkCmdSetVertexInputEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetVertexInputEXT");
#endif // defined(VK_EXT_shader_object) || defined(VK_EXT_vertex_input_dynamic_state)
#if defined(VK_EXT_swapchain_maintenance1)
	vk->vkReleaseSwapchainImagesEXT = (PFN_vkReleaseSwapchainImagesEXT)vk->vkGetInstanceProcAddr(instance, "vkReleaseSwapchainImagesEXT");
#endif // defined(VK_EXT_swapchain_maintenance1)
#if defined(VK_EXT_tooling_info)
	vk->vkGetPhysicalDeviceToolPropertiesEXT = (PFN_vkGetPhysicalDeviceToolPropertiesEXT)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceToolPropertiesEXT");
#endif // defined(VK_EXT_tooling_info)
#if defined(VK_EXT_transform_feedback)
	vk->vkCmdEndQueryIndexedEXT = (PFN_vkCmdEndQueryIndexedEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdEndQueryIndexedEXT");
	vk->vkCmdEndTransformFeedbackEXT = (PFN_vkCmdEndTransformFeedbackEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdEndTransformFeedbackEXT");
	vk->vkCmdDrawIndirectByteCountEXT = (PFN_vkCmdDrawIndirectByteCountEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdDrawIndirectByteCountEXT");
	vk->vkCmdBindTransformFeedbackBuffersEXT = (PFN_vkCmdBindTransformFeedbackBuffersEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdBindTransformFeedbackBuffersEXT");
	vk->vkCmdBeginTransformFeedbackEXT = (PFN_vkCmdBeginTransformFeedbackEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdBeginTransformFeedbackEXT");
	vk->vkCmdBeginQueryIndexedEXT = (PFN_vkCmdBeginQueryIndexedEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdBeginQueryIndexedEXT");
#endif // defined(VK_EXT_transform_feedback)
#if defined(VK_EXT_validation_cache)
	vk->vkGetValidationCacheDataEXT = (PFN_vkGetValidationCacheDataEXT)vk->vkGetInstanceProcAddr(instance, "vkGetValidationCacheDataEXT");
	vk->vkMergeValidationCachesEXT = (PFN_vkMergeValidationCachesEXT)vk->vkGetInstanceProcAddr(instance, "vkMergeValidationCachesEXT");
	vk->vkCreateValidationCacheEXT = (PFN_vkCreateValidationCacheEXT)vk->vkGetInstanceProcAddr(instance, "vkCreateValidationCacheEXT");
	vk->vkDestroyValidationCacheEXT = (PFN_vkDestroyValidationCacheEXT)vk->vkGetInstanceProcAddr(instance, "vkDestroyValidationCacheEXT");
#endif // defined(VK_EXT_validation_cache)
#if defined(VK_FUCHSIA_buffer_collection)
	vk->vkSetBufferCollectionImageConstraintsFUCHSIA = (PFN_vkSetBufferCollectionImageConstraintsFUCHSIA)vk->vkGetInstanceProcAddr(instance, "vkSetBufferCollectionImageConstraintsFUCHSIA");
	vk->vkDestroyBufferCollectionFUCHSIA = (PFN_vkDestroyBufferCollectionFUCHSIA)vk->vkGetInstanceProcAddr(instance, "vkDestroyBufferCollectionFUCHSIA");
	vk->vkCreateBufferCollectionFUCHSIA = (PFN_vkCreateBufferCollectionFUCHSIA)vk->vkGetInstanceProcAddr(instance, "vkCreateBufferCollectionFUCHSIA");
	vk->vkSetBufferCollectionBufferConstraintsFUCHSIA = (PFN_vkSetBufferCollectionBufferConstraintsFUCHSIA)vk->vkGetInstanceProcAddr(instance, "vkSetBufferCollectionBufferConstraintsFUCHSIA");
	vk->vkGetBufferCollectionPropertiesFUCHSIA = (PFN_vkGetBufferCollectionPropertiesFUCHSIA)vk->vkGetInstanceProcAddr(instance, "vkGetBufferCollectionPropertiesFUCHSIA");
#endif // defined(VK_FUCHSIA_buffer_collection)
#if defined(VK_FUCHSIA_external_memory)
	vk->vkGetMemoryZirconHandleFUCHSIA = (PFN_vkGetMemoryZirconHandleFUCHSIA)vk->vkGetInstanceProcAddr(instance, "vkGetMemoryZirconHandleFUCHSIA");
	vk->vkGetMemoryZirconHandlePropertiesFUCHSIA = (PFN_vkGetMemoryZirconHandlePropertiesFUCHSIA)vk->vkGetInstanceProcAddr(instance, "vkGetMemoryZirconHandlePropertiesFUCHSIA");
#endif // defined(VK_FUCHSIA_external_memory)
#if defined(VK_FUCHSIA_external_semaphore)
	vk->vkImportSemaphoreZirconHandleFUCHSIA = (PFN_vkImportSemaphoreZirconHandleFUCHSIA)vk->vkGetInstanceProcAddr(instance, "vkImportSemaphoreZirconHandleFUCHSIA");
	vk->vkGetSemaphoreZirconHandleFUCHSIA = (PFN_vkGetSemaphoreZirconHandleFUCHSIA)vk->vkGetInstanceProcAddr(instance, "vkGetSemaphoreZirconHandleFUCHSIA");
#endif // defined(VK_FUCHSIA_external_semaphore)
#if defined(VK_FUCHSIA_imagepipe_surface)
	vk->vkCreateImagePipeSurfaceFUCHSIA = (PFN_vkCreateImagePipeSurfaceFUCHSIA)vk->vkGetInstanceProcAddr(instance, "vkCreateImagePipeSurfaceFUCHSIA");
#endif // defined(VK_FUCHSIA_imagepipe_surface)
#if defined(VK_GGP_stream_descriptor_surface)
	vk->vkCreateStreamDescriptorSurfaceGGP = (PFN_vkCreateStreamDescriptorSurfaceGGP)vk->vkGetInstanceProcAddr(instance, "vkCreateStreamDescriptorSurfaceGGP");
#endif // defined(VK_GGP_stream_descriptor_surface)
#if defined(VK_GOOGLE_display_timing)
	vk->vkGetRefreshCycleDurationGOOGLE = (PFN_vkGetRefreshCycleDurationGOOGLE)vk->vkGetInstanceProcAddr(instance, "vkGetRefreshCycleDurationGOOGLE");
	vk->vkGetPastPresentationTimingGOOGLE = (PFN_vkGetPastPresentationTimingGOOGLE)vk->vkGetInstanceProcAddr(instance, "vkGetPastPresentationTimingGOOGLE");
#endif // defined(VK_GOOGLE_display_timing)
#if defined(VK_HUAWEI_cluster_culling_shader)
	vk->vkCmdDrawClusterHUAWEI = (PFN_vkCmdDrawClusterHUAWEI)vk->vkGetInstanceProcAddr(instance, "vkCmdDrawClusterHUAWEI");
	vk->vkCmdDrawClusterIndirectHUAWEI = (PFN_vkCmdDrawClusterIndirectHUAWEI)vk->vkGetInstanceProcAddr(instance, "vkCmdDrawClusterIndirectHUAWEI");
#endif // defined(VK_HUAWEI_cluster_culling_shader)
#if defined(VK_HUAWEI_invocation_mask)
	vk->vkCmdBindInvocationMaskHUAWEI = (PFN_vkCmdBindInvocationMaskHUAWEI)vk->vkGetInstanceProcAddr(instance, "vkCmdBindInvocationMaskHUAWEI");
#endif // defined(VK_HUAWEI_invocation_mask)
#if defined(VK_HUAWEI_subpass_shading)
	vk->vkCmdSubpassShadingHUAWEI = (PFN_vkCmdSubpassShadingHUAWEI)vk->vkGetInstanceProcAddr(instance, "vkCmdSubpassShadingHUAWEI");
	vk->vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI = (PFN_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI)vk->vkGetInstanceProcAddr(instance, "vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI");
#endif // defined(VK_HUAWEI_subpass_shading)
#if defined(VK_INTEL_performance_query)
	vk->vkCmdSetPerformanceStreamMarkerINTEL = (PFN_vkCmdSetPerformanceStreamMarkerINTEL)vk->vkGetInstanceProcAddr(instance, "vkCmdSetPerformanceStreamMarkerINTEL");
	vk->vkAcquirePerformanceConfigurationINTEL = (PFN_vkAcquirePerformanceConfigurationINTEL)vk->vkGetInstanceProcAddr(instance, "vkAcquirePerformanceConfigurationINTEL");
	vk->vkInitializePerformanceApiINTEL = (PFN_vkInitializePerformanceApiINTEL)vk->vkGetInstanceProcAddr(instance, "vkInitializePerformanceApiINTEL");
	vk->vkUninitializePerformanceApiINTEL = (PFN_vkUninitializePerformanceApiINTEL)vk->vkGetInstanceProcAddr(instance, "vkUninitializePerformanceApiINTEL");
	vk->vkCmdSetPerformanceMarkerINTEL = (PFN_vkCmdSetPerformanceMarkerINTEL)vk->vkGetInstanceProcAddr(instance, "vkCmdSetPerformanceMarkerINTEL");
	vk->vkCmdSetPerformanceOverrideINTEL = (PFN_vkCmdSetPerformanceOverrideINTEL)vk->vkGetInstanceProcAddr(instance, "vkCmdSetPerformanceOverrideINTEL");
	vk->vkReleasePerformanceConfigurationINTEL = (PFN_vkReleasePerformanceConfigurationINTEL)vk->vkGetInstanceProcAddr(instance, "vkReleasePerformanceConfigurationINTEL");
	vk->vkQueueSetPerformanceConfigurationINTEL = (PFN_vkQueueSetPerformanceConfigurationINTEL)vk->vkGetInstanceProcAddr(instance, "vkQueueSetPerformanceConfigurationINTEL");
	vk->vkGetPerformanceParameterINTEL = (PFN_vkGetPerformanceParameterINTEL)vk->vkGetInstanceProcAddr(instance, "vkGetPerformanceParameterINTEL");
#endif // defined(VK_INTEL_performance_query)
#if defined(VK_KHR_acceleration_structure)
	vk->vkGetAccelerationStructureBuildSizesKHR = (PFN_vkGetAccelerationStructureBuildSizesKHR)vk->vkGetInstanceProcAddr(instance, "vkGetAccelerationStructureBuildSizesKHR");
	vk->vkCmdBuildAccelerationStructuresIndirectKHR = (PFN_vkCmdBuildAccelerationStructuresIndirectKHR)vk->vkGetInstanceProcAddr(instance, "vkCmdBuildAccelerationStructuresIndirectKHR");
	vk->vkCopyAccelerationStructureToMemoryKHR = (PFN_vkCopyAccelerationStructureToMemoryKHR)vk->vkGetInstanceProcAddr(instance, "vkCopyAccelerationStructureToMemoryKHR");
	vk->vkCreateAccelerationStructureKHR = (PFN_vkCreateAccelerationStructureKHR)vk->vkGetInstanceProcAddr(instance, "vkCreateAccelerationStructureKHR");
	vk->vkDestroyAccelerationStructureKHR = (PFN_vkDestroyAccelerationStructureKHR)vk->vkGetInstanceProcAddr(instance, "vkDestroyAccelerationStructureKHR");
	vk->vkCmdBuildAccelerationStructuresKHR = (PFN_vkCmdBuildAccelerationStructuresKHR)vk->vkGetInstanceProcAddr(instance, "vkCmdBuildAccelerationStructuresKHR");
	vk->vkBuildAccelerationStructuresKHR = (PFN_vkBuildAccelerationStructuresKHR)vk->vkGetInstanceProcAddr(instance, "vkBuildAccelerationStructuresKHR");
	vk->vkCopyAccelerationStructureKHR = (PFN_vkCopyAccelerationStructureKHR)vk->vkGetInstanceProcAddr(instance, "vkCopyAccelerationStructureKHR");
	vk->vkCopyMemoryToAccelerationStructureKHR = (PFN_vkCopyMemoryToAccelerationStructureKHR)vk->vkGetInstanceProcAddr(instance, "vkCopyMemoryToAccelerationStructureKHR");
	vk->vkWriteAccelerationStructuresPropertiesKHR = (PFN_vkWriteAccelerationStructuresPropertiesKHR)vk->vkGetInstanceProcAddr(instance, "vkWriteAccelerationStructuresPropertiesKHR");
	vk->vkCmdCopyAccelerationStructureKHR = (PFN_vkCmdCopyAccelerationStructureKHR)vk->vkGetInstanceProcAddr(instance, "vkCmdCopyAccelerationStructureKHR");
	vk->vkCmdCopyAccelerationStructureToMemoryKHR = (PFN_vkCmdCopyAccelerationStructureToMemoryKHR)vk->vkGetInstanceProcAddr(instance, "vkCmdCopyAccelerationStructureToMemoryKHR");
	vk->vkCmdCopyMemoryToAccelerationStructureKHR = (PFN_vkCmdCopyMemoryToAccelerationStructureKHR)vk->vkGetInstanceProcAddr(instance, "vkCmdCopyMemoryToAccelerationStructureKHR");
	vk->vkGetAccelerationStructureDeviceAddressKHR = (PFN_vkGetAccelerationStructureDeviceAddressKHR)vk->vkGetInstanceProcAddr(instance, "vkGetAccelerationStructureDeviceAddressKHR");
	vk->vkCmdWriteAccelerationStructuresPropertiesKHR = (PFN_vkCmdWriteAccelerationStructuresPropertiesKHR)vk->vkGetInstanceProcAddr(instance, "vkCmdWriteAccelerationStructuresPropertiesKHR");
	vk->vkGetDeviceAccelerationStructureCompatibilityKHR = (PFN_vkGetDeviceAccelerationStructureCompatibilityKHR)vk->vkGetInstanceProcAddr(instance, "vkGetDeviceAccelerationStructureCompatibilityKHR");
#endif // defined(VK_KHR_acceleration_structure)
#if defined(VK_KHR_android_surface)
	vk->vkCreateAndroidSurfaceKHR = (PFN_vkCreateAndroidSurfaceKHR)vk->vkGetInstanceProcAddr(instance, "vkCreateAndroidSurfaceKHR");
#endif // defined(VK_KHR_android_surface)
#if defined(VK_KHR_bind_memory2)
	vk->vkBindBufferMemory2KHR = (PFN_vkBindBufferMemory2KHR)vk->vkGetInstanceProcAddr(instance, "vkBindBufferMemory2KHR");
	vk->vkBindImageMemory2KHR = (PFN_vkBindImageMemory2KHR)vk->vkGetInstanceProcAddr(instance, "vkBindImageMemory2KHR");
#endif // defined(VK_KHR_bind_memory2)
#if defined(VK_KHR_buffer_device_address)
	vk->vkGetDeviceMemoryOpaqueCaptureAddressKHR = (PFN_vkGetDeviceMemoryOpaqueCaptureAddressKHR)vk->vkGetInstanceProcAddr(instance, "vkGetDeviceMemoryOpaqueCaptureAddressKHR");
	vk->vkGetBufferDeviceAddressKHR = (PFN_vkGetBufferDeviceAddressKHR)vk->vkGetInstanceProcAddr(instance, "vkGetBufferDeviceAddressKHR");
	vk->vkGetBufferOpaqueCaptureAddressKHR = (PFN_vkGetBufferOpaqueCaptureAddressKHR)vk->vkGetInstanceProcAddr(instance, "vkGetBufferOpaqueCaptureAddressKHR");
#endif // defined(VK_KHR_buffer_device_address)
#if defined(VK_KHR_calibrated_timestamps)
	vk->vkGetPhysicalDeviceCalibrateableTimeDomainsKHR = (PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceCalibrateableTimeDomainsKHR");
	vk->vkGetCalibratedTimestampsKHR = (PFN_vkGetCalibratedTimestampsKHR)vk->vkGetInstanceProcAddr(instance, "vkGetCalibratedTimestampsKHR");
#endif // defined(VK_KHR_calibrated_timestamps)
#if defined(VK_KHR_cooperative_matrix)
	vk->vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR = (PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR");
#endif // defined(VK_KHR_cooperative_matrix)
#if defined(VK_KHR_copy_commands2)
	vk->vkCmdCopyBuffer2KHR = (PFN_vkCmdCopyBuffer2KHR)vk->vkGetInstanceProcAddr(instance, "vkCmdCopyBuffer2KHR");
	vk->vkCmdCopyImage2KHR = (PFN_vkCmdCopyImage2KHR)vk->vkGetInstanceProcAddr(instance, "vkCmdCopyImage2KHR");
	vk->vkCmdCopyBufferToImage2KHR = (PFN_vkCmdCopyBufferToImage2KHR)vk->vkGetInstanceProcAddr(instance, "vkCmdCopyBufferToImage2KHR");
	vk->vkCmdCopyImageToBuffer2KHR = (PFN_vkCmdCopyImageToBuffer2KHR)vk->vkGetInstanceProcAddr(instance, "vkCmdCopyImageToBuffer2KHR");
	vk->vkCmdBlitImage2KHR = (PFN_vkCmdBlitImage2KHR)vk->vkGetInstanceProcAddr(instance, "vkCmdBlitImage2KHR");
	vk->vkCmdResolveImage2KHR = (PFN_vkCmdResolveImage2KHR)vk->vkGetInstanceProcAddr(instance, "vkCmdResolveImage2KHR");
#endif // defined(VK_KHR_copy_commands2)
#if defined(VK_KHR_create_renderpass2)
	vk->vkCreateRenderPass2KHR = (PFN_vkCreateRenderPass2KHR)vk->vkGetInstanceProcAddr(instance, "vkCreateRenderPass2KHR");
	vk->vkCmdBeginRenderPass2KHR = (PFN_vkCmdBeginRenderPass2KHR)vk->vkGetInstanceProcAddr(instance, "vkCmdBeginRenderPass2KHR");
	vk->vkCmdNextSubpass2KHR = (PFN_vkCmdNextSubpass2KHR)vk->vkGetInstanceProcAddr(instance, "vkCmdNextSubpass2KHR");
	vk->vkCmdEndRenderPass2KHR = (PFN_vkCmdEndRenderPass2KHR)vk->vkGetInstanceProcAddr(instance, "vkCmdEndRenderPass2KHR");
#endif // defined(VK_KHR_create_renderpass2)
#if defined(VK_KHR_deferred_host_operations)
	vk->vkDeferredOperationJoinKHR = (PFN_vkDeferredOperationJoinKHR)vk->vkGetInstanceProcAddr(instance, "vkDeferredOperationJoinKHR");
	vk->vkCreateDeferredOperationKHR = (PFN_vkCreateDeferredOperationKHR)vk->vkGetInstanceProcAddr(instance, "vkCreateDeferredOperationKHR");
	vk->vkDestroyDeferredOperationKHR = (PFN_vkDestroyDeferredOperationKHR)vk->vkGetInstanceProcAddr(instance, "vkDestroyDeferredOperationKHR");
	vk->vkGetDeferredOperationMaxConcurrencyKHR = (PFN_vkGetDeferredOperationMaxConcurrencyKHR)vk->vkGetInstanceProcAddr(instance, "vkGetDeferredOperationMaxConcurrencyKHR");
	vk->vkGetDeferredOperationResultKHR = (PFN_vkGetDeferredOperationResultKHR)vk->vkGetInstanceProcAddr(instance, "vkGetDeferredOperationResultKHR");
#endif // defined(VK_KHR_deferred_host_operations)
#if defined(VK_KHR_descriptor_update_template)
	vk->vkCreateDescriptorUpdateTemplateKHR = (PFN_vkCreateDescriptorUpdateTemplateKHR)vk->vkGetInstanceProcAddr(instance, "vkCreateDescriptorUpdateTemplateKHR");
	vk->vkDestroyDescriptorUpdateTemplateKHR = (PFN_vkDestroyDescriptorUpdateTemplateKHR)vk->vkGetInstanceProcAddr(instance, "vkDestroyDescriptorUpdateTemplateKHR");
	vk->vkUpdateDescriptorSetWithTemplateKHR = (PFN_vkUpdateDescriptorSetWithTemplateKHR)vk->vkGetInstanceProcAddr(instance, "vkUpdateDescriptorSetWithTemplateKHR");
#endif // defined(VK_KHR_descriptor_update_template)
#if defined(VK_KHR_descriptor_update_template) || defined(VK_KHR_push_descriptor)
	vk->vkCmdPushDescriptorSetWithTemplateKHR = (PFN_vkCmdPushDescriptorSetWithTemplateKHR)vk->vkGetInstanceProcAddr(instance, "vkCmdPushDescriptorSetWithTemplateKHR");
#endif // defined(VK_KHR_descriptor_update_template) || defined(VK_KHR_push_descriptor)
#if defined(VK_KHR_device_group)
	vk->vkGetDeviceGroupPeerMemoryFeaturesKHR = (PFN_vkGetDeviceGroupPeerMemoryFeaturesKHR)vk->vkGetInstanceProcAddr(instance, "vkGetDeviceGroupPeerMemoryFeaturesKHR");
	vk->vkCmdSetDeviceMaskKHR = (PFN_vkCmdSetDeviceMaskKHR)vk->vkGetInstanceProcAddr(instance, "vkCmdSetDeviceMaskKHR");
	vk->vkCmdDispatchBaseKHR = (PFN_vkCmdDispatchBaseKHR)vk->vkGetInstanceProcAddr(instance, "vkCmdDispatchBaseKHR");
#endif // defined(VK_KHR_device_group)
#if defined(VK_KHR_device_group) || defined(VK_KHR_swapchain)
	vk->vkGetDeviceGroupPresentCapabilitiesKHR = (PFN_vkGetDeviceGroupPresentCapabilitiesKHR)vk->vkGetInstanceProcAddr(instance, "vkGetDeviceGroupPresentCapabilitiesKHR");
	vk->vkGetDeviceGroupSurfacePresentModesKHR = (PFN_vkGetDeviceGroupSurfacePresentModesKHR)vk->vkGetInstanceProcAddr(instance, "vkGetDeviceGroupSurfacePresentModesKHR");
	vk->vkGetPhysicalDevicePresentRectanglesKHR = (PFN_vkGetPhysicalDevicePresentRectanglesKHR)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDevicePresentRectanglesKHR");
	vk->vkAcquireNextImage2KHR = (PFN_vkAcquireNextImage2KHR)vk->vkGetInstanceProcAddr(instance, "vkAcquireNextImage2KHR");
#endif // defined(VK_KHR_device_group) || defined(VK_KHR_swapchain)
#if defined(VK_KHR_device_group_creation)
	vk->vkEnumeratePhysicalDeviceGroupsKHR = (PFN_vkEnumeratePhysicalDeviceGroupsKHR)vk->vkGetInstanceProcAddr(instance, "vkEnumeratePhysicalDeviceGroupsKHR");
#endif // defined(VK_KHR_device_group_creation)
#if defined(VK_KHR_display)
	vk->vkGetPhysicalDeviceDisplayPropertiesKHR = (PFN_vkGetPhysicalDeviceDisplayPropertiesKHR)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceDisplayPropertiesKHR");
	vk->vkGetPhysicalDeviceDisplayPlanePropertiesKHR = (PFN_vkGetPhysicalDeviceDisplayPlanePropertiesKHR)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceDisplayPlanePropertiesKHR");
	vk->vkGetDisplayPlaneSupportedDisplaysKHR = (PFN_vkGetDisplayPlaneSupportedDisplaysKHR)vk->vkGetInstanceProcAddr(instance, "vkGetDisplayPlaneSupportedDisplaysKHR");
	vk->vkGetDisplayModePropertiesKHR = (PFN_vkGetDisplayModePropertiesKHR)vk->vkGetInstanceProcAddr(instance, "vkGetDisplayModePropertiesKHR");
	vk->vkCreateDisplayModeKHR = (PFN_vkCreateDisplayModeKHR)vk->vkGetInstanceProcAddr(instance, "vkCreateDisplayModeKHR");
	vk->vkGetDisplayPlaneCapabilitiesKHR = (PFN_vkGetDisplayPlaneCapabilitiesKHR)vk->vkGetInstanceProcAddr(instance, "vkGetDisplayPlaneCapabilitiesKHR");
	vk->vkCreateDisplayPlaneSurfaceKHR = (PFN_vkCreateDisplayPlaneSurfaceKHR)vk->vkGetInstanceProcAddr(instance, "vkCreateDisplayPlaneSurfaceKHR");
#endif // defined(VK_KHR_display)
#if defined(VK_KHR_display_swapchain)
	vk->vkCreateSharedSwapchainsKHR = (PFN_vkCreateSharedSwapchainsKHR)vk->vkGetInstanceProcAddr(instance, "vkCreateSharedSwapchainsKHR");
#endif // defined(VK_KHR_display_swapchain)
#if defined(VK_KHR_draw_indirect_count)
	vk->vkCmdDrawIndirectCountKHR = (PFN_vkCmdDrawIndirectCountKHR)vk->vkGetInstanceProcAddr(instance, "vkCmdDrawIndirectCountKHR");
	vk->vkCmdDrawIndexedIndirectCountKHR = (PFN_vkCmdDrawIndexedIndirectCountKHR)vk->vkGetInstanceProcAddr(instance, "vkCmdDrawIndexedIndirectCountKHR");
#endif // defined(VK_KHR_draw_indirect_count)
#if defined(VK_KHR_dynamic_rendering)
	vk->vkCmdBeginRenderingKHR = (PFN_vkCmdBeginRenderingKHR)vk->vkGetInstanceProcAddr(instance, "vkCmdBeginRenderingKHR");
	vk->vkCmdEndRenderingKHR = (PFN_vkCmdEndRenderingKHR)vk->vkGetInstanceProcAddr(instance, "vkCmdEndRenderingKHR");
#endif // defined(VK_KHR_dynamic_rendering)
#if defined(VK_KHR_dynamic_rendering_local_read)
	vk->vkCmdSetRenderingAttachmentLocationsKHR = (PFN_vkCmdSetRenderingAttachmentLocationsKHR)vk->vkGetInstanceProcAddr(instance, "vkCmdSetRenderingAttachmentLocationsKHR");
	vk->vkCmdSetRenderingInputAttachmentIndicesKHR = (PFN_vkCmdSetRenderingInputAttachmentIndicesKHR)vk->vkGetInstanceProcAddr(instance, "vkCmdSetRenderingInputAttachmentIndicesKHR");
#endif // defined(VK_KHR_dynamic_rendering_local_read)
#if defined(VK_KHR_external_fence_capabilities)
	vk->vkGetPhysicalDeviceExternalFencePropertiesKHR = (PFN_vkGetPhysicalDeviceExternalFencePropertiesKHR)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceExternalFencePropertiesKHR");
#endif // defined(VK_KHR_external_fence_capabilities)
#if defined(VK_KHR_external_fence_fd)
	vk->vkImportFenceFdKHR = (PFN_vkImportFenceFdKHR)vk->vkGetInstanceProcAddr(instance, "vkImportFenceFdKHR");
	vk->vkGetFenceFdKHR = (PFN_vkGetFenceFdKHR)vk->vkGetInstanceProcAddr(instance, "vkGetFenceFdKHR");
#endif // defined(VK_KHR_external_fence_fd)
#if defined(VK_KHR_external_fence_win32)
	vk->vkGetFenceWin32HandleKHR = (PFN_vkGetFenceWin32HandleKHR)vk->vkGetInstanceProcAddr(instance, "vkGetFenceWin32HandleKHR");
	vk->vkImportFenceWin32HandleKHR = (PFN_vkImportFenceWin32HandleKHR)vk->vkGetInstanceProcAddr(instance, "vkImportFenceWin32HandleKHR");
#endif // defined(VK_KHR_external_fence_win32)
#if defined(VK_KHR_external_memory_capabilities)
	vk->vkGetPhysicalDeviceExternalBufferPropertiesKHR = (PFN_vkGetPhysicalDeviceExternalBufferPropertiesKHR)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceExternalBufferPropertiesKHR");
#endif // defined(VK_KHR_external_memory_capabilities)
#if defined(VK_KHR_external_memory_fd)
	vk->vkGetMemoryFdPropertiesKHR = (PFN_vkGetMemoryFdPropertiesKHR)vk->vkGetInstanceProcAddr(instance, "vkGetMemoryFdPropertiesKHR");
	vk->vkGetMemoryFdKHR = (PFN_vkGetMemoryFdKHR)vk->vkGetInstanceProcAddr(instance, "vkGetMemoryFdKHR");
#endif // defined(VK_KHR_external_memory_fd)
#if defined(VK_KHR_external_memory_win32)
	vk->vkGetMemoryWin32HandleKHR = (PFN_vkGetMemoryWin32HandleKHR)vk->vkGetInstanceProcAddr(instance, "vkGetMemoryWin32HandleKHR");
	vk->vkGetMemoryWin32HandlePropertiesKHR = (PFN_vkGetMemoryWin32HandlePropertiesKHR)vk->vkGetInstanceProcAddr(instance, "vkGetMemoryWin32HandlePropertiesKHR");
#endif // defined(VK_KHR_external_memory_win32)
#if defined(VK_KHR_external_semaphore_capabilities)
	vk->vkGetPhysicalDeviceExternalSemaphorePropertiesKHR = (PFN_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceExternalSemaphorePropertiesKHR");
#endif // defined(VK_KHR_external_semaphore_capabilities)
#if defined(VK_KHR_external_semaphore_fd)
	vk->vkImportSemaphoreFdKHR = (PFN_vkImportSemaphoreFdKHR)vk->vkGetInstanceProcAddr(instance, "vkImportSemaphoreFdKHR");
	vk->vkGetSemaphoreFdKHR = (PFN_vkGetSemaphoreFdKHR)vk->vkGetInstanceProcAddr(instance, "vkGetSemaphoreFdKHR");
#endif // defined(VK_KHR_external_semaphore_fd)
#if defined(VK_KHR_external_semaphore_win32)
	vk->vkImportSemaphoreWin32HandleKHR = (PFN_vkImportSemaphoreWin32HandleKHR)vk->vkGetInstanceProcAddr(instance, "vkImportSemaphoreWin32HandleKHR");
	vk->vkGetSemaphoreWin32HandleKHR = (PFN_vkGetSemaphoreWin32HandleKHR)vk->vkGetInstanceProcAddr(instance, "vkGetSemaphoreWin32HandleKHR");
#endif // defined(VK_KHR_external_semaphore_win32)
#if defined(VK_KHR_fragment_shading_rate)
	vk->vkGetPhysicalDeviceFragmentShadingRatesKHR = (PFN_vkGetPhysicalDeviceFragmentShadingRatesKHR)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceFragmentShadingRatesKHR");
	vk->vkCmdSetFragmentShadingRateKHR = (PFN_vkCmdSetFragmentShadingRateKHR)vk->vkGetInstanceProcAddr(instance, "vkCmdSetFragmentShadingRateKHR");
#endif // defined(VK_KHR_fragment_shading_rate)
#if defined(VK_KHR_get_display_properties2)
	vk->vkGetPhysicalDeviceDisplayPlaneProperties2KHR = (PFN_vkGetPhysicalDeviceDisplayPlaneProperties2KHR)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceDisplayPlaneProperties2KHR");
	vk->vkGetPhysicalDeviceDisplayProperties2KHR = (PFN_vkGetPhysicalDeviceDisplayProperties2KHR)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceDisplayProperties2KHR");
	vk->vkGetDisplayModeProperties2KHR = (PFN_vkGetDisplayModeProperties2KHR)vk->vkGetInstanceProcAddr(instance, "vkGetDisplayModeProperties2KHR");
	vk->vkGetDisplayPlaneCapabilities2KHR = (PFN_vkGetDisplayPlaneCapabilities2KHR)vk->vkGetInstanceProcAddr(instance, "vkGetDisplayPlaneCapabilities2KHR");
#endif // defined(VK_KHR_get_display_properties2)
#if defined(VK_KHR_get_memory_requirements2)
	vk->vkGetImageMemoryRequirements2KHR = (PFN_vkGetImageMemoryRequirements2KHR)vk->vkGetInstanceProcAddr(instance, "vkGetImageMemoryRequirements2KHR");
	vk->vkGetBufferMemoryRequirements2KHR = (PFN_vkGetBufferMemoryRequirements2KHR)vk->vkGetInstanceProcAddr(instance, "vkGetBufferMemoryRequirements2KHR");
	vk->vkGetImageSparseMemoryRequirements2KHR = (PFN_vkGetImageSparseMemoryRequirements2KHR)vk->vkGetInstanceProcAddr(instance, "vkGetImageSparseMemoryRequirements2KHR");
#endif // defined(VK_KHR_get_memory_requirements2)
#if defined(VK_KHR_get_physical_device_properties2)
	vk->vkGetPhysicalDeviceFeatures2KHR = (PFN_vkGetPhysicalDeviceFeatures2KHR)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceFeatures2KHR");
	vk->vkGetPhysicalDeviceProperties2KHR = (PFN_vkGetPhysicalDeviceProperties2KHR)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceProperties2KHR");
	vk->vkGetPhysicalDeviceFormatProperties2KHR = (PFN_vkGetPhysicalDeviceFormatProperties2KHR)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceFormatProperties2KHR");
	vk->vkGetPhysicalDeviceImageFormatProperties2KHR = (PFN_vkGetPhysicalDeviceImageFormatProperties2KHR)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceImageFormatProperties2KHR");
	vk->vkGetPhysicalDeviceQueueFamilyProperties2KHR = (PFN_vkGetPhysicalDeviceQueueFamilyProperties2KHR)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceQueueFamilyProperties2KHR");
	vk->vkGetPhysicalDeviceMemoryProperties2KHR = (PFN_vkGetPhysicalDeviceMemoryProperties2KHR)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceMemoryProperties2KHR");
	vk->vkGetPhysicalDeviceSparseImageFormatProperties2KHR = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties2KHR)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSparseImageFormatProperties2KHR");
#endif // defined(VK_KHR_get_physical_device_properties2)
#if defined(VK_KHR_get_surface_capabilities2)
	vk->vkGetPhysicalDeviceSurfaceCapabilities2KHR = (PFN_vkGetPhysicalDeviceSurfaceCapabilities2KHR)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSurfaceCapabilities2KHR");
	vk->vkGetPhysicalDeviceSurfaceFormats2KHR = (PFN_vkGetPhysicalDeviceSurfaceFormats2KHR)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSurfaceFormats2KHR");
#endif // defined(VK_KHR_get_surface_capabilities2)
#if defined(VK_KHR_line_rasterization)
	vk->vkCmdSetLineStippleKHR = (PFN_vkCmdSetLineStippleKHR)vk->vkGetInstanceProcAddr(instance, "vkCmdSetLineStippleKHR");
#endif // defined(VK_KHR_line_rasterization)
#if defined(VK_KHR_maintenance1)
	vk->vkTrimCommandPoolKHR = (PFN_vkTrimCommandPoolKHR)vk->vkGetInstanceProcAddr(instance, "vkTrimCommandPoolKHR");
#endif // defined(VK_KHR_maintenance1)
#if defined(VK_KHR_maintenance3)
	vk->vkGetDescriptorSetLayoutSupportKHR = (PFN_vkGetDescriptorSetLayoutSupportKHR)vk->vkGetInstanceProcAddr(instance, "vkGetDescriptorSetLayoutSupportKHR");
#endif // defined(VK_KHR_maintenance3)
#if defined(VK_KHR_maintenance4)
	vk->vkGetDeviceImageMemoryRequirementsKHR = (PFN_vkGetDeviceImageMemoryRequirementsKHR)vk->vkGetInstanceProcAddr(instance, "vkGetDeviceImageMemoryRequirementsKHR");
	vk->vkGetDeviceBufferMemoryRequirementsKHR = (PFN_vkGetDeviceBufferMemoryRequirementsKHR)vk->vkGetInstanceProcAddr(instance, "vkGetDeviceBufferMemoryRequirementsKHR");
	vk->vkGetDeviceImageSparseMemoryRequirementsKHR = (PFN_vkGetDeviceImageSparseMemoryRequirementsKHR)vk->vkGetInstanceProcAddr(instance, "vkGetDeviceImageSparseMemoryRequirementsKHR");
#endif // defined(VK_KHR_maintenance4)
#if defined(VK_KHR_maintenance5)
	vk->vkCmdBindIndexBuffer2KHR = (PFN_vkCmdBindIndexBuffer2KHR)vk->vkGetInstanceProcAddr(instance, "vkCmdBindIndexBuffer2KHR");
	vk->vkGetDeviceImageSubresourceLayoutKHR = (PFN_vkGetDeviceImageSubresourceLayoutKHR)vk->vkGetInstanceProcAddr(instance, "vkGetDeviceImageSubresourceLayoutKHR");
	vk->vkGetRenderingAreaGranularityKHR = (PFN_vkGetRenderingAreaGranularityKHR)vk->vkGetInstanceProcAddr(instance, "vkGetRenderingAreaGranularityKHR");
	vk->vkGetImageSubresourceLayout2KHR = (PFN_vkGetImageSubresourceLayout2KHR)vk->vkGetInstanceProcAddr(instance, "vkGetImageSubresourceLayout2KHR");
#endif // defined(VK_KHR_maintenance5)
#if defined(VK_KHR_maintenance6)
	vk->vkCmdBindDescriptorSets2KHR = (PFN_vkCmdBindDescriptorSets2KHR)vk->vkGetInstanceProcAddr(instance, "vkCmdBindDescriptorSets2KHR");
	vk->vkCmdBindDescriptorBufferEmbeddedSamplers2EXT = (PFN_vkCmdBindDescriptorBufferEmbeddedSamplers2EXT)vk->vkGetInstanceProcAddr(instance, "vkCmdBindDescriptorBufferEmbeddedSamplers2EXT");
	vk->vkCmdPushConstants2KHR = (PFN_vkCmdPushConstants2KHR)vk->vkGetInstanceProcAddr(instance, "vkCmdPushConstants2KHR");
	vk->vkCmdPushDescriptorSet2KHR = (PFN_vkCmdPushDescriptorSet2KHR)vk->vkGetInstanceProcAddr(instance, "vkCmdPushDescriptorSet2KHR");
	vk->vkCmdPushDescriptorSetWithTemplate2KHR = (PFN_vkCmdPushDescriptorSetWithTemplate2KHR)vk->vkGetInstanceProcAddr(instance, "vkCmdPushDescriptorSetWithTemplate2KHR");
	vk->vkCmdSetDescriptorBufferOffsets2EXT = (PFN_vkCmdSetDescriptorBufferOffsets2EXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetDescriptorBufferOffsets2EXT");
#endif // defined(VK_KHR_maintenance6)
#if defined(VK_KHR_map_memory2)
	vk->vkUnmapMemory2KHR = (PFN_vkUnmapMemory2KHR)vk->vkGetInstanceProcAddr(instance, "vkUnmapMemory2KHR");
	vk->vkMapMemory2KHR = (PFN_vkMapMemory2KHR)vk->vkGetInstanceProcAddr(instance, "vkMapMemory2KHR");
#endif // defined(VK_KHR_map_memory2)
#if defined(VK_KHR_object_refresh)
	vk->vkGetPhysicalDeviceRefreshableObjectTypesKHR = (PFN_vkGetPhysicalDeviceRefreshableObjectTypesKHR)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceRefreshableObjectTypesKHR");
	vk->vkCmdRefreshObjectsKHR = (PFN_vkCmdRefreshObjectsKHR)vk->vkGetInstanceProcAddr(instance, "vkCmdRefreshObjectsKHR");
#endif // defined(VK_KHR_object_refresh)
#if defined(VK_KHR_performance_query)
	vk->vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR = (PFN_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR)vk->vkGetInstanceProcAddr(instance, "vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR");
	vk->vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR = (PFN_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR");
	vk->vkAcquireProfilingLockKHR = (PFN_vkAcquireProfilingLockKHR)vk->vkGetInstanceProcAddr(instance, "vkAcquireProfilingLockKHR");
	vk->vkReleaseProfilingLockKHR = (PFN_vkReleaseProfilingLockKHR)vk->vkGetInstanceProcAddr(instance, "vkReleaseProfilingLockKHR");
#endif // defined(VK_KHR_performance_query)
#if defined(VK_KHR_pipeline_binary)
	vk->vkGetPipelineBinaryDataKHR = (PFN_vkGetPipelineBinaryDataKHR)vk->vkGetInstanceProcAddr(instance, "vkGetPipelineBinaryDataKHR");
	vk->vkCreatePipelineBinariesKHR = (PFN_vkCreatePipelineBinariesKHR)vk->vkGetInstanceProcAddr(instance, "vkCreatePipelineBinariesKHR");
	vk->vkDestroyPipelineBinaryKHR = (PFN_vkDestroyPipelineBinaryKHR)vk->vkGetInstanceProcAddr(instance, "vkDestroyPipelineBinaryKHR");
	vk->vkGetPipelineKeyKHR = (PFN_vkGetPipelineKeyKHR)vk->vkGetInstanceProcAddr(instance, "vkGetPipelineKeyKHR");
	vk->vkReleaseCapturedPipelineDataKHR = (PFN_vkReleaseCapturedPipelineDataKHR)vk->vkGetInstanceProcAddr(instance, "vkReleaseCapturedPipelineDataKHR");
#endif // defined(VK_KHR_pipeline_binary)
#if defined(VK_KHR_pipeline_executable_properties)
	vk->vkGetPipelineExecutableInternalRepresentationsKHR = (PFN_vkGetPipelineExecutableInternalRepresentationsKHR)vk->vkGetInstanceProcAddr(instance, "vkGetPipelineExecutableInternalRepresentationsKHR");
	vk->vkGetPipelineExecutablePropertiesKHR = (PFN_vkGetPipelineExecutablePropertiesKHR)vk->vkGetInstanceProcAddr(instance, "vkGetPipelineExecutablePropertiesKHR");
	vk->vkGetPipelineExecutableStatisticsKHR = (PFN_vkGetPipelineExecutableStatisticsKHR)vk->vkGetInstanceProcAddr(instance, "vkGetPipelineExecutableStatisticsKHR");
#endif // defined(VK_KHR_pipeline_executable_properties)
#if defined(VK_KHR_present_wait)
	vk->vkWaitForPresentKHR = (PFN_vkWaitForPresentKHR)vk->vkGetInstanceProcAddr(instance, "vkWaitForPresentKHR");
#endif // defined(VK_KHR_present_wait)
#if defined(VK_KHR_present_wait2)
	vk->vkWaitForPresent2KHR = (PFN_vkWaitForPresent2KHR)vk->vkGetInstanceProcAddr(instance, "vkWaitForPresent2KHR");
#endif // defined(VK_KHR_present_wait2)
#if defined(VK_KHR_push_descriptor)
	vk->vkCmdPushDescriptorSetKHR = (PFN_vkCmdPushDescriptorSetKHR)vk->vkGetInstanceProcAddr(instance, "vkCmdPushDescriptorSetKHR");
#endif // defined(VK_KHR_push_descriptor)
#if defined(VK_KHR_ray_tracing_maintenance1)
	vk->vkCmdTraceRaysIndirect2KHR = (PFN_vkCmdTraceRaysIndirect2KHR)vk->vkGetInstanceProcAddr(instance, "vkCmdTraceRaysIndirect2KHR");
#endif // defined(VK_KHR_ray_tracing_maintenance1)
#if defined(VK_KHR_ray_tracing_pipeline)
	vk->vkCreateRayTracingPipelinesKHR = (PFN_vkCreateRayTracingPipelinesKHR)vk->vkGetInstanceProcAddr(instance, "vkCreateRayTracingPipelinesKHR");
	vk->vkGetRayTracingShaderGroupHandlesKHR = (PFN_vkGetRayTracingShaderGroupHandlesKHR)vk->vkGetInstanceProcAddr(instance, "vkGetRayTracingShaderGroupHandlesKHR");
	vk->vkCmdSetRayTracingPipelineStackSizeKHR = (PFN_vkCmdSetRayTracingPipelineStackSizeKHR)vk->vkGetInstanceProcAddr(instance, "vkCmdSetRayTracingPipelineStackSizeKHR");
	vk->vkGetRayTracingCaptureReplayShaderGroupHandlesKHR = (PFN_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR)vk->vkGetInstanceProcAddr(instance, "vkGetRayTracingCaptureReplayShaderGroupHandlesKHR");
	vk->vkCmdTraceRaysKHR = (PFN_vkCmdTraceRaysKHR)vk->vkGetInstanceProcAddr(instance, "vkCmdTraceRaysKHR");
	vk->vkCmdTraceRaysIndirectKHR = (PFN_vkCmdTraceRaysIndirectKHR)vk->vkGetInstanceProcAddr(instance, "vkCmdTraceRaysIndirectKHR");
	vk->vkGetRayTracingShaderGroupStackSizeKHR = (PFN_vkGetRayTracingShaderGroupStackSizeKHR)vk->vkGetInstanceProcAddr(instance, "vkGetRayTracingShaderGroupStackSizeKHR");
#endif // defined(VK_KHR_ray_tracing_pipeline)
#if defined(VK_KHR_sampler_ycbcr_conversion)
	vk->vkDestroySamplerYcbcrConversionKHR = (PFN_vkDestroySamplerYcbcrConversionKHR)vk->vkGetInstanceProcAddr(instance, "vkDestroySamplerYcbcrConversionKHR");
	vk->vkCreateSamplerYcbcrConversionKHR = (PFN_vkCreateSamplerYcbcrConversionKHR)vk->vkGetInstanceProcAddr(instance, "vkCreateSamplerYcbcrConversionKHR");
#endif // defined(VK_KHR_sampler_ycbcr_conversion)
#if defined(VK_KHR_shared_presentable_image)
	vk->vkGetSwapchainStatusKHR = (PFN_vkGetSwapchainStatusKHR)vk->vkGetInstanceProcAddr(instance, "vkGetSwapchainStatusKHR");
#endif // defined(VK_KHR_shared_presentable_image)
#if defined(VK_KHR_surface)
	vk->vkGetPhysicalDeviceSurfaceSupportKHR = (PFN_vkGetPhysicalDeviceSurfaceSupportKHR)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSurfaceSupportKHR");
	vk->vkDestroySurfaceKHR = (PFN_vkDestroySurfaceKHR)vk->vkGetInstanceProcAddr(instance, "vkDestroySurfaceKHR");
	vk->vkGetPhysicalDeviceSurfaceCapabilitiesKHR = (PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSurfaceCapabilitiesKHR");
	vk->vkGetPhysicalDeviceSurfaceFormatsKHR = (PFN_vkGetPhysicalDeviceSurfaceFormatsKHR)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSurfaceFormatsKHR");
	vk->vkGetPhysicalDeviceSurfacePresentModesKHR = (PFN_vkGetPhysicalDeviceSurfacePresentModesKHR)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSurfacePresentModesKHR");
#endif // defined(VK_KHR_surface)
#if defined(VK_KHR_swapchain)
	vk->vkCreateSwapchainKHR = (PFN_vkCreateSwapchainKHR)vk->vkGetInstanceProcAddr(instance, "vkCreateSwapchainKHR");
	vk->vkGetSwapchainImagesKHR = (PFN_vkGetSwapchainImagesKHR)vk->vkGetInstanceProcAddr(instance, "vkGetSwapchainImagesKHR");
	vk->vkDestroySwapchainKHR = (PFN_vkDestroySwapchainKHR)vk->vkGetInstanceProcAddr(instance, "vkDestroySwapchainKHR");
	vk->vkAcquireNextImageKHR = (PFN_vkAcquireNextImageKHR)vk->vkGetInstanceProcAddr(instance, "vkAcquireNextImageKHR");
	vk->vkQueuePresentKHR = (PFN_vkQueuePresentKHR)vk->vkGetInstanceProcAddr(instance, "vkQueuePresentKHR");
#endif // defined(VK_KHR_swapchain)
#if defined(VK_KHR_swapchain_maintenance1)
	vk->vkReleaseSwapchainImagesKHR = (PFN_vkReleaseSwapchainImagesKHR)vk->vkGetInstanceProcAddr(instance, "vkReleaseSwapchainImagesKHR");
#endif // defined(VK_KHR_swapchain_maintenance1)
#if defined(VK_KHR_synchronization2)
	vk->vkCmdResetEvent2KHR = (PFN_vkCmdResetEvent2KHR)vk->vkGetInstanceProcAddr(instance, "vkCmdResetEvent2KHR");
	vk->vkCmdWriteTimestamp2KHR = (PFN_vkCmdWriteTimestamp2KHR)vk->vkGetInstanceProcAddr(instance, "vkCmdWriteTimestamp2KHR");
	vk->vkCmdWaitEvents2KHR = (PFN_vkCmdWaitEvents2KHR)vk->vkGetInstanceProcAddr(instance, "vkCmdWaitEvents2KHR");
	vk->vkCmdPipelineBarrier2KHR = (PFN_vkCmdPipelineBarrier2KHR)vk->vkGetInstanceProcAddr(instance, "vkCmdPipelineBarrier2KHR");
	vk->vkCmdSetEvent2KHR = (PFN_vkCmdSetEvent2KHR)vk->vkGetInstanceProcAddr(instance, "vkCmdSetEvent2KHR");
	vk->vkQueueSubmit2KHR = (PFN_vkQueueSubmit2KHR)vk->vkGetInstanceProcAddr(instance, "vkQueueSubmit2KHR");
#endif // defined(VK_KHR_synchronization2)
#if defined(VK_KHR_timeline_semaphore)
	vk->vkWaitSemaphoresKHR = (PFN_vkWaitSemaphoresKHR)vk->vkGetInstanceProcAddr(instance, "vkWaitSemaphoresKHR");
	vk->vkGetSemaphoreCounterValueKHR = (PFN_vkGetSemaphoreCounterValueKHR)vk->vkGetInstanceProcAddr(instance, "vkGetSemaphoreCounterValueKHR");
	vk->vkSignalSemaphoreKHR = (PFN_vkSignalSemaphoreKHR)vk->vkGetInstanceProcAddr(instance, "vkSignalSemaphoreKHR");
#endif // defined(VK_KHR_timeline_semaphore)
#if defined(VK_KHR_video_decode_queue)
	vk->vkCmdDecodeVideoKHR = (PFN_vkCmdDecodeVideoKHR)vk->vkGetInstanceProcAddr(instance, "vkCmdDecodeVideoKHR");
#endif // defined(VK_KHR_video_decode_queue)
#if defined(VK_KHR_video_encode_queue)
	vk->vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR = (PFN_vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR");
	vk->vkGetEncodedVideoSessionParametersKHR = (PFN_vkGetEncodedVideoSessionParametersKHR)vk->vkGetInstanceProcAddr(instance, "vkGetEncodedVideoSessionParametersKHR");
	vk->vkCmdEncodeVideoKHR = (PFN_vkCmdEncodeVideoKHR)vk->vkGetInstanceProcAddr(instance, "vkCmdEncodeVideoKHR");
#endif // defined(VK_KHR_video_encode_queue)
#if defined(VK_KHR_video_queue)
	vk->vkCmdEndVideoCodingKHR = (PFN_vkCmdEndVideoCodingKHR)vk->vkGetInstanceProcAddr(instance, "vkCmdEndVideoCodingKHR");
	vk->vkUpdateVideoSessionParametersKHR = (PFN_vkUpdateVideoSessionParametersKHR)vk->vkGetInstanceProcAddr(instance, "vkUpdateVideoSessionParametersKHR");
	vk->vkCmdBeginVideoCodingKHR = (PFN_vkCmdBeginVideoCodingKHR)vk->vkGetInstanceProcAddr(instance, "vkCmdBeginVideoCodingKHR");
	vk->vkGetVideoSessionMemoryRequirementsKHR = (PFN_vkGetVideoSessionMemoryRequirementsKHR)vk->vkGetInstanceProcAddr(instance, "vkGetVideoSessionMemoryRequirementsKHR");
	vk->vkCreateVideoSessionParametersKHR = (PFN_vkCreateVideoSessionParametersKHR)vk->vkGetInstanceProcAddr(instance, "vkCreateVideoSessionParametersKHR");
	vk->vkCmdControlVideoCodingKHR = (PFN_vkCmdControlVideoCodingKHR)vk->vkGetInstanceProcAddr(instance, "vkCmdControlVideoCodingKHR");
	vk->vkDestroyVideoSessionKHR = (PFN_vkDestroyVideoSessionKHR)vk->vkGetInstanceProcAddr(instance, "vkDestroyVideoSessionKHR");
	vk->vkGetPhysicalDeviceVideoCapabilitiesKHR = (PFN_vkGetPhysicalDeviceVideoCapabilitiesKHR)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceVideoCapabilitiesKHR");
	vk->vkGetPhysicalDeviceVideoFormatPropertiesKHR = (PFN_vkGetPhysicalDeviceVideoFormatPropertiesKHR)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceVideoFormatPropertiesKHR");
	vk->vkBindVideoSessionMemoryKHR = (PFN_vkBindVideoSessionMemoryKHR)vk->vkGetInstanceProcAddr(instance, "vkBindVideoSessionMemoryKHR");
	vk->vkCreateVideoSessionKHR = (PFN_vkCreateVideoSessionKHR)vk->vkGetInstanceProcAddr(instance, "vkCreateVideoSessionKHR");
	vk->vkDestroyVideoSessionParametersKHR = (PFN_vkDestroyVideoSessionParametersKHR)vk->vkGetInstanceProcAddr(instance, "vkDestroyVideoSessionParametersKHR");
#endif // defined(VK_KHR_video_queue)
#if defined(VK_KHR_wayland_surface)
	vk->vkCreateWaylandSurfaceKHR = (PFN_vkCreateWaylandSurfaceKHR)vk->vkGetInstanceProcAddr(instance, "vkCreateWaylandSurfaceKHR");
	vk->vkGetPhysicalDeviceWaylandPresentationSupportKHR = (PFN_vkGetPhysicalDeviceWaylandPresentationSupportKHR)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceWaylandPresentationSupportKHR");
#endif // defined(VK_KHR_wayland_surface)
#if defined(VK_KHR_win32_surface)
	vk->vkCreateWin32SurfaceKHR = (PFN_vkCreateWin32SurfaceKHR)vk->vkGetInstanceProcAddr(instance, "vkCreateWin32SurfaceKHR");
	vk->vkGetPhysicalDeviceWin32PresentationSupportKHR = (PFN_vkGetPhysicalDeviceWin32PresentationSupportKHR)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceWin32PresentationSupportKHR");
#endif // defined(VK_KHR_win32_surface)
#if defined(VK_KHR_xcb_surface)
	vk->vkCreateXcbSurfaceKHR = (PFN_vkCreateXcbSurfaceKHR)vk->vkGetInstanceProcAddr(instance, "vkCreateXcbSurfaceKHR");
	vk->vkGetPhysicalDeviceXcbPresentationSupportKHR = (PFN_vkGetPhysicalDeviceXcbPresentationSupportKHR)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceXcbPresentationSupportKHR");
#endif // defined(VK_KHR_xcb_surface)
#if defined(VK_KHR_xlib_surface)
	vk->vkGetPhysicalDeviceXlibPresentationSupportKHR = (PFN_vkGetPhysicalDeviceXlibPresentationSupportKHR)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceXlibPresentationSupportKHR");
	vk->vkCreateXlibSurfaceKHR = (PFN_vkCreateXlibSurfaceKHR)vk->vkGetInstanceProcAddr(instance, "vkCreateXlibSurfaceKHR");
#endif // defined(VK_KHR_xlib_surface)
#if defined(VK_MVK_ios_surface)
	vk->vkCreateIOSSurfaceMVK = (PFN_vkCreateIOSSurfaceMVK)vk->vkGetInstanceProcAddr(instance, "vkCreateIOSSurfaceMVK");
#endif // defined(VK_MVK_ios_surface)
#if defined(VK_MVK_macos_surface)
	vk->vkCreateMacOSSurfaceMVK = (PFN_vkCreateMacOSSurfaceMVK)vk->vkGetInstanceProcAddr(instance, "vkCreateMacOSSurfaceMVK");
#endif // defined(VK_MVK_macos_surface)
#if defined(VK_NN_vi_surface)
	vk->vkCreateViSurfaceNN = (PFN_vkCreateViSurfaceNN)vk->vkGetInstanceProcAddr(instance, "vkCreateViSurfaceNN");
#endif // defined(VK_NN_vi_surface)
#if defined(VK_NVX_binary_import)
	vk->vkDestroyCuFunctionNVX = (PFN_vkDestroyCuFunctionNVX)vk->vkGetInstanceProcAddr(instance, "vkDestroyCuFunctionNVX");
	vk->vkCreateCuModuleNVX = (PFN_vkCreateCuModuleNVX)vk->vkGetInstanceProcAddr(instance, "vkCreateCuModuleNVX");
	vk->vkCreateCuFunctionNVX = (PFN_vkCreateCuFunctionNVX)vk->vkGetInstanceProcAddr(instance, "vkCreateCuFunctionNVX");
	vk->vkDestroyCuModuleNVX = (PFN_vkDestroyCuModuleNVX)vk->vkGetInstanceProcAddr(instance, "vkDestroyCuModuleNVX");
	vk->vkCmdCuLaunchKernelNVX = (PFN_vkCmdCuLaunchKernelNVX)vk->vkGetInstanceProcAddr(instance, "vkCmdCuLaunchKernelNVX");
#endif // defined(VK_NVX_binary_import)
#if defined(VK_NVX_image_view_handle)
	vk->vkGetImageViewHandle64NVX = (PFN_vkGetImageViewHandle64NVX)vk->vkGetInstanceProcAddr(instance, "vkGetImageViewHandle64NVX");
	vk->vkGetImageViewHandleNVX = (PFN_vkGetImageViewHandleNVX)vk->vkGetInstanceProcAddr(instance, "vkGetImageViewHandleNVX");
	vk->vkGetImageViewAddressNVX = (PFN_vkGetImageViewAddressNVX)vk->vkGetInstanceProcAddr(instance, "vkGetImageViewAddressNVX");
#endif // defined(VK_NVX_image_view_handle)
#if defined(VK_NV_acquire_winrt_display)
	vk->vkGetWinrtDisplayNV = (PFN_vkGetWinrtDisplayNV)vk->vkGetInstanceProcAddr(instance, "vkGetWinrtDisplayNV");
	vk->vkAcquireWinrtDisplayNV = (PFN_vkAcquireWinrtDisplayNV)vk->vkGetInstanceProcAddr(instance, "vkAcquireWinrtDisplayNV");
#endif // defined(VK_NV_acquire_winrt_display)
#if defined(VK_NV_clip_space_w_scaling)
	vk->vkCmdSetViewportWScalingNV = (PFN_vkCmdSetViewportWScalingNV)vk->vkGetInstanceProcAddr(instance, "vkCmdSetViewportWScalingNV");
#endif // defined(VK_NV_clip_space_w_scaling)
#if defined(VK_NV_cluster_acceleration_structure)
	vk->vkCmdBuildClusterAccelerationStructureIndirectNV = (PFN_vkCmdBuildClusterAccelerationStructureIndirectNV)vk->vkGetInstanceProcAddr(instance, "vkCmdBuildClusterAccelerationStructureIndirectNV");
	vk->vkGetClusterAccelerationStructureBuildSizesNV = (PFN_vkGetClusterAccelerationStructureBuildSizesNV)vk->vkGetInstanceProcAddr(instance, "vkGetClusterAccelerationStructureBuildSizesNV");
#endif // defined(VK_NV_cluster_acceleration_structure)
#if defined(VK_NV_cooperative_matrix)
	vk->vkGetPhysicalDeviceCooperativeMatrixPropertiesNV = (PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceCooperativeMatrixPropertiesNV");
#endif // defined(VK_NV_cooperative_matrix)
#if defined(VK_NV_cooperative_matrix2)
	vk->vkGetPhysicalDeviceCooperativeMatrixFlexibleDimensionsPropertiesNV = (PFN_vkGetPhysicalDeviceCooperativeMatrixFlexibleDimensionsPropertiesNV)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceCooperativeMatrixFlexibleDimensionsPropertiesNV");
#endif // defined(VK_NV_cooperative_matrix2)
#if defined(VK_NV_cooperative_vector)
	vk->vkCmdConvertCooperativeVectorMatrixNV = (PFN_vkCmdConvertCooperativeVectorMatrixNV)vk->vkGetInstanceProcAddr(instance, "vkCmdConvertCooperativeVectorMatrixNV");
	vk->vkConvertCooperativeVectorMatrixNV = (PFN_vkConvertCooperativeVectorMatrixNV)vk->vkGetInstanceProcAddr(instance, "vkConvertCooperativeVectorMatrixNV");
	vk->vkGetPhysicalDeviceCooperativeVectorPropertiesNV = (PFN_vkGetPhysicalDeviceCooperativeVectorPropertiesNV)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceCooperativeVectorPropertiesNV");
#endif // defined(VK_NV_cooperative_vector)
#if defined(VK_NV_copy_memory_indirect)
	vk->vkCmdCopyMemoryToImageIndirectNV = (PFN_vkCmdCopyMemoryToImageIndirectNV)vk->vkGetInstanceProcAddr(instance, "vkCmdCopyMemoryToImageIndirectNV");
	vk->vkCmdCopyMemoryIndirectNV = (PFN_vkCmdCopyMemoryIndirectNV)vk->vkGetInstanceProcAddr(instance, "vkCmdCopyMemoryIndirectNV");
#endif // defined(VK_NV_copy_memory_indirect)
#if defined(VK_NV_coverage_reduction_mode)
	vk->vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV = (PFN_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV");
#endif // defined(VK_NV_coverage_reduction_mode)
#if defined(VK_NV_cuda_kernel_launch)
	vk->vkCreateCudaFunctionNV = (PFN_vkCreateCudaFunctionNV)vk->vkGetInstanceProcAddr(instance, "vkCreateCudaFunctionNV");
	vk->vkCreateCudaModuleNV = (PFN_vkCreateCudaModuleNV)vk->vkGetInstanceProcAddr(instance, "vkCreateCudaModuleNV");
	vk->vkGetCudaModuleCacheNV = (PFN_vkGetCudaModuleCacheNV)vk->vkGetInstanceProcAddr(instance, "vkGetCudaModuleCacheNV");
	vk->vkDestroyCudaModuleNV = (PFN_vkDestroyCudaModuleNV)vk->vkGetInstanceProcAddr(instance, "vkDestroyCudaModuleNV");
	vk->vkDestroyCudaFunctionNV = (PFN_vkDestroyCudaFunctionNV)vk->vkGetInstanceProcAddr(instance, "vkDestroyCudaFunctionNV");
	vk->vkCmdCudaLaunchKernelNV = (PFN_vkCmdCudaLaunchKernelNV)vk->vkGetInstanceProcAddr(instance, "vkCmdCudaLaunchKernelNV");
#endif // defined(VK_NV_cuda_kernel_launch)
#if defined(VK_NV_device_diagnostic_checkpoints)
	vk->vkGetQueueCheckpointDataNV = (PFN_vkGetQueueCheckpointDataNV)vk->vkGetInstanceProcAddr(instance, "vkGetQueueCheckpointDataNV");
	vk->vkCmdSetCheckpointNV = (PFN_vkCmdSetCheckpointNV)vk->vkGetInstanceProcAddr(instance, "vkCmdSetCheckpointNV");
	vk->vkGetQueueCheckpointData2NV = (PFN_vkGetQueueCheckpointData2NV)vk->vkGetInstanceProcAddr(instance, "vkGetQueueCheckpointData2NV");
#endif // defined(VK_NV_device_diagnostic_checkpoints)
#if defined(VK_NV_device_generated_commands)
	vk->vkGetGeneratedCommandsMemoryRequirementsNV = (PFN_vkGetGeneratedCommandsMemoryRequirementsNV)vk->vkGetInstanceProcAddr(instance, "vkGetGeneratedCommandsMemoryRequirementsNV");
	vk->vkCreateIndirectCommandsLayoutNV = (PFN_vkCreateIndirectCommandsLayoutNV)vk->vkGetInstanceProcAddr(instance, "vkCreateIndirectCommandsLayoutNV");
	vk->vkCmdPreprocessGeneratedCommandsNV = (PFN_vkCmdPreprocessGeneratedCommandsNV)vk->vkGetInstanceProcAddr(instance, "vkCmdPreprocessGeneratedCommandsNV");
	vk->vkCmdExecuteGeneratedCommandsNV = (PFN_vkCmdExecuteGeneratedCommandsNV)vk->vkGetInstanceProcAddr(instance, "vkCmdExecuteGeneratedCommandsNV");
	vk->vkCmdBindPipelineShaderGroupNV = (PFN_vkCmdBindPipelineShaderGroupNV)vk->vkGetInstanceProcAddr(instance, "vkCmdBindPipelineShaderGroupNV");
	vk->vkDestroyIndirectCommandsLayoutNV = (PFN_vkDestroyIndirectCommandsLayoutNV)vk->vkGetInstanceProcAddr(instance, "vkDestroyIndirectCommandsLayoutNV");
#endif // defined(VK_NV_device_generated_commands)
#if defined(VK_NV_device_generated_commands_compute)
	vk->vkGetPipelineIndirectMemoryRequirementsNV = (PFN_vkGetPipelineIndirectMemoryRequirementsNV)vk->vkGetInstanceProcAddr(instance, "vkGetPipelineIndirectMemoryRequirementsNV");
	vk->vkCmdUpdatePipelineIndirectBufferNV = (PFN_vkCmdUpdatePipelineIndirectBufferNV)vk->vkGetInstanceProcAddr(instance, "vkCmdUpdatePipelineIndirectBufferNV");
	vk->vkGetPipelineIndirectDeviceAddressNV = (PFN_vkGetPipelineIndirectDeviceAddressNV)vk->vkGetInstanceProcAddr(instance, "vkGetPipelineIndirectDeviceAddressNV");
#endif // defined(VK_NV_device_generated_commands_compute)
#if defined(VK_NV_external_compute_queue)
	vk->vkDestroyExternalComputeQueueNV = (PFN_vkDestroyExternalComputeQueueNV)vk->vkGetInstanceProcAddr(instance, "vkDestroyExternalComputeQueueNV");
	vk->vkCreateExternalComputeQueueNV = (PFN_vkCreateExternalComputeQueueNV)vk->vkGetInstanceProcAddr(instance, "vkCreateExternalComputeQueueNV");
	vk->vkGetExternalComputeQueueDataNV = (PFN_vkGetExternalComputeQueueDataNV)vk->vkGetInstanceProcAddr(instance, "vkGetExternalComputeQueueDataNV");
#endif // defined(VK_NV_external_compute_queue)
#if defined(VK_NV_external_memory_capabilities)
	vk->vkGetPhysicalDeviceExternalImageFormatPropertiesNV = (PFN_vkGetPhysicalDeviceExternalImageFormatPropertiesNV)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceExternalImageFormatPropertiesNV");
#endif // defined(VK_NV_external_memory_capabilities)
#if defined(VK_NV_external_memory_rdma)
	vk->vkGetMemoryRemoteAddressNV = (PFN_vkGetMemoryRemoteAddressNV)vk->vkGetInstanceProcAddr(instance, "vkGetMemoryRemoteAddressNV");
#endif // defined(VK_NV_external_memory_rdma)
#if defined(VK_NV_external_memory_sci_buf)
	vk->vkGetMemorySciBufNV = (PFN_vkGetMemorySciBufNV)vk->vkGetInstanceProcAddr(instance, "vkGetMemorySciBufNV");
	vk->vkGetPhysicalDeviceExternalMemorySciBufPropertiesNV = (PFN_vkGetPhysicalDeviceExternalMemorySciBufPropertiesNV)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceExternalMemorySciBufPropertiesNV");
	vk->vkGetPhysicalDeviceSciBufAttributesNV = (PFN_vkGetPhysicalDeviceSciBufAttributesNV)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSciBufAttributesNV");
#endif // defined(VK_NV_external_memory_sci_buf)
#if defined(VK_NV_external_memory_win32)
	vk->vkGetMemoryWin32HandleNV = (PFN_vkGetMemoryWin32HandleNV)vk->vkGetInstanceProcAddr(instance, "vkGetMemoryWin32HandleNV");
#endif // defined(VK_NV_external_memory_win32)
#if defined(VK_NV_external_sci_sync)
	vk->vkGetSemaphoreSciSyncObjNV = (PFN_vkGetSemaphoreSciSyncObjNV)vk->vkGetInstanceProcAddr(instance, "vkGetSemaphoreSciSyncObjNV");
	vk->vkImportSemaphoreSciSyncObjNV = (PFN_vkImportSemaphoreSciSyncObjNV)vk->vkGetInstanceProcAddr(instance, "vkImportSemaphoreSciSyncObjNV");
#endif // defined(VK_NV_external_sci_sync)
#if defined(VK_NV_external_sci_sync) || defined(VK_NV_external_sci_sync2)
	vk->vkImportFenceSciSyncFenceNV = (PFN_vkImportFenceSciSyncFenceNV)vk->vkGetInstanceProcAddr(instance, "vkImportFenceSciSyncFenceNV");
	vk->vkGetFenceSciSyncObjNV = (PFN_vkGetFenceSciSyncObjNV)vk->vkGetInstanceProcAddr(instance, "vkGetFenceSciSyncObjNV");
	vk->vkGetPhysicalDeviceSciSyncAttributesNV = (PFN_vkGetPhysicalDeviceSciSyncAttributesNV)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSciSyncAttributesNV");
	vk->vkGetFenceSciSyncFenceNV = (PFN_vkGetFenceSciSyncFenceNV)vk->vkGetInstanceProcAddr(instance, "vkGetFenceSciSyncFenceNV");
	vk->vkImportFenceSciSyncObjNV = (PFN_vkImportFenceSciSyncObjNV)vk->vkGetInstanceProcAddr(instance, "vkImportFenceSciSyncObjNV");
#endif // defined(VK_NV_external_sci_sync) || defined(VK_NV_external_sci_sync2)
#if defined(VK_NV_external_sci_sync2)
	vk->vkDestroySemaphoreSciSyncPoolNV = (PFN_vkDestroySemaphoreSciSyncPoolNV)vk->vkGetInstanceProcAddr(instance, "vkDestroySemaphoreSciSyncPoolNV");
	vk->vkCreateSemaphoreSciSyncPoolNV = (PFN_vkCreateSemaphoreSciSyncPoolNV)vk->vkGetInstanceProcAddr(instance, "vkCreateSemaphoreSciSyncPoolNV");
#endif // defined(VK_NV_external_sci_sync2)
#if defined(VK_NV_fragment_shading_rate_enums)
	vk->vkCmdSetFragmentShadingRateEnumNV = (PFN_vkCmdSetFragmentShadingRateEnumNV)vk->vkGetInstanceProcAddr(instance, "vkCmdSetFragmentShadingRateEnumNV");
#endif // defined(VK_NV_fragment_shading_rate_enums)
#if defined(VK_NV_low_latency2)
	vk->vkLatencySleepNV = (PFN_vkLatencySleepNV)vk->vkGetInstanceProcAddr(instance, "vkLatencySleepNV");
	vk->vkQueueNotifyOutOfBandNV = (PFN_vkQueueNotifyOutOfBandNV)vk->vkGetInstanceProcAddr(instance, "vkQueueNotifyOutOfBandNV");
	vk->vkSetLatencySleepModeNV = (PFN_vkSetLatencySleepModeNV)vk->vkGetInstanceProcAddr(instance, "vkSetLatencySleepModeNV");
	vk->vkSetLatencyMarkerNV = (PFN_vkSetLatencyMarkerNV)vk->vkGetInstanceProcAddr(instance, "vkSetLatencyMarkerNV");
	vk->vkGetLatencyTimingsNV = (PFN_vkGetLatencyTimingsNV)vk->vkGetInstanceProcAddr(instance, "vkGetLatencyTimingsNV");
#endif // defined(VK_NV_low_latency2)
#if defined(VK_NV_memory_decompression)
	vk->vkCmdDecompressMemoryNV = (PFN_vkCmdDecompressMemoryNV)vk->vkGetInstanceProcAddr(instance, "vkCmdDecompressMemoryNV");
	vk->vkCmdDecompressMemoryIndirectCountNV = (PFN_vkCmdDecompressMemoryIndirectCountNV)vk->vkGetInstanceProcAddr(instance, "vkCmdDecompressMemoryIndirectCountNV");
#endif // defined(VK_NV_memory_decompression)
#if defined(VK_NV_mesh_shader)
	vk->vkCmdDrawMeshTasksIndirectNV = (PFN_vkCmdDrawMeshTasksIndirectNV)vk->vkGetInstanceProcAddr(instance, "vkCmdDrawMeshTasksIndirectNV");
	vk->vkCmdDrawMeshTasksNV = (PFN_vkCmdDrawMeshTasksNV)vk->vkGetInstanceProcAddr(instance, "vkCmdDrawMeshTasksNV");
	vk->vkCmdDrawMeshTasksIndirectCountNV = (PFN_vkCmdDrawMeshTasksIndirectCountNV)vk->vkGetInstanceProcAddr(instance, "vkCmdDrawMeshTasksIndirectCountNV");
#endif // defined(VK_NV_mesh_shader)
#if defined(VK_NV_optical_flow)
	vk->vkBindOpticalFlowSessionImageNV = (PFN_vkBindOpticalFlowSessionImageNV)vk->vkGetInstanceProcAddr(instance, "vkBindOpticalFlowSessionImageNV");
	vk->vkGetPhysicalDeviceOpticalFlowImageFormatsNV = (PFN_vkGetPhysicalDeviceOpticalFlowImageFormatsNV)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceOpticalFlowImageFormatsNV");
	vk->vkCreateOpticalFlowSessionNV = (PFN_vkCreateOpticalFlowSessionNV)vk->vkGetInstanceProcAddr(instance, "vkCreateOpticalFlowSessionNV");
	vk->vkDestroyOpticalFlowSessionNV = (PFN_vkDestroyOpticalFlowSessionNV)vk->vkGetInstanceProcAddr(instance, "vkDestroyOpticalFlowSessionNV");
	vk->vkCmdOpticalFlowExecuteNV = (PFN_vkCmdOpticalFlowExecuteNV)vk->vkGetInstanceProcAddr(instance, "vkCmdOpticalFlowExecuteNV");
#endif // defined(VK_NV_optical_flow)
#if defined(VK_NV_partitioned_acceleration_structure)
	vk->vkCmdBuildPartitionedAccelerationStructuresNV = (PFN_vkCmdBuildPartitionedAccelerationStructuresNV)vk->vkGetInstanceProcAddr(instance, "vkCmdBuildPartitionedAccelerationStructuresNV");
	vk->vkGetPartitionedAccelerationStructuresBuildSizesNV = (PFN_vkGetPartitionedAccelerationStructuresBuildSizesNV)vk->vkGetInstanceProcAddr(instance, "vkGetPartitionedAccelerationStructuresBuildSizesNV");
#endif // defined(VK_NV_partitioned_acceleration_structure)
#if defined(VK_NV_ray_tracing)
	vk->vkCmdTraceRaysNV = (PFN_vkCmdTraceRaysNV)vk->vkGetInstanceProcAddr(instance, "vkCmdTraceRaysNV");
	vk->vkDestroyAccelerationStructureNV = (PFN_vkDestroyAccelerationStructureNV)vk->vkGetInstanceProcAddr(instance, "vkDestroyAccelerationStructureNV");
	vk->vkCmdBuildAccelerationStructureNV = (PFN_vkCmdBuildAccelerationStructureNV)vk->vkGetInstanceProcAddr(instance, "vkCmdBuildAccelerationStructureNV");
	vk->vkCreateAccelerationStructureNV = (PFN_vkCreateAccelerationStructureNV)vk->vkGetInstanceProcAddr(instance, "vkCreateAccelerationStructureNV");
	vk->vkGetAccelerationStructureMemoryRequirementsNV = (PFN_vkGetAccelerationStructureMemoryRequirementsNV)vk->vkGetInstanceProcAddr(instance, "vkGetAccelerationStructureMemoryRequirementsNV");
	vk->vkBindAccelerationStructureMemoryNV = (PFN_vkBindAccelerationStructureMemoryNV)vk->vkGetInstanceProcAddr(instance, "vkBindAccelerationStructureMemoryNV");
	vk->vkCmdCopyAccelerationStructureNV = (PFN_vkCmdCopyAccelerationStructureNV)vk->vkGetInstanceProcAddr(instance, "vkCmdCopyAccelerationStructureNV");
	vk->vkCreateRayTracingPipelinesNV = (PFN_vkCreateRayTracingPipelinesNV)vk->vkGetInstanceProcAddr(instance, "vkCreateRayTracingPipelinesNV");
	vk->vkGetRayTracingShaderGroupHandlesNV = (PFN_vkGetRayTracingShaderGroupHandlesNV)vk->vkGetInstanceProcAddr(instance, "vkGetRayTracingShaderGroupHandlesNV");
	vk->vkGetAccelerationStructureHandleNV = (PFN_vkGetAccelerationStructureHandleNV)vk->vkGetInstanceProcAddr(instance, "vkGetAccelerationStructureHandleNV");
	vk->vkCmdWriteAccelerationStructuresPropertiesNV = (PFN_vkCmdWriteAccelerationStructuresPropertiesNV)vk->vkGetInstanceProcAddr(instance, "vkCmdWriteAccelerationStructuresPropertiesNV");
	vk->vkCompileDeferredNV = (PFN_vkCompileDeferredNV)vk->vkGetInstanceProcAddr(instance, "vkCompileDeferredNV");
#endif // defined(VK_NV_ray_tracing)
#if defined(VK_NV_scissor_exclusive)
	vk->vkCmdSetExclusiveScissorEnableNV = (PFN_vkCmdSetExclusiveScissorEnableNV)vk->vkGetInstanceProcAddr(instance, "vkCmdSetExclusiveScissorEnableNV");
	vk->vkCmdSetExclusiveScissorNV = (PFN_vkCmdSetExclusiveScissorNV)vk->vkGetInstanceProcAddr(instance, "vkCmdSetExclusiveScissorNV");
#endif // defined(VK_NV_scissor_exclusive)
#if defined(VK_NV_shading_rate_image)
	vk->vkCmdSetViewportShadingRatePaletteNV = (PFN_vkCmdSetViewportShadingRatePaletteNV)vk->vkGetInstanceProcAddr(instance, "vkCmdSetViewportShadingRatePaletteNV");
	vk->vkCmdBindShadingRateImageNV = (PFN_vkCmdBindShadingRateImageNV)vk->vkGetInstanceProcAddr(instance, "vkCmdBindShadingRateImageNV");
	vk->vkCmdSetCoarseSampleOrderNV = (PFN_vkCmdSetCoarseSampleOrderNV)vk->vkGetInstanceProcAddr(instance, "vkCmdSetCoarseSampleOrderNV");
#endif // defined(VK_NV_shading_rate_image)
#if defined(VK_OHOS_surface)
	vk->vkCreateSurfaceOHOS = (PFN_vkCreateSurfaceOHOS)vk->vkGetInstanceProcAddr(instance, "vkCreateSurfaceOHOS");
#endif // defined(VK_OHOS_surface)
#if defined(VK_QCOM_tile_memory_heap)
	vk->vkCmdBindTileMemoryQCOM = (PFN_vkCmdBindTileMemoryQCOM)vk->vkGetInstanceProcAddr(instance, "vkCmdBindTileMemoryQCOM");
#endif // defined(VK_QCOM_tile_memory_heap)
#if defined(VK_QCOM_tile_properties)
	vk->vkGetFramebufferTilePropertiesQCOM = (PFN_vkGetFramebufferTilePropertiesQCOM)vk->vkGetInstanceProcAddr(instance, "vkGetFramebufferTilePropertiesQCOM");
	vk->vkGetDynamicRenderingTilePropertiesQCOM = (PFN_vkGetDynamicRenderingTilePropertiesQCOM)vk->vkGetInstanceProcAddr(instance, "vkGetDynamicRenderingTilePropertiesQCOM");
#endif // defined(VK_QCOM_tile_properties)
#if defined(VK_QCOM_tile_shading)
	vk->vkCmdDispatchTileQCOM = (PFN_vkCmdDispatchTileQCOM)vk->vkGetInstanceProcAddr(instance, "vkCmdDispatchTileQCOM");
	vk->vkCmdBeginPerTileExecutionQCOM = (PFN_vkCmdBeginPerTileExecutionQCOM)vk->vkGetInstanceProcAddr(instance, "vkCmdBeginPerTileExecutionQCOM");
	vk->vkCmdEndPerTileExecutionQCOM = (PFN_vkCmdEndPerTileExecutionQCOM)vk->vkGetInstanceProcAddr(instance, "vkCmdEndPerTileExecutionQCOM");
#endif // defined(VK_QCOM_tile_shading)
#if defined(VK_QNX_external_memory_screen_buffer)
	vk->vkGetScreenBufferPropertiesQNX = (PFN_vkGetScreenBufferPropertiesQNX)vk->vkGetInstanceProcAddr(instance, "vkGetScreenBufferPropertiesQNX");
#endif // defined(VK_QNX_external_memory_screen_buffer)
#if defined(VK_QNX_screen_surface)
	vk->vkGetPhysicalDeviceScreenPresentationSupportQNX = (PFN_vkGetPhysicalDeviceScreenPresentationSupportQNX)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceScreenPresentationSupportQNX");
	vk->vkCreateScreenSurfaceQNX = (PFN_vkCreateScreenSurfaceQNX)vk->vkGetInstanceProcAddr(instance, "vkCreateScreenSurfaceQNX");
#endif // defined(VK_QNX_screen_surface)
#if defined(VK_VALVE_descriptor_set_host_mapping)
	vk->vkGetDescriptorSetHostMappingVALVE = (PFN_vkGetDescriptorSetHostMappingVALVE)vk->vkGetInstanceProcAddr(instance, "vkGetDescriptorSetHostMappingVALVE");
	vk->vkGetDescriptorSetLayoutHostMappingInfoVALVE = (PFN_vkGetDescriptorSetLayoutHostMappingInfoVALVE)vk->vkGetInstanceProcAddr(instance, "vkGetDescriptorSetLayoutHostMappingInfoVALVE");
#endif // defined(VK_VALVE_descriptor_set_host_mapping)
}

void vgen_load_device_procs(VkDevice device, struct vgen_vulkan_api *vk)
{

#if defined(VK_VERSION_1_0)

	vk->vkCreateInstance = (PFN_vkCreateInstance)vk->vkGetDeviceProcAddr(device, "vkCreateInstance");
	vk->vkGetDeviceProcAddr = (PFN_vkGetDeviceProcAddr)vk->vkGetDeviceProcAddr(device, "vkGetDeviceProcAddr");

	vk->vkDestroyDevice = (PFN_vkDestroyDevice)vk->vkGetDeviceProcAddr(device, "vkDestroyDevice");

	vk->vkEnumerateInstanceExtensionProperties = (PFN_vkEnumerateInstanceExtensionProperties)vk->vkGetDeviceProcAddr(device, "vkEnumerateInstanceExtensionProperties");

	vk->vkEnumerateInstanceLayerProperties = (PFN_vkEnumerateInstanceLayerProperties)vk->vkGetDeviceProcAddr(device, "vkEnumerateInstanceLayerProperties");

	vk->vkGetDeviceQueue = (PFN_vkGetDeviceQueue)vk->vkGetDeviceProcAddr(device, "vkGetDeviceQueue");
	vk->vkQueueSubmit = (PFN_vkQueueSubmit)vk->vkGetDeviceProcAddr(device, "vkQueueSubmit");
	vk->vkQueueWaitIdle = (PFN_vkQueueWaitIdle)vk->vkGetDeviceProcAddr(device, "vkQueueWaitIdle");
	vk->vkDeviceWaitIdle = (PFN_vkDeviceWaitIdle)vk->vkGetDeviceProcAddr(device, "vkDeviceWaitIdle");

	vk->vkAllocateMemory = (PFN_vkAllocateMemory)vk->vkGetDeviceProcAddr(device, "vkAllocateMemory");
	vk->vkFreeMemory = (PFN_vkFreeMemory)vk->vkGetDeviceProcAddr(device, "vkFreeMemory");
	vk->vkMapMemory = (PFN_vkMapMemory)vk->vkGetDeviceProcAddr(device, "vkMapMemory");
	vk->vkUnmapMemory = (PFN_vkUnmapMemory)vk->vkGetDeviceProcAddr(device, "vkUnmapMemory");
	vk->vkFlushMappedMemoryRanges = (PFN_vkFlushMappedMemoryRanges)vk->vkGetDeviceProcAddr(device, "vkFlushMappedMemoryRanges");
	vk->vkInvalidateMappedMemoryRanges = (PFN_vkInvalidateMappedMemoryRanges)vk->vkGetDeviceProcAddr(device, "vkInvalidateMappedMemoryRanges");
	vk->vkGetDeviceMemoryCommitment = (PFN_vkGetDeviceMemoryCommitment)vk->vkGetDeviceProcAddr(device, "vkGetDeviceMemoryCommitment");

	vk->vkBindBufferMemory = (PFN_vkBindBufferMemory)vk->vkGetDeviceProcAddr(device, "vkBindBufferMemory");
	vk->vkBindImageMemory = (PFN_vkBindImageMemory)vk->vkGetDeviceProcAddr(device, "vkBindImageMemory");
	vk->vkGetBufferMemoryRequirements = (PFN_vkGetBufferMemoryRequirements)vk->vkGetDeviceProcAddr(device, "vkGetBufferMemoryRequirements");
	vk->vkGetImageMemoryRequirements = (PFN_vkGetImageMemoryRequirements)vk->vkGetDeviceProcAddr(device, "vkGetImageMemoryRequirements");

	vk->vkGetImageSparseMemoryRequirements = (PFN_vkGetImageSparseMemoryRequirements)vk->vkGetDeviceProcAddr(device, "vkGetImageSparseMemoryRequirements");
	vk->vkQueueBindSparse = (PFN_vkQueueBindSparse)vk->vkGetDeviceProcAddr(device, "vkQueueBindSparse");

	vk->vkCreateFence = (PFN_vkCreateFence)vk->vkGetDeviceProcAddr(device, "vkCreateFence");
	vk->vkDestroyFence = (PFN_vkDestroyFence)vk->vkGetDeviceProcAddr(device, "vkDestroyFence");
	vk->vkResetFences = (PFN_vkResetFences)vk->vkGetDeviceProcAddr(device, "vkResetFences");
	vk->vkGetFenceStatus = (PFN_vkGetFenceStatus)vk->vkGetDeviceProcAddr(device, "vkGetFenceStatus");
	vk->vkWaitForFences = (PFN_vkWaitForFences)vk->vkGetDeviceProcAddr(device, "vkWaitForFences");

	vk->vkCreateSemaphore = (PFN_vkCreateSemaphore)vk->vkGetDeviceProcAddr(device, "vkCreateSemaphore");
	vk->vkDestroySemaphore = (PFN_vkDestroySemaphore)vk->vkGetDeviceProcAddr(device, "vkDestroySemaphore");

	vk->vkCreateEvent = (PFN_vkCreateEvent)vk->vkGetDeviceProcAddr(device, "vkCreateEvent");
	vk->vkDestroyEvent = (PFN_vkDestroyEvent)vk->vkGetDeviceProcAddr(device, "vkDestroyEvent");
	vk->vkGetEventStatus = (PFN_vkGetEventStatus)vk->vkGetDeviceProcAddr(device, "vkGetEventStatus");
	vk->vkSetEvent = (PFN_vkSetEvent)vk->vkGetDeviceProcAddr(device, "vkSetEvent");
	vk->vkResetEvent = (PFN_vkResetEvent)vk->vkGetDeviceProcAddr(device, "vkResetEvent");

	vk->vkCreateQueryPool = (PFN_vkCreateQueryPool)vk->vkGetDeviceProcAddr(device, "vkCreateQueryPool");
	vk->vkDestroyQueryPool = (PFN_vkDestroyQueryPool)vk->vkGetDeviceProcAddr(device, "vkDestroyQueryPool");
	vk->vkGetQueryPoolResults = (PFN_vkGetQueryPoolResults)vk->vkGetDeviceProcAddr(device, "vkGetQueryPoolResults");

	vk->vkCreateBuffer = (PFN_vkCreateBuffer)vk->vkGetDeviceProcAddr(device, "vkCreateBuffer");
	vk->vkDestroyBuffer = (PFN_vkDestroyBuffer)vk->vkGetDeviceProcAddr(device, "vkDestroyBuffer");

	vk->vkCreateBufferView = (PFN_vkCreateBufferView)vk->vkGetDeviceProcAddr(device, "vkCreateBufferView");
	vk->vkDestroyBufferView = (PFN_vkDestroyBufferView)vk->vkGetDeviceProcAddr(device, "vkDestroyBufferView");

	vk->vkCreateImage = (PFN_vkCreateImage)vk->vkGetDeviceProcAddr(device, "vkCreateImage");
	vk->vkDestroyImage = (PFN_vkDestroyImage)vk->vkGetDeviceProcAddr(device, "vkDestroyImage");
	vk->vkGetImageSubresourceLayout = (PFN_vkGetImageSubresourceLayout)vk->vkGetDeviceProcAddr(device, "vkGetImageSubresourceLayout");

	vk->vkCreateImageView = (PFN_vkCreateImageView)vk->vkGetDeviceProcAddr(device, "vkCreateImageView");
	vk->vkDestroyImageView = (PFN_vkDestroyImageView)vk->vkGetDeviceProcAddr(device, "vkDestroyImageView");

	vk->vkCreateShaderModule = (PFN_vkCreateShaderModule)vk->vkGetDeviceProcAddr(device, "vkCreateShaderModule");
	vk->vkDestroyShaderModule = (PFN_vkDestroyShaderModule)vk->vkGetDeviceProcAddr(device, "vkDestroyShaderModule");

	vk->vkCreatePipelineCache = (PFN_vkCreatePipelineCache)vk->vkGetDeviceProcAddr(device, "vkCreatePipelineCache");
	vk->vkDestroyPipelineCache = (PFN_vkDestroyPipelineCache)vk->vkGetDeviceProcAddr(device, "vkDestroyPipelineCache");
	vk->vkGetPipelineCacheData = (PFN_vkGetPipelineCacheData)vk->vkGetDeviceProcAddr(device, "vkGetPipelineCacheData");
	vk->vkMergePipelineCaches = (PFN_vkMergePipelineCaches)vk->vkGetDeviceProcAddr(device, "vkMergePipelineCaches");

	vk->vkCreateGraphicsPipelines = (PFN_vkCreateGraphicsPipelines)vk->vkGetDeviceProcAddr(device, "vkCreateGraphicsPipelines");
	vk->vkCreateComputePipelines = (PFN_vkCreateComputePipelines)vk->vkGetDeviceProcAddr(device, "vkCreateComputePipelines");
	vk->vkDestroyPipeline = (PFN_vkDestroyPipeline)vk->vkGetDeviceProcAddr(device, "vkDestroyPipeline");

	vk->vkCreatePipelineLayout = (PFN_vkCreatePipelineLayout)vk->vkGetDeviceProcAddr(device, "vkCreatePipelineLayout");
	vk->vkDestroyPipelineLayout = (PFN_vkDestroyPipelineLayout)vk->vkGetDeviceProcAddr(device, "vkDestroyPipelineLayout");

	vk->vkCreateSampler = (PFN_vkCreateSampler)vk->vkGetDeviceProcAddr(device, "vkCreateSampler");
	vk->vkDestroySampler = (PFN_vkDestroySampler)vk->vkGetDeviceProcAddr(device, "vkDestroySampler");

	vk->vkCreateDescriptorSetLayout = (PFN_vkCreateDescriptorSetLayout)vk->vkGetDeviceProcAddr(device, "vkCreateDescriptorSetLayout");
	vk->vkDestroyDescriptorSetLayout = (PFN_vkDestroyDescriptorSetLayout)vk->vkGetDeviceProcAddr(device, "vkDestroyDescriptorSetLayout");
	vk->vkCreateDescriptorPool = (PFN_vkCreateDescriptorPool)vk->vkGetDeviceProcAddr(device, "vkCreateDescriptorPool");
	vk->vkDestroyDescriptorPool = (PFN_vkDestroyDescriptorPool)vk->vkGetDeviceProcAddr(device, "vkDestroyDescriptorPool");
	vk->vkResetDescriptorPool = (PFN_vkResetDescriptorPool)vk->vkGetDeviceProcAddr(device, "vkResetDescriptorPool");
	vk->vkAllocateDescriptorSets = (PFN_vkAllocateDescriptorSets)vk->vkGetDeviceProcAddr(device, "vkAllocateDescriptorSets");
	vk->vkFreeDescriptorSets = (PFN_vkFreeDescriptorSets)vk->vkGetDeviceProcAddr(device, "vkFreeDescriptorSets");
	vk->vkUpdateDescriptorSets = (PFN_vkUpdateDescriptorSets)vk->vkGetDeviceProcAddr(device, "vkUpdateDescriptorSets");

	vk->vkCreateFramebuffer = (PFN_vkCreateFramebuffer)vk->vkGetDeviceProcAddr(device, "vkCreateFramebuffer");
	vk->vkDestroyFramebuffer = (PFN_vkDestroyFramebuffer)vk->vkGetDeviceProcAddr(device, "vkDestroyFramebuffer");
	vk->vkCreateRenderPass = (PFN_vkCreateRenderPass)vk->vkGetDeviceProcAddr(device, "vkCreateRenderPass");
	vk->vkDestroyRenderPass = (PFN_vkDestroyRenderPass)vk->vkGetDeviceProcAddr(device, "vkDestroyRenderPass");
	vk->vkGetRenderAreaGranularity = (PFN_vkGetRenderAreaGranularity)vk->vkGetDeviceProcAddr(device, "vkGetRenderAreaGranularity");

	vk->vkCreateCommandPool = (PFN_vkCreateCommandPool)vk->vkGetDeviceProcAddr(device, "vkCreateCommandPool");
	vk->vkDestroyCommandPool = (PFN_vkDestroyCommandPool)vk->vkGetDeviceProcAddr(device, "vkDestroyCommandPool");
	vk->vkResetCommandPool = (PFN_vkResetCommandPool)vk->vkGetDeviceProcAddr(device, "vkResetCommandPool");

	vk->vkAllocateCommandBuffers = (PFN_vkAllocateCommandBuffers)vk->vkGetDeviceProcAddr(device, "vkAllocateCommandBuffers");
	vk->vkFreeCommandBuffers = (PFN_vkFreeCommandBuffers)vk->vkGetDeviceProcAddr(device, "vkFreeCommandBuffers");
	vk->vkBeginCommandBuffer = (PFN_vkBeginCommandBuffer)vk->vkGetDeviceProcAddr(device, "vkBeginCommandBuffer");
	vk->vkEndCommandBuffer = (PFN_vkEndCommandBuffer)vk->vkGetDeviceProcAddr(device, "vkEndCommandBuffer");
	vk->vkResetCommandBuffer = (PFN_vkResetCommandBuffer)vk->vkGetDeviceProcAddr(device, "vkResetCommandBuffer");

	vk->vkCmdBindPipeline = (PFN_vkCmdBindPipeline)vk->vkGetDeviceProcAddr(device, "vkCmdBindPipeline");
	vk->vkCmdSetViewport = (PFN_vkCmdSetViewport)vk->vkGetDeviceProcAddr(device, "vkCmdSetViewport");
	vk->vkCmdSetScissor = (PFN_vkCmdSetScissor)vk->vkGetDeviceProcAddr(device, "vkCmdSetScissor");
	vk->vkCmdSetLineWidth = (PFN_vkCmdSetLineWidth)vk->vkGetDeviceProcAddr(device, "vkCmdSetLineWidth");
	vk->vkCmdSetDepthBias = (PFN_vkCmdSetDepthBias)vk->vkGetDeviceProcAddr(device, "vkCmdSetDepthBias");
	vk->vkCmdSetBlendConstants = (PFN_vkCmdSetBlendConstants)vk->vkGetDeviceProcAddr(device, "vkCmdSetBlendConstants");
	vk->vkCmdSetDepthBounds = (PFN_vkCmdSetDepthBounds)vk->vkGetDeviceProcAddr(device, "vkCmdSetDepthBounds");
	vk->vkCmdSetStencilCompareMask = (PFN_vkCmdSetStencilCompareMask)vk->vkGetDeviceProcAddr(device, "vkCmdSetStencilCompareMask");
	vk->vkCmdSetStencilWriteMask = (PFN_vkCmdSetStencilWriteMask)vk->vkGetDeviceProcAddr(device, "vkCmdSetStencilWriteMask");
	vk->vkCmdSetStencilReference = (PFN_vkCmdSetStencilReference)vk->vkGetDeviceProcAddr(device, "vkCmdSetStencilReference");
	vk->vkCmdBindDescriptorSets = (PFN_vkCmdBindDescriptorSets)vk->vkGetDeviceProcAddr(device, "vkCmdBindDescriptorSets");
	vk->vkCmdBindIndexBuffer = (PFN_vkCmdBindIndexBuffer)vk->vkGetDeviceProcAddr(device, "vkCmdBindIndexBuffer");
	vk->vkCmdBindVertexBuffers = (PFN_vkCmdBindVertexBuffers)vk->vkGetDeviceProcAddr(device, "vkCmdBindVertexBuffers");
	vk->vkCmdDraw = (PFN_vkCmdDraw)vk->vkGetDeviceProcAddr(device, "vkCmdDraw");
	vk->vkCmdDrawIndexed = (PFN_vkCmdDrawIndexed)vk->vkGetDeviceProcAddr(device, "vkCmdDrawIndexed");
	vk->vkCmdDrawIndirect = (PFN_vkCmdDrawIndirect)vk->vkGetDeviceProcAddr(device, "vkCmdDrawIndirect");
	vk->vkCmdDrawIndexedIndirect = (PFN_vkCmdDrawIndexedIndirect)vk->vkGetDeviceProcAddr(device, "vkCmdDrawIndexedIndirect");
	vk->vkCmdDispatch = (PFN_vkCmdDispatch)vk->vkGetDeviceProcAddr(device, "vkCmdDispatch");
	vk->vkCmdDispatchIndirect = (PFN_vkCmdDispatchIndirect)vk->vkGetDeviceProcAddr(device, "vkCmdDispatchIndirect");
	vk->vkCmdCopyBuffer = (PFN_vkCmdCopyBuffer)vk->vkGetDeviceProcAddr(device, "vkCmdCopyBuffer");
	vk->vkCmdCopyImage = (PFN_vkCmdCopyImage)vk->vkGetDeviceProcAddr(device, "vkCmdCopyImage");
	vk->vkCmdBlitImage = (PFN_vkCmdBlitImage)vk->vkGetDeviceProcAddr(device, "vkCmdBlitImage");
	vk->vkCmdCopyBufferToImage = (PFN_vkCmdCopyBufferToImage)vk->vkGetDeviceProcAddr(device, "vkCmdCopyBufferToImage");
	vk->vkCmdCopyImageToBuffer = (PFN_vkCmdCopyImageToBuffer)vk->vkGetDeviceProcAddr(device, "vkCmdCopyImageToBuffer");
	vk->vkCmdUpdateBuffer = (PFN_vkCmdUpdateBuffer)vk->vkGetDeviceProcAddr(device, "vkCmdUpdateBuffer");
	vk->vkCmdFillBuffer = (PFN_vkCmdFillBuffer)vk->vkGetDeviceProcAddr(device, "vkCmdFillBuffer");
	vk->vkCmdClearColorImage = (PFN_vkCmdClearColorImage)vk->vkGetDeviceProcAddr(device, "vkCmdClearColorImage");
	vk->vkCmdClearDepthStencilImage = (PFN_vkCmdClearDepthStencilImage)vk->vkGetDeviceProcAddr(device, "vkCmdClearDepthStencilImage");
	vk->vkCmdClearAttachments = (PFN_vkCmdClearAttachments)vk->vkGetDeviceProcAddr(device, "vkCmdClearAttachments");
	vk->vkCmdResolveImage = (PFN_vkCmdResolveImage)vk->vkGetDeviceProcAddr(device, "vkCmdResolveImage");
	vk->vkCmdSetEvent = (PFN_vkCmdSetEvent)vk->vkGetDeviceProcAddr(device, "vkCmdSetEvent");
	vk->vkCmdResetEvent = (PFN_vkCmdResetEvent)vk->vkGetDeviceProcAddr(device, "vkCmdResetEvent");
	vk->vkCmdWaitEvents = (PFN_vkCmdWaitEvents)vk->vkGetDeviceProcAddr(device, "vkCmdWaitEvents");
	vk->vkCmdPipelineBarrier = (PFN_vkCmdPipelineBarrier)vk->vkGetDeviceProcAddr(device, "vkCmdPipelineBarrier");
	vk->vkCmdBeginQuery = (PFN_vkCmdBeginQuery)vk->vkGetDeviceProcAddr(device, "vkCmdBeginQuery");
	vk->vkCmdEndQuery = (PFN_vkCmdEndQuery)vk->vkGetDeviceProcAddr(device, "vkCmdEndQuery");
	vk->vkCmdResetQueryPool = (PFN_vkCmdResetQueryPool)vk->vkGetDeviceProcAddr(device, "vkCmdResetQueryPool");
	vk->vkCmdWriteTimestamp = (PFN_vkCmdWriteTimestamp)vk->vkGetDeviceProcAddr(device, "vkCmdWriteTimestamp");
	vk->vkCmdCopyQueryPoolResults = (PFN_vkCmdCopyQueryPoolResults)vk->vkGetDeviceProcAddr(device, "vkCmdCopyQueryPoolResults");
	vk->vkCmdPushConstants = (PFN_vkCmdPushConstants)vk->vkGetDeviceProcAddr(device, "vkCmdPushConstants");
	vk->vkCmdBeginRenderPass = (PFN_vkCmdBeginRenderPass)vk->vkGetDeviceProcAddr(device, "vkCmdBeginRenderPass");
	vk->vkCmdNextSubpass = (PFN_vkCmdNextSubpass)vk->vkGetDeviceProcAddr(device, "vkCmdNextSubpass");
	vk->vkCmdEndRenderPass = (PFN_vkCmdEndRenderPass)vk->vkGetDeviceProcAddr(device, "vkCmdEndRenderPass");
	vk->vkCmdExecuteCommands = (PFN_vkCmdExecuteCommands)vk->vkGetDeviceProcAddr(device, "vkCmdExecuteCommands");

#endif // defined(VK_VERSION_1_0)

#if defined(VK_VERSION_1_1)

	vk->vkEnumerateInstanceVersion = (PFN_vkEnumerateInstanceVersion)vk->vkGetDeviceProcAddr(device, "vkEnumerateInstanceVersion");

	vk->vkBindBufferMemory2 = (PFN_vkBindBufferMemory2)vk->vkGetDeviceProcAddr(device, "vkBindBufferMemory2");
	vk->vkBindImageMemory2 = (PFN_vkBindImageMemory2)vk->vkGetDeviceProcAddr(device, "vkBindImageMemory2");

	vk->vkGetDeviceGroupPeerMemoryFeatures = (PFN_vkGetDeviceGroupPeerMemoryFeatures)vk->vkGetDeviceProcAddr(device, "vkGetDeviceGroupPeerMemoryFeatures");
	vk->vkCmdSetDeviceMask = (PFN_vkCmdSetDeviceMask)vk->vkGetDeviceProcAddr(device, "vkCmdSetDeviceMask");
	vk->vkCmdDispatchBase = (PFN_vkCmdDispatchBase)vk->vkGetDeviceProcAddr(device, "vkCmdDispatchBase");

	vk->vkGetImageMemoryRequirements2 = (PFN_vkGetImageMemoryRequirements2)vk->vkGetDeviceProcAddr(device, "vkGetImageMemoryRequirements2");
	vk->vkGetBufferMemoryRequirements2 = (PFN_vkGetBufferMemoryRequirements2)vk->vkGetDeviceProcAddr(device, "vkGetBufferMemoryRequirements2");
	vk->vkGetImageSparseMemoryRequirements2 = (PFN_vkGetImageSparseMemoryRequirements2)vk->vkGetDeviceProcAddr(device, "vkGetImageSparseMemoryRequirements2");

	vk->vkTrimCommandPool = (PFN_vkTrimCommandPool)vk->vkGetDeviceProcAddr(device, "vkTrimCommandPool");

	vk->vkGetDeviceQueue2 = (PFN_vkGetDeviceQueue2)vk->vkGetDeviceProcAddr(device, "vkGetDeviceQueue2");

	vk->vkCreateSamplerYcbcrConversion = (PFN_vkCreateSamplerYcbcrConversion)vk->vkGetDeviceProcAddr(device, "vkCreateSamplerYcbcrConversion");
	vk->vkDestroySamplerYcbcrConversion = (PFN_vkDestroySamplerYcbcrConversion)vk->vkGetDeviceProcAddr(device, "vkDestroySamplerYcbcrConversion");

	vk->vkCreateDescriptorUpdateTemplate = (PFN_vkCreateDescriptorUpdateTemplate)vk->vkGetDeviceProcAddr(device, "vkCreateDescriptorUpdateTemplate");
	vk->vkDestroyDescriptorUpdateTemplate = (PFN_vkDestroyDescriptorUpdateTemplate)vk->vkGetDeviceProcAddr(device, "vkDestroyDescriptorUpdateTemplate");
	vk->vkUpdateDescriptorSetWithTemplate = (PFN_vkUpdateDescriptorSetWithTemplate)vk->vkGetDeviceProcAddr(device, "vkUpdateDescriptorSetWithTemplate");

	vk->vkGetDescriptorSetLayoutSupport = (PFN_vkGetDescriptorSetLayoutSupport)vk->vkGetDeviceProcAddr(device, "vkGetDescriptorSetLayoutSupport");

#endif // defined(VK_VERSION_1_1)

#if defined(VK_VERSION_1_2)

	vk->vkCmdDrawIndirectCount = (PFN_vkCmdDrawIndirectCount)vk->vkGetDeviceProcAddr(device, "vkCmdDrawIndirectCount");
	vk->vkCmdDrawIndexedIndirectCount = (PFN_vkCmdDrawIndexedIndirectCount)vk->vkGetDeviceProcAddr(device, "vkCmdDrawIndexedIndirectCount");

	vk->vkCreateRenderPass2 = (PFN_vkCreateRenderPass2)vk->vkGetDeviceProcAddr(device, "vkCreateRenderPass2");
	vk->vkCmdBeginRenderPass2 = (PFN_vkCmdBeginRenderPass2)vk->vkGetDeviceProcAddr(device, "vkCmdBeginRenderPass2");
	vk->vkCmdNextSubpass2 = (PFN_vkCmdNextSubpass2)vk->vkGetDeviceProcAddr(device, "vkCmdNextSubpass2");
	vk->vkCmdEndRenderPass2 = (PFN_vkCmdEndRenderPass2)vk->vkGetDeviceProcAddr(device, "vkCmdEndRenderPass2");

	vk->vkResetQueryPool = (PFN_vkResetQueryPool)vk->vkGetDeviceProcAddr(device, "vkResetQueryPool");

	vk->vkGetSemaphoreCounterValue = (PFN_vkGetSemaphoreCounterValue)vk->vkGetDeviceProcAddr(device, "vkGetSemaphoreCounterValue");
	vk->vkWaitSemaphores = (PFN_vkWaitSemaphores)vk->vkGetDeviceProcAddr(device, "vkWaitSemaphores");
	vk->vkSignalSemaphore = (PFN_vkSignalSemaphore)vk->vkGetDeviceProcAddr(device, "vkSignalSemaphore");

	vk->vkGetBufferDeviceAddress = (PFN_vkGetBufferDeviceAddress)vk->vkGetDeviceProcAddr(device, "vkGetBufferDeviceAddress");
	vk->vkGetBufferOpaqueCaptureAddress = (PFN_vkGetBufferOpaqueCaptureAddress)vk->vkGetDeviceProcAddr(device, "vkGetBufferOpaqueCaptureAddress");
	vk->vkGetDeviceMemoryOpaqueCaptureAddress = (PFN_vkGetDeviceMemoryOpaqueCaptureAddress)vk->vkGetDeviceProcAddr(device, "vkGetDeviceMemoryOpaqueCaptureAddress");

#endif // defined(VK_VERSION_1_2)

#if defined(VK_VERSION_1_3)

	vk->vkCreatePrivateDataSlot = (PFN_vkCreatePrivateDataSlot)vk->vkGetDeviceProcAddr(device, "vkCreatePrivateDataSlot");
	vk->vkDestroyPrivateDataSlot = (PFN_vkDestroyPrivateDataSlot)vk->vkGetDeviceProcAddr(device, "vkDestroyPrivateDataSlot");
	vk->vkSetPrivateData = (PFN_vkSetPrivateData)vk->vkGetDeviceProcAddr(device, "vkSetPrivateData");
	vk->vkGetPrivateData = (PFN_vkGetPrivateData)vk->vkGetDeviceProcAddr(device, "vkGetPrivateData");

	vk->vkCmdSetEvent2 = (PFN_vkCmdSetEvent2)vk->vkGetDeviceProcAddr(device, "vkCmdSetEvent2");
	vk->vkCmdResetEvent2 = (PFN_vkCmdResetEvent2)vk->vkGetDeviceProcAddr(device, "vkCmdResetEvent2");
	vk->vkCmdWaitEvents2 = (PFN_vkCmdWaitEvents2)vk->vkGetDeviceProcAddr(device, "vkCmdWaitEvents2");
	vk->vkCmdPipelineBarrier2 = (PFN_vkCmdPipelineBarrier2)vk->vkGetDeviceProcAddr(device, "vkCmdPipelineBarrier2");
	vk->vkCmdWriteTimestamp2 = (PFN_vkCmdWriteTimestamp2)vk->vkGetDeviceProcAddr(device, "vkCmdWriteTimestamp2");
	vk->vkQueueSubmit2 = (PFN_vkQueueSubmit2)vk->vkGetDeviceProcAddr(device, "vkQueueSubmit2");

	vk->vkCmdCopyBuffer2 = (PFN_vkCmdCopyBuffer2)vk->vkGetDeviceProcAddr(device, "vkCmdCopyBuffer2");
	vk->vkCmdCopyImage2 = (PFN_vkCmdCopyImage2)vk->vkGetDeviceProcAddr(device, "vkCmdCopyImage2");
	vk->vkCmdCopyBufferToImage2 = (PFN_vkCmdCopyBufferToImage2)vk->vkGetDeviceProcAddr(device, "vkCmdCopyBufferToImage2");
	vk->vkCmdCopyImageToBuffer2 = (PFN_vkCmdCopyImageToBuffer2)vk->vkGetDeviceProcAddr(device, "vkCmdCopyImageToBuffer2");
	vk->vkCmdBlitImage2 = (PFN_vkCmdBlitImage2)vk->vkGetDeviceProcAddr(device, "vkCmdBlitImage2");
	vk->vkCmdResolveImage2 = (PFN_vkCmdResolveImage2)vk->vkGetDeviceProcAddr(device, "vkCmdResolveImage2");

	vk->vkCmdBeginRendering = (PFN_vkCmdBeginRendering)vk->vkGetDeviceProcAddr(device, "vkCmdBeginRendering");
	vk->vkCmdEndRendering = (PFN_vkCmdEndRendering)vk->vkGetDeviceProcAddr(device, "vkCmdEndRendering");

	vk->vkCmdSetCullMode = (PFN_vkCmdSetCullMode)vk->vkGetDeviceProcAddr(device, "vkCmdSetCullMode");
	vk->vkCmdSetFrontFace = (PFN_vkCmdSetFrontFace)vk->vkGetDeviceProcAddr(device, "vkCmdSetFrontFace");
	vk->vkCmdSetPrimitiveTopology = (PFN_vkCmdSetPrimitiveTopology)vk->vkGetDeviceProcAddr(device, "vkCmdSetPrimitiveTopology");
	vk->vkCmdSetViewportWithCount = (PFN_vkCmdSetViewportWithCount)vk->vkGetDeviceProcAddr(device, "vkCmdSetViewportWithCount");
	vk->vkCmdSetScissorWithCount = (PFN_vkCmdSetScissorWithCount)vk->vkGetDeviceProcAddr(device, "vkCmdSetScissorWithCount");
	vk->vkCmdBindVertexBuffers2 = (PFN_vkCmdBindVertexBuffers2)vk->vkGetDeviceProcAddr(device, "vkCmdBindVertexBuffers2");
	vk->vkCmdSetDepthTestEnable = (PFN_vkCmdSetDepthTestEnable)vk->vkGetDeviceProcAddr(device, "vkCmdSetDepthTestEnable");
	vk->vkCmdSetDepthWriteEnable = (PFN_vkCmdSetDepthWriteEnable)vk->vkGetDeviceProcAddr(device, "vkCmdSetDepthWriteEnable");
	vk->vkCmdSetDepthCompareOp = (PFN_vkCmdSetDepthCompareOp)vk->vkGetDeviceProcAddr(device, "vkCmdSetDepthCompareOp");
	vk->vkCmdSetDepthBoundsTestEnable = (PFN_vkCmdSetDepthBoundsTestEnable)vk->vkGetDeviceProcAddr(device, "vkCmdSetDepthBoundsTestEnable");
	vk->vkCmdSetStencilTestEnable = (PFN_vkCmdSetStencilTestEnable)vk->vkGetDeviceProcAddr(device, "vkCmdSetStencilTestEnable");
	vk->vkCmdSetStencilOp = (PFN_vkCmdSetStencilOp)vk->vkGetDeviceProcAddr(device, "vkCmdSetStencilOp");

	vk->vkCmdSetRasterizerDiscardEnable = (PFN_vkCmdSetRasterizerDiscardEnable)vk->vkGetDeviceProcAddr(device, "vkCmdSetRasterizerDiscardEnable");
	vk->vkCmdSetDepthBiasEnable = (PFN_vkCmdSetDepthBiasEnable)vk->vkGetDeviceProcAddr(device, "vkCmdSetDepthBiasEnable");
	vk->vkCmdSetPrimitiveRestartEnable = (PFN_vkCmdSetPrimitiveRestartEnable)vk->vkGetDeviceProcAddr(device, "vkCmdSetPrimitiveRestartEnable");

	vk->vkGetDeviceBufferMemoryRequirements = (PFN_vkGetDeviceBufferMemoryRequirements)vk->vkGetDeviceProcAddr(device, "vkGetDeviceBufferMemoryRequirements");
	vk->vkGetDeviceImageMemoryRequirements = (PFN_vkGetDeviceImageMemoryRequirements)vk->vkGetDeviceProcAddr(device, "vkGetDeviceImageMemoryRequirements");
	vk->vkGetDeviceImageSparseMemoryRequirements = (PFN_vkGetDeviceImageSparseMemoryRequirements)vk->vkGetDeviceProcAddr(device, "vkGetDeviceImageSparseMemoryRequirements");

#endif // defined(VK_VERSION_1_3)

#if defined(VK_VERSION_1_4)

	vk->vkCmdSetLineStipple = (PFN_vkCmdSetLineStipple)vk->vkGetDeviceProcAddr(device, "vkCmdSetLineStipple");

	vk->vkMapMemory2 = (PFN_vkMapMemory2)vk->vkGetDeviceProcAddr(device, "vkMapMemory2");
	vk->vkUnmapMemory2 = (PFN_vkUnmapMemory2)vk->vkGetDeviceProcAddr(device, "vkUnmapMemory2");

	vk->vkCmdBindIndexBuffer2 = (PFN_vkCmdBindIndexBuffer2)vk->vkGetDeviceProcAddr(device, "vkCmdBindIndexBuffer2");
	vk->vkGetRenderingAreaGranularity = (PFN_vkGetRenderingAreaGranularity)vk->vkGetDeviceProcAddr(device, "vkGetRenderingAreaGranularity");
	vk->vkGetDeviceImageSubresourceLayout = (PFN_vkGetDeviceImageSubresourceLayout)vk->vkGetDeviceProcAddr(device, "vkGetDeviceImageSubresourceLayout");
	vk->vkGetImageSubresourceLayout2 = (PFN_vkGetImageSubresourceLayout2)vk->vkGetDeviceProcAddr(device, "vkGetImageSubresourceLayout2");

	vk->vkCmdPushDescriptorSet = (PFN_vkCmdPushDescriptorSet)vk->vkGetDeviceProcAddr(device, "vkCmdPushDescriptorSet");
	vk->vkCmdPushDescriptorSetWithTemplate = (PFN_vkCmdPushDescriptorSetWithTemplate)vk->vkGetDeviceProcAddr(device, "vkCmdPushDescriptorSetWithTemplate");

	vk->vkCmdSetRenderingAttachmentLocations = (PFN_vkCmdSetRenderingAttachmentLocations)vk->vkGetDeviceProcAddr(device, "vkCmdSetRenderingAttachmentLocations");
	vk->vkCmdSetRenderingInputAttachmentIndices = (PFN_vkCmdSetRenderingInputAttachmentIndices)vk->vkGetDeviceProcAddr(device, "vkCmdSetRenderingInputAttachmentIndices");

	vk->vkCmdBindDescriptorSets2 = (PFN_vkCmdBindDescriptorSets2)vk->vkGetDeviceProcAddr(device, "vkCmdBindDescriptorSets2");
	vk->vkCmdPushConstants2 = (PFN_vkCmdPushConstants2)vk->vkGetDeviceProcAddr(device, "vkCmdPushConstants2");
	vk->vkCmdPushDescriptorSet2 = (PFN_vkCmdPushDescriptorSet2)vk->vkGetDeviceProcAddr(device, "vkCmdPushDescriptorSet2");
	vk->vkCmdPushDescriptorSetWithTemplate2 = (PFN_vkCmdPushDescriptorSetWithTemplate2)vk->vkGetDeviceProcAddr(device, "vkCmdPushDescriptorSetWithTemplate2");

	vk->vkCopyMemoryToImage = (PFN_vkCopyMemoryToImage)vk->vkGetDeviceProcAddr(device, "vkCopyMemoryToImage");
	vk->vkCopyImageToMemory = (PFN_vkCopyImageToMemory)vk->vkGetDeviceProcAddr(device, "vkCopyImageToMemory");
	vk->vkCopyImageToImage = (PFN_vkCopyImageToImage)vk->vkGetDeviceProcAddr(device, "vkCopyImageToImage");
	vk->vkTransitionImageLayout = (PFN_vkTransitionImageLayout)vk->vkGetDeviceProcAddr(device, "vkTransitionImageLayout");

#endif // defined(VK_VERSION_1_4)

#if defined(VKSC_VERSION_1_0)

	vk->vkGetCommandPoolMemoryConsumption = (PFN_vkGetCommandPoolMemoryConsumption)vk->vkGetDeviceProcAddr(device, "vkGetCommandPoolMemoryConsumption");

	vk->vkGetFaultData = (PFN_vkGetFaultData)vk->vkGetDeviceProcAddr(device, "vkGetFaultData");

#endif // defined(VKSC_VERSION_1_0)
#if defined(VK_AMDX_shader_enqueue)
	vk->vkGetExecutionGraphPipelineScratchSizeAMDX = (PFN_vkGetExecutionGraphPipelineScratchSizeAMDX)vk->vkGetDeviceProcAddr(device, "vkGetExecutionGraphPipelineScratchSizeAMDX");
	vk->vkCreateExecutionGraphPipelinesAMDX = (PFN_vkCreateExecutionGraphPipelinesAMDX)vk->vkGetDeviceProcAddr(device, "vkCreateExecutionGraphPipelinesAMDX");
	vk->vkGetExecutionGraphPipelineNodeIndexAMDX = (PFN_vkGetExecutionGraphPipelineNodeIndexAMDX)vk->vkGetDeviceProcAddr(device, "vkGetExecutionGraphPipelineNodeIndexAMDX");
	vk->vkCmdInitializeGraphScratchMemoryAMDX = (PFN_vkCmdInitializeGraphScratchMemoryAMDX)vk->vkGetDeviceProcAddr(device, "vkCmdInitializeGraphScratchMemoryAMDX");
	vk->vkCmdDispatchGraphAMDX = (PFN_vkCmdDispatchGraphAMDX)vk->vkGetDeviceProcAddr(device, "vkCmdDispatchGraphAMDX");
	vk->vkCmdDispatchGraphIndirectAMDX = (PFN_vkCmdDispatchGraphIndirectAMDX)vk->vkGetDeviceProcAddr(device, "vkCmdDispatchGraphIndirectAMDX");
	vk->vkCmdDispatchGraphIndirectCountAMDX = (PFN_vkCmdDispatchGraphIndirectCountAMDX)vk->vkGetDeviceProcAddr(device, "vkCmdDispatchGraphIndirectCountAMDX");
#endif // defined(VK_AMDX_shader_enqueue)
#if defined(VK_AMD_anti_lag)
	vk->vkAntiLagUpdateAMD = (PFN_vkAntiLagUpdateAMD)vk->vkGetDeviceProcAddr(device, "vkAntiLagUpdateAMD");
#endif // defined(VK_AMD_anti_lag)
#if defined(VK_AMD_buffer_marker)
	vk->vkCmdWriteBufferMarkerAMD = (PFN_vkCmdWriteBufferMarkerAMD)vk->vkGetDeviceProcAddr(device, "vkCmdWriteBufferMarkerAMD");
	vk->vkCmdWriteBufferMarker2AMD = (PFN_vkCmdWriteBufferMarker2AMD)vk->vkGetDeviceProcAddr(device, "vkCmdWriteBufferMarker2AMD");
#endif // defined(VK_AMD_buffer_marker)
#if defined(VK_AMD_display_native_hdr)
	vk->vkSetLocalDimmingAMD = (PFN_vkSetLocalDimmingAMD)vk->vkGetDeviceProcAddr(device, "vkSetLocalDimmingAMD");
#endif // defined(VK_AMD_display_native_hdr)
#if defined(VK_AMD_draw_indirect_count)
	vk->vkCmdDrawIndirectCountAMD = (PFN_vkCmdDrawIndirectCountAMD)vk->vkGetDeviceProcAddr(device, "vkCmdDrawIndirectCountAMD");
	vk->vkCmdDrawIndexedIndirectCountAMD = (PFN_vkCmdDrawIndexedIndirectCountAMD)vk->vkGetDeviceProcAddr(device, "vkCmdDrawIndexedIndirectCountAMD");
#endif // defined(VK_AMD_draw_indirect_count)
#if defined(VK_AMD_shader_info)
	vk->vkGetShaderInfoAMD = (PFN_vkGetShaderInfoAMD)vk->vkGetDeviceProcAddr(device, "vkGetShaderInfoAMD");
#endif // defined(VK_AMD_shader_info)
#if defined(VK_ANDROID_external_memory_android_hardware_buffer)
	vk->vkGetAndroidHardwareBufferPropertiesANDROID = (PFN_vkGetAndroidHardwareBufferPropertiesANDROID)vk->vkGetDeviceProcAddr(device, "vkGetAndroidHardwareBufferPropertiesANDROID");
	vk->vkGetMemoryAndroidHardwareBufferANDROID = (PFN_vkGetMemoryAndroidHardwareBufferANDROID)vk->vkGetDeviceProcAddr(device, "vkGetMemoryAndroidHardwareBufferANDROID");
#endif // defined(VK_ANDROID_external_memory_android_hardware_buffer)
#if defined(VK_ARM_data_graph)
	vk->vkCreateDataGraphPipelinesARM = (PFN_vkCreateDataGraphPipelinesARM)vk->vkGetDeviceProcAddr(device, "vkCreateDataGraphPipelinesARM");
	vk->vkGetDataGraphPipelinePropertiesARM = (PFN_vkGetDataGraphPipelinePropertiesARM)vk->vkGetDeviceProcAddr(device, "vkGetDataGraphPipelinePropertiesARM");
	vk->vkGetDataGraphPipelineSessionBindPointRequirementsARM = (PFN_vkGetDataGraphPipelineSessionBindPointRequirementsARM)vk->vkGetDeviceProcAddr(device, "vkGetDataGraphPipelineSessionBindPointRequirementsARM");
	vk->vkCreateDataGraphPipelineSessionARM = (PFN_vkCreateDataGraphPipelineSessionARM)vk->vkGetDeviceProcAddr(device, "vkCreateDataGraphPipelineSessionARM");
	vk->vkGetDataGraphPipelineSessionMemoryRequirementsARM = (PFN_vkGetDataGraphPipelineSessionMemoryRequirementsARM)vk->vkGetDeviceProcAddr(device, "vkGetDataGraphPipelineSessionMemoryRequirementsARM");
	vk->vkBindDataGraphPipelineSessionMemoryARM = (PFN_vkBindDataGraphPipelineSessionMemoryARM)vk->vkGetDeviceProcAddr(device, "vkBindDataGraphPipelineSessionMemoryARM");
	vk->vkDestroyDataGraphPipelineSessionARM = (PFN_vkDestroyDataGraphPipelineSessionARM)vk->vkGetDeviceProcAddr(device, "vkDestroyDataGraphPipelineSessionARM");
	vk->vkCmdDispatchDataGraphARM = (PFN_vkCmdDispatchDataGraphARM)vk->vkGetDeviceProcAddr(device, "vkCmdDispatchDataGraphARM");
	vk->vkGetDataGraphPipelineAvailablePropertiesARM = (PFN_vkGetDataGraphPipelineAvailablePropertiesARM)vk->vkGetDeviceProcAddr(device, "vkGetDataGraphPipelineAvailablePropertiesARM");
#endif // defined(VK_ARM_data_graph)
#if defined(VK_ARM_tensors)
	vk->vkCreateTensorARM = (PFN_vkCreateTensorARM)vk->vkGetDeviceProcAddr(device, "vkCreateTensorARM");
	vk->vkGetTensorViewOpaqueCaptureDescriptorDataARM = (PFN_vkGetTensorViewOpaqueCaptureDescriptorDataARM)vk->vkGetDeviceProcAddr(device, "vkGetTensorViewOpaqueCaptureDescriptorDataARM");
	vk->vkDestroyTensorARM = (PFN_vkDestroyTensorARM)vk->vkGetDeviceProcAddr(device, "vkDestroyTensorARM");
	vk->vkBindTensorMemoryARM = (PFN_vkBindTensorMemoryARM)vk->vkGetDeviceProcAddr(device, "vkBindTensorMemoryARM");
	vk->vkGetTensorMemoryRequirementsARM = (PFN_vkGetTensorMemoryRequirementsARM)vk->vkGetDeviceProcAddr(device, "vkGetTensorMemoryRequirementsARM");
	vk->vkGetDeviceTensorMemoryRequirementsARM = (PFN_vkGetDeviceTensorMemoryRequirementsARM)vk->vkGetDeviceProcAddr(device, "vkGetDeviceTensorMemoryRequirementsARM");
	vk->vkCreateTensorViewARM = (PFN_vkCreateTensorViewARM)vk->vkGetDeviceProcAddr(device, "vkCreateTensorViewARM");
	vk->vkDestroyTensorViewARM = (PFN_vkDestroyTensorViewARM)vk->vkGetDeviceProcAddr(device, "vkDestroyTensorViewARM");
	vk->vkCmdCopyTensorARM = (PFN_vkCmdCopyTensorARM)vk->vkGetDeviceProcAddr(device, "vkCmdCopyTensorARM");
	vk->vkGetTensorOpaqueCaptureDescriptorDataARM = (PFN_vkGetTensorOpaqueCaptureDescriptorDataARM)vk->vkGetDeviceProcAddr(device, "vkGetTensorOpaqueCaptureDescriptorDataARM");
#endif // defined(VK_ARM_tensors)
#if defined(VK_EXT_attachment_feedback_loop_dynamic_state)
	vk->vkCmdSetAttachmentFeedbackLoopEnableEXT = (PFN_vkCmdSetAttachmentFeedbackLoopEnableEXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetAttachmentFeedbackLoopEnableEXT");
#endif // defined(VK_EXT_attachment_feedback_loop_dynamic_state)
#if defined(VK_EXT_buffer_device_address)
	vk->vkGetBufferDeviceAddressEXT = (PFN_vkGetBufferDeviceAddressEXT)vk->vkGetDeviceProcAddr(device, "vkGetBufferDeviceAddressEXT");
#endif // defined(VK_EXT_buffer_device_address)
#if defined(VK_EXT_calibrated_timestamps)
	vk->vkGetCalibratedTimestampsEXT = (PFN_vkGetCalibratedTimestampsEXT)vk->vkGetDeviceProcAddr(device, "vkGetCalibratedTimestampsEXT");
#endif // defined(VK_EXT_calibrated_timestamps)
#if defined(VK_EXT_color_write_enable)
	vk->vkCmdSetColorWriteEnableEXT = (PFN_vkCmdSetColorWriteEnableEXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetColorWriteEnableEXT");
#endif // defined(VK_EXT_color_write_enable)
#if defined(VK_EXT_conditional_rendering)
	vk->vkCmdBeginConditionalRenderingEXT = (PFN_vkCmdBeginConditionalRenderingEXT)vk->vkGetDeviceProcAddr(device, "vkCmdBeginConditionalRenderingEXT");
	vk->vkCmdEndConditionalRenderingEXT = (PFN_vkCmdEndConditionalRenderingEXT)vk->vkGetDeviceProcAddr(device, "vkCmdEndConditionalRenderingEXT");
#endif // defined(VK_EXT_conditional_rendering)
#if defined(VK_EXT_debug_marker)
	vk->vkCmdDebugMarkerEndEXT = (PFN_vkCmdDebugMarkerEndEXT)vk->vkGetDeviceProcAddr(device, "vkCmdDebugMarkerEndEXT");
	vk->vkCmdDebugMarkerBeginEXT = (PFN_vkCmdDebugMarkerBeginEXT)vk->vkGetDeviceProcAddr(device, "vkCmdDebugMarkerBeginEXT");
	vk->vkDebugMarkerSetObjectTagEXT = (PFN_vkDebugMarkerSetObjectTagEXT)vk->vkGetDeviceProcAddr(device, "vkDebugMarkerSetObjectTagEXT");
	vk->vkDebugMarkerSetObjectNameEXT = (PFN_vkDebugMarkerSetObjectNameEXT)vk->vkGetDeviceProcAddr(device, "vkDebugMarkerSetObjectNameEXT");
	vk->vkCmdDebugMarkerInsertEXT = (PFN_vkCmdDebugMarkerInsertEXT)vk->vkGetDeviceProcAddr(device, "vkCmdDebugMarkerInsertEXT");
#endif // defined(VK_EXT_debug_marker)
#if defined(VK_EXT_debug_utils)
	vk->vkCmdInsertDebugUtilsLabelEXT = (PFN_vkCmdInsertDebugUtilsLabelEXT)vk->vkGetDeviceProcAddr(device, "vkCmdInsertDebugUtilsLabelEXT");
	vk->vkCmdEndDebugUtilsLabelEXT = (PFN_vkCmdEndDebugUtilsLabelEXT)vk->vkGetDeviceProcAddr(device, "vkCmdEndDebugUtilsLabelEXT");
	vk->vkSetDebugUtilsObjectTagEXT = (PFN_vkSetDebugUtilsObjectTagEXT)vk->vkGetDeviceProcAddr(device, "vkSetDebugUtilsObjectTagEXT");
	vk->vkSetDebugUtilsObjectNameEXT = (PFN_vkSetDebugUtilsObjectNameEXT)vk->vkGetDeviceProcAddr(device, "vkSetDebugUtilsObjectNameEXT");
	vk->vkQueueInsertDebugUtilsLabelEXT = (PFN_vkQueueInsertDebugUtilsLabelEXT)vk->vkGetDeviceProcAddr(device, "vkQueueInsertDebugUtilsLabelEXT");
	vk->vkQueueBeginDebugUtilsLabelEXT = (PFN_vkQueueBeginDebugUtilsLabelEXT)vk->vkGetDeviceProcAddr(device, "vkQueueBeginDebugUtilsLabelEXT");
	vk->vkQueueEndDebugUtilsLabelEXT = (PFN_vkQueueEndDebugUtilsLabelEXT)vk->vkGetDeviceProcAddr(device, "vkQueueEndDebugUtilsLabelEXT");
	vk->vkCmdBeginDebugUtilsLabelEXT = (PFN_vkCmdBeginDebugUtilsLabelEXT)vk->vkGetDeviceProcAddr(device, "vkCmdBeginDebugUtilsLabelEXT");
#endif // defined(VK_EXT_debug_utils)
#if defined(VK_EXT_depth_bias_control)
	vk->vkCmdSetDepthBias2EXT = (PFN_vkCmdSetDepthBias2EXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetDepthBias2EXT");
#endif // defined(VK_EXT_depth_bias_control)
#if defined(VK_EXT_depth_clamp_control) || defined(VK_EXT_shader_object)
	vk->vkCmdSetDepthClampRangeEXT = (PFN_vkCmdSetDepthClampRangeEXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetDepthClampRangeEXT");
#endif // defined(VK_EXT_depth_clamp_control) || defined(VK_EXT_shader_object)
#if defined(VK_EXT_descriptor_buffer)
	vk->vkGetImageOpaqueCaptureDescriptorDataEXT = (PFN_vkGetImageOpaqueCaptureDescriptorDataEXT)vk->vkGetDeviceProcAddr(device, "vkGetImageOpaqueCaptureDescriptorDataEXT");
	vk->vkCmdBindDescriptorBuffersEXT = (PFN_vkCmdBindDescriptorBuffersEXT)vk->vkGetDeviceProcAddr(device, "vkCmdBindDescriptorBuffersEXT");
	vk->vkCmdSetDescriptorBufferOffsetsEXT = (PFN_vkCmdSetDescriptorBufferOffsetsEXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetDescriptorBufferOffsetsEXT");
	vk->vkGetSamplerOpaqueCaptureDescriptorDataEXT = (PFN_vkGetSamplerOpaqueCaptureDescriptorDataEXT)vk->vkGetDeviceProcAddr(device, "vkGetSamplerOpaqueCaptureDescriptorDataEXT");
	vk->vkGetDescriptorSetLayoutSizeEXT = (PFN_vkGetDescriptorSetLayoutSizeEXT)vk->vkGetDeviceProcAddr(device, "vkGetDescriptorSetLayoutSizeEXT");
	vk->vkGetDescriptorSetLayoutBindingOffsetEXT = (PFN_vkGetDescriptorSetLayoutBindingOffsetEXT)vk->vkGetDeviceProcAddr(device, "vkGetDescriptorSetLayoutBindingOffsetEXT");
	vk->vkGetDescriptorEXT = (PFN_vkGetDescriptorEXT)vk->vkGetDeviceProcAddr(device, "vkGetDescriptorEXT");
	vk->vkCmdBindDescriptorBufferEmbeddedSamplersEXT = (PFN_vkCmdBindDescriptorBufferEmbeddedSamplersEXT)vk->vkGetDeviceProcAddr(device, "vkCmdBindDescriptorBufferEmbeddedSamplersEXT");
	vk->vkGetBufferOpaqueCaptureDescriptorDataEXT = (PFN_vkGetBufferOpaqueCaptureDescriptorDataEXT)vk->vkGetDeviceProcAddr(device, "vkGetBufferOpaqueCaptureDescriptorDataEXT");
	vk->vkGetImageViewOpaqueCaptureDescriptorDataEXT = (PFN_vkGetImageViewOpaqueCaptureDescriptorDataEXT)vk->vkGetDeviceProcAddr(device, "vkGetImageViewOpaqueCaptureDescriptorDataEXT");
	vk->vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT = (PFN_vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT)vk->vkGetDeviceProcAddr(device, "vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT");
#endif // defined(VK_EXT_descriptor_buffer)
#if defined(VK_EXT_device_fault)
	vk->vkGetDeviceFaultInfoEXT = (PFN_vkGetDeviceFaultInfoEXT)vk->vkGetDeviceProcAddr(device, "vkGetDeviceFaultInfoEXT");
#endif // defined(VK_EXT_device_fault)
#if defined(VK_EXT_device_generated_commands)
	vk->vkCreateIndirectCommandsLayoutEXT = (PFN_vkCreateIndirectCommandsLayoutEXT)vk->vkGetDeviceProcAddr(device, "vkCreateIndirectCommandsLayoutEXT");
	vk->vkDestroyIndirectCommandsLayoutEXT = (PFN_vkDestroyIndirectCommandsLayoutEXT)vk->vkGetDeviceProcAddr(device, "vkDestroyIndirectCommandsLayoutEXT");
	vk->vkUpdateIndirectExecutionSetShaderEXT = (PFN_vkUpdateIndirectExecutionSetShaderEXT)vk->vkGetDeviceProcAddr(device, "vkUpdateIndirectExecutionSetShaderEXT");
	vk->vkCmdPreprocessGeneratedCommandsEXT = (PFN_vkCmdPreprocessGeneratedCommandsEXT)vk->vkGetDeviceProcAddr(device, "vkCmdPreprocessGeneratedCommandsEXT");
	vk->vkUpdateIndirectExecutionSetPipelineEXT = (PFN_vkUpdateIndirectExecutionSetPipelineEXT)vk->vkGetDeviceProcAddr(device, "vkUpdateIndirectExecutionSetPipelineEXT");
	vk->vkGetGeneratedCommandsMemoryRequirementsEXT = (PFN_vkGetGeneratedCommandsMemoryRequirementsEXT)vk->vkGetDeviceProcAddr(device, "vkGetGeneratedCommandsMemoryRequirementsEXT");
	vk->vkCmdExecuteGeneratedCommandsEXT = (PFN_vkCmdExecuteGeneratedCommandsEXT)vk->vkGetDeviceProcAddr(device, "vkCmdExecuteGeneratedCommandsEXT");
	vk->vkCreateIndirectExecutionSetEXT = (PFN_vkCreateIndirectExecutionSetEXT)vk->vkGetDeviceProcAddr(device, "vkCreateIndirectExecutionSetEXT");
	vk->vkDestroyIndirectExecutionSetEXT = (PFN_vkDestroyIndirectExecutionSetEXT)vk->vkGetDeviceProcAddr(device, "vkDestroyIndirectExecutionSetEXT");
#endif // defined(VK_EXT_device_generated_commands)
#if defined(VK_EXT_discard_rectangles)
	vk->vkCmdSetDiscardRectangleEXT = (PFN_vkCmdSetDiscardRectangleEXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetDiscardRectangleEXT");
	vk->vkCmdSetDiscardRectangleEnableEXT = (PFN_vkCmdSetDiscardRectangleEnableEXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetDiscardRectangleEnableEXT");
	vk->vkCmdSetDiscardRectangleModeEXT = (PFN_vkCmdSetDiscardRectangleModeEXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetDiscardRectangleModeEXT");
#endif // defined(VK_EXT_discard_rectangles)
#if defined(VK_EXT_display_control)
	vk->vkDisplayPowerControlEXT = (PFN_vkDisplayPowerControlEXT)vk->vkGetDeviceProcAddr(device, "vkDisplayPowerControlEXT");
	vk->vkGetSwapchainCounterEXT = (PFN_vkGetSwapchainCounterEXT)vk->vkGetDeviceProcAddr(device, "vkGetSwapchainCounterEXT");
	vk->vkRegisterDeviceEventEXT = (PFN_vkRegisterDeviceEventEXT)vk->vkGetDeviceProcAddr(device, "vkRegisterDeviceEventEXT");
	vk->vkRegisterDisplayEventEXT = (PFN_vkRegisterDisplayEventEXT)vk->vkGetDeviceProcAddr(device, "vkRegisterDisplayEventEXT");
#endif // defined(VK_EXT_display_control)
#if defined(VK_EXT_extended_dynamic_state) || defined(VK_EXT_shader_object)
	vk->vkCmdBindVertexBuffers2EXT = (PFN_vkCmdBindVertexBuffers2EXT)vk->vkGetDeviceProcAddr(device, "vkCmdBindVertexBuffers2EXT");
	vk->vkCmdSetCullModeEXT = (PFN_vkCmdSetCullModeEXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetCullModeEXT");
	vk->vkCmdSetDepthTestEnableEXT = (PFN_vkCmdSetDepthTestEnableEXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetDepthTestEnableEXT");
	vk->vkCmdSetFrontFaceEXT = (PFN_vkCmdSetFrontFaceEXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetFrontFaceEXT");
	vk->vkCmdSetPrimitiveTopologyEXT = (PFN_vkCmdSetPrimitiveTopologyEXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetPrimitiveTopologyEXT");
	vk->vkCmdSetViewportWithCountEXT = (PFN_vkCmdSetViewportWithCountEXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetViewportWithCountEXT");
	vk->vkCmdSetScissorWithCountEXT = (PFN_vkCmdSetScissorWithCountEXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetScissorWithCountEXT");
	vk->vkCmdSetDepthWriteEnableEXT = (PFN_vkCmdSetDepthWriteEnableEXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetDepthWriteEnableEXT");
	vk->vkCmdSetDepthCompareOpEXT = (PFN_vkCmdSetDepthCompareOpEXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetDepthCompareOpEXT");
	vk->vkCmdSetDepthBoundsTestEnableEXT = (PFN_vkCmdSetDepthBoundsTestEnableEXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetDepthBoundsTestEnableEXT");
	vk->vkCmdSetStencilTestEnableEXT = (PFN_vkCmdSetStencilTestEnableEXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetStencilTestEnableEXT");
	vk->vkCmdSetStencilOpEXT = (PFN_vkCmdSetStencilOpEXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetStencilOpEXT");
#endif // defined(VK_EXT_extended_dynamic_state) || defined(VK_EXT_shader_object)
#if defined(VK_EXT_extended_dynamic_state2) || defined(VK_EXT_shader_object)
	vk->vkCmdSetDepthBiasEnableEXT = (PFN_vkCmdSetDepthBiasEnableEXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetDepthBiasEnableEXT");
	vk->vkCmdSetPrimitiveRestartEnableEXT = (PFN_vkCmdSetPrimitiveRestartEnableEXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetPrimitiveRestartEnableEXT");
	vk->vkCmdSetLogicOpEXT = (PFN_vkCmdSetLogicOpEXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetLogicOpEXT");
	vk->vkCmdSetPatchControlPointsEXT = (PFN_vkCmdSetPatchControlPointsEXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetPatchControlPointsEXT");
	vk->vkCmdSetRasterizerDiscardEnableEXT = (PFN_vkCmdSetRasterizerDiscardEnableEXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetRasterizerDiscardEnableEXT");
#endif // defined(VK_EXT_extended_dynamic_state2) || defined(VK_EXT_shader_object)
#if defined(VK_EXT_extended_dynamic_state3) || defined(VK_EXT_shader_object)
	vk->vkCmdSetLineStippleEnableEXT = (PFN_vkCmdSetLineStippleEnableEXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetLineStippleEnableEXT");
	vk->vkCmdSetRasterizationSamplesEXT = (PFN_vkCmdSetRasterizationSamplesEXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetRasterizationSamplesEXT");
	vk->vkCmdSetRepresentativeFragmentTestEnableNV = (PFN_vkCmdSetRepresentativeFragmentTestEnableNV)vk->vkGetDeviceProcAddr(device, "vkCmdSetRepresentativeFragmentTestEnableNV");
	vk->vkCmdSetPolygonModeEXT = (PFN_vkCmdSetPolygonModeEXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetPolygonModeEXT");
	vk->vkCmdSetDepthClipNegativeOneToOneEXT = (PFN_vkCmdSetDepthClipNegativeOneToOneEXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetDepthClipNegativeOneToOneEXT");
	vk->vkCmdSetCoverageModulationTableEnableNV = (PFN_vkCmdSetCoverageModulationTableEnableNV)vk->vkGetDeviceProcAddr(device, "vkCmdSetCoverageModulationTableEnableNV");
	vk->vkCmdSetProvokingVertexModeEXT = (PFN_vkCmdSetProvokingVertexModeEXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetProvokingVertexModeEXT");
	vk->vkCmdSetDepthClipEnableEXT = (PFN_vkCmdSetDepthClipEnableEXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetDepthClipEnableEXT");
	vk->vkCmdSetShadingRateImageEnableNV = (PFN_vkCmdSetShadingRateImageEnableNV)vk->vkGetDeviceProcAddr(device, "vkCmdSetShadingRateImageEnableNV");
	vk->vkCmdSetCoverageToColorLocationNV = (PFN_vkCmdSetCoverageToColorLocationNV)vk->vkGetDeviceProcAddr(device, "vkCmdSetCoverageToColorLocationNV");
	vk->vkCmdSetSampleLocationsEnableEXT = (PFN_vkCmdSetSampleLocationsEnableEXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetSampleLocationsEnableEXT");
	vk->vkCmdSetLineRasterizationModeEXT = (PFN_vkCmdSetLineRasterizationModeEXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetLineRasterizationModeEXT");
	vk->vkCmdSetConservativeRasterizationModeEXT = (PFN_vkCmdSetConservativeRasterizationModeEXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetConservativeRasterizationModeEXT");
	vk->vkCmdSetDepthClampEnableEXT = (PFN_vkCmdSetDepthClampEnableEXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetDepthClampEnableEXT");
	vk->vkCmdSetColorWriteMaskEXT = (PFN_vkCmdSetColorWriteMaskEXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetColorWriteMaskEXT");
	vk->vkCmdSetColorBlendAdvancedEXT = (PFN_vkCmdSetColorBlendAdvancedEXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetColorBlendAdvancedEXT");
	vk->vkCmdSetLogicOpEnableEXT = (PFN_vkCmdSetLogicOpEnableEXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetLogicOpEnableEXT");
	vk->vkCmdSetAlphaToOneEnableEXT = (PFN_vkCmdSetAlphaToOneEnableEXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetAlphaToOneEnableEXT");
	vk->vkCmdSetViewportWScalingEnableNV = (PFN_vkCmdSetViewportWScalingEnableNV)vk->vkGetDeviceProcAddr(device, "vkCmdSetViewportWScalingEnableNV");
	vk->vkCmdSetRasterizationStreamEXT = (PFN_vkCmdSetRasterizationStreamEXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetRasterizationStreamEXT");
	vk->vkCmdSetColorBlendEquationEXT = (PFN_vkCmdSetColorBlendEquationEXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetColorBlendEquationEXT");
	vk->vkCmdSetSampleMaskEXT = (PFN_vkCmdSetSampleMaskEXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetSampleMaskEXT");
	vk->vkCmdSetAlphaToCoverageEnableEXT = (PFN_vkCmdSetAlphaToCoverageEnableEXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetAlphaToCoverageEnableEXT");
	vk->vkCmdSetColorBlendEnableEXT = (PFN_vkCmdSetColorBlendEnableEXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetColorBlendEnableEXT");
	vk->vkCmdSetTessellationDomainOriginEXT = (PFN_vkCmdSetTessellationDomainOriginEXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetTessellationDomainOriginEXT");
	vk->vkCmdSetExtraPrimitiveOverestimationSizeEXT = (PFN_vkCmdSetExtraPrimitiveOverestimationSizeEXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetExtraPrimitiveOverestimationSizeEXT");
	vk->vkCmdSetViewportSwizzleNV = (PFN_vkCmdSetViewportSwizzleNV)vk->vkGetDeviceProcAddr(device, "vkCmdSetViewportSwizzleNV");
	vk->vkCmdSetCoverageToColorEnableNV = (PFN_vkCmdSetCoverageToColorEnableNV)vk->vkGetDeviceProcAddr(device, "vkCmdSetCoverageToColorEnableNV");
	vk->vkCmdSetCoverageModulationModeNV = (PFN_vkCmdSetCoverageModulationModeNV)vk->vkGetDeviceProcAddr(device, "vkCmdSetCoverageModulationModeNV");
	vk->vkCmdSetCoverageModulationTableNV = (PFN_vkCmdSetCoverageModulationTableNV)vk->vkGetDeviceProcAddr(device, "vkCmdSetCoverageModulationTableNV");
	vk->vkCmdSetCoverageReductionModeNV = (PFN_vkCmdSetCoverageReductionModeNV)vk->vkGetDeviceProcAddr(device, "vkCmdSetCoverageReductionModeNV");
#endif // defined(VK_EXT_extended_dynamic_state3) || defined(VK_EXT_shader_object)
#if defined(VK_EXT_external_memory_host)
	vk->vkGetMemoryHostPointerPropertiesEXT = (PFN_vkGetMemoryHostPointerPropertiesEXT)vk->vkGetDeviceProcAddr(device, "vkGetMemoryHostPointerPropertiesEXT");
#endif // defined(VK_EXT_external_memory_host)
#if defined(VK_EXT_external_memory_metal)
	vk->vkGetMemoryMetalHandleEXT = (PFN_vkGetMemoryMetalHandleEXT)vk->vkGetDeviceProcAddr(device, "vkGetMemoryMetalHandleEXT");
	vk->vkGetMemoryMetalHandlePropertiesEXT = (PFN_vkGetMemoryMetalHandlePropertiesEXT)vk->vkGetDeviceProcAddr(device, "vkGetMemoryMetalHandlePropertiesEXT");
#endif // defined(VK_EXT_external_memory_metal)
#if defined(VK_EXT_fragment_density_map_offset)
	vk->vkCmdEndRendering2EXT = (PFN_vkCmdEndRendering2EXT)vk->vkGetDeviceProcAddr(device, "vkCmdEndRendering2EXT");
#endif // defined(VK_EXT_fragment_density_map_offset)
#if defined(VK_EXT_full_screen_exclusive)
	vk->vkGetDeviceGroupSurfacePresentModes2EXT = (PFN_vkGetDeviceGroupSurfacePresentModes2EXT)vk->vkGetDeviceProcAddr(device, "vkGetDeviceGroupSurfacePresentModes2EXT");
	vk->vkAcquireFullScreenExclusiveModeEXT = (PFN_vkAcquireFullScreenExclusiveModeEXT)vk->vkGetDeviceProcAddr(device, "vkAcquireFullScreenExclusiveModeEXT");
	vk->vkReleaseFullScreenExclusiveModeEXT = (PFN_vkReleaseFullScreenExclusiveModeEXT)vk->vkGetDeviceProcAddr(device, "vkReleaseFullScreenExclusiveModeEXT");
#endif // defined(VK_EXT_full_screen_exclusive)
#if defined(VK_EXT_hdr_metadata)
	vk->vkSetHdrMetadataEXT = (PFN_vkSetHdrMetadataEXT)vk->vkGetDeviceProcAddr(device, "vkSetHdrMetadataEXT");
#endif // defined(VK_EXT_hdr_metadata)
#if defined(VK_EXT_host_image_copy)
	vk->vkCopyImageToImageEXT = (PFN_vkCopyImageToImageEXT)vk->vkGetDeviceProcAddr(device, "vkCopyImageToImageEXT");
	vk->vkCopyMemoryToImageEXT = (PFN_vkCopyMemoryToImageEXT)vk->vkGetDeviceProcAddr(device, "vkCopyMemoryToImageEXT");
	vk->vkCopyImageToMemoryEXT = (PFN_vkCopyImageToMemoryEXT)vk->vkGetDeviceProcAddr(device, "vkCopyImageToMemoryEXT");
	vk->vkTransitionImageLayoutEXT = (PFN_vkTransitionImageLayoutEXT)vk->vkGetDeviceProcAddr(device, "vkTransitionImageLayoutEXT");
#endif // defined(VK_EXT_host_image_copy)
#if defined(VK_EXT_host_image_copy) || defined(VK_EXT_image_compression_control)
	vk->vkGetImageSubresourceLayout2EXT = (PFN_vkGetImageSubresourceLayout2EXT)vk->vkGetDeviceProcAddr(device, "vkGetImageSubresourceLayout2EXT");
#endif // defined(VK_EXT_host_image_copy) || defined(VK_EXT_image_compression_control)
#if defined(VK_EXT_host_query_reset)
	vk->vkResetQueryPoolEXT = (PFN_vkResetQueryPoolEXT)vk->vkGetDeviceProcAddr(device, "vkResetQueryPoolEXT");
#endif // defined(VK_EXT_host_query_reset)
#if defined(VK_EXT_image_drm_format_modifier)
	vk->vkGetImageDrmFormatModifierPropertiesEXT = (PFN_vkGetImageDrmFormatModifierPropertiesEXT)vk->vkGetDeviceProcAddr(device, "vkGetImageDrmFormatModifierPropertiesEXT");
#endif // defined(VK_EXT_image_drm_format_modifier)
#if defined(VK_EXT_line_rasterization)
	vk->vkCmdSetLineStippleEXT = (PFN_vkCmdSetLineStippleEXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetLineStippleEXT");
#endif // defined(VK_EXT_line_rasterization)
#if defined(VK_EXT_mesh_shader)
	vk->vkCmdDrawMeshTasksEXT = (PFN_vkCmdDrawMeshTasksEXT)vk->vkGetDeviceProcAddr(device, "vkCmdDrawMeshTasksEXT");
	vk->vkCmdDrawMeshTasksIndirectEXT = (PFN_vkCmdDrawMeshTasksIndirectEXT)vk->vkGetDeviceProcAddr(device, "vkCmdDrawMeshTasksIndirectEXT");
	vk->vkCmdDrawMeshTasksIndirectCountEXT = (PFN_vkCmdDrawMeshTasksIndirectCountEXT)vk->vkGetDeviceProcAddr(device, "vkCmdDrawMeshTasksIndirectCountEXT");
#endif // defined(VK_EXT_mesh_shader)
#if defined(VK_EXT_metal_objects)
	vk->vkExportMetalObjectsEXT = (PFN_vkExportMetalObjectsEXT)vk->vkGetDeviceProcAddr(device, "vkExportMetalObjectsEXT");
#endif // defined(VK_EXT_metal_objects)
#if defined(VK_EXT_multi_draw)
	vk->vkCmdDrawMultiEXT = (PFN_vkCmdDrawMultiEXT)vk->vkGetDeviceProcAddr(device, "vkCmdDrawMultiEXT");
	vk->vkCmdDrawMultiIndexedEXT = (PFN_vkCmdDrawMultiIndexedEXT)vk->vkGetDeviceProcAddr(device, "vkCmdDrawMultiIndexedEXT");
#endif // defined(VK_EXT_multi_draw)
#if defined(VK_EXT_opacity_micromap)
	vk->vkGetDeviceMicromapCompatibilityEXT = (PFN_vkGetDeviceMicromapCompatibilityEXT)vk->vkGetDeviceProcAddr(device, "vkGetDeviceMicromapCompatibilityEXT");
	vk->vkGetMicromapBuildSizesEXT = (PFN_vkGetMicromapBuildSizesEXT)vk->vkGetDeviceProcAddr(device, "vkGetMicromapBuildSizesEXT");
	vk->vkCopyMicromapEXT = (PFN_vkCopyMicromapEXT)vk->vkGetDeviceProcAddr(device, "vkCopyMicromapEXT");
	vk->vkCopyMemoryToMicromapEXT = (PFN_vkCopyMemoryToMicromapEXT)vk->vkGetDeviceProcAddr(device, "vkCopyMemoryToMicromapEXT");
	vk->vkCmdWriteMicromapsPropertiesEXT = (PFN_vkCmdWriteMicromapsPropertiesEXT)vk->vkGetDeviceProcAddr(device, "vkCmdWriteMicromapsPropertiesEXT");
	vk->vkCreateMicromapEXT = (PFN_vkCreateMicromapEXT)vk->vkGetDeviceProcAddr(device, "vkCreateMicromapEXT");
	vk->vkDestroyMicromapEXT = (PFN_vkDestroyMicromapEXT)vk->vkGetDeviceProcAddr(device, "vkDestroyMicromapEXT");
	vk->vkBuildMicromapsEXT = (PFN_vkBuildMicromapsEXT)vk->vkGetDeviceProcAddr(device, "vkBuildMicromapsEXT");
	vk->vkCmdBuildMicromapsEXT = (PFN_vkCmdBuildMicromapsEXT)vk->vkGetDeviceProcAddr(device, "vkCmdBuildMicromapsEXT");
	vk->vkCopyMicromapToMemoryEXT = (PFN_vkCopyMicromapToMemoryEXT)vk->vkGetDeviceProcAddr(device, "vkCopyMicromapToMemoryEXT");
	vk->vkWriteMicromapsPropertiesEXT = (PFN_vkWriteMicromapsPropertiesEXT)vk->vkGetDeviceProcAddr(device, "vkWriteMicromapsPropertiesEXT");
	vk->vkCmdCopyMicromapEXT = (PFN_vkCmdCopyMicromapEXT)vk->vkGetDeviceProcAddr(device, "vkCmdCopyMicromapEXT");
	vk->vkCmdCopyMicromapToMemoryEXT = (PFN_vkCmdCopyMicromapToMemoryEXT)vk->vkGetDeviceProcAddr(device, "vkCmdCopyMicromapToMemoryEXT");
	vk->vkCmdCopyMemoryToMicromapEXT = (PFN_vkCmdCopyMemoryToMicromapEXT)vk->vkGetDeviceProcAddr(device, "vkCmdCopyMemoryToMicromapEXT");
#endif // defined(VK_EXT_opacity_micromap)
#if defined(VK_EXT_pageable_device_local_memory)
	vk->vkSetDeviceMemoryPriorityEXT = (PFN_vkSetDeviceMemoryPriorityEXT)vk->vkGetDeviceProcAddr(device, "vkSetDeviceMemoryPriorityEXT");
#endif // defined(VK_EXT_pageable_device_local_memory)
#if defined(VK_EXT_pipeline_properties)
	vk->vkGetPipelinePropertiesEXT = (PFN_vkGetPipelinePropertiesEXT)vk->vkGetDeviceProcAddr(device, "vkGetPipelinePropertiesEXT");
#endif // defined(VK_EXT_pipeline_properties)
#if defined(VK_EXT_private_data)
	vk->vkDestroyPrivateDataSlotEXT = (PFN_vkDestroyPrivateDataSlotEXT)vk->vkGetDeviceProcAddr(device, "vkDestroyPrivateDataSlotEXT");
	vk->vkSetPrivateDataEXT = (PFN_vkSetPrivateDataEXT)vk->vkGetDeviceProcAddr(device, "vkSetPrivateDataEXT");
	vk->vkCreatePrivateDataSlotEXT = (PFN_vkCreatePrivateDataSlotEXT)vk->vkGetDeviceProcAddr(device, "vkCreatePrivateDataSlotEXT");
	vk->vkGetPrivateDataEXT = (PFN_vkGetPrivateDataEXT)vk->vkGetDeviceProcAddr(device, "vkGetPrivateDataEXT");
#endif // defined(VK_EXT_private_data)
#if defined(VK_EXT_sample_locations)
	vk->vkCmdSetSampleLocationsEXT = (PFN_vkCmdSetSampleLocationsEXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetSampleLocationsEXT");
#endif // defined(VK_EXT_sample_locations)
#if defined(VK_EXT_shader_module_identifier)
	vk->vkGetShaderModuleCreateInfoIdentifierEXT = (PFN_vkGetShaderModuleCreateInfoIdentifierEXT)vk->vkGetDeviceProcAddr(device, "vkGetShaderModuleCreateInfoIdentifierEXT");
	vk->vkGetShaderModuleIdentifierEXT = (PFN_vkGetShaderModuleIdentifierEXT)vk->vkGetDeviceProcAddr(device, "vkGetShaderModuleIdentifierEXT");
#endif // defined(VK_EXT_shader_module_identifier)
#if defined(VK_EXT_shader_object)
	vk->vkDestroyShaderEXT = (PFN_vkDestroyShaderEXT)vk->vkGetDeviceProcAddr(device, "vkDestroyShaderEXT");
	vk->vkGetShaderBinaryDataEXT = (PFN_vkGetShaderBinaryDataEXT)vk->vkGetDeviceProcAddr(device, "vkGetShaderBinaryDataEXT");
	vk->vkCmdBindShadersEXT = (PFN_vkCmdBindShadersEXT)vk->vkGetDeviceProcAddr(device, "vkCmdBindShadersEXT");
	vk->vkCreateShadersEXT = (PFN_vkCreateShadersEXT)vk->vkGetDeviceProcAddr(device, "vkCreateShadersEXT");
#endif // defined(VK_EXT_shader_object)
#if defined(VK_EXT_shader_object) || defined(VK_EXT_vertex_input_dynamic_state)
	vk->vkCmdSetVertexInputEXT = (PFN_vkCmdSetVertexInputEXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetVertexInputEXT");
#endif // defined(VK_EXT_shader_object) || defined(VK_EXT_vertex_input_dynamic_state)
#if defined(VK_EXT_swapchain_maintenance1)
	vk->vkReleaseSwapchainImagesEXT = (PFN_vkReleaseSwapchainImagesEXT)vk->vkGetDeviceProcAddr(device, "vkReleaseSwapchainImagesEXT");
#endif // defined(VK_EXT_swapchain_maintenance1)
#if defined(VK_EXT_transform_feedback)
	vk->vkCmdEndQueryIndexedEXT = (PFN_vkCmdEndQueryIndexedEXT)vk->vkGetDeviceProcAddr(device, "vkCmdEndQueryIndexedEXT");
	vk->vkCmdEndTransformFeedbackEXT = (PFN_vkCmdEndTransformFeedbackEXT)vk->vkGetDeviceProcAddr(device, "vkCmdEndTransformFeedbackEXT");
	vk->vkCmdDrawIndirectByteCountEXT = (PFN_vkCmdDrawIndirectByteCountEXT)vk->vkGetDeviceProcAddr(device, "vkCmdDrawIndirectByteCountEXT");
	vk->vkCmdBindTransformFeedbackBuffersEXT = (PFN_vkCmdBindTransformFeedbackBuffersEXT)vk->vkGetDeviceProcAddr(device, "vkCmdBindTransformFeedbackBuffersEXT");
	vk->vkCmdBeginTransformFeedbackEXT = (PFN_vkCmdBeginTransformFeedbackEXT)vk->vkGetDeviceProcAddr(device, "vkCmdBeginTransformFeedbackEXT");
	vk->vkCmdBeginQueryIndexedEXT = (PFN_vkCmdBeginQueryIndexedEXT)vk->vkGetDeviceProcAddr(device, "vkCmdBeginQueryIndexedEXT");
#endif // defined(VK_EXT_transform_feedback)
#if defined(VK_EXT_validation_cache)
	vk->vkGetValidationCacheDataEXT = (PFN_vkGetValidationCacheDataEXT)vk->vkGetDeviceProcAddr(device, "vkGetValidationCacheDataEXT");
	vk->vkMergeValidationCachesEXT = (PFN_vkMergeValidationCachesEXT)vk->vkGetDeviceProcAddr(device, "vkMergeValidationCachesEXT");
	vk->vkCreateValidationCacheEXT = (PFN_vkCreateValidationCacheEXT)vk->vkGetDeviceProcAddr(device, "vkCreateValidationCacheEXT");
	vk->vkDestroyValidationCacheEXT = (PFN_vkDestroyValidationCacheEXT)vk->vkGetDeviceProcAddr(device, "vkDestroyValidationCacheEXT");
#endif // defined(VK_EXT_validation_cache)
#if defined(VK_FUCHSIA_buffer_collection)
	vk->vkSetBufferCollectionImageConstraintsFUCHSIA = (PFN_vkSetBufferCollectionImageConstraintsFUCHSIA)vk->vkGetDeviceProcAddr(device, "vkSetBufferCollectionImageConstraintsFUCHSIA");
	vk->vkDestroyBufferCollectionFUCHSIA = (PFN_vkDestroyBufferCollectionFUCHSIA)vk->vkGetDeviceProcAddr(device, "vkDestroyBufferCollectionFUCHSIA");
	vk->vkCreateBufferCollectionFUCHSIA = (PFN_vkCreateBufferCollectionFUCHSIA)vk->vkGetDeviceProcAddr(device, "vkCreateBufferCollectionFUCHSIA");
	vk->vkSetBufferCollectionBufferConstraintsFUCHSIA = (PFN_vkSetBufferCollectionBufferConstraintsFUCHSIA)vk->vkGetDeviceProcAddr(device, "vkSetBufferCollectionBufferConstraintsFUCHSIA");
	vk->vkGetBufferCollectionPropertiesFUCHSIA = (PFN_vkGetBufferCollectionPropertiesFUCHSIA)vk->vkGetDeviceProcAddr(device, "vkGetBufferCollectionPropertiesFUCHSIA");
#endif // defined(VK_FUCHSIA_buffer_collection)
#if defined(VK_FUCHSIA_external_memory)
	vk->vkGetMemoryZirconHandleFUCHSIA = (PFN_vkGetMemoryZirconHandleFUCHSIA)vk->vkGetDeviceProcAddr(device, "vkGetMemoryZirconHandleFUCHSIA");
	vk->vkGetMemoryZirconHandlePropertiesFUCHSIA = (PFN_vkGetMemoryZirconHandlePropertiesFUCHSIA)vk->vkGetDeviceProcAddr(device, "vkGetMemoryZirconHandlePropertiesFUCHSIA");
#endif // defined(VK_FUCHSIA_external_memory)
#if defined(VK_FUCHSIA_external_semaphore)
	vk->vkImportSemaphoreZirconHandleFUCHSIA = (PFN_vkImportSemaphoreZirconHandleFUCHSIA)vk->vkGetDeviceProcAddr(device, "vkImportSemaphoreZirconHandleFUCHSIA");
	vk->vkGetSemaphoreZirconHandleFUCHSIA = (PFN_vkGetSemaphoreZirconHandleFUCHSIA)vk->vkGetDeviceProcAddr(device, "vkGetSemaphoreZirconHandleFUCHSIA");
#endif // defined(VK_FUCHSIA_external_semaphore)
#if defined(VK_GOOGLE_display_timing)
	vk->vkGetRefreshCycleDurationGOOGLE = (PFN_vkGetRefreshCycleDurationGOOGLE)vk->vkGetDeviceProcAddr(device, "vkGetRefreshCycleDurationGOOGLE");
	vk->vkGetPastPresentationTimingGOOGLE = (PFN_vkGetPastPresentationTimingGOOGLE)vk->vkGetDeviceProcAddr(device, "vkGetPastPresentationTimingGOOGLE");
#endif // defined(VK_GOOGLE_display_timing)
#if defined(VK_HUAWEI_cluster_culling_shader)
	vk->vkCmdDrawClusterHUAWEI = (PFN_vkCmdDrawClusterHUAWEI)vk->vkGetDeviceProcAddr(device, "vkCmdDrawClusterHUAWEI");
	vk->vkCmdDrawClusterIndirectHUAWEI = (PFN_vkCmdDrawClusterIndirectHUAWEI)vk->vkGetDeviceProcAddr(device, "vkCmdDrawClusterIndirectHUAWEI");
#endif // defined(VK_HUAWEI_cluster_culling_shader)
#if defined(VK_HUAWEI_invocation_mask)
	vk->vkCmdBindInvocationMaskHUAWEI = (PFN_vkCmdBindInvocationMaskHUAWEI)vk->vkGetDeviceProcAddr(device, "vkCmdBindInvocationMaskHUAWEI");
#endif // defined(VK_HUAWEI_invocation_mask)
#if defined(VK_HUAWEI_subpass_shading)
	vk->vkCmdSubpassShadingHUAWEI = (PFN_vkCmdSubpassShadingHUAWEI)vk->vkGetDeviceProcAddr(device, "vkCmdSubpassShadingHUAWEI");
	vk->vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI = (PFN_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI)vk->vkGetDeviceProcAddr(device, "vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI");
#endif // defined(VK_HUAWEI_subpass_shading)
#if defined(VK_INTEL_performance_query)
	vk->vkCmdSetPerformanceStreamMarkerINTEL = (PFN_vkCmdSetPerformanceStreamMarkerINTEL)vk->vkGetDeviceProcAddr(device, "vkCmdSetPerformanceStreamMarkerINTEL");
	vk->vkAcquirePerformanceConfigurationINTEL = (PFN_vkAcquirePerformanceConfigurationINTEL)vk->vkGetDeviceProcAddr(device, "vkAcquirePerformanceConfigurationINTEL");
	vk->vkInitializePerformanceApiINTEL = (PFN_vkInitializePerformanceApiINTEL)vk->vkGetDeviceProcAddr(device, "vkInitializePerformanceApiINTEL");
	vk->vkUninitializePerformanceApiINTEL = (PFN_vkUninitializePerformanceApiINTEL)vk->vkGetDeviceProcAddr(device, "vkUninitializePerformanceApiINTEL");
	vk->vkCmdSetPerformanceMarkerINTEL = (PFN_vkCmdSetPerformanceMarkerINTEL)vk->vkGetDeviceProcAddr(device, "vkCmdSetPerformanceMarkerINTEL");
	vk->vkCmdSetPerformanceOverrideINTEL = (PFN_vkCmdSetPerformanceOverrideINTEL)vk->vkGetDeviceProcAddr(device, "vkCmdSetPerformanceOverrideINTEL");
	vk->vkReleasePerformanceConfigurationINTEL = (PFN_vkReleasePerformanceConfigurationINTEL)vk->vkGetDeviceProcAddr(device, "vkReleasePerformanceConfigurationINTEL");
	vk->vkQueueSetPerformanceConfigurationINTEL = (PFN_vkQueueSetPerformanceConfigurationINTEL)vk->vkGetDeviceProcAddr(device, "vkQueueSetPerformanceConfigurationINTEL");
	vk->vkGetPerformanceParameterINTEL = (PFN_vkGetPerformanceParameterINTEL)vk->vkGetDeviceProcAddr(device, "vkGetPerformanceParameterINTEL");
#endif // defined(VK_INTEL_performance_query)
#if defined(VK_KHR_acceleration_structure)
	vk->vkGetAccelerationStructureBuildSizesKHR = (PFN_vkGetAccelerationStructureBuildSizesKHR)vk->vkGetDeviceProcAddr(device, "vkGetAccelerationStructureBuildSizesKHR");
	vk->vkCmdBuildAccelerationStructuresIndirectKHR = (PFN_vkCmdBuildAccelerationStructuresIndirectKHR)vk->vkGetDeviceProcAddr(device, "vkCmdBuildAccelerationStructuresIndirectKHR");
	vk->vkCopyAccelerationStructureToMemoryKHR = (PFN_vkCopyAccelerationStructureToMemoryKHR)vk->vkGetDeviceProcAddr(device, "vkCopyAccelerationStructureToMemoryKHR");
	vk->vkCreateAccelerationStructureKHR = (PFN_vkCreateAccelerationStructureKHR)vk->vkGetDeviceProcAddr(device, "vkCreateAccelerationStructureKHR");
	vk->vkDestroyAccelerationStructureKHR = (PFN_vkDestroyAccelerationStructureKHR)vk->vkGetDeviceProcAddr(device, "vkDestroyAccelerationStructureKHR");
	vk->vkCmdBuildAccelerationStructuresKHR = (PFN_vkCmdBuildAccelerationStructuresKHR)vk->vkGetDeviceProcAddr(device, "vkCmdBuildAccelerationStructuresKHR");
	vk->vkBuildAccelerationStructuresKHR = (PFN_vkBuildAccelerationStructuresKHR)vk->vkGetDeviceProcAddr(device, "vkBuildAccelerationStructuresKHR");
	vk->vkCopyAccelerationStructureKHR = (PFN_vkCopyAccelerationStructureKHR)vk->vkGetDeviceProcAddr(device, "vkCopyAccelerationStructureKHR");
	vk->vkCopyMemoryToAccelerationStructureKHR = (PFN_vkCopyMemoryToAccelerationStructureKHR)vk->vkGetDeviceProcAddr(device, "vkCopyMemoryToAccelerationStructureKHR");
	vk->vkWriteAccelerationStructuresPropertiesKHR = (PFN_vkWriteAccelerationStructuresPropertiesKHR)vk->vkGetDeviceProcAddr(device, "vkWriteAccelerationStructuresPropertiesKHR");
	vk->vkCmdCopyAccelerationStructureKHR = (PFN_vkCmdCopyAccelerationStructureKHR)vk->vkGetDeviceProcAddr(device, "vkCmdCopyAccelerationStructureKHR");
	vk->vkCmdCopyAccelerationStructureToMemoryKHR = (PFN_vkCmdCopyAccelerationStructureToMemoryKHR)vk->vkGetDeviceProcAddr(device, "vkCmdCopyAccelerationStructureToMemoryKHR");
	vk->vkCmdCopyMemoryToAccelerationStructureKHR = (PFN_vkCmdCopyMemoryToAccelerationStructureKHR)vk->vkGetDeviceProcAddr(device, "vkCmdCopyMemoryToAccelerationStructureKHR");
	vk->vkGetAccelerationStructureDeviceAddressKHR = (PFN_vkGetAccelerationStructureDeviceAddressKHR)vk->vkGetDeviceProcAddr(device, "vkGetAccelerationStructureDeviceAddressKHR");
	vk->vkCmdWriteAccelerationStructuresPropertiesKHR = (PFN_vkCmdWriteAccelerationStructuresPropertiesKHR)vk->vkGetDeviceProcAddr(device, "vkCmdWriteAccelerationStructuresPropertiesKHR");
	vk->vkGetDeviceAccelerationStructureCompatibilityKHR = (PFN_vkGetDeviceAccelerationStructureCompatibilityKHR)vk->vkGetDeviceProcAddr(device, "vkGetDeviceAccelerationStructureCompatibilityKHR");
#endif // defined(VK_KHR_acceleration_structure)
#if defined(VK_KHR_bind_memory2)
	vk->vkBindBufferMemory2KHR = (PFN_vkBindBufferMemory2KHR)vk->vkGetDeviceProcAddr(device, "vkBindBufferMemory2KHR");
	vk->vkBindImageMemory2KHR = (PFN_vkBindImageMemory2KHR)vk->vkGetDeviceProcAddr(device, "vkBindImageMemory2KHR");
#endif // defined(VK_KHR_bind_memory2)
#if defined(VK_KHR_buffer_device_address)
	vk->vkGetDeviceMemoryOpaqueCaptureAddressKHR = (PFN_vkGetDeviceMemoryOpaqueCaptureAddressKHR)vk->vkGetDeviceProcAddr(device, "vkGetDeviceMemoryOpaqueCaptureAddressKHR");
	vk->vkGetBufferDeviceAddressKHR = (PFN_vkGetBufferDeviceAddressKHR)vk->vkGetDeviceProcAddr(device, "vkGetBufferDeviceAddressKHR");
	vk->vkGetBufferOpaqueCaptureAddressKHR = (PFN_vkGetBufferOpaqueCaptureAddressKHR)vk->vkGetDeviceProcAddr(device, "vkGetBufferOpaqueCaptureAddressKHR");
#endif // defined(VK_KHR_buffer_device_address)
#if defined(VK_KHR_calibrated_timestamps)
	vk->vkGetCalibratedTimestampsKHR = (PFN_vkGetCalibratedTimestampsKHR)vk->vkGetDeviceProcAddr(device, "vkGetCalibratedTimestampsKHR");
#endif // defined(VK_KHR_calibrated_timestamps)
#if defined(VK_KHR_copy_commands2)
	vk->vkCmdCopyBuffer2KHR = (PFN_vkCmdCopyBuffer2KHR)vk->vkGetDeviceProcAddr(device, "vkCmdCopyBuffer2KHR");
	vk->vkCmdCopyImage2KHR = (PFN_vkCmdCopyImage2KHR)vk->vkGetDeviceProcAddr(device, "vkCmdCopyImage2KHR");
	vk->vkCmdCopyBufferToImage2KHR = (PFN_vkCmdCopyBufferToImage2KHR)vk->vkGetDeviceProcAddr(device, "vkCmdCopyBufferToImage2KHR");
	vk->vkCmdCopyImageToBuffer2KHR = (PFN_vkCmdCopyImageToBuffer2KHR)vk->vkGetDeviceProcAddr(device, "vkCmdCopyImageToBuffer2KHR");
	vk->vkCmdBlitImage2KHR = (PFN_vkCmdBlitImage2KHR)vk->vkGetDeviceProcAddr(device, "vkCmdBlitImage2KHR");
	vk->vkCmdResolveImage2KHR = (PFN_vkCmdResolveImage2KHR)vk->vkGetDeviceProcAddr(device, "vkCmdResolveImage2KHR");
#endif // defined(VK_KHR_copy_commands2)
#if defined(VK_KHR_create_renderpass2)
	vk->vkCreateRenderPass2KHR = (PFN_vkCreateRenderPass2KHR)vk->vkGetDeviceProcAddr(device, "vkCreateRenderPass2KHR");
	vk->vkCmdBeginRenderPass2KHR = (PFN_vkCmdBeginRenderPass2KHR)vk->vkGetDeviceProcAddr(device, "vkCmdBeginRenderPass2KHR");
	vk->vkCmdNextSubpass2KHR = (PFN_vkCmdNextSubpass2KHR)vk->vkGetDeviceProcAddr(device, "vkCmdNextSubpass2KHR");
	vk->vkCmdEndRenderPass2KHR = (PFN_vkCmdEndRenderPass2KHR)vk->vkGetDeviceProcAddr(device, "vkCmdEndRenderPass2KHR");
#endif // defined(VK_KHR_create_renderpass2)
#if defined(VK_KHR_deferred_host_operations)
	vk->vkDeferredOperationJoinKHR = (PFN_vkDeferredOperationJoinKHR)vk->vkGetDeviceProcAddr(device, "vkDeferredOperationJoinKHR");
	vk->vkCreateDeferredOperationKHR = (PFN_vkCreateDeferredOperationKHR)vk->vkGetDeviceProcAddr(device, "vkCreateDeferredOperationKHR");
	vk->vkDestroyDeferredOperationKHR = (PFN_vkDestroyDeferredOperationKHR)vk->vkGetDeviceProcAddr(device, "vkDestroyDeferredOperationKHR");
	vk->vkGetDeferredOperationMaxConcurrencyKHR = (PFN_vkGetDeferredOperationMaxConcurrencyKHR)vk->vkGetDeviceProcAddr(device, "vkGetDeferredOperationMaxConcurrencyKHR");
	vk->vkGetDeferredOperationResultKHR = (PFN_vkGetDeferredOperationResultKHR)vk->vkGetDeviceProcAddr(device, "vkGetDeferredOperationResultKHR");
#endif // defined(VK_KHR_deferred_host_operations)
#if defined(VK_KHR_descriptor_update_template)
	vk->vkCreateDescriptorUpdateTemplateKHR = (PFN_vkCreateDescriptorUpdateTemplateKHR)vk->vkGetDeviceProcAddr(device, "vkCreateDescriptorUpdateTemplateKHR");
	vk->vkDestroyDescriptorUpdateTemplateKHR = (PFN_vkDestroyDescriptorUpdateTemplateKHR)vk->vkGetDeviceProcAddr(device, "vkDestroyDescriptorUpdateTemplateKHR");
	vk->vkUpdateDescriptorSetWithTemplateKHR = (PFN_vkUpdateDescriptorSetWithTemplateKHR)vk->vkGetDeviceProcAddr(device, "vkUpdateDescriptorSetWithTemplateKHR");
#endif // defined(VK_KHR_descriptor_update_template)
#if defined(VK_KHR_descriptor_update_template) || defined(VK_KHR_push_descriptor)
	vk->vkCmdPushDescriptorSetWithTemplateKHR = (PFN_vkCmdPushDescriptorSetWithTemplateKHR)vk->vkGetDeviceProcAddr(device, "vkCmdPushDescriptorSetWithTemplateKHR");
#endif // defined(VK_KHR_descriptor_update_template) || defined(VK_KHR_push_descriptor)
#if defined(VK_KHR_device_group)
	vk->vkGetDeviceGroupPeerMemoryFeaturesKHR = (PFN_vkGetDeviceGroupPeerMemoryFeaturesKHR)vk->vkGetDeviceProcAddr(device, "vkGetDeviceGroupPeerMemoryFeaturesKHR");
	vk->vkCmdSetDeviceMaskKHR = (PFN_vkCmdSetDeviceMaskKHR)vk->vkGetDeviceProcAddr(device, "vkCmdSetDeviceMaskKHR");
	vk->vkCmdDispatchBaseKHR = (PFN_vkCmdDispatchBaseKHR)vk->vkGetDeviceProcAddr(device, "vkCmdDispatchBaseKHR");
#endif // defined(VK_KHR_device_group)
#if defined(VK_KHR_device_group) || defined(VK_KHR_swapchain)
	vk->vkGetDeviceGroupPresentCapabilitiesKHR = (PFN_vkGetDeviceGroupPresentCapabilitiesKHR)vk->vkGetDeviceProcAddr(device, "vkGetDeviceGroupPresentCapabilitiesKHR");
	vk->vkGetDeviceGroupSurfacePresentModesKHR = (PFN_vkGetDeviceGroupSurfacePresentModesKHR)vk->vkGetDeviceProcAddr(device, "vkGetDeviceGroupSurfacePresentModesKHR");
	vk->vkAcquireNextImage2KHR = (PFN_vkAcquireNextImage2KHR)vk->vkGetDeviceProcAddr(device, "vkAcquireNextImage2KHR");
#endif // defined(VK_KHR_device_group) || defined(VK_KHR_swapchain)
#if defined(VK_KHR_display_swapchain)
	vk->vkCreateSharedSwapchainsKHR = (PFN_vkCreateSharedSwapchainsKHR)vk->vkGetDeviceProcAddr(device, "vkCreateSharedSwapchainsKHR");
#endif // defined(VK_KHR_display_swapchain)
#if defined(VK_KHR_draw_indirect_count)
	vk->vkCmdDrawIndirectCountKHR = (PFN_vkCmdDrawIndirectCountKHR)vk->vkGetDeviceProcAddr(device, "vkCmdDrawIndirectCountKHR");
	vk->vkCmdDrawIndexedIndirectCountKHR = (PFN_vkCmdDrawIndexedIndirectCountKHR)vk->vkGetDeviceProcAddr(device, "vkCmdDrawIndexedIndirectCountKHR");
#endif // defined(VK_KHR_draw_indirect_count)
#if defined(VK_KHR_dynamic_rendering)
	vk->vkCmdBeginRenderingKHR = (PFN_vkCmdBeginRenderingKHR)vk->vkGetDeviceProcAddr(device, "vkCmdBeginRenderingKHR");
	vk->vkCmdEndRenderingKHR = (PFN_vkCmdEndRenderingKHR)vk->vkGetDeviceProcAddr(device, "vkCmdEndRenderingKHR");
#endif // defined(VK_KHR_dynamic_rendering)
#if defined(VK_KHR_dynamic_rendering_local_read)
	vk->vkCmdSetRenderingAttachmentLocationsKHR = (PFN_vkCmdSetRenderingAttachmentLocationsKHR)vk->vkGetDeviceProcAddr(device, "vkCmdSetRenderingAttachmentLocationsKHR");
	vk->vkCmdSetRenderingInputAttachmentIndicesKHR = (PFN_vkCmdSetRenderingInputAttachmentIndicesKHR)vk->vkGetDeviceProcAddr(device, "vkCmdSetRenderingInputAttachmentIndicesKHR");
#endif // defined(VK_KHR_dynamic_rendering_local_read)
#if defined(VK_KHR_external_fence_fd)
	vk->vkImportFenceFdKHR = (PFN_vkImportFenceFdKHR)vk->vkGetDeviceProcAddr(device, "vkImportFenceFdKHR");
	vk->vkGetFenceFdKHR = (PFN_vkGetFenceFdKHR)vk->vkGetDeviceProcAddr(device, "vkGetFenceFdKHR");
#endif // defined(VK_KHR_external_fence_fd)
#if defined(VK_KHR_external_fence_win32)
	vk->vkGetFenceWin32HandleKHR = (PFN_vkGetFenceWin32HandleKHR)vk->vkGetDeviceProcAddr(device, "vkGetFenceWin32HandleKHR");
	vk->vkImportFenceWin32HandleKHR = (PFN_vkImportFenceWin32HandleKHR)vk->vkGetDeviceProcAddr(device, "vkImportFenceWin32HandleKHR");
#endif // defined(VK_KHR_external_fence_win32)
#if defined(VK_KHR_external_memory_fd)
	vk->vkGetMemoryFdPropertiesKHR = (PFN_vkGetMemoryFdPropertiesKHR)vk->vkGetDeviceProcAddr(device, "vkGetMemoryFdPropertiesKHR");
	vk->vkGetMemoryFdKHR = (PFN_vkGetMemoryFdKHR)vk->vkGetDeviceProcAddr(device, "vkGetMemoryFdKHR");
#endif // defined(VK_KHR_external_memory_fd)
#if defined(VK_KHR_external_memory_win32)
	vk->vkGetMemoryWin32HandleKHR = (PFN_vkGetMemoryWin32HandleKHR)vk->vkGetDeviceProcAddr(device, "vkGetMemoryWin32HandleKHR");
	vk->vkGetMemoryWin32HandlePropertiesKHR = (PFN_vkGetMemoryWin32HandlePropertiesKHR)vk->vkGetDeviceProcAddr(device, "vkGetMemoryWin32HandlePropertiesKHR");
#endif // defined(VK_KHR_external_memory_win32)
#if defined(VK_KHR_external_semaphore_fd)
	vk->vkImportSemaphoreFdKHR = (PFN_vkImportSemaphoreFdKHR)vk->vkGetDeviceProcAddr(device, "vkImportSemaphoreFdKHR");
	vk->vkGetSemaphoreFdKHR = (PFN_vkGetSemaphoreFdKHR)vk->vkGetDeviceProcAddr(device, "vkGetSemaphoreFdKHR");
#endif // defined(VK_KHR_external_semaphore_fd)
#if defined(VK_KHR_external_semaphore_win32)
	vk->vkImportSemaphoreWin32HandleKHR = (PFN_vkImportSemaphoreWin32HandleKHR)vk->vkGetDeviceProcAddr(device, "vkImportSemaphoreWin32HandleKHR");
	vk->vkGetSemaphoreWin32HandleKHR = (PFN_vkGetSemaphoreWin32HandleKHR)vk->vkGetDeviceProcAddr(device, "vkGetSemaphoreWin32HandleKHR");
#endif // defined(VK_KHR_external_semaphore_win32)
#if defined(VK_KHR_fragment_shading_rate)
	vk->vkCmdSetFragmentShadingRateKHR = (PFN_vkCmdSetFragmentShadingRateKHR)vk->vkGetDeviceProcAddr(device, "vkCmdSetFragmentShadingRateKHR");
#endif // defined(VK_KHR_fragment_shading_rate)
#if defined(VK_KHR_get_memory_requirements2)
	vk->vkGetImageMemoryRequirements2KHR = (PFN_vkGetImageMemoryRequirements2KHR)vk->vkGetDeviceProcAddr(device, "vkGetImageMemoryRequirements2KHR");
	vk->vkGetBufferMemoryRequirements2KHR = (PFN_vkGetBufferMemoryRequirements2KHR)vk->vkGetDeviceProcAddr(device, "vkGetBufferMemoryRequirements2KHR");
	vk->vkGetImageSparseMemoryRequirements2KHR = (PFN_vkGetImageSparseMemoryRequirements2KHR)vk->vkGetDeviceProcAddr(device, "vkGetImageSparseMemoryRequirements2KHR");
#endif // defined(VK_KHR_get_memory_requirements2)
#if defined(VK_KHR_line_rasterization)
	vk->vkCmdSetLineStippleKHR = (PFN_vkCmdSetLineStippleKHR)vk->vkGetDeviceProcAddr(device, "vkCmdSetLineStippleKHR");
#endif // defined(VK_KHR_line_rasterization)
#if defined(VK_KHR_maintenance1)
	vk->vkTrimCommandPoolKHR = (PFN_vkTrimCommandPoolKHR)vk->vkGetDeviceProcAddr(device, "vkTrimCommandPoolKHR");
#endif // defined(VK_KHR_maintenance1)
#if defined(VK_KHR_maintenance3)
	vk->vkGetDescriptorSetLayoutSupportKHR = (PFN_vkGetDescriptorSetLayoutSupportKHR)vk->vkGetDeviceProcAddr(device, "vkGetDescriptorSetLayoutSupportKHR");
#endif // defined(VK_KHR_maintenance3)
#if defined(VK_KHR_maintenance4)
	vk->vkGetDeviceImageMemoryRequirementsKHR = (PFN_vkGetDeviceImageMemoryRequirementsKHR)vk->vkGetDeviceProcAddr(device, "vkGetDeviceImageMemoryRequirementsKHR");
	vk->vkGetDeviceBufferMemoryRequirementsKHR = (PFN_vkGetDeviceBufferMemoryRequirementsKHR)vk->vkGetDeviceProcAddr(device, "vkGetDeviceBufferMemoryRequirementsKHR");
	vk->vkGetDeviceImageSparseMemoryRequirementsKHR = (PFN_vkGetDeviceImageSparseMemoryRequirementsKHR)vk->vkGetDeviceProcAddr(device, "vkGetDeviceImageSparseMemoryRequirementsKHR");
#endif // defined(VK_KHR_maintenance4)
#if defined(VK_KHR_maintenance5)
	vk->vkCmdBindIndexBuffer2KHR = (PFN_vkCmdBindIndexBuffer2KHR)vk->vkGetDeviceProcAddr(device, "vkCmdBindIndexBuffer2KHR");
	vk->vkGetDeviceImageSubresourceLayoutKHR = (PFN_vkGetDeviceImageSubresourceLayoutKHR)vk->vkGetDeviceProcAddr(device, "vkGetDeviceImageSubresourceLayoutKHR");
	vk->vkGetRenderingAreaGranularityKHR = (PFN_vkGetRenderingAreaGranularityKHR)vk->vkGetDeviceProcAddr(device, "vkGetRenderingAreaGranularityKHR");
	vk->vkGetImageSubresourceLayout2KHR = (PFN_vkGetImageSubresourceLayout2KHR)vk->vkGetDeviceProcAddr(device, "vkGetImageSubresourceLayout2KHR");
#endif // defined(VK_KHR_maintenance5)
#if defined(VK_KHR_maintenance6)
	vk->vkCmdBindDescriptorSets2KHR = (PFN_vkCmdBindDescriptorSets2KHR)vk->vkGetDeviceProcAddr(device, "vkCmdBindDescriptorSets2KHR");
	vk->vkCmdBindDescriptorBufferEmbeddedSamplers2EXT = (PFN_vkCmdBindDescriptorBufferEmbeddedSamplers2EXT)vk->vkGetDeviceProcAddr(device, "vkCmdBindDescriptorBufferEmbeddedSamplers2EXT");
	vk->vkCmdPushConstants2KHR = (PFN_vkCmdPushConstants2KHR)vk->vkGetDeviceProcAddr(device, "vkCmdPushConstants2KHR");
	vk->vkCmdPushDescriptorSet2KHR = (PFN_vkCmdPushDescriptorSet2KHR)vk->vkGetDeviceProcAddr(device, "vkCmdPushDescriptorSet2KHR");
	vk->vkCmdPushDescriptorSetWithTemplate2KHR = (PFN_vkCmdPushDescriptorSetWithTemplate2KHR)vk->vkGetDeviceProcAddr(device, "vkCmdPushDescriptorSetWithTemplate2KHR");
	vk->vkCmdSetDescriptorBufferOffsets2EXT = (PFN_vkCmdSetDescriptorBufferOffsets2EXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetDescriptorBufferOffsets2EXT");
#endif // defined(VK_KHR_maintenance6)
#if defined(VK_KHR_map_memory2)
	vk->vkUnmapMemory2KHR = (PFN_vkUnmapMemory2KHR)vk->vkGetDeviceProcAddr(device, "vkUnmapMemory2KHR");
	vk->vkMapMemory2KHR = (PFN_vkMapMemory2KHR)vk->vkGetDeviceProcAddr(device, "vkMapMemory2KHR");
#endif // defined(VK_KHR_map_memory2)
#if defined(VK_KHR_object_refresh)
	vk->vkCmdRefreshObjectsKHR = (PFN_vkCmdRefreshObjectsKHR)vk->vkGetDeviceProcAddr(device, "vkCmdRefreshObjectsKHR");
#endif // defined(VK_KHR_object_refresh)
#if defined(VK_KHR_performance_query)
	vk->vkAcquireProfilingLockKHR = (PFN_vkAcquireProfilingLockKHR)vk->vkGetDeviceProcAddr(device, "vkAcquireProfilingLockKHR");
	vk->vkReleaseProfilingLockKHR = (PFN_vkReleaseProfilingLockKHR)vk->vkGetDeviceProcAddr(device, "vkReleaseProfilingLockKHR");
#endif // defined(VK_KHR_performance_query)
#if defined(VK_KHR_pipeline_binary)
	vk->vkGetPipelineBinaryDataKHR = (PFN_vkGetPipelineBinaryDataKHR)vk->vkGetDeviceProcAddr(device, "vkGetPipelineBinaryDataKHR");
	vk->vkCreatePipelineBinariesKHR = (PFN_vkCreatePipelineBinariesKHR)vk->vkGetDeviceProcAddr(device, "vkCreatePipelineBinariesKHR");
	vk->vkDestroyPipelineBinaryKHR = (PFN_vkDestroyPipelineBinaryKHR)vk->vkGetDeviceProcAddr(device, "vkDestroyPipelineBinaryKHR");
	vk->vkGetPipelineKeyKHR = (PFN_vkGetPipelineKeyKHR)vk->vkGetDeviceProcAddr(device, "vkGetPipelineKeyKHR");
	vk->vkReleaseCapturedPipelineDataKHR = (PFN_vkReleaseCapturedPipelineDataKHR)vk->vkGetDeviceProcAddr(device, "vkReleaseCapturedPipelineDataKHR");
#endif // defined(VK_KHR_pipeline_binary)
#if defined(VK_KHR_pipeline_executable_properties)
	vk->vkGetPipelineExecutableInternalRepresentationsKHR = (PFN_vkGetPipelineExecutableInternalRepresentationsKHR)vk->vkGetDeviceProcAddr(device, "vkGetPipelineExecutableInternalRepresentationsKHR");
	vk->vkGetPipelineExecutablePropertiesKHR = (PFN_vkGetPipelineExecutablePropertiesKHR)vk->vkGetDeviceProcAddr(device, "vkGetPipelineExecutablePropertiesKHR");
	vk->vkGetPipelineExecutableStatisticsKHR = (PFN_vkGetPipelineExecutableStatisticsKHR)vk->vkGetDeviceProcAddr(device, "vkGetPipelineExecutableStatisticsKHR");
#endif // defined(VK_KHR_pipeline_executable_properties)
#if defined(VK_KHR_present_wait)
	vk->vkWaitForPresentKHR = (PFN_vkWaitForPresentKHR)vk->vkGetDeviceProcAddr(device, "vkWaitForPresentKHR");
#endif // defined(VK_KHR_present_wait)
#if defined(VK_KHR_present_wait2)
	vk->vkWaitForPresent2KHR = (PFN_vkWaitForPresent2KHR)vk->vkGetDeviceProcAddr(device, "vkWaitForPresent2KHR");
#endif // defined(VK_KHR_present_wait2)
#if defined(VK_KHR_push_descriptor)
	vk->vkCmdPushDescriptorSetKHR = (PFN_vkCmdPushDescriptorSetKHR)vk->vkGetDeviceProcAddr(device, "vkCmdPushDescriptorSetKHR");
#endif // defined(VK_KHR_push_descriptor)
#if defined(VK_KHR_ray_tracing_maintenance1)
	vk->vkCmdTraceRaysIndirect2KHR = (PFN_vkCmdTraceRaysIndirect2KHR)vk->vkGetDeviceProcAddr(device, "vkCmdTraceRaysIndirect2KHR");
#endif // defined(VK_KHR_ray_tracing_maintenance1)
#if defined(VK_KHR_ray_tracing_pipeline)
	vk->vkCreateRayTracingPipelinesKHR = (PFN_vkCreateRayTracingPipelinesKHR)vk->vkGetDeviceProcAddr(device, "vkCreateRayTracingPipelinesKHR");
	vk->vkGetRayTracingShaderGroupHandlesKHR = (PFN_vkGetRayTracingShaderGroupHandlesKHR)vk->vkGetDeviceProcAddr(device, "vkGetRayTracingShaderGroupHandlesKHR");
	vk->vkCmdSetRayTracingPipelineStackSizeKHR = (PFN_vkCmdSetRayTracingPipelineStackSizeKHR)vk->vkGetDeviceProcAddr(device, "vkCmdSetRayTracingPipelineStackSizeKHR");
	vk->vkGetRayTracingCaptureReplayShaderGroupHandlesKHR = (PFN_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR)vk->vkGetDeviceProcAddr(device, "vkGetRayTracingCaptureReplayShaderGroupHandlesKHR");
	vk->vkCmdTraceRaysKHR = (PFN_vkCmdTraceRaysKHR)vk->vkGetDeviceProcAddr(device, "vkCmdTraceRaysKHR");
	vk->vkCmdTraceRaysIndirectKHR = (PFN_vkCmdTraceRaysIndirectKHR)vk->vkGetDeviceProcAddr(device, "vkCmdTraceRaysIndirectKHR");
	vk->vkGetRayTracingShaderGroupStackSizeKHR = (PFN_vkGetRayTracingShaderGroupStackSizeKHR)vk->vkGetDeviceProcAddr(device, "vkGetRayTracingShaderGroupStackSizeKHR");
#endif // defined(VK_KHR_ray_tracing_pipeline)
#if defined(VK_KHR_sampler_ycbcr_conversion)
	vk->vkDestroySamplerYcbcrConversionKHR = (PFN_vkDestroySamplerYcbcrConversionKHR)vk->vkGetDeviceProcAddr(device, "vkDestroySamplerYcbcrConversionKHR");
	vk->vkCreateSamplerYcbcrConversionKHR = (PFN_vkCreateSamplerYcbcrConversionKHR)vk->vkGetDeviceProcAddr(device, "vkCreateSamplerYcbcrConversionKHR");
#endif // defined(VK_KHR_sampler_ycbcr_conversion)
#if defined(VK_KHR_shared_presentable_image)
	vk->vkGetSwapchainStatusKHR = (PFN_vkGetSwapchainStatusKHR)vk->vkGetDeviceProcAddr(device, "vkGetSwapchainStatusKHR");
#endif // defined(VK_KHR_shared_presentable_image)
#if defined(VK_KHR_swapchain)
	vk->vkCreateSwapchainKHR = (PFN_vkCreateSwapchainKHR)vk->vkGetDeviceProcAddr(device, "vkCreateSwapchainKHR");
	vk->vkGetSwapchainImagesKHR = (PFN_vkGetSwapchainImagesKHR)vk->vkGetDeviceProcAddr(device, "vkGetSwapchainImagesKHR");
	vk->vkDestroySwapchainKHR = (PFN_vkDestroySwapchainKHR)vk->vkGetDeviceProcAddr(device, "vkDestroySwapchainKHR");
	vk->vkAcquireNextImageKHR = (PFN_vkAcquireNextImageKHR)vk->vkGetDeviceProcAddr(device, "vkAcquireNextImageKHR");
	vk->vkQueuePresentKHR = (PFN_vkQueuePresentKHR)vk->vkGetDeviceProcAddr(device, "vkQueuePresentKHR");
#endif // defined(VK_KHR_swapchain)
#if defined(VK_KHR_swapchain_maintenance1)
	vk->vkReleaseSwapchainImagesKHR = (PFN_vkReleaseSwapchainImagesKHR)vk->vkGetDeviceProcAddr(device, "vkReleaseSwapchainImagesKHR");
#endif // defined(VK_KHR_swapchain_maintenance1)
#if defined(VK_KHR_synchronization2)
	vk->vkCmdResetEvent2KHR = (PFN_vkCmdResetEvent2KHR)vk->vkGetDeviceProcAddr(device, "vkCmdResetEvent2KHR");
	vk->vkCmdWriteTimestamp2KHR = (PFN_vkCmdWriteTimestamp2KHR)vk->vkGetDeviceProcAddr(device, "vkCmdWriteTimestamp2KHR");
	vk->vkCmdWaitEvents2KHR = (PFN_vkCmdWaitEvents2KHR)vk->vkGetDeviceProcAddr(device, "vkCmdWaitEvents2KHR");
	vk->vkCmdPipelineBarrier2KHR = (PFN_vkCmdPipelineBarrier2KHR)vk->vkGetDeviceProcAddr(device, "vkCmdPipelineBarrier2KHR");
	vk->vkCmdSetEvent2KHR = (PFN_vkCmdSetEvent2KHR)vk->vkGetDeviceProcAddr(device, "vkCmdSetEvent2KHR");
	vk->vkQueueSubmit2KHR = (PFN_vkQueueSubmit2KHR)vk->vkGetDeviceProcAddr(device, "vkQueueSubmit2KHR");
#endif // defined(VK_KHR_synchronization2)
#if defined(VK_KHR_timeline_semaphore)
	vk->vkWaitSemaphoresKHR = (PFN_vkWaitSemaphoresKHR)vk->vkGetDeviceProcAddr(device, "vkWaitSemaphoresKHR");
	vk->vkGetSemaphoreCounterValueKHR = (PFN_vkGetSemaphoreCounterValueKHR)vk->vkGetDeviceProcAddr(device, "vkGetSemaphoreCounterValueKHR");
	vk->vkSignalSemaphoreKHR = (PFN_vkSignalSemaphoreKHR)vk->vkGetDeviceProcAddr(device, "vkSignalSemaphoreKHR");
#endif // defined(VK_KHR_timeline_semaphore)
#if defined(VK_KHR_video_decode_queue)
	vk->vkCmdDecodeVideoKHR = (PFN_vkCmdDecodeVideoKHR)vk->vkGetDeviceProcAddr(device, "vkCmdDecodeVideoKHR");
#endif // defined(VK_KHR_video_decode_queue)
#if defined(VK_KHR_video_encode_queue)
	vk->vkGetEncodedVideoSessionParametersKHR = (PFN_vkGetEncodedVideoSessionParametersKHR)vk->vkGetDeviceProcAddr(device, "vkGetEncodedVideoSessionParametersKHR");
	vk->vkCmdEncodeVideoKHR = (PFN_vkCmdEncodeVideoKHR)vk->vkGetDeviceProcAddr(device, "vkCmdEncodeVideoKHR");
#endif // defined(VK_KHR_video_encode_queue)
#if defined(VK_KHR_video_queue)
	vk->vkCmdEndVideoCodingKHR = (PFN_vkCmdEndVideoCodingKHR)vk->vkGetDeviceProcAddr(device, "vkCmdEndVideoCodingKHR");
	vk->vkUpdateVideoSessionParametersKHR = (PFN_vkUpdateVideoSessionParametersKHR)vk->vkGetDeviceProcAddr(device, "vkUpdateVideoSessionParametersKHR");
	vk->vkCmdBeginVideoCodingKHR = (PFN_vkCmdBeginVideoCodingKHR)vk->vkGetDeviceProcAddr(device, "vkCmdBeginVideoCodingKHR");
	vk->vkGetVideoSessionMemoryRequirementsKHR = (PFN_vkGetVideoSessionMemoryRequirementsKHR)vk->vkGetDeviceProcAddr(device, "vkGetVideoSessionMemoryRequirementsKHR");
	vk->vkCreateVideoSessionParametersKHR = (PFN_vkCreateVideoSessionParametersKHR)vk->vkGetDeviceProcAddr(device, "vkCreateVideoSessionParametersKHR");
	vk->vkCmdControlVideoCodingKHR = (PFN_vkCmdControlVideoCodingKHR)vk->vkGetDeviceProcAddr(device, "vkCmdControlVideoCodingKHR");
	vk->vkDestroyVideoSessionKHR = (PFN_vkDestroyVideoSessionKHR)vk->vkGetDeviceProcAddr(device, "vkDestroyVideoSessionKHR");
	vk->vkBindVideoSessionMemoryKHR = (PFN_vkBindVideoSessionMemoryKHR)vk->vkGetDeviceProcAddr(device, "vkBindVideoSessionMemoryKHR");
	vk->vkCreateVideoSessionKHR = (PFN_vkCreateVideoSessionKHR)vk->vkGetDeviceProcAddr(device, "vkCreateVideoSessionKHR");
	vk->vkDestroyVideoSessionParametersKHR = (PFN_vkDestroyVideoSessionParametersKHR)vk->vkGetDeviceProcAddr(device, "vkDestroyVideoSessionParametersKHR");
#endif // defined(VK_KHR_video_queue)
#if defined(VK_NVX_binary_import)
	vk->vkDestroyCuFunctionNVX = (PFN_vkDestroyCuFunctionNVX)vk->vkGetDeviceProcAddr(device, "vkDestroyCuFunctionNVX");
	vk->vkCreateCuModuleNVX = (PFN_vkCreateCuModuleNVX)vk->vkGetDeviceProcAddr(device, "vkCreateCuModuleNVX");
	vk->vkCreateCuFunctionNVX = (PFN_vkCreateCuFunctionNVX)vk->vkGetDeviceProcAddr(device, "vkCreateCuFunctionNVX");
	vk->vkDestroyCuModuleNVX = (PFN_vkDestroyCuModuleNVX)vk->vkGetDeviceProcAddr(device, "vkDestroyCuModuleNVX");
	vk->vkCmdCuLaunchKernelNVX = (PFN_vkCmdCuLaunchKernelNVX)vk->vkGetDeviceProcAddr(device, "vkCmdCuLaunchKernelNVX");
#endif // defined(VK_NVX_binary_import)
#if defined(VK_NVX_image_view_handle)
	vk->vkGetImageViewHandle64NVX = (PFN_vkGetImageViewHandle64NVX)vk->vkGetDeviceProcAddr(device, "vkGetImageViewHandle64NVX");
	vk->vkGetImageViewHandleNVX = (PFN_vkGetImageViewHandleNVX)vk->vkGetDeviceProcAddr(device, "vkGetImageViewHandleNVX");
	vk->vkGetImageViewAddressNVX = (PFN_vkGetImageViewAddressNVX)vk->vkGetDeviceProcAddr(device, "vkGetImageViewAddressNVX");
#endif // defined(VK_NVX_image_view_handle)
#if defined(VK_NV_clip_space_w_scaling)
	vk->vkCmdSetViewportWScalingNV = (PFN_vkCmdSetViewportWScalingNV)vk->vkGetDeviceProcAddr(device, "vkCmdSetViewportWScalingNV");
#endif // defined(VK_NV_clip_space_w_scaling)
#if defined(VK_NV_cluster_acceleration_structure)
	vk->vkCmdBuildClusterAccelerationStructureIndirectNV = (PFN_vkCmdBuildClusterAccelerationStructureIndirectNV)vk->vkGetDeviceProcAddr(device, "vkCmdBuildClusterAccelerationStructureIndirectNV");
	vk->vkGetClusterAccelerationStructureBuildSizesNV = (PFN_vkGetClusterAccelerationStructureBuildSizesNV)vk->vkGetDeviceProcAddr(device, "vkGetClusterAccelerationStructureBuildSizesNV");
#endif // defined(VK_NV_cluster_acceleration_structure)
#if defined(VK_NV_cooperative_vector)
	vk->vkCmdConvertCooperativeVectorMatrixNV = (PFN_vkCmdConvertCooperativeVectorMatrixNV)vk->vkGetDeviceProcAddr(device, "vkCmdConvertCooperativeVectorMatrixNV");
	vk->vkConvertCooperativeVectorMatrixNV = (PFN_vkConvertCooperativeVectorMatrixNV)vk->vkGetDeviceProcAddr(device, "vkConvertCooperativeVectorMatrixNV");
#endif // defined(VK_NV_cooperative_vector)
#if defined(VK_NV_copy_memory_indirect)
	vk->vkCmdCopyMemoryToImageIndirectNV = (PFN_vkCmdCopyMemoryToImageIndirectNV)vk->vkGetDeviceProcAddr(device, "vkCmdCopyMemoryToImageIndirectNV");
	vk->vkCmdCopyMemoryIndirectNV = (PFN_vkCmdCopyMemoryIndirectNV)vk->vkGetDeviceProcAddr(device, "vkCmdCopyMemoryIndirectNV");
#endif // defined(VK_NV_copy_memory_indirect)
#if defined(VK_NV_cuda_kernel_launch)
	vk->vkCreateCudaFunctionNV = (PFN_vkCreateCudaFunctionNV)vk->vkGetDeviceProcAddr(device, "vkCreateCudaFunctionNV");
	vk->vkCreateCudaModuleNV = (PFN_vkCreateCudaModuleNV)vk->vkGetDeviceProcAddr(device, "vkCreateCudaModuleNV");
	vk->vkGetCudaModuleCacheNV = (PFN_vkGetCudaModuleCacheNV)vk->vkGetDeviceProcAddr(device, "vkGetCudaModuleCacheNV");
	vk->vkDestroyCudaModuleNV = (PFN_vkDestroyCudaModuleNV)vk->vkGetDeviceProcAddr(device, "vkDestroyCudaModuleNV");
	vk->vkDestroyCudaFunctionNV = (PFN_vkDestroyCudaFunctionNV)vk->vkGetDeviceProcAddr(device, "vkDestroyCudaFunctionNV");
	vk->vkCmdCudaLaunchKernelNV = (PFN_vkCmdCudaLaunchKernelNV)vk->vkGetDeviceProcAddr(device, "vkCmdCudaLaunchKernelNV");
#endif // defined(VK_NV_cuda_kernel_launch)
#if defined(VK_NV_device_diagnostic_checkpoints)
	vk->vkGetQueueCheckpointDataNV = (PFN_vkGetQueueCheckpointDataNV)vk->vkGetDeviceProcAddr(device, "vkGetQueueCheckpointDataNV");
	vk->vkCmdSetCheckpointNV = (PFN_vkCmdSetCheckpointNV)vk->vkGetDeviceProcAddr(device, "vkCmdSetCheckpointNV");
	vk->vkGetQueueCheckpointData2NV = (PFN_vkGetQueueCheckpointData2NV)vk->vkGetDeviceProcAddr(device, "vkGetQueueCheckpointData2NV");
#endif // defined(VK_NV_device_diagnostic_checkpoints)
#if defined(VK_NV_device_generated_commands)
	vk->vkGetGeneratedCommandsMemoryRequirementsNV = (PFN_vkGetGeneratedCommandsMemoryRequirementsNV)vk->vkGetDeviceProcAddr(device, "vkGetGeneratedCommandsMemoryRequirementsNV");
	vk->vkCreateIndirectCommandsLayoutNV = (PFN_vkCreateIndirectCommandsLayoutNV)vk->vkGetDeviceProcAddr(device, "vkCreateIndirectCommandsLayoutNV");
	vk->vkCmdPreprocessGeneratedCommandsNV = (PFN_vkCmdPreprocessGeneratedCommandsNV)vk->vkGetDeviceProcAddr(device, "vkCmdPreprocessGeneratedCommandsNV");
	vk->vkCmdExecuteGeneratedCommandsNV = (PFN_vkCmdExecuteGeneratedCommandsNV)vk->vkGetDeviceProcAddr(device, "vkCmdExecuteGeneratedCommandsNV");
	vk->vkCmdBindPipelineShaderGroupNV = (PFN_vkCmdBindPipelineShaderGroupNV)vk->vkGetDeviceProcAddr(device, "vkCmdBindPipelineShaderGroupNV");
	vk->vkDestroyIndirectCommandsLayoutNV = (PFN_vkDestroyIndirectCommandsLayoutNV)vk->vkGetDeviceProcAddr(device, "vkDestroyIndirectCommandsLayoutNV");
#endif // defined(VK_NV_device_generated_commands)
#if defined(VK_NV_device_generated_commands_compute)
	vk->vkGetPipelineIndirectMemoryRequirementsNV = (PFN_vkGetPipelineIndirectMemoryRequirementsNV)vk->vkGetDeviceProcAddr(device, "vkGetPipelineIndirectMemoryRequirementsNV");
	vk->vkCmdUpdatePipelineIndirectBufferNV = (PFN_vkCmdUpdatePipelineIndirectBufferNV)vk->vkGetDeviceProcAddr(device, "vkCmdUpdatePipelineIndirectBufferNV");
	vk->vkGetPipelineIndirectDeviceAddressNV = (PFN_vkGetPipelineIndirectDeviceAddressNV)vk->vkGetDeviceProcAddr(device, "vkGetPipelineIndirectDeviceAddressNV");
#endif // defined(VK_NV_device_generated_commands_compute)
#if defined(VK_NV_external_compute_queue)
	vk->vkDestroyExternalComputeQueueNV = (PFN_vkDestroyExternalComputeQueueNV)vk->vkGetDeviceProcAddr(device, "vkDestroyExternalComputeQueueNV");
	vk->vkCreateExternalComputeQueueNV = (PFN_vkCreateExternalComputeQueueNV)vk->vkGetDeviceProcAddr(device, "vkCreateExternalComputeQueueNV");
	vk->vkGetExternalComputeQueueDataNV = (PFN_vkGetExternalComputeQueueDataNV)vk->vkGetDeviceProcAddr(device, "vkGetExternalComputeQueueDataNV");
#endif // defined(VK_NV_external_compute_queue)
#if defined(VK_NV_external_memory_rdma)
	vk->vkGetMemoryRemoteAddressNV = (PFN_vkGetMemoryRemoteAddressNV)vk->vkGetDeviceProcAddr(device, "vkGetMemoryRemoteAddressNV");
#endif // defined(VK_NV_external_memory_rdma)
#if defined(VK_NV_external_memory_sci_buf)
	vk->vkGetMemorySciBufNV = (PFN_vkGetMemorySciBufNV)vk->vkGetDeviceProcAddr(device, "vkGetMemorySciBufNV");
#endif // defined(VK_NV_external_memory_sci_buf)
#if defined(VK_NV_external_memory_win32)
	vk->vkGetMemoryWin32HandleNV = (PFN_vkGetMemoryWin32HandleNV)vk->vkGetDeviceProcAddr(device, "vkGetMemoryWin32HandleNV");
#endif // defined(VK_NV_external_memory_win32)
#if defined(VK_NV_external_sci_sync)
	vk->vkGetSemaphoreSciSyncObjNV = (PFN_vkGetSemaphoreSciSyncObjNV)vk->vkGetDeviceProcAddr(device, "vkGetSemaphoreSciSyncObjNV");
	vk->vkImportSemaphoreSciSyncObjNV = (PFN_vkImportSemaphoreSciSyncObjNV)vk->vkGetDeviceProcAddr(device, "vkImportSemaphoreSciSyncObjNV");
#endif // defined(VK_NV_external_sci_sync)
#if defined(VK_NV_external_sci_sync) || defined(VK_NV_external_sci_sync2)
	vk->vkImportFenceSciSyncFenceNV = (PFN_vkImportFenceSciSyncFenceNV)vk->vkGetDeviceProcAddr(device, "vkImportFenceSciSyncFenceNV");
	vk->vkGetFenceSciSyncObjNV = (PFN_vkGetFenceSciSyncObjNV)vk->vkGetDeviceProcAddr(device, "vkGetFenceSciSyncObjNV");
	vk->vkGetFenceSciSyncFenceNV = (PFN_vkGetFenceSciSyncFenceNV)vk->vkGetDeviceProcAddr(device, "vkGetFenceSciSyncFenceNV");
	vk->vkImportFenceSciSyncObjNV = (PFN_vkImportFenceSciSyncObjNV)vk->vkGetDeviceProcAddr(device, "vkImportFenceSciSyncObjNV");
#endif // defined(VK_NV_external_sci_sync) || defined(VK_NV_external_sci_sync2)
#if defined(VK_NV_external_sci_sync2)
	vk->vkDestroySemaphoreSciSyncPoolNV = (PFN_vkDestroySemaphoreSciSyncPoolNV)vk->vkGetDeviceProcAddr(device, "vkDestroySemaphoreSciSyncPoolNV");
	vk->vkCreateSemaphoreSciSyncPoolNV = (PFN_vkCreateSemaphoreSciSyncPoolNV)vk->vkGetDeviceProcAddr(device, "vkCreateSemaphoreSciSyncPoolNV");
#endif // defined(VK_NV_external_sci_sync2)
#if defined(VK_NV_fragment_shading_rate_enums)
	vk->vkCmdSetFragmentShadingRateEnumNV = (PFN_vkCmdSetFragmentShadingRateEnumNV)vk->vkGetDeviceProcAddr(device, "vkCmdSetFragmentShadingRateEnumNV");
#endif // defined(VK_NV_fragment_shading_rate_enums)
#if defined(VK_NV_low_latency2)
	vk->vkLatencySleepNV = (PFN_vkLatencySleepNV)vk->vkGetDeviceProcAddr(device, "vkLatencySleepNV");
	vk->vkQueueNotifyOutOfBandNV = (PFN_vkQueueNotifyOutOfBandNV)vk->vkGetDeviceProcAddr(device, "vkQueueNotifyOutOfBandNV");
	vk->vkSetLatencySleepModeNV = (PFN_vkSetLatencySleepModeNV)vk->vkGetDeviceProcAddr(device, "vkSetLatencySleepModeNV");
	vk->vkSetLatencyMarkerNV = (PFN_vkSetLatencyMarkerNV)vk->vkGetDeviceProcAddr(device, "vkSetLatencyMarkerNV");
	vk->vkGetLatencyTimingsNV = (PFN_vkGetLatencyTimingsNV)vk->vkGetDeviceProcAddr(device, "vkGetLatencyTimingsNV");
#endif // defined(VK_NV_low_latency2)
#if defined(VK_NV_memory_decompression)
	vk->vkCmdDecompressMemoryNV = (PFN_vkCmdDecompressMemoryNV)vk->vkGetDeviceProcAddr(device, "vkCmdDecompressMemoryNV");
	vk->vkCmdDecompressMemoryIndirectCountNV = (PFN_vkCmdDecompressMemoryIndirectCountNV)vk->vkGetDeviceProcAddr(device, "vkCmdDecompressMemoryIndirectCountNV");
#endif // defined(VK_NV_memory_decompression)
#if defined(VK_NV_mesh_shader)
	vk->vkCmdDrawMeshTasksIndirectNV = (PFN_vkCmdDrawMeshTasksIndirectNV)vk->vkGetDeviceProcAddr(device, "vkCmdDrawMeshTasksIndirectNV");
	vk->vkCmdDrawMeshTasksNV = (PFN_vkCmdDrawMeshTasksNV)vk->vkGetDeviceProcAddr(device, "vkCmdDrawMeshTasksNV");
	vk->vkCmdDrawMeshTasksIndirectCountNV = (PFN_vkCmdDrawMeshTasksIndirectCountNV)vk->vkGetDeviceProcAddr(device, "vkCmdDrawMeshTasksIndirectCountNV");
#endif // defined(VK_NV_mesh_shader)
#if defined(VK_NV_optical_flow)
	vk->vkBindOpticalFlowSessionImageNV = (PFN_vkBindOpticalFlowSessionImageNV)vk->vkGetDeviceProcAddr(device, "vkBindOpticalFlowSessionImageNV");
	vk->vkCreateOpticalFlowSessionNV = (PFN_vkCreateOpticalFlowSessionNV)vk->vkGetDeviceProcAddr(device, "vkCreateOpticalFlowSessionNV");
	vk->vkDestroyOpticalFlowSessionNV = (PFN_vkDestroyOpticalFlowSessionNV)vk->vkGetDeviceProcAddr(device, "vkDestroyOpticalFlowSessionNV");
	vk->vkCmdOpticalFlowExecuteNV = (PFN_vkCmdOpticalFlowExecuteNV)vk->vkGetDeviceProcAddr(device, "vkCmdOpticalFlowExecuteNV");
#endif // defined(VK_NV_optical_flow)
#if defined(VK_NV_partitioned_acceleration_structure)
	vk->vkCmdBuildPartitionedAccelerationStructuresNV = (PFN_vkCmdBuildPartitionedAccelerationStructuresNV)vk->vkGetDeviceProcAddr(device, "vkCmdBuildPartitionedAccelerationStructuresNV");
	vk->vkGetPartitionedAccelerationStructuresBuildSizesNV = (PFN_vkGetPartitionedAccelerationStructuresBuildSizesNV)vk->vkGetDeviceProcAddr(device, "vkGetPartitionedAccelerationStructuresBuildSizesNV");
#endif // defined(VK_NV_partitioned_acceleration_structure)
#if defined(VK_NV_ray_tracing)
	vk->vkCmdTraceRaysNV = (PFN_vkCmdTraceRaysNV)vk->vkGetDeviceProcAddr(device, "vkCmdTraceRaysNV");
	vk->vkDestroyAccelerationStructureNV = (PFN_vkDestroyAccelerationStructureNV)vk->vkGetDeviceProcAddr(device, "vkDestroyAccelerationStructureNV");
	vk->vkCmdBuildAccelerationStructureNV = (PFN_vkCmdBuildAccelerationStructureNV)vk->vkGetDeviceProcAddr(device, "vkCmdBuildAccelerationStructureNV");
	vk->vkCreateAccelerationStructureNV = (PFN_vkCreateAccelerationStructureNV)vk->vkGetDeviceProcAddr(device, "vkCreateAccelerationStructureNV");
	vk->vkGetAccelerationStructureMemoryRequirementsNV = (PFN_vkGetAccelerationStructureMemoryRequirementsNV)vk->vkGetDeviceProcAddr(device, "vkGetAccelerationStructureMemoryRequirementsNV");
	vk->vkBindAccelerationStructureMemoryNV = (PFN_vkBindAccelerationStructureMemoryNV)vk->vkGetDeviceProcAddr(device, "vkBindAccelerationStructureMemoryNV");
	vk->vkCmdCopyAccelerationStructureNV = (PFN_vkCmdCopyAccelerationStructureNV)vk->vkGetDeviceProcAddr(device, "vkCmdCopyAccelerationStructureNV");
	vk->vkCreateRayTracingPipelinesNV = (PFN_vkCreateRayTracingPipelinesNV)vk->vkGetDeviceProcAddr(device, "vkCreateRayTracingPipelinesNV");
	vk->vkGetRayTracingShaderGroupHandlesNV = (PFN_vkGetRayTracingShaderGroupHandlesNV)vk->vkGetDeviceProcAddr(device, "vkGetRayTracingShaderGroupHandlesNV");
	vk->vkGetAccelerationStructureHandleNV = (PFN_vkGetAccelerationStructureHandleNV)vk->vkGetDeviceProcAddr(device, "vkGetAccelerationStructureHandleNV");
	vk->vkCmdWriteAccelerationStructuresPropertiesNV = (PFN_vkCmdWriteAccelerationStructuresPropertiesNV)vk->vkGetDeviceProcAddr(device, "vkCmdWriteAccelerationStructuresPropertiesNV");
	vk->vkCompileDeferredNV = (PFN_vkCompileDeferredNV)vk->vkGetDeviceProcAddr(device, "vkCompileDeferredNV");
#endif // defined(VK_NV_ray_tracing)
#if defined(VK_NV_scissor_exclusive)
	vk->vkCmdSetExclusiveScissorEnableNV = (PFN_vkCmdSetExclusiveScissorEnableNV)vk->vkGetDeviceProcAddr(device, "vkCmdSetExclusiveScissorEnableNV");
	vk->vkCmdSetExclusiveScissorNV = (PFN_vkCmdSetExclusiveScissorNV)vk->vkGetDeviceProcAddr(device, "vkCmdSetExclusiveScissorNV");
#endif // defined(VK_NV_scissor_exclusive)
#if defined(VK_NV_shading_rate_image)
	vk->vkCmdSetViewportShadingRatePaletteNV = (PFN_vkCmdSetViewportShadingRatePaletteNV)vk->vkGetDeviceProcAddr(device, "vkCmdSetViewportShadingRatePaletteNV");
	vk->vkCmdBindShadingRateImageNV = (PFN_vkCmdBindShadingRateImageNV)vk->vkGetDeviceProcAddr(device, "vkCmdBindShadingRateImageNV");
	vk->vkCmdSetCoarseSampleOrderNV = (PFN_vkCmdSetCoarseSampleOrderNV)vk->vkGetDeviceProcAddr(device, "vkCmdSetCoarseSampleOrderNV");
#endif // defined(VK_NV_shading_rate_image)
#if defined(VK_QCOM_tile_memory_heap)
	vk->vkCmdBindTileMemoryQCOM = (PFN_vkCmdBindTileMemoryQCOM)vk->vkGetDeviceProcAddr(device, "vkCmdBindTileMemoryQCOM");
#endif // defined(VK_QCOM_tile_memory_heap)
#if defined(VK_QCOM_tile_properties)
	vk->vkGetFramebufferTilePropertiesQCOM = (PFN_vkGetFramebufferTilePropertiesQCOM)vk->vkGetDeviceProcAddr(device, "vkGetFramebufferTilePropertiesQCOM");
	vk->vkGetDynamicRenderingTilePropertiesQCOM = (PFN_vkGetDynamicRenderingTilePropertiesQCOM)vk->vkGetDeviceProcAddr(device, "vkGetDynamicRenderingTilePropertiesQCOM");
#endif // defined(VK_QCOM_tile_properties)
#if defined(VK_QCOM_tile_shading)
	vk->vkCmdDispatchTileQCOM = (PFN_vkCmdDispatchTileQCOM)vk->vkGetDeviceProcAddr(device, "vkCmdDispatchTileQCOM");
	vk->vkCmdBeginPerTileExecutionQCOM = (PFN_vkCmdBeginPerTileExecutionQCOM)vk->vkGetDeviceProcAddr(device, "vkCmdBeginPerTileExecutionQCOM");
	vk->vkCmdEndPerTileExecutionQCOM = (PFN_vkCmdEndPerTileExecutionQCOM)vk->vkGetDeviceProcAddr(device, "vkCmdEndPerTileExecutionQCOM");
#endif // defined(VK_QCOM_tile_shading)
#if defined(VK_QNX_external_memory_screen_buffer)
	vk->vkGetScreenBufferPropertiesQNX = (PFN_vkGetScreenBufferPropertiesQNX)vk->vkGetDeviceProcAddr(device, "vkGetScreenBufferPropertiesQNX");
#endif // defined(VK_QNX_external_memory_screen_buffer)
#if defined(VK_VALVE_descriptor_set_host_mapping)
	vk->vkGetDescriptorSetHostMappingVALVE = (PFN_vkGetDescriptorSetHostMappingVALVE)vk->vkGetDeviceProcAddr(device, "vkGetDescriptorSetHostMappingVALVE");
	vk->vkGetDescriptorSetLayoutHostMappingInfoVALVE = (PFN_vkGetDescriptorSetLayoutHostMappingInfoVALVE)vk->vkGetDeviceProcAddr(device, "vkGetDescriptorSetLayoutHostMappingInfoVALVE");
#endif // defined(VK_VALVE_descriptor_set_host_mapping)
}

#else // defined(VK_NO_PROTOTYPES)

// Vulkan core API interface definitions
#if defined(VK_VERSION_1_0)

// Device initialization

static PFN_vkCreateInstance pfn_vkCreateInstance;
VKAPI_ATTR VkResult vkCreateInstance(const VkInstanceCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkInstance * pInstance)
{
	assert(pfn_vkCreateInstance);
	return pfn_vkCreateInstance(pCreateInfo, pAllocator, pInstance);
}

static PFN_vkDestroyInstance pfn_vkDestroyInstance;
VKAPI_ATTR void vkDestroyInstance(VkInstance instance, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroyInstance);
	pfn_vkDestroyInstance(instance, pAllocator);
}

static PFN_vkEnumeratePhysicalDevices pfn_vkEnumeratePhysicalDevices;
VKAPI_ATTR VkResult vkEnumeratePhysicalDevices(VkInstance instance, uint32_t * pPhysicalDeviceCount, VkPhysicalDevice * pPhysicalDevices)
{
	assert(pfn_vkEnumeratePhysicalDevices);
	return pfn_vkEnumeratePhysicalDevices(instance, pPhysicalDeviceCount, pPhysicalDevices);
}

static PFN_vkGetPhysicalDeviceFeatures pfn_vkGetPhysicalDeviceFeatures;
VKAPI_ATTR void vkGetPhysicalDeviceFeatures(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures * pFeatures)
{
	assert(pfn_vkGetPhysicalDeviceFeatures);
	pfn_vkGetPhysicalDeviceFeatures(physicalDevice, pFeatures);
}

static PFN_vkGetPhysicalDeviceFormatProperties pfn_vkGetPhysicalDeviceFormatProperties;
VKAPI_ATTR void vkGetPhysicalDeviceFormatProperties(VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties * pFormatProperties)
{
	assert(pfn_vkGetPhysicalDeviceFormatProperties);
	pfn_vkGetPhysicalDeviceFormatProperties(physicalDevice, format, pFormatProperties);
}

static PFN_vkGetPhysicalDeviceImageFormatProperties pfn_vkGetPhysicalDeviceImageFormatProperties;
VKAPI_ATTR VkResult vkGetPhysicalDeviceImageFormatProperties(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkImageTiling tiling, VkImageUsageFlags usage, VkImageCreateFlags flags, VkImageFormatProperties * pImageFormatProperties)
{
	assert(pfn_vkGetPhysicalDeviceImageFormatProperties);
	return pfn_vkGetPhysicalDeviceImageFormatProperties(physicalDevice, format, type, tiling, usage, flags, pImageFormatProperties);
}

static PFN_vkGetPhysicalDeviceProperties pfn_vkGetPhysicalDeviceProperties;
VKAPI_ATTR void vkGetPhysicalDeviceProperties(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties * pProperties)
{
	assert(pfn_vkGetPhysicalDeviceProperties);
	pfn_vkGetPhysicalDeviceProperties(physicalDevice, pProperties);
}

static PFN_vkGetPhysicalDeviceQueueFamilyProperties pfn_vkGetPhysicalDeviceQueueFamilyProperties;
VKAPI_ATTR void vkGetPhysicalDeviceQueueFamilyProperties(VkPhysicalDevice physicalDevice, uint32_t * pQueueFamilyPropertyCount, VkQueueFamilyProperties * pQueueFamilyProperties)
{
	assert(pfn_vkGetPhysicalDeviceQueueFamilyProperties);
	pfn_vkGetPhysicalDeviceQueueFamilyProperties(physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties);
}

static PFN_vkGetPhysicalDeviceMemoryProperties pfn_vkGetPhysicalDeviceMemoryProperties;
VKAPI_ATTR void vkGetPhysicalDeviceMemoryProperties(VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties * pMemoryProperties)
{
	assert(pfn_vkGetPhysicalDeviceMemoryProperties);
	pfn_vkGetPhysicalDeviceMemoryProperties(physicalDevice, pMemoryProperties);
}

static PFN_vkGetInstanceProcAddr pfn_vkGetInstanceProcAddr;
VKAPI_ATTR PFN_vkVoidFunction vkGetInstanceProcAddr(VkInstance instance, const char * pName)
{
	assert(pfn_vkGetInstanceProcAddr);
	return pfn_vkGetInstanceProcAddr(instance, pName);
}

static PFN_vkGetDeviceProcAddr pfn_vkGetDeviceProcAddr;
VKAPI_ATTR PFN_vkVoidFunction vkGetDeviceProcAddr(VkDevice device, const char * pName)
{
	assert(pfn_vkGetDeviceProcAddr);
	return pfn_vkGetDeviceProcAddr(device, pName);
}

// Device commands

static PFN_vkCreateDevice pfn_vkCreateDevice;
VKAPI_ATTR VkResult vkCreateDevice(VkPhysicalDevice physicalDevice, const VkDeviceCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDevice * pDevice)
{
	assert(pfn_vkCreateDevice);
	return pfn_vkCreateDevice(physicalDevice, pCreateInfo, pAllocator, pDevice);
}

static PFN_vkDestroyDevice pfn_vkDestroyDevice;
VKAPI_ATTR void vkDestroyDevice(VkDevice device, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroyDevice);
	pfn_vkDestroyDevice(device, pAllocator);
}

// Extension discovery commands

static PFN_vkEnumerateInstanceExtensionProperties pfn_vkEnumerateInstanceExtensionProperties;
VKAPI_ATTR VkResult vkEnumerateInstanceExtensionProperties(const char * pLayerName, uint32_t * pPropertyCount, VkExtensionProperties * pProperties)
{
	assert(pfn_vkEnumerateInstanceExtensionProperties);
	return pfn_vkEnumerateInstanceExtensionProperties(pLayerName, pPropertyCount, pProperties);
}

static PFN_vkEnumerateDeviceExtensionProperties pfn_vkEnumerateDeviceExtensionProperties;
VKAPI_ATTR VkResult vkEnumerateDeviceExtensionProperties(VkPhysicalDevice physicalDevice, const char * pLayerName, uint32_t * pPropertyCount, VkExtensionProperties * pProperties)
{
	assert(pfn_vkEnumerateDeviceExtensionProperties);
	return pfn_vkEnumerateDeviceExtensionProperties(physicalDevice, pLayerName, pPropertyCount, pProperties);
}

// Layer discovery commands

static PFN_vkEnumerateInstanceLayerProperties pfn_vkEnumerateInstanceLayerProperties;
VKAPI_ATTR VkResult vkEnumerateInstanceLayerProperties(uint32_t * pPropertyCount, VkLayerProperties * pProperties)
{
	assert(pfn_vkEnumerateInstanceLayerProperties);
	return pfn_vkEnumerateInstanceLayerProperties(pPropertyCount, pProperties);
}

static PFN_vkEnumerateDeviceLayerProperties pfn_vkEnumerateDeviceLayerProperties;
VKAPI_ATTR VkResult vkEnumerateDeviceLayerProperties(VkPhysicalDevice physicalDevice, uint32_t * pPropertyCount, VkLayerProperties * pProperties)
{
	assert(pfn_vkEnumerateDeviceLayerProperties);
	return pfn_vkEnumerateDeviceLayerProperties(physicalDevice, pPropertyCount, pProperties);
}

// Queue commands

static PFN_vkGetDeviceQueue pfn_vkGetDeviceQueue;
VKAPI_ATTR void vkGetDeviceQueue(VkDevice device, uint32_t queueFamilyIndex, uint32_t queueIndex, VkQueue * pQueue)
{
	assert(pfn_vkGetDeviceQueue);
	pfn_vkGetDeviceQueue(device, queueFamilyIndex, queueIndex, pQueue);
}

static PFN_vkQueueSubmit pfn_vkQueueSubmit;
VKAPI_ATTR VkResult vkQueueSubmit(VkQueue queue, uint32_t submitCount, const VkSubmitInfo * pSubmits, VkFence fence)
{
	assert(pfn_vkQueueSubmit);
	return pfn_vkQueueSubmit(queue, submitCount, pSubmits, fence);
}

static PFN_vkQueueWaitIdle pfn_vkQueueWaitIdle;
VKAPI_ATTR VkResult vkQueueWaitIdle(VkQueue queue)
{
	assert(pfn_vkQueueWaitIdle);
	return pfn_vkQueueWaitIdle(queue);
}

static PFN_vkDeviceWaitIdle pfn_vkDeviceWaitIdle;
VKAPI_ATTR VkResult vkDeviceWaitIdle(VkDevice device)
{
	assert(pfn_vkDeviceWaitIdle);
	return pfn_vkDeviceWaitIdle(device);
}

// Memory commands

static PFN_vkAllocateMemory pfn_vkAllocateMemory;
VKAPI_ATTR VkResult vkAllocateMemory(VkDevice device, const VkMemoryAllocateInfo * pAllocateInfo, const VkAllocationCallbacks * pAllocator, VkDeviceMemory * pMemory)
{
	assert(pfn_vkAllocateMemory);
	return pfn_vkAllocateMemory(device, pAllocateInfo, pAllocator, pMemory);
}

static PFN_vkFreeMemory pfn_vkFreeMemory;
VKAPI_ATTR void vkFreeMemory(VkDevice device, VkDeviceMemory memory, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkFreeMemory);
	pfn_vkFreeMemory(device, memory, pAllocator);
}

static PFN_vkMapMemory pfn_vkMapMemory;
VKAPI_ATTR VkResult vkMapMemory(VkDevice device, VkDeviceMemory memory, VkDeviceSize offset, VkDeviceSize size, VkMemoryMapFlags flags, void ** ppData)
{
	assert(pfn_vkMapMemory);
	return pfn_vkMapMemory(device, memory, offset, size, flags, ppData);
}

static PFN_vkUnmapMemory pfn_vkUnmapMemory;
VKAPI_ATTR void vkUnmapMemory(VkDevice device, VkDeviceMemory memory)
{
	assert(pfn_vkUnmapMemory);
	pfn_vkUnmapMemory(device, memory);
}

static PFN_vkFlushMappedMemoryRanges pfn_vkFlushMappedMemoryRanges;
VKAPI_ATTR VkResult vkFlushMappedMemoryRanges(VkDevice device, uint32_t memoryRangeCount, const VkMappedMemoryRange * pMemoryRanges)
{
	assert(pfn_vkFlushMappedMemoryRanges);
	return pfn_vkFlushMappedMemoryRanges(device, memoryRangeCount, pMemoryRanges);
}

static PFN_vkInvalidateMappedMemoryRanges pfn_vkInvalidateMappedMemoryRanges;
VKAPI_ATTR VkResult vkInvalidateMappedMemoryRanges(VkDevice device, uint32_t memoryRangeCount, const VkMappedMemoryRange * pMemoryRanges)
{
	assert(pfn_vkInvalidateMappedMemoryRanges);
	return pfn_vkInvalidateMappedMemoryRanges(device, memoryRangeCount, pMemoryRanges);
}

static PFN_vkGetDeviceMemoryCommitment pfn_vkGetDeviceMemoryCommitment;
VKAPI_ATTR void vkGetDeviceMemoryCommitment(VkDevice device, VkDeviceMemory memory, VkDeviceSize * pCommittedMemoryInBytes)
{
	assert(pfn_vkGetDeviceMemoryCommitment);
	pfn_vkGetDeviceMemoryCommitment(device, memory, pCommittedMemoryInBytes);
}

// Memory management API commands

static PFN_vkBindBufferMemory pfn_vkBindBufferMemory;
VKAPI_ATTR VkResult vkBindBufferMemory(VkDevice device, VkBuffer buffer, VkDeviceMemory memory, VkDeviceSize memoryOffset)
{
	assert(pfn_vkBindBufferMemory);
	return pfn_vkBindBufferMemory(device, buffer, memory, memoryOffset);
}

static PFN_vkBindImageMemory pfn_vkBindImageMemory;
VKAPI_ATTR VkResult vkBindImageMemory(VkDevice device, VkImage image, VkDeviceMemory memory, VkDeviceSize memoryOffset)
{
	assert(pfn_vkBindImageMemory);
	return pfn_vkBindImageMemory(device, image, memory, memoryOffset);
}

static PFN_vkGetBufferMemoryRequirements pfn_vkGetBufferMemoryRequirements;
VKAPI_ATTR void vkGetBufferMemoryRequirements(VkDevice device, VkBuffer buffer, VkMemoryRequirements * pMemoryRequirements)
{
	assert(pfn_vkGetBufferMemoryRequirements);
	pfn_vkGetBufferMemoryRequirements(device, buffer, pMemoryRequirements);
}

static PFN_vkGetImageMemoryRequirements pfn_vkGetImageMemoryRequirements;
VKAPI_ATTR void vkGetImageMemoryRequirements(VkDevice device, VkImage image, VkMemoryRequirements * pMemoryRequirements)
{
	assert(pfn_vkGetImageMemoryRequirements);
	pfn_vkGetImageMemoryRequirements(device, image, pMemoryRequirements);
}

// Sparse resource memory management API commands

static PFN_vkGetImageSparseMemoryRequirements pfn_vkGetImageSparseMemoryRequirements;
VKAPI_ATTR void vkGetImageSparseMemoryRequirements(VkDevice device, VkImage image, uint32_t * pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements * pSparseMemoryRequirements)
{
	assert(pfn_vkGetImageSparseMemoryRequirements);
	pfn_vkGetImageSparseMemoryRequirements(device, image, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
}

static PFN_vkGetPhysicalDeviceSparseImageFormatProperties pfn_vkGetPhysicalDeviceSparseImageFormatProperties;
VKAPI_ATTR void vkGetPhysicalDeviceSparseImageFormatProperties(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkSampleCountFlagBits samples, VkImageUsageFlags usage, VkImageTiling tiling, uint32_t * pPropertyCount, VkSparseImageFormatProperties * pProperties)
{
	assert(pfn_vkGetPhysicalDeviceSparseImageFormatProperties);
	pfn_vkGetPhysicalDeviceSparseImageFormatProperties(physicalDevice, format, type, samples, usage, tiling, pPropertyCount, pProperties);
}

static PFN_vkQueueBindSparse pfn_vkQueueBindSparse;
VKAPI_ATTR VkResult vkQueueBindSparse(VkQueue queue, uint32_t bindInfoCount, const VkBindSparseInfo * pBindInfo, VkFence fence)
{
	assert(pfn_vkQueueBindSparse);
	return pfn_vkQueueBindSparse(queue, bindInfoCount, pBindInfo, fence);
}

// Fence commands

static PFN_vkCreateFence pfn_vkCreateFence;
VKAPI_ATTR VkResult vkCreateFence(VkDevice device, const VkFenceCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkFence * pFence)
{
	assert(pfn_vkCreateFence);
	return pfn_vkCreateFence(device, pCreateInfo, pAllocator, pFence);
}

static PFN_vkDestroyFence pfn_vkDestroyFence;
VKAPI_ATTR void vkDestroyFence(VkDevice device, VkFence fence, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroyFence);
	pfn_vkDestroyFence(device, fence, pAllocator);
}

static PFN_vkResetFences pfn_vkResetFences;
VKAPI_ATTR VkResult vkResetFences(VkDevice device, uint32_t fenceCount, const VkFence * pFences)
{
	assert(pfn_vkResetFences);
	return pfn_vkResetFences(device, fenceCount, pFences);
}

static PFN_vkGetFenceStatus pfn_vkGetFenceStatus;
VKAPI_ATTR VkResult vkGetFenceStatus(VkDevice device, VkFence fence)
{
	assert(pfn_vkGetFenceStatus);
	return pfn_vkGetFenceStatus(device, fence);
}

static PFN_vkWaitForFences pfn_vkWaitForFences;
VKAPI_ATTR VkResult vkWaitForFences(VkDevice device, uint32_t fenceCount, const VkFence * pFences, VkBool32 waitAll, uint64_t timeout)
{
	assert(pfn_vkWaitForFences);
	return pfn_vkWaitForFences(device, fenceCount, pFences, waitAll, timeout);
}

// Queue semaphore commands

static PFN_vkCreateSemaphore pfn_vkCreateSemaphore;
VKAPI_ATTR VkResult vkCreateSemaphore(VkDevice device, const VkSemaphoreCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSemaphore * pSemaphore)
{
	assert(pfn_vkCreateSemaphore);
	return pfn_vkCreateSemaphore(device, pCreateInfo, pAllocator, pSemaphore);
}

static PFN_vkDestroySemaphore pfn_vkDestroySemaphore;
VKAPI_ATTR void vkDestroySemaphore(VkDevice device, VkSemaphore semaphore, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroySemaphore);
	pfn_vkDestroySemaphore(device, semaphore, pAllocator);
}

// Event commands

static PFN_vkCreateEvent pfn_vkCreateEvent;
VKAPI_ATTR VkResult vkCreateEvent(VkDevice device, const VkEventCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkEvent * pEvent)
{
	assert(pfn_vkCreateEvent);
	return pfn_vkCreateEvent(device, pCreateInfo, pAllocator, pEvent);
}

static PFN_vkDestroyEvent pfn_vkDestroyEvent;
VKAPI_ATTR void vkDestroyEvent(VkDevice device, VkEvent event, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroyEvent);
	pfn_vkDestroyEvent(device, event, pAllocator);
}

static PFN_vkGetEventStatus pfn_vkGetEventStatus;
VKAPI_ATTR VkResult vkGetEventStatus(VkDevice device, VkEvent event)
{
	assert(pfn_vkGetEventStatus);
	return pfn_vkGetEventStatus(device, event);
}

static PFN_vkSetEvent pfn_vkSetEvent;
VKAPI_ATTR VkResult vkSetEvent(VkDevice device, VkEvent event)
{
	assert(pfn_vkSetEvent);
	return pfn_vkSetEvent(device, event);
}

static PFN_vkResetEvent pfn_vkResetEvent;
VKAPI_ATTR VkResult vkResetEvent(VkDevice device, VkEvent event)
{
	assert(pfn_vkResetEvent);
	return pfn_vkResetEvent(device, event);
}

// Query commands

static PFN_vkCreateQueryPool pfn_vkCreateQueryPool;
VKAPI_ATTR VkResult vkCreateQueryPool(VkDevice device, const VkQueryPoolCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkQueryPool * pQueryPool)
{
	assert(pfn_vkCreateQueryPool);
	return pfn_vkCreateQueryPool(device, pCreateInfo, pAllocator, pQueryPool);
}

static PFN_vkDestroyQueryPool pfn_vkDestroyQueryPool;
VKAPI_ATTR void vkDestroyQueryPool(VkDevice device, VkQueryPool queryPool, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroyQueryPool);
	pfn_vkDestroyQueryPool(device, queryPool, pAllocator);
}

static PFN_vkGetQueryPoolResults pfn_vkGetQueryPoolResults;
VKAPI_ATTR VkResult vkGetQueryPoolResults(VkDevice device, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, size_t dataSize, void * pData, VkDeviceSize stride, VkQueryResultFlags flags)
{
	assert(pfn_vkGetQueryPoolResults);
	return pfn_vkGetQueryPoolResults(device, queryPool, firstQuery, queryCount, dataSize, pData, stride, flags);
}

// Buffer commands

static PFN_vkCreateBuffer pfn_vkCreateBuffer;
VKAPI_ATTR VkResult vkCreateBuffer(VkDevice device, const VkBufferCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkBuffer * pBuffer)
{
	assert(pfn_vkCreateBuffer);
	return pfn_vkCreateBuffer(device, pCreateInfo, pAllocator, pBuffer);
}

static PFN_vkDestroyBuffer pfn_vkDestroyBuffer;
VKAPI_ATTR void vkDestroyBuffer(VkDevice device, VkBuffer buffer, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroyBuffer);
	pfn_vkDestroyBuffer(device, buffer, pAllocator);
}

// Buffer view commands

static PFN_vkCreateBufferView pfn_vkCreateBufferView;
VKAPI_ATTR VkResult vkCreateBufferView(VkDevice device, const VkBufferViewCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkBufferView * pView)
{
	assert(pfn_vkCreateBufferView);
	return pfn_vkCreateBufferView(device, pCreateInfo, pAllocator, pView);
}

static PFN_vkDestroyBufferView pfn_vkDestroyBufferView;
VKAPI_ATTR void vkDestroyBufferView(VkDevice device, VkBufferView bufferView, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroyBufferView);
	pfn_vkDestroyBufferView(device, bufferView, pAllocator);
}

// Image commands

static PFN_vkCreateImage pfn_vkCreateImage;
VKAPI_ATTR VkResult vkCreateImage(VkDevice device, const VkImageCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkImage * pImage)
{
	assert(pfn_vkCreateImage);
	return pfn_vkCreateImage(device, pCreateInfo, pAllocator, pImage);
}

static PFN_vkDestroyImage pfn_vkDestroyImage;
VKAPI_ATTR void vkDestroyImage(VkDevice device, VkImage image, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroyImage);
	pfn_vkDestroyImage(device, image, pAllocator);
}

static PFN_vkGetImageSubresourceLayout pfn_vkGetImageSubresourceLayout;
VKAPI_ATTR void vkGetImageSubresourceLayout(VkDevice device, VkImage image, const VkImageSubresource * pSubresource, VkSubresourceLayout * pLayout)
{
	assert(pfn_vkGetImageSubresourceLayout);
	pfn_vkGetImageSubresourceLayout(device, image, pSubresource, pLayout);
}

// Image view commands

static PFN_vkCreateImageView pfn_vkCreateImageView;
VKAPI_ATTR VkResult vkCreateImageView(VkDevice device, const VkImageViewCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkImageView * pView)
{
	assert(pfn_vkCreateImageView);
	return pfn_vkCreateImageView(device, pCreateInfo, pAllocator, pView);
}

static PFN_vkDestroyImageView pfn_vkDestroyImageView;
VKAPI_ATTR void vkDestroyImageView(VkDevice device, VkImageView imageView, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroyImageView);
	pfn_vkDestroyImageView(device, imageView, pAllocator);
}

// Shader commands

static PFN_vkCreateShaderModule pfn_vkCreateShaderModule;
VKAPI_ATTR VkResult vkCreateShaderModule(VkDevice device, const VkShaderModuleCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkShaderModule * pShaderModule)
{
	assert(pfn_vkCreateShaderModule);
	return pfn_vkCreateShaderModule(device, pCreateInfo, pAllocator, pShaderModule);
}

static PFN_vkDestroyShaderModule pfn_vkDestroyShaderModule;
VKAPI_ATTR void vkDestroyShaderModule(VkDevice device, VkShaderModule shaderModule, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroyShaderModule);
	pfn_vkDestroyShaderModule(device, shaderModule, pAllocator);
}

// Pipeline Cache commands

static PFN_vkCreatePipelineCache pfn_vkCreatePipelineCache;
VKAPI_ATTR VkResult vkCreatePipelineCache(VkDevice device, const VkPipelineCacheCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkPipelineCache * pPipelineCache)
{
	assert(pfn_vkCreatePipelineCache);
	return pfn_vkCreatePipelineCache(device, pCreateInfo, pAllocator, pPipelineCache);
}

static PFN_vkDestroyPipelineCache pfn_vkDestroyPipelineCache;
VKAPI_ATTR void vkDestroyPipelineCache(VkDevice device, VkPipelineCache pipelineCache, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroyPipelineCache);
	pfn_vkDestroyPipelineCache(device, pipelineCache, pAllocator);
}

static PFN_vkGetPipelineCacheData pfn_vkGetPipelineCacheData;
VKAPI_ATTR VkResult vkGetPipelineCacheData(VkDevice device, VkPipelineCache pipelineCache, size_t * pDataSize, void * pData)
{
	assert(pfn_vkGetPipelineCacheData);
	return pfn_vkGetPipelineCacheData(device, pipelineCache, pDataSize, pData);
}

static PFN_vkMergePipelineCaches pfn_vkMergePipelineCaches;
VKAPI_ATTR VkResult vkMergePipelineCaches(VkDevice device, VkPipelineCache dstCache, uint32_t srcCacheCount, const VkPipelineCache * pSrcCaches)
{
	assert(pfn_vkMergePipelineCaches);
	return pfn_vkMergePipelineCaches(device, dstCache, srcCacheCount, pSrcCaches);
}

// Pipeline commands

static PFN_vkCreateGraphicsPipelines pfn_vkCreateGraphicsPipelines;
VKAPI_ATTR VkResult vkCreateGraphicsPipelines(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkGraphicsPipelineCreateInfo * pCreateInfos, const VkAllocationCallbacks * pAllocator, VkPipeline * pPipelines)
{
	assert(pfn_vkCreateGraphicsPipelines);
	return pfn_vkCreateGraphicsPipelines(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
}

static PFN_vkCreateComputePipelines pfn_vkCreateComputePipelines;
VKAPI_ATTR VkResult vkCreateComputePipelines(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkComputePipelineCreateInfo * pCreateInfos, const VkAllocationCallbacks * pAllocator, VkPipeline * pPipelines)
{
	assert(pfn_vkCreateComputePipelines);
	return pfn_vkCreateComputePipelines(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
}

static PFN_vkDestroyPipeline pfn_vkDestroyPipeline;
VKAPI_ATTR void vkDestroyPipeline(VkDevice device, VkPipeline pipeline, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroyPipeline);
	pfn_vkDestroyPipeline(device, pipeline, pAllocator);
}

// Pipeline layout commands

static PFN_vkCreatePipelineLayout pfn_vkCreatePipelineLayout;
VKAPI_ATTR VkResult vkCreatePipelineLayout(VkDevice device, const VkPipelineLayoutCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkPipelineLayout * pPipelineLayout)
{
	assert(pfn_vkCreatePipelineLayout);
	return pfn_vkCreatePipelineLayout(device, pCreateInfo, pAllocator, pPipelineLayout);
}

static PFN_vkDestroyPipelineLayout pfn_vkDestroyPipelineLayout;
VKAPI_ATTR void vkDestroyPipelineLayout(VkDevice device, VkPipelineLayout pipelineLayout, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroyPipelineLayout);
	pfn_vkDestroyPipelineLayout(device, pipelineLayout, pAllocator);
}

// Sampler commands

static PFN_vkCreateSampler pfn_vkCreateSampler;
VKAPI_ATTR VkResult vkCreateSampler(VkDevice device, const VkSamplerCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSampler * pSampler)
{
	assert(pfn_vkCreateSampler);
	return pfn_vkCreateSampler(device, pCreateInfo, pAllocator, pSampler);
}

static PFN_vkDestroySampler pfn_vkDestroySampler;
VKAPI_ATTR void vkDestroySampler(VkDevice device, VkSampler sampler, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroySampler);
	pfn_vkDestroySampler(device, sampler, pAllocator);
}

// Descriptor set commands

static PFN_vkCreateDescriptorSetLayout pfn_vkCreateDescriptorSetLayout;
VKAPI_ATTR VkResult vkCreateDescriptorSetLayout(VkDevice device, const VkDescriptorSetLayoutCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDescriptorSetLayout * pSetLayout)
{
	assert(pfn_vkCreateDescriptorSetLayout);
	return pfn_vkCreateDescriptorSetLayout(device, pCreateInfo, pAllocator, pSetLayout);
}

static PFN_vkDestroyDescriptorSetLayout pfn_vkDestroyDescriptorSetLayout;
VKAPI_ATTR void vkDestroyDescriptorSetLayout(VkDevice device, VkDescriptorSetLayout descriptorSetLayout, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroyDescriptorSetLayout);
	pfn_vkDestroyDescriptorSetLayout(device, descriptorSetLayout, pAllocator);
}

static PFN_vkCreateDescriptorPool pfn_vkCreateDescriptorPool;
VKAPI_ATTR VkResult vkCreateDescriptorPool(VkDevice device, const VkDescriptorPoolCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDescriptorPool * pDescriptorPool)
{
	assert(pfn_vkCreateDescriptorPool);
	return pfn_vkCreateDescriptorPool(device, pCreateInfo, pAllocator, pDescriptorPool);
}

static PFN_vkDestroyDescriptorPool pfn_vkDestroyDescriptorPool;
VKAPI_ATTR void vkDestroyDescriptorPool(VkDevice device, VkDescriptorPool descriptorPool, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroyDescriptorPool);
	pfn_vkDestroyDescriptorPool(device, descriptorPool, pAllocator);
}

static PFN_vkResetDescriptorPool pfn_vkResetDescriptorPool;
VKAPI_ATTR VkResult vkResetDescriptorPool(VkDevice device, VkDescriptorPool descriptorPool, VkDescriptorPoolResetFlags flags)
{
	assert(pfn_vkResetDescriptorPool);
	return pfn_vkResetDescriptorPool(device, descriptorPool, flags);
}

static PFN_vkAllocateDescriptorSets pfn_vkAllocateDescriptorSets;
VKAPI_ATTR VkResult vkAllocateDescriptorSets(VkDevice device, const VkDescriptorSetAllocateInfo * pAllocateInfo, VkDescriptorSet * pDescriptorSets)
{
	assert(pfn_vkAllocateDescriptorSets);
	return pfn_vkAllocateDescriptorSets(device, pAllocateInfo, pDescriptorSets);
}

static PFN_vkFreeDescriptorSets pfn_vkFreeDescriptorSets;
VKAPI_ATTR VkResult vkFreeDescriptorSets(VkDevice device, VkDescriptorPool descriptorPool, uint32_t descriptorSetCount, const VkDescriptorSet * pDescriptorSets)
{
	assert(pfn_vkFreeDescriptorSets);
	return pfn_vkFreeDescriptorSets(device, descriptorPool, descriptorSetCount, pDescriptorSets);
}

static PFN_vkUpdateDescriptorSets pfn_vkUpdateDescriptorSets;
VKAPI_ATTR void vkUpdateDescriptorSets(VkDevice device, uint32_t descriptorWriteCount, const VkWriteDescriptorSet * pDescriptorWrites, uint32_t descriptorCopyCount, const VkCopyDescriptorSet * pDescriptorCopies)
{
	assert(pfn_vkUpdateDescriptorSets);
	pfn_vkUpdateDescriptorSets(device, descriptorWriteCount, pDescriptorWrites, descriptorCopyCount, pDescriptorCopies);
}

// Pass commands

static PFN_vkCreateFramebuffer pfn_vkCreateFramebuffer;
VKAPI_ATTR VkResult vkCreateFramebuffer(VkDevice device, const VkFramebufferCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkFramebuffer * pFramebuffer)
{
	assert(pfn_vkCreateFramebuffer);
	return pfn_vkCreateFramebuffer(device, pCreateInfo, pAllocator, pFramebuffer);
}

static PFN_vkDestroyFramebuffer pfn_vkDestroyFramebuffer;
VKAPI_ATTR void vkDestroyFramebuffer(VkDevice device, VkFramebuffer framebuffer, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroyFramebuffer);
	pfn_vkDestroyFramebuffer(device, framebuffer, pAllocator);
}

static PFN_vkCreateRenderPass pfn_vkCreateRenderPass;
VKAPI_ATTR VkResult vkCreateRenderPass(VkDevice device, const VkRenderPassCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkRenderPass * pRenderPass)
{
	assert(pfn_vkCreateRenderPass);
	return pfn_vkCreateRenderPass(device, pCreateInfo, pAllocator, pRenderPass);
}

static PFN_vkDestroyRenderPass pfn_vkDestroyRenderPass;
VKAPI_ATTR void vkDestroyRenderPass(VkDevice device, VkRenderPass renderPass, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroyRenderPass);
	pfn_vkDestroyRenderPass(device, renderPass, pAllocator);
}

static PFN_vkGetRenderAreaGranularity pfn_vkGetRenderAreaGranularity;
VKAPI_ATTR void vkGetRenderAreaGranularity(VkDevice device, VkRenderPass renderPass, VkExtent2D * pGranularity)
{
	assert(pfn_vkGetRenderAreaGranularity);
	pfn_vkGetRenderAreaGranularity(device, renderPass, pGranularity);
}

// Command pool commands

static PFN_vkCreateCommandPool pfn_vkCreateCommandPool;
VKAPI_ATTR VkResult vkCreateCommandPool(VkDevice device, const VkCommandPoolCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkCommandPool * pCommandPool)
{
	assert(pfn_vkCreateCommandPool);
	return pfn_vkCreateCommandPool(device, pCreateInfo, pAllocator, pCommandPool);
}

static PFN_vkDestroyCommandPool pfn_vkDestroyCommandPool;
VKAPI_ATTR void vkDestroyCommandPool(VkDevice device, VkCommandPool commandPool, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroyCommandPool);
	pfn_vkDestroyCommandPool(device, commandPool, pAllocator);
}

static PFN_vkResetCommandPool pfn_vkResetCommandPool;
VKAPI_ATTR VkResult vkResetCommandPool(VkDevice device, VkCommandPool commandPool, VkCommandPoolResetFlags flags)
{
	assert(pfn_vkResetCommandPool);
	return pfn_vkResetCommandPool(device, commandPool, flags);
}

// Command buffer commands

static PFN_vkAllocateCommandBuffers pfn_vkAllocateCommandBuffers;
VKAPI_ATTR VkResult vkAllocateCommandBuffers(VkDevice device, const VkCommandBufferAllocateInfo * pAllocateInfo, VkCommandBuffer * pCommandBuffers)
{
	assert(pfn_vkAllocateCommandBuffers);
	return pfn_vkAllocateCommandBuffers(device, pAllocateInfo, pCommandBuffers);
}

static PFN_vkFreeCommandBuffers pfn_vkFreeCommandBuffers;
VKAPI_ATTR void vkFreeCommandBuffers(VkDevice device, VkCommandPool commandPool, uint32_t commandBufferCount, const VkCommandBuffer * pCommandBuffers)
{
	assert(pfn_vkFreeCommandBuffers);
	pfn_vkFreeCommandBuffers(device, commandPool, commandBufferCount, pCommandBuffers);
}

static PFN_vkBeginCommandBuffer pfn_vkBeginCommandBuffer;
VKAPI_ATTR VkResult vkBeginCommandBuffer(VkCommandBuffer commandBuffer, const VkCommandBufferBeginInfo * pBeginInfo)
{
	assert(pfn_vkBeginCommandBuffer);
	return pfn_vkBeginCommandBuffer(commandBuffer, pBeginInfo);
}

static PFN_vkEndCommandBuffer pfn_vkEndCommandBuffer;
VKAPI_ATTR VkResult vkEndCommandBuffer(VkCommandBuffer commandBuffer)
{
	assert(pfn_vkEndCommandBuffer);
	return pfn_vkEndCommandBuffer(commandBuffer);
}

static PFN_vkResetCommandBuffer pfn_vkResetCommandBuffer;
VKAPI_ATTR VkResult vkResetCommandBuffer(VkCommandBuffer commandBuffer, VkCommandBufferResetFlags flags)
{
	assert(pfn_vkResetCommandBuffer);
	return pfn_vkResetCommandBuffer(commandBuffer, flags);
}

// Command buffer building commands

static PFN_vkCmdBindPipeline pfn_vkCmdBindPipeline;
VKAPI_ATTR void vkCmdBindPipeline(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline)
{
	assert(pfn_vkCmdBindPipeline);
	pfn_vkCmdBindPipeline(commandBuffer, pipelineBindPoint, pipeline);
}

static PFN_vkCmdSetViewport pfn_vkCmdSetViewport;
VKAPI_ATTR void vkCmdSetViewport(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkViewport * pViewports)
{
	assert(pfn_vkCmdSetViewport);
	pfn_vkCmdSetViewport(commandBuffer, firstViewport, viewportCount, pViewports);
}

static PFN_vkCmdSetScissor pfn_vkCmdSetScissor;
VKAPI_ATTR void vkCmdSetScissor(VkCommandBuffer commandBuffer, uint32_t firstScissor, uint32_t scissorCount, const VkRect2D * pScissors)
{
	assert(pfn_vkCmdSetScissor);
	pfn_vkCmdSetScissor(commandBuffer, firstScissor, scissorCount, pScissors);
}

static PFN_vkCmdSetLineWidth pfn_vkCmdSetLineWidth;
VKAPI_ATTR void vkCmdSetLineWidth(VkCommandBuffer commandBuffer, float lineWidth)
{
	assert(pfn_vkCmdSetLineWidth);
	pfn_vkCmdSetLineWidth(commandBuffer, lineWidth);
}

static PFN_vkCmdSetDepthBias pfn_vkCmdSetDepthBias;
VKAPI_ATTR void vkCmdSetDepthBias(VkCommandBuffer commandBuffer, float depthBiasConstantFactor, float depthBiasClamp, float depthBiasSlopeFactor)
{
	assert(pfn_vkCmdSetDepthBias);
	pfn_vkCmdSetDepthBias(commandBuffer, depthBiasConstantFactor, depthBiasClamp, depthBiasSlopeFactor);
}

static PFN_vkCmdSetBlendConstants pfn_vkCmdSetBlendConstants;
VKAPI_ATTR void vkCmdSetBlendConstants(VkCommandBuffer commandBuffer, const float blendConstants [4])
{
	assert(pfn_vkCmdSetBlendConstants);
	pfn_vkCmdSetBlendConstants(commandBuffer, blendConstants);
}

static PFN_vkCmdSetDepthBounds pfn_vkCmdSetDepthBounds;
VKAPI_ATTR void vkCmdSetDepthBounds(VkCommandBuffer commandBuffer, float minDepthBounds, float maxDepthBounds)
{
	assert(pfn_vkCmdSetDepthBounds);
	pfn_vkCmdSetDepthBounds(commandBuffer, minDepthBounds, maxDepthBounds);
}

static PFN_vkCmdSetStencilCompareMask pfn_vkCmdSetStencilCompareMask;
VKAPI_ATTR void vkCmdSetStencilCompareMask(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t compareMask)
{
	assert(pfn_vkCmdSetStencilCompareMask);
	pfn_vkCmdSetStencilCompareMask(commandBuffer, faceMask, compareMask);
}

static PFN_vkCmdSetStencilWriteMask pfn_vkCmdSetStencilWriteMask;
VKAPI_ATTR void vkCmdSetStencilWriteMask(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t writeMask)
{
	assert(pfn_vkCmdSetStencilWriteMask);
	pfn_vkCmdSetStencilWriteMask(commandBuffer, faceMask, writeMask);
}

static PFN_vkCmdSetStencilReference pfn_vkCmdSetStencilReference;
VKAPI_ATTR void vkCmdSetStencilReference(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t reference)
{
	assert(pfn_vkCmdSetStencilReference);
	pfn_vkCmdSetStencilReference(commandBuffer, faceMask, reference);
}

static PFN_vkCmdBindDescriptorSets pfn_vkCmdBindDescriptorSets;
VKAPI_ATTR void vkCmdBindDescriptorSets(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t firstSet, uint32_t descriptorSetCount, const VkDescriptorSet * pDescriptorSets, uint32_t dynamicOffsetCount, const uint32_t * pDynamicOffsets)
{
	assert(pfn_vkCmdBindDescriptorSets);
	pfn_vkCmdBindDescriptorSets(commandBuffer, pipelineBindPoint, layout, firstSet, descriptorSetCount, pDescriptorSets, dynamicOffsetCount, pDynamicOffsets);
}

static PFN_vkCmdBindIndexBuffer pfn_vkCmdBindIndexBuffer;
VKAPI_ATTR void vkCmdBindIndexBuffer(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkIndexType indexType)
{
	assert(pfn_vkCmdBindIndexBuffer);
	pfn_vkCmdBindIndexBuffer(commandBuffer, buffer, offset, indexType);
}

static PFN_vkCmdBindVertexBuffers pfn_vkCmdBindVertexBuffers;
VKAPI_ATTR void vkCmdBindVertexBuffers(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer * pBuffers, const VkDeviceSize * pOffsets)
{
	assert(pfn_vkCmdBindVertexBuffers);
	pfn_vkCmdBindVertexBuffers(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets);
}

static PFN_vkCmdDraw pfn_vkCmdDraw;
VKAPI_ATTR void vkCmdDraw(VkCommandBuffer commandBuffer, uint32_t vertexCount, uint32_t instanceCount, uint32_t firstVertex, uint32_t firstInstance)
{
	assert(pfn_vkCmdDraw);
	pfn_vkCmdDraw(commandBuffer, vertexCount, instanceCount, firstVertex, firstInstance);
}

static PFN_vkCmdDrawIndexed pfn_vkCmdDrawIndexed;
VKAPI_ATTR void vkCmdDrawIndexed(VkCommandBuffer commandBuffer, uint32_t indexCount, uint32_t instanceCount, uint32_t firstIndex, int32_t vertexOffset, uint32_t firstInstance)
{
	assert(pfn_vkCmdDrawIndexed);
	pfn_vkCmdDrawIndexed(commandBuffer, indexCount, instanceCount, firstIndex, vertexOffset, firstInstance);
}

static PFN_vkCmdDrawIndirect pfn_vkCmdDrawIndirect;
VKAPI_ATTR void vkCmdDrawIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride)
{
	assert(pfn_vkCmdDrawIndirect);
	pfn_vkCmdDrawIndirect(commandBuffer, buffer, offset, drawCount, stride);
}

static PFN_vkCmdDrawIndexedIndirect pfn_vkCmdDrawIndexedIndirect;
VKAPI_ATTR void vkCmdDrawIndexedIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride)
{
	assert(pfn_vkCmdDrawIndexedIndirect);
	pfn_vkCmdDrawIndexedIndirect(commandBuffer, buffer, offset, drawCount, stride);
}

static PFN_vkCmdDispatch pfn_vkCmdDispatch;
VKAPI_ATTR void vkCmdDispatch(VkCommandBuffer commandBuffer, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ)
{
	assert(pfn_vkCmdDispatch);
	pfn_vkCmdDispatch(commandBuffer, groupCountX, groupCountY, groupCountZ);
}

static PFN_vkCmdDispatchIndirect pfn_vkCmdDispatchIndirect;
VKAPI_ATTR void vkCmdDispatchIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset)
{
	assert(pfn_vkCmdDispatchIndirect);
	pfn_vkCmdDispatchIndirect(commandBuffer, buffer, offset);
}

static PFN_vkCmdCopyBuffer pfn_vkCmdCopyBuffer;
VKAPI_ATTR void vkCmdCopyBuffer(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferCopy * pRegions)
{
	assert(pfn_vkCmdCopyBuffer);
	pfn_vkCmdCopyBuffer(commandBuffer, srcBuffer, dstBuffer, regionCount, pRegions);
}

static PFN_vkCmdCopyImage pfn_vkCmdCopyImage;
VKAPI_ATTR void vkCmdCopyImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageCopy * pRegions)
{
	assert(pfn_vkCmdCopyImage);
	pfn_vkCmdCopyImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions);
}

static PFN_vkCmdBlitImage pfn_vkCmdBlitImage;
VKAPI_ATTR void vkCmdBlitImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageBlit * pRegions, VkFilter filter)
{
	assert(pfn_vkCmdBlitImage);
	pfn_vkCmdBlitImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions, filter);
}

static PFN_vkCmdCopyBufferToImage pfn_vkCmdCopyBufferToImage;
VKAPI_ATTR void vkCmdCopyBufferToImage(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkBufferImageCopy * pRegions)
{
	assert(pfn_vkCmdCopyBufferToImage);
	pfn_vkCmdCopyBufferToImage(commandBuffer, srcBuffer, dstImage, dstImageLayout, regionCount, pRegions);
}

static PFN_vkCmdCopyImageToBuffer pfn_vkCmdCopyImageToBuffer;
VKAPI_ATTR void vkCmdCopyImageToBuffer(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferImageCopy * pRegions)
{
	assert(pfn_vkCmdCopyImageToBuffer);
	pfn_vkCmdCopyImageToBuffer(commandBuffer, srcImage, srcImageLayout, dstBuffer, regionCount, pRegions);
}

static PFN_vkCmdUpdateBuffer pfn_vkCmdUpdateBuffer;
VKAPI_ATTR void vkCmdUpdateBuffer(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize dataSize, const void * pData)
{
	assert(pfn_vkCmdUpdateBuffer);
	pfn_vkCmdUpdateBuffer(commandBuffer, dstBuffer, dstOffset, dataSize, pData);
}

// transfer support is only available when VK_KHR_maintenance1 is enabled, as documented in valid usage language in the specification
static PFN_vkCmdFillBuffer pfn_vkCmdFillBuffer;
VKAPI_ATTR void vkCmdFillBuffer(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize size, uint32_t data)
{
	assert(pfn_vkCmdFillBuffer);
	pfn_vkCmdFillBuffer(commandBuffer, dstBuffer, dstOffset, size, data);
}

static PFN_vkCmdClearColorImage pfn_vkCmdClearColorImage;
VKAPI_ATTR void vkCmdClearColorImage(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearColorValue * pColor, uint32_t rangeCount, const VkImageSubresourceRange * pRanges)
{
	assert(pfn_vkCmdClearColorImage);
	pfn_vkCmdClearColorImage(commandBuffer, image, imageLayout, pColor, rangeCount, pRanges);
}

static PFN_vkCmdClearDepthStencilImage pfn_vkCmdClearDepthStencilImage;
VKAPI_ATTR void vkCmdClearDepthStencilImage(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearDepthStencilValue * pDepthStencil, uint32_t rangeCount, const VkImageSubresourceRange * pRanges)
{
	assert(pfn_vkCmdClearDepthStencilImage);
	pfn_vkCmdClearDepthStencilImage(commandBuffer, image, imageLayout, pDepthStencil, rangeCount, pRanges);
}

static PFN_vkCmdClearAttachments pfn_vkCmdClearAttachments;
VKAPI_ATTR void vkCmdClearAttachments(VkCommandBuffer commandBuffer, uint32_t attachmentCount, const VkClearAttachment * pAttachments, uint32_t rectCount, const VkClearRect * pRects)
{
	assert(pfn_vkCmdClearAttachments);
	pfn_vkCmdClearAttachments(commandBuffer, attachmentCount, pAttachments, rectCount, pRects);
}

static PFN_vkCmdResolveImage pfn_vkCmdResolveImage;
VKAPI_ATTR void vkCmdResolveImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageResolve * pRegions)
{
	assert(pfn_vkCmdResolveImage);
	pfn_vkCmdResolveImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions);
}

static PFN_vkCmdSetEvent pfn_vkCmdSetEvent;
VKAPI_ATTR void vkCmdSetEvent(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask)
{
	assert(pfn_vkCmdSetEvent);
	pfn_vkCmdSetEvent(commandBuffer, event, stageMask);
}

static PFN_vkCmdResetEvent pfn_vkCmdResetEvent;
VKAPI_ATTR void vkCmdResetEvent(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask)
{
	assert(pfn_vkCmdResetEvent);
	pfn_vkCmdResetEvent(commandBuffer, event, stageMask);
}

static PFN_vkCmdWaitEvents pfn_vkCmdWaitEvents;
VKAPI_ATTR void vkCmdWaitEvents(VkCommandBuffer commandBuffer, uint32_t eventCount, const VkEvent * pEvents, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, uint32_t memoryBarrierCount, const VkMemoryBarrier * pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier * pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier * pImageMemoryBarriers)
{
	assert(pfn_vkCmdWaitEvents);
	pfn_vkCmdWaitEvents(commandBuffer, eventCount, pEvents, srcStageMask, dstStageMask, memoryBarrierCount, pMemoryBarriers, bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers);
}

static PFN_vkCmdPipelineBarrier pfn_vkCmdPipelineBarrier;
VKAPI_ATTR void vkCmdPipelineBarrier(VkCommandBuffer commandBuffer, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, VkDependencyFlags dependencyFlags, uint32_t memoryBarrierCount, const VkMemoryBarrier * pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier * pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier * pImageMemoryBarriers)
{
	assert(pfn_vkCmdPipelineBarrier);
	pfn_vkCmdPipelineBarrier(commandBuffer, srcStageMask, dstStageMask, dependencyFlags, memoryBarrierCount, pMemoryBarriers, bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers);
}

static PFN_vkCmdBeginQuery pfn_vkCmdBeginQuery;
VKAPI_ATTR void vkCmdBeginQuery(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags)
{
	assert(pfn_vkCmdBeginQuery);
	pfn_vkCmdBeginQuery(commandBuffer, queryPool, query, flags);
}

static PFN_vkCmdEndQuery pfn_vkCmdEndQuery;
VKAPI_ATTR void vkCmdEndQuery(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query)
{
	assert(pfn_vkCmdEndQuery);
	pfn_vkCmdEndQuery(commandBuffer, queryPool, query);
}

static PFN_vkCmdResetQueryPool pfn_vkCmdResetQueryPool;
VKAPI_ATTR void vkCmdResetQueryPool(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount)
{
	assert(pfn_vkCmdResetQueryPool);
	pfn_vkCmdResetQueryPool(commandBuffer, queryPool, firstQuery, queryCount);
}

static PFN_vkCmdWriteTimestamp pfn_vkCmdWriteTimestamp;
VKAPI_ATTR void vkCmdWriteTimestamp(VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkQueryPool queryPool, uint32_t query)
{
	assert(pfn_vkCmdWriteTimestamp);
	pfn_vkCmdWriteTimestamp(commandBuffer, pipelineStage, queryPool, query);
}

static PFN_vkCmdCopyQueryPoolResults pfn_vkCmdCopyQueryPoolResults;
VKAPI_ATTR void vkCmdCopyQueryPoolResults(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize stride, VkQueryResultFlags flags)
{
	assert(pfn_vkCmdCopyQueryPoolResults);
	pfn_vkCmdCopyQueryPoolResults(commandBuffer, queryPool, firstQuery, queryCount, dstBuffer, dstOffset, stride, flags);
}

static PFN_vkCmdPushConstants pfn_vkCmdPushConstants;
VKAPI_ATTR void vkCmdPushConstants(VkCommandBuffer commandBuffer, VkPipelineLayout layout, VkShaderStageFlags stageFlags, uint32_t offset, uint32_t size, const void * pValues)
{
	assert(pfn_vkCmdPushConstants);
	pfn_vkCmdPushConstants(commandBuffer, layout, stageFlags, offset, size, pValues);
}

static PFN_vkCmdBeginRenderPass pfn_vkCmdBeginRenderPass;
VKAPI_ATTR void vkCmdBeginRenderPass(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo * pRenderPassBegin, VkSubpassContents contents)
{
	assert(pfn_vkCmdBeginRenderPass);
	pfn_vkCmdBeginRenderPass(commandBuffer, pRenderPassBegin, contents);
}

static PFN_vkCmdNextSubpass pfn_vkCmdNextSubpass;
VKAPI_ATTR void vkCmdNextSubpass(VkCommandBuffer commandBuffer, VkSubpassContents contents)
{
	assert(pfn_vkCmdNextSubpass);
	pfn_vkCmdNextSubpass(commandBuffer, contents);
}

static PFN_vkCmdEndRenderPass pfn_vkCmdEndRenderPass;
VKAPI_ATTR void vkCmdEndRenderPass(VkCommandBuffer commandBuffer)
{
	assert(pfn_vkCmdEndRenderPass);
	pfn_vkCmdEndRenderPass(commandBuffer);
}

static PFN_vkCmdExecuteCommands pfn_vkCmdExecuteCommands;
VKAPI_ATTR void vkCmdExecuteCommands(VkCommandBuffer commandBuffer, uint32_t commandBufferCount, const VkCommandBuffer * pCommandBuffers)
{
	assert(pfn_vkCmdExecuteCommands);
	pfn_vkCmdExecuteCommands(commandBuffer, commandBufferCount, pCommandBuffers);
}

#endif // defined(VK_VERSION_1_0)

// Vulkan 1.1 core API interface definitions.
#if defined(VK_VERSION_1_1)

// Device Initialization

static PFN_vkEnumerateInstanceVersion pfn_vkEnumerateInstanceVersion;
VKAPI_ATTR VkResult vkEnumerateInstanceVersion(uint32_t * pApiVersion)
{
	assert(pfn_vkEnumerateInstanceVersion);
	return pfn_vkEnumerateInstanceVersion(pApiVersion);
}

// Promoted from VK_KHR_bind_memory2

static PFN_vkBindBufferMemory2 pfn_vkBindBufferMemory2;
VKAPI_ATTR VkResult vkBindBufferMemory2(VkDevice device, uint32_t bindInfoCount, const VkBindBufferMemoryInfo * pBindInfos)
{
	assert(pfn_vkBindBufferMemory2);
	return pfn_vkBindBufferMemory2(device, bindInfoCount, pBindInfos);
}

static PFN_vkBindImageMemory2 pfn_vkBindImageMemory2;
VKAPI_ATTR VkResult vkBindImageMemory2(VkDevice device, uint32_t bindInfoCount, const VkBindImageMemoryInfo * pBindInfos)
{
	assert(pfn_vkBindImageMemory2);
	return pfn_vkBindImageMemory2(device, bindInfoCount, pBindInfos);
}

// Promoted from VK_KHR_device_group

static PFN_vkGetDeviceGroupPeerMemoryFeatures pfn_vkGetDeviceGroupPeerMemoryFeatures;
VKAPI_ATTR void vkGetDeviceGroupPeerMemoryFeatures(VkDevice device, uint32_t heapIndex, uint32_t localDeviceIndex, uint32_t remoteDeviceIndex, VkPeerMemoryFeatureFlags * pPeerMemoryFeatures)
{
	assert(pfn_vkGetDeviceGroupPeerMemoryFeatures);
	pfn_vkGetDeviceGroupPeerMemoryFeatures(device, heapIndex, localDeviceIndex, remoteDeviceIndex, pPeerMemoryFeatures);
}

static PFN_vkCmdSetDeviceMask pfn_vkCmdSetDeviceMask;
VKAPI_ATTR void vkCmdSetDeviceMask(VkCommandBuffer commandBuffer, uint32_t deviceMask)
{
	assert(pfn_vkCmdSetDeviceMask);
	pfn_vkCmdSetDeviceMask(commandBuffer, deviceMask);
}

static PFN_vkCmdDispatchBase pfn_vkCmdDispatchBase;
VKAPI_ATTR void vkCmdDispatchBase(VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ)
{
	assert(pfn_vkCmdDispatchBase);
	pfn_vkCmdDispatchBase(commandBuffer, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ);
}

// Promoted from VK_KHR_device_group_creation

static PFN_vkEnumeratePhysicalDeviceGroups pfn_vkEnumeratePhysicalDeviceGroups;
VKAPI_ATTR VkResult vkEnumeratePhysicalDeviceGroups(VkInstance instance, uint32_t * pPhysicalDeviceGroupCount, VkPhysicalDeviceGroupProperties * pPhysicalDeviceGroupProperties)
{
	assert(pfn_vkEnumeratePhysicalDeviceGroups);
	return pfn_vkEnumeratePhysicalDeviceGroups(instance, pPhysicalDeviceGroupCount, pPhysicalDeviceGroupProperties);
}

// Promoted from VK_KHR_get_memory_requirements2

static PFN_vkGetImageMemoryRequirements2 pfn_vkGetImageMemoryRequirements2;
VKAPI_ATTR void vkGetImageMemoryRequirements2(VkDevice device, const VkImageMemoryRequirementsInfo2 * pInfo, VkMemoryRequirements2 * pMemoryRequirements)
{
	assert(pfn_vkGetImageMemoryRequirements2);
	pfn_vkGetImageMemoryRequirements2(device, pInfo, pMemoryRequirements);
}

static PFN_vkGetBufferMemoryRequirements2 pfn_vkGetBufferMemoryRequirements2;
VKAPI_ATTR void vkGetBufferMemoryRequirements2(VkDevice device, const VkBufferMemoryRequirementsInfo2 * pInfo, VkMemoryRequirements2 * pMemoryRequirements)
{
	assert(pfn_vkGetBufferMemoryRequirements2);
	pfn_vkGetBufferMemoryRequirements2(device, pInfo, pMemoryRequirements);
}

static PFN_vkGetImageSparseMemoryRequirements2 pfn_vkGetImageSparseMemoryRequirements2;
VKAPI_ATTR void vkGetImageSparseMemoryRequirements2(VkDevice device, const VkImageSparseMemoryRequirementsInfo2 * pInfo, uint32_t * pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2 * pSparseMemoryRequirements)
{
	assert(pfn_vkGetImageSparseMemoryRequirements2);
	pfn_vkGetImageSparseMemoryRequirements2(device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
}

// Promoted from VK_KHR_get_physical_device_properties2

static PFN_vkGetPhysicalDeviceFeatures2 pfn_vkGetPhysicalDeviceFeatures2;
VKAPI_ATTR void vkGetPhysicalDeviceFeatures2(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures2 * pFeatures)
{
	assert(pfn_vkGetPhysicalDeviceFeatures2);
	pfn_vkGetPhysicalDeviceFeatures2(physicalDevice, pFeatures);
}

static PFN_vkGetPhysicalDeviceProperties2 pfn_vkGetPhysicalDeviceProperties2;
VKAPI_ATTR void vkGetPhysicalDeviceProperties2(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties2 * pProperties)
{
	assert(pfn_vkGetPhysicalDeviceProperties2);
	pfn_vkGetPhysicalDeviceProperties2(physicalDevice, pProperties);
}

static PFN_vkGetPhysicalDeviceFormatProperties2 pfn_vkGetPhysicalDeviceFormatProperties2;
VKAPI_ATTR void vkGetPhysicalDeviceFormatProperties2(VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties2 * pFormatProperties)
{
	assert(pfn_vkGetPhysicalDeviceFormatProperties2);
	pfn_vkGetPhysicalDeviceFormatProperties2(physicalDevice, format, pFormatProperties);
}

static PFN_vkGetPhysicalDeviceImageFormatProperties2 pfn_vkGetPhysicalDeviceImageFormatProperties2;
VKAPI_ATTR VkResult vkGetPhysicalDeviceImageFormatProperties2(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceImageFormatInfo2 * pImageFormatInfo, VkImageFormatProperties2 * pImageFormatProperties)
{
	assert(pfn_vkGetPhysicalDeviceImageFormatProperties2);
	return pfn_vkGetPhysicalDeviceImageFormatProperties2(physicalDevice, pImageFormatInfo, pImageFormatProperties);
}

static PFN_vkGetPhysicalDeviceQueueFamilyProperties2 pfn_vkGetPhysicalDeviceQueueFamilyProperties2;
VKAPI_ATTR void vkGetPhysicalDeviceQueueFamilyProperties2(VkPhysicalDevice physicalDevice, uint32_t * pQueueFamilyPropertyCount, VkQueueFamilyProperties2 * pQueueFamilyProperties)
{
	assert(pfn_vkGetPhysicalDeviceQueueFamilyProperties2);
	pfn_vkGetPhysicalDeviceQueueFamilyProperties2(physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties);
}

static PFN_vkGetPhysicalDeviceMemoryProperties2 pfn_vkGetPhysicalDeviceMemoryProperties2;
VKAPI_ATTR void vkGetPhysicalDeviceMemoryProperties2(VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties2 * pMemoryProperties)
{
	assert(pfn_vkGetPhysicalDeviceMemoryProperties2);
	pfn_vkGetPhysicalDeviceMemoryProperties2(physicalDevice, pMemoryProperties);
}

static PFN_vkGetPhysicalDeviceSparseImageFormatProperties2 pfn_vkGetPhysicalDeviceSparseImageFormatProperties2;
VKAPI_ATTR void vkGetPhysicalDeviceSparseImageFormatProperties2(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSparseImageFormatInfo2 * pFormatInfo, uint32_t * pPropertyCount, VkSparseImageFormatProperties2 * pProperties)
{
	assert(pfn_vkGetPhysicalDeviceSparseImageFormatProperties2);
	pfn_vkGetPhysicalDeviceSparseImageFormatProperties2(physicalDevice, pFormatInfo, pPropertyCount, pProperties);
}

// Promoted from VK_KHR_maintenance1

static PFN_vkTrimCommandPool pfn_vkTrimCommandPool;
VKAPI_ATTR void vkTrimCommandPool(VkDevice device, VkCommandPool commandPool, VkCommandPoolTrimFlags flags)
{
	assert(pfn_vkTrimCommandPool);
	pfn_vkTrimCommandPool(device, commandPool, flags);
}

// Originally based on VK_KHR_protected_memory (extension 146), which was never published; thus the mystifying large value= numbers below. These are not aliased since they were not actually promoted from an extension.

static PFN_vkGetDeviceQueue2 pfn_vkGetDeviceQueue2;
VKAPI_ATTR void vkGetDeviceQueue2(VkDevice device, const VkDeviceQueueInfo2 * pQueueInfo, VkQueue * pQueue)
{
	assert(pfn_vkGetDeviceQueue2);
	pfn_vkGetDeviceQueue2(device, pQueueInfo, pQueue);
}

// Promoted from VK_KHR_sampler_ycbcr_conversion

static PFN_vkCreateSamplerYcbcrConversion pfn_vkCreateSamplerYcbcrConversion;
VKAPI_ATTR VkResult vkCreateSamplerYcbcrConversion(VkDevice device, const VkSamplerYcbcrConversionCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSamplerYcbcrConversion * pYcbcrConversion)
{
	assert(pfn_vkCreateSamplerYcbcrConversion);
	return pfn_vkCreateSamplerYcbcrConversion(device, pCreateInfo, pAllocator, pYcbcrConversion);
}

static PFN_vkDestroySamplerYcbcrConversion pfn_vkDestroySamplerYcbcrConversion;
VKAPI_ATTR void vkDestroySamplerYcbcrConversion(VkDevice device, VkSamplerYcbcrConversion ycbcrConversion, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroySamplerYcbcrConversion);
	pfn_vkDestroySamplerYcbcrConversion(device, ycbcrConversion, pAllocator);
}

// Promoted from VK_KHR_descriptor_update_template

static PFN_vkCreateDescriptorUpdateTemplate pfn_vkCreateDescriptorUpdateTemplate;
VKAPI_ATTR VkResult vkCreateDescriptorUpdateTemplate(VkDevice device, const VkDescriptorUpdateTemplateCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDescriptorUpdateTemplate * pDescriptorUpdateTemplate)
{
	assert(pfn_vkCreateDescriptorUpdateTemplate);
	return pfn_vkCreateDescriptorUpdateTemplate(device, pCreateInfo, pAllocator, pDescriptorUpdateTemplate);
}

static PFN_vkDestroyDescriptorUpdateTemplate pfn_vkDestroyDescriptorUpdateTemplate;
VKAPI_ATTR void vkDestroyDescriptorUpdateTemplate(VkDevice device, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroyDescriptorUpdateTemplate);
	pfn_vkDestroyDescriptorUpdateTemplate(device, descriptorUpdateTemplate, pAllocator);
}

static PFN_vkUpdateDescriptorSetWithTemplate pfn_vkUpdateDescriptorSetWithTemplate;
VKAPI_ATTR void vkUpdateDescriptorSetWithTemplate(VkDevice device, VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const void * pData)
{
	assert(pfn_vkUpdateDescriptorSetWithTemplate);
	pfn_vkUpdateDescriptorSetWithTemplate(device, descriptorSet, descriptorUpdateTemplate, pData);
}

// Promoted from VK_KHR_external_memory_capabilities

static PFN_vkGetPhysicalDeviceExternalBufferProperties pfn_vkGetPhysicalDeviceExternalBufferProperties;
VKAPI_ATTR void vkGetPhysicalDeviceExternalBufferProperties(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalBufferInfo * pExternalBufferInfo, VkExternalBufferProperties * pExternalBufferProperties)
{
	assert(pfn_vkGetPhysicalDeviceExternalBufferProperties);
	pfn_vkGetPhysicalDeviceExternalBufferProperties(physicalDevice, pExternalBufferInfo, pExternalBufferProperties);
}

// Promoted from VK_KHR_external_fence_capabilities

static PFN_vkGetPhysicalDeviceExternalFenceProperties pfn_vkGetPhysicalDeviceExternalFenceProperties;
VKAPI_ATTR void vkGetPhysicalDeviceExternalFenceProperties(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalFenceInfo * pExternalFenceInfo, VkExternalFenceProperties * pExternalFenceProperties)
{
	assert(pfn_vkGetPhysicalDeviceExternalFenceProperties);
	pfn_vkGetPhysicalDeviceExternalFenceProperties(physicalDevice, pExternalFenceInfo, pExternalFenceProperties);
}

// Promoted from VK_KHR_external_semaphore_capabilities

static PFN_vkGetPhysicalDeviceExternalSemaphoreProperties pfn_vkGetPhysicalDeviceExternalSemaphoreProperties;
VKAPI_ATTR void vkGetPhysicalDeviceExternalSemaphoreProperties(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalSemaphoreInfo * pExternalSemaphoreInfo, VkExternalSemaphoreProperties * pExternalSemaphoreProperties)
{
	assert(pfn_vkGetPhysicalDeviceExternalSemaphoreProperties);
	pfn_vkGetPhysicalDeviceExternalSemaphoreProperties(physicalDevice, pExternalSemaphoreInfo, pExternalSemaphoreProperties);
}

// Promoted from VK_KHR_maintenance3

static PFN_vkGetDescriptorSetLayoutSupport pfn_vkGetDescriptorSetLayoutSupport;
VKAPI_ATTR void vkGetDescriptorSetLayoutSupport(VkDevice device, const VkDescriptorSetLayoutCreateInfo * pCreateInfo, VkDescriptorSetLayoutSupport * pSupport)
{
	assert(pfn_vkGetDescriptorSetLayoutSupport);
	pfn_vkGetDescriptorSetLayoutSupport(device, pCreateInfo, pSupport);
}

#endif // defined(VK_VERSION_1_1)

// Vulkan 1.2 core API interface definitions.
#if defined(VK_VERSION_1_2)

// Promoted from VK_KHR_draw_indirect_count (extension 170)

static PFN_vkCmdDrawIndirectCount pfn_vkCmdDrawIndirectCount;
VKAPI_ATTR void vkCmdDrawIndirectCount(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride)
{
	assert(pfn_vkCmdDrawIndirectCount);
	pfn_vkCmdDrawIndirectCount(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
}

static PFN_vkCmdDrawIndexedIndirectCount pfn_vkCmdDrawIndexedIndirectCount;
VKAPI_ATTR void vkCmdDrawIndexedIndirectCount(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride)
{
	assert(pfn_vkCmdDrawIndexedIndirectCount);
	pfn_vkCmdDrawIndexedIndirectCount(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
}

// Promoted from VK_KHR_create_renderpass2 (extension 110)

static PFN_vkCreateRenderPass2 pfn_vkCreateRenderPass2;
VKAPI_ATTR VkResult vkCreateRenderPass2(VkDevice device, const VkRenderPassCreateInfo2 * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkRenderPass * pRenderPass)
{
	assert(pfn_vkCreateRenderPass2);
	return pfn_vkCreateRenderPass2(device, pCreateInfo, pAllocator, pRenderPass);
}

static PFN_vkCmdBeginRenderPass2 pfn_vkCmdBeginRenderPass2;
VKAPI_ATTR void vkCmdBeginRenderPass2(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo * pRenderPassBegin, const VkSubpassBeginInfo * pSubpassBeginInfo)
{
	assert(pfn_vkCmdBeginRenderPass2);
	pfn_vkCmdBeginRenderPass2(commandBuffer, pRenderPassBegin, pSubpassBeginInfo);
}

static PFN_vkCmdNextSubpass2 pfn_vkCmdNextSubpass2;
VKAPI_ATTR void vkCmdNextSubpass2(VkCommandBuffer commandBuffer, const VkSubpassBeginInfo * pSubpassBeginInfo, const VkSubpassEndInfo * pSubpassEndInfo)
{
	assert(pfn_vkCmdNextSubpass2);
	pfn_vkCmdNextSubpass2(commandBuffer, pSubpassBeginInfo, pSubpassEndInfo);
}

static PFN_vkCmdEndRenderPass2 pfn_vkCmdEndRenderPass2;
VKAPI_ATTR void vkCmdEndRenderPass2(VkCommandBuffer commandBuffer, const VkSubpassEndInfo * pSubpassEndInfo)
{
	assert(pfn_vkCmdEndRenderPass2);
	pfn_vkCmdEndRenderPass2(commandBuffer, pSubpassEndInfo);
}

// Promoted from VK_EXT_host_query_reset (extension 262)

static PFN_vkResetQueryPool pfn_vkResetQueryPool;
VKAPI_ATTR void vkResetQueryPool(VkDevice device, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount)
{
	assert(pfn_vkResetQueryPool);
	pfn_vkResetQueryPool(device, queryPool, firstQuery, queryCount);
}

// Promoted from VK_KHR_timeline_semaphore (extension 208)

static PFN_vkGetSemaphoreCounterValue pfn_vkGetSemaphoreCounterValue;
VKAPI_ATTR VkResult vkGetSemaphoreCounterValue(VkDevice device, VkSemaphore semaphore, uint64_t * pValue)
{
	assert(pfn_vkGetSemaphoreCounterValue);
	return pfn_vkGetSemaphoreCounterValue(device, semaphore, pValue);
}

static PFN_vkWaitSemaphores pfn_vkWaitSemaphores;
VKAPI_ATTR VkResult vkWaitSemaphores(VkDevice device, const VkSemaphoreWaitInfo * pWaitInfo, uint64_t timeout)
{
	assert(pfn_vkWaitSemaphores);
	return pfn_vkWaitSemaphores(device, pWaitInfo, timeout);
}

static PFN_vkSignalSemaphore pfn_vkSignalSemaphore;
VKAPI_ATTR VkResult vkSignalSemaphore(VkDevice device, const VkSemaphoreSignalInfo * pSignalInfo)
{
	assert(pfn_vkSignalSemaphore);
	return pfn_vkSignalSemaphore(device, pSignalInfo);
}

// Promoted from VK_KHR_buffer_device_address (extension 258)

static PFN_vkGetBufferDeviceAddress pfn_vkGetBufferDeviceAddress;
VKAPI_ATTR VkDeviceAddress vkGetBufferDeviceAddress(VkDevice device, const VkBufferDeviceAddressInfo * pInfo)
{
	assert(pfn_vkGetBufferDeviceAddress);
	return pfn_vkGetBufferDeviceAddress(device, pInfo);
}

static PFN_vkGetBufferOpaqueCaptureAddress pfn_vkGetBufferOpaqueCaptureAddress;
VKAPI_ATTR uint64_t vkGetBufferOpaqueCaptureAddress(VkDevice device, const VkBufferDeviceAddressInfo * pInfo)
{
	assert(pfn_vkGetBufferOpaqueCaptureAddress);
	return pfn_vkGetBufferOpaqueCaptureAddress(device, pInfo);
}

static PFN_vkGetDeviceMemoryOpaqueCaptureAddress pfn_vkGetDeviceMemoryOpaqueCaptureAddress;
VKAPI_ATTR uint64_t vkGetDeviceMemoryOpaqueCaptureAddress(VkDevice device, const VkDeviceMemoryOpaqueCaptureAddressInfo * pInfo)
{
	assert(pfn_vkGetDeviceMemoryOpaqueCaptureAddress);
	return pfn_vkGetDeviceMemoryOpaqueCaptureAddress(device, pInfo);
}

#endif // defined(VK_VERSION_1_2)

// Vulkan 1.3 core API interface definitions.
#if defined(VK_VERSION_1_3)

// Promoted from VK_EXT_tooling_info (extension 246)

static PFN_vkGetPhysicalDeviceToolProperties pfn_vkGetPhysicalDeviceToolProperties;
VKAPI_ATTR VkResult vkGetPhysicalDeviceToolProperties(VkPhysicalDevice physicalDevice, uint32_t * pToolCount, VkPhysicalDeviceToolProperties * pToolProperties)
{
	assert(pfn_vkGetPhysicalDeviceToolProperties);
	return pfn_vkGetPhysicalDeviceToolProperties(physicalDevice, pToolCount, pToolProperties);
}

// Promoted from VK_EXT_private_data (extension 296)

static PFN_vkCreatePrivateDataSlot pfn_vkCreatePrivateDataSlot;
VKAPI_ATTR VkResult vkCreatePrivateDataSlot(VkDevice device, const VkPrivateDataSlotCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkPrivateDataSlot * pPrivateDataSlot)
{
	assert(pfn_vkCreatePrivateDataSlot);
	return pfn_vkCreatePrivateDataSlot(device, pCreateInfo, pAllocator, pPrivateDataSlot);
}

static PFN_vkDestroyPrivateDataSlot pfn_vkDestroyPrivateDataSlot;
VKAPI_ATTR void vkDestroyPrivateDataSlot(VkDevice device, VkPrivateDataSlot privateDataSlot, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroyPrivateDataSlot);
	pfn_vkDestroyPrivateDataSlot(device, privateDataSlot, pAllocator);
}

static PFN_vkSetPrivateData pfn_vkSetPrivateData;
VKAPI_ATTR VkResult vkSetPrivateData(VkDevice device, VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlot privateDataSlot, uint64_t data)
{
	assert(pfn_vkSetPrivateData);
	return pfn_vkSetPrivateData(device, objectType, objectHandle, privateDataSlot, data);
}

static PFN_vkGetPrivateData pfn_vkGetPrivateData;
VKAPI_ATTR void vkGetPrivateData(VkDevice device, VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlot privateDataSlot, uint64_t * pData)
{
	assert(pfn_vkGetPrivateData);
	pfn_vkGetPrivateData(device, objectType, objectHandle, privateDataSlot, pData);
}

// Promoted from VK_KHR_synchronization2 (extension 315)

static PFN_vkCmdSetEvent2 pfn_vkCmdSetEvent2;
VKAPI_ATTR void vkCmdSetEvent2(VkCommandBuffer commandBuffer, VkEvent event, const VkDependencyInfo * pDependencyInfo)
{
	assert(pfn_vkCmdSetEvent2);
	pfn_vkCmdSetEvent2(commandBuffer, event, pDependencyInfo);
}

static PFN_vkCmdResetEvent2 pfn_vkCmdResetEvent2;
VKAPI_ATTR void vkCmdResetEvent2(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags2 stageMask)
{
	assert(pfn_vkCmdResetEvent2);
	pfn_vkCmdResetEvent2(commandBuffer, event, stageMask);
}

static PFN_vkCmdWaitEvents2 pfn_vkCmdWaitEvents2;
VKAPI_ATTR void vkCmdWaitEvents2(VkCommandBuffer commandBuffer, uint32_t eventCount, const VkEvent * pEvents, const VkDependencyInfo * pDependencyInfos)
{
	assert(pfn_vkCmdWaitEvents2);
	pfn_vkCmdWaitEvents2(commandBuffer, eventCount, pEvents, pDependencyInfos);
}

static PFN_vkCmdPipelineBarrier2 pfn_vkCmdPipelineBarrier2;
VKAPI_ATTR void vkCmdPipelineBarrier2(VkCommandBuffer commandBuffer, const VkDependencyInfo * pDependencyInfo)
{
	assert(pfn_vkCmdPipelineBarrier2);
	pfn_vkCmdPipelineBarrier2(commandBuffer, pDependencyInfo);
}

static PFN_vkCmdWriteTimestamp2 pfn_vkCmdWriteTimestamp2;
VKAPI_ATTR void vkCmdWriteTimestamp2(VkCommandBuffer commandBuffer, VkPipelineStageFlags2 stage, VkQueryPool queryPool, uint32_t query)
{
	assert(pfn_vkCmdWriteTimestamp2);
	pfn_vkCmdWriteTimestamp2(commandBuffer, stage, queryPool, query);
}

static PFN_vkQueueSubmit2 pfn_vkQueueSubmit2;
VKAPI_ATTR VkResult vkQueueSubmit2(VkQueue queue, uint32_t submitCount, const VkSubmitInfo2 * pSubmits, VkFence fence)
{
	assert(pfn_vkQueueSubmit2);
	return pfn_vkQueueSubmit2(queue, submitCount, pSubmits, fence);
}

// Promoted from VK_KHR_copy_commands2 (extension 338)

static PFN_vkCmdCopyBuffer2 pfn_vkCmdCopyBuffer2;
VKAPI_ATTR void vkCmdCopyBuffer2(VkCommandBuffer commandBuffer, const VkCopyBufferInfo2 * pCopyBufferInfo)
{
	assert(pfn_vkCmdCopyBuffer2);
	pfn_vkCmdCopyBuffer2(commandBuffer, pCopyBufferInfo);
}

static PFN_vkCmdCopyImage2 pfn_vkCmdCopyImage2;
VKAPI_ATTR void vkCmdCopyImage2(VkCommandBuffer commandBuffer, const VkCopyImageInfo2 * pCopyImageInfo)
{
	assert(pfn_vkCmdCopyImage2);
	pfn_vkCmdCopyImage2(commandBuffer, pCopyImageInfo);
}

static PFN_vkCmdCopyBufferToImage2 pfn_vkCmdCopyBufferToImage2;
VKAPI_ATTR void vkCmdCopyBufferToImage2(VkCommandBuffer commandBuffer, const VkCopyBufferToImageInfo2 * pCopyBufferToImageInfo)
{
	assert(pfn_vkCmdCopyBufferToImage2);
	pfn_vkCmdCopyBufferToImage2(commandBuffer, pCopyBufferToImageInfo);
}

static PFN_vkCmdCopyImageToBuffer2 pfn_vkCmdCopyImageToBuffer2;
VKAPI_ATTR void vkCmdCopyImageToBuffer2(VkCommandBuffer commandBuffer, const VkCopyImageToBufferInfo2 * pCopyImageToBufferInfo)
{
	assert(pfn_vkCmdCopyImageToBuffer2);
	pfn_vkCmdCopyImageToBuffer2(commandBuffer, pCopyImageToBufferInfo);
}

static PFN_vkCmdBlitImage2 pfn_vkCmdBlitImage2;
VKAPI_ATTR void vkCmdBlitImage2(VkCommandBuffer commandBuffer, const VkBlitImageInfo2 * pBlitImageInfo)
{
	assert(pfn_vkCmdBlitImage2);
	pfn_vkCmdBlitImage2(commandBuffer, pBlitImageInfo);
}

static PFN_vkCmdResolveImage2 pfn_vkCmdResolveImage2;
VKAPI_ATTR void vkCmdResolveImage2(VkCommandBuffer commandBuffer, const VkResolveImageInfo2 * pResolveImageInfo)
{
	assert(pfn_vkCmdResolveImage2);
	pfn_vkCmdResolveImage2(commandBuffer, pResolveImageInfo);
}

// Promoted from VK_KHR_dynamic_rendering (extension 45)

static PFN_vkCmdBeginRendering pfn_vkCmdBeginRendering;
VKAPI_ATTR void vkCmdBeginRendering(VkCommandBuffer commandBuffer, const VkRenderingInfo * pRenderingInfo)
{
	assert(pfn_vkCmdBeginRendering);
	pfn_vkCmdBeginRendering(commandBuffer, pRenderingInfo);
}

static PFN_vkCmdEndRendering pfn_vkCmdEndRendering;
VKAPI_ATTR void vkCmdEndRendering(VkCommandBuffer commandBuffer)
{
	assert(pfn_vkCmdEndRendering);
	pfn_vkCmdEndRendering(commandBuffer);
}

// Promoted from VK_EXT_extended_dynamic_state (Feature struct is not promoted) (extension 268)

static PFN_vkCmdSetCullMode pfn_vkCmdSetCullMode;
VKAPI_ATTR void vkCmdSetCullMode(VkCommandBuffer commandBuffer, VkCullModeFlags cullMode)
{
	assert(pfn_vkCmdSetCullMode);
	pfn_vkCmdSetCullMode(commandBuffer, cullMode);
}

static PFN_vkCmdSetFrontFace pfn_vkCmdSetFrontFace;
VKAPI_ATTR void vkCmdSetFrontFace(VkCommandBuffer commandBuffer, VkFrontFace frontFace)
{
	assert(pfn_vkCmdSetFrontFace);
	pfn_vkCmdSetFrontFace(commandBuffer, frontFace);
}

static PFN_vkCmdSetPrimitiveTopology pfn_vkCmdSetPrimitiveTopology;
VKAPI_ATTR void vkCmdSetPrimitiveTopology(VkCommandBuffer commandBuffer, VkPrimitiveTopology primitiveTopology)
{
	assert(pfn_vkCmdSetPrimitiveTopology);
	pfn_vkCmdSetPrimitiveTopology(commandBuffer, primitiveTopology);
}

static PFN_vkCmdSetViewportWithCount pfn_vkCmdSetViewportWithCount;
VKAPI_ATTR void vkCmdSetViewportWithCount(VkCommandBuffer commandBuffer, uint32_t viewportCount, const VkViewport * pViewports)
{
	assert(pfn_vkCmdSetViewportWithCount);
	pfn_vkCmdSetViewportWithCount(commandBuffer, viewportCount, pViewports);
}

static PFN_vkCmdSetScissorWithCount pfn_vkCmdSetScissorWithCount;
VKAPI_ATTR void vkCmdSetScissorWithCount(VkCommandBuffer commandBuffer, uint32_t scissorCount, const VkRect2D * pScissors)
{
	assert(pfn_vkCmdSetScissorWithCount);
	pfn_vkCmdSetScissorWithCount(commandBuffer, scissorCount, pScissors);
}

static PFN_vkCmdBindVertexBuffers2 pfn_vkCmdBindVertexBuffers2;
VKAPI_ATTR void vkCmdBindVertexBuffers2(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer * pBuffers, const VkDeviceSize * pOffsets, const VkDeviceSize * pSizes, const VkDeviceSize * pStrides)
{
	assert(pfn_vkCmdBindVertexBuffers2);
	pfn_vkCmdBindVertexBuffers2(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets, pSizes, pStrides);
}

static PFN_vkCmdSetDepthTestEnable pfn_vkCmdSetDepthTestEnable;
VKAPI_ATTR void vkCmdSetDepthTestEnable(VkCommandBuffer commandBuffer, VkBool32 depthTestEnable)
{
	assert(pfn_vkCmdSetDepthTestEnable);
	pfn_vkCmdSetDepthTestEnable(commandBuffer, depthTestEnable);
}

static PFN_vkCmdSetDepthWriteEnable pfn_vkCmdSetDepthWriteEnable;
VKAPI_ATTR void vkCmdSetDepthWriteEnable(VkCommandBuffer commandBuffer, VkBool32 depthWriteEnable)
{
	assert(pfn_vkCmdSetDepthWriteEnable);
	pfn_vkCmdSetDepthWriteEnable(commandBuffer, depthWriteEnable);
}

static PFN_vkCmdSetDepthCompareOp pfn_vkCmdSetDepthCompareOp;
VKAPI_ATTR void vkCmdSetDepthCompareOp(VkCommandBuffer commandBuffer, VkCompareOp depthCompareOp)
{
	assert(pfn_vkCmdSetDepthCompareOp);
	pfn_vkCmdSetDepthCompareOp(commandBuffer, depthCompareOp);
}

static PFN_vkCmdSetDepthBoundsTestEnable pfn_vkCmdSetDepthBoundsTestEnable;
VKAPI_ATTR void vkCmdSetDepthBoundsTestEnable(VkCommandBuffer commandBuffer, VkBool32 depthBoundsTestEnable)
{
	assert(pfn_vkCmdSetDepthBoundsTestEnable);
	pfn_vkCmdSetDepthBoundsTestEnable(commandBuffer, depthBoundsTestEnable);
}

static PFN_vkCmdSetStencilTestEnable pfn_vkCmdSetStencilTestEnable;
VKAPI_ATTR void vkCmdSetStencilTestEnable(VkCommandBuffer commandBuffer, VkBool32 stencilTestEnable)
{
	assert(pfn_vkCmdSetStencilTestEnable);
	pfn_vkCmdSetStencilTestEnable(commandBuffer, stencilTestEnable);
}

static PFN_vkCmdSetStencilOp pfn_vkCmdSetStencilOp;
VKAPI_ATTR void vkCmdSetStencilOp(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, VkStencilOp failOp, VkStencilOp passOp, VkStencilOp depthFailOp, VkCompareOp compareOp)
{
	assert(pfn_vkCmdSetStencilOp);
	pfn_vkCmdSetStencilOp(commandBuffer, faceMask, failOp, passOp, depthFailOp, compareOp);
}

// Promoted from VK_EXT_extended_dynamic_state2 (Feature struct and optional state are not promoted) (extension 378)

static PFN_vkCmdSetRasterizerDiscardEnable pfn_vkCmdSetRasterizerDiscardEnable;
VKAPI_ATTR void vkCmdSetRasterizerDiscardEnable(VkCommandBuffer commandBuffer, VkBool32 rasterizerDiscardEnable)
{
	assert(pfn_vkCmdSetRasterizerDiscardEnable);
	pfn_vkCmdSetRasterizerDiscardEnable(commandBuffer, rasterizerDiscardEnable);
}

static PFN_vkCmdSetDepthBiasEnable pfn_vkCmdSetDepthBiasEnable;
VKAPI_ATTR void vkCmdSetDepthBiasEnable(VkCommandBuffer commandBuffer, VkBool32 depthBiasEnable)
{
	assert(pfn_vkCmdSetDepthBiasEnable);
	pfn_vkCmdSetDepthBiasEnable(commandBuffer, depthBiasEnable);
}

static PFN_vkCmdSetPrimitiveRestartEnable pfn_vkCmdSetPrimitiveRestartEnable;
VKAPI_ATTR void vkCmdSetPrimitiveRestartEnable(VkCommandBuffer commandBuffer, VkBool32 primitiveRestartEnable)
{
	assert(pfn_vkCmdSetPrimitiveRestartEnable);
	pfn_vkCmdSetPrimitiveRestartEnable(commandBuffer, primitiveRestartEnable);
}

// Promoted from VK_KHR_maintenance4 (extension 414)

static PFN_vkGetDeviceBufferMemoryRequirements pfn_vkGetDeviceBufferMemoryRequirements;
VKAPI_ATTR void vkGetDeviceBufferMemoryRequirements(VkDevice device, const VkDeviceBufferMemoryRequirements * pInfo, VkMemoryRequirements2 * pMemoryRequirements)
{
	assert(pfn_vkGetDeviceBufferMemoryRequirements);
	pfn_vkGetDeviceBufferMemoryRequirements(device, pInfo, pMemoryRequirements);
}

static PFN_vkGetDeviceImageMemoryRequirements pfn_vkGetDeviceImageMemoryRequirements;
VKAPI_ATTR void vkGetDeviceImageMemoryRequirements(VkDevice device, const VkDeviceImageMemoryRequirements * pInfo, VkMemoryRequirements2 * pMemoryRequirements)
{
	assert(pfn_vkGetDeviceImageMemoryRequirements);
	pfn_vkGetDeviceImageMemoryRequirements(device, pInfo, pMemoryRequirements);
}

static PFN_vkGetDeviceImageSparseMemoryRequirements pfn_vkGetDeviceImageSparseMemoryRequirements;
VKAPI_ATTR void vkGetDeviceImageSparseMemoryRequirements(VkDevice device, const VkDeviceImageMemoryRequirements * pInfo, uint32_t * pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2 * pSparseMemoryRequirements)
{
	assert(pfn_vkGetDeviceImageSparseMemoryRequirements);
	pfn_vkGetDeviceImageSparseMemoryRequirements(device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
}

#endif // defined(VK_VERSION_1_3)

// Vulkan 1.4 core API interface definitions.
#if defined(VK_VERSION_1_4)

// Promoted from VK_KHR_line_rasterization (extension 535) 'Roadmap 2024'

static PFN_vkCmdSetLineStipple pfn_vkCmdSetLineStipple;
VKAPI_ATTR void vkCmdSetLineStipple(VkCommandBuffer commandBuffer, uint32_t lineStippleFactor, uint16_t lineStipplePattern)
{
	assert(pfn_vkCmdSetLineStipple);
	pfn_vkCmdSetLineStipple(commandBuffer, lineStippleFactor, lineStipplePattern);
}

// Promoted from VK_KHR_map_memory2 (extension 272) 'Roadmap 2024'

static PFN_vkMapMemory2 pfn_vkMapMemory2;
VKAPI_ATTR VkResult vkMapMemory2(VkDevice device, const VkMemoryMapInfo * pMemoryMapInfo, void ** ppData)
{
	assert(pfn_vkMapMemory2);
	return pfn_vkMapMemory2(device, pMemoryMapInfo, ppData);
}

static PFN_vkUnmapMemory2 pfn_vkUnmapMemory2;
VKAPI_ATTR VkResult vkUnmapMemory2(VkDevice device, const VkMemoryUnmapInfo * pMemoryUnmapInfo)
{
	assert(pfn_vkUnmapMemory2);
	return pfn_vkUnmapMemory2(device, pMemoryUnmapInfo);
}

// Promoted from VK_KHR_maintenance5 (extension 471) 'Roadmap 2024'

static PFN_vkCmdBindIndexBuffer2 pfn_vkCmdBindIndexBuffer2;
VKAPI_ATTR void vkCmdBindIndexBuffer2(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkDeviceSize size, VkIndexType indexType)
{
	assert(pfn_vkCmdBindIndexBuffer2);
	pfn_vkCmdBindIndexBuffer2(commandBuffer, buffer, offset, size, indexType);
}

static PFN_vkGetRenderingAreaGranularity pfn_vkGetRenderingAreaGranularity;
VKAPI_ATTR void vkGetRenderingAreaGranularity(VkDevice device, const VkRenderingAreaInfo * pRenderingAreaInfo, VkExtent2D * pGranularity)
{
	assert(pfn_vkGetRenderingAreaGranularity);
	pfn_vkGetRenderingAreaGranularity(device, pRenderingAreaInfo, pGranularity);
}

static PFN_vkGetDeviceImageSubresourceLayout pfn_vkGetDeviceImageSubresourceLayout;
VKAPI_ATTR void vkGetDeviceImageSubresourceLayout(VkDevice device, const VkDeviceImageSubresourceInfo * pInfo, VkSubresourceLayout2 * pLayout)
{
	assert(pfn_vkGetDeviceImageSubresourceLayout);
	pfn_vkGetDeviceImageSubresourceLayout(device, pInfo, pLayout);
}

static PFN_vkGetImageSubresourceLayout2 pfn_vkGetImageSubresourceLayout2;
VKAPI_ATTR void vkGetImageSubresourceLayout2(VkDevice device, VkImage image, const VkImageSubresource2 * pSubresource, VkSubresourceLayout2 * pLayout)
{
	assert(pfn_vkGetImageSubresourceLayout2);
	pfn_vkGetImageSubresourceLayout2(device, image, pSubresource, pLayout);
}

// Promoted from VK_KHR_push_descriptor (extension 81) 'Roadmap 2024'

static PFN_vkCmdPushDescriptorSet pfn_vkCmdPushDescriptorSet;
VKAPI_ATTR void vkCmdPushDescriptorSet(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t set, uint32_t descriptorWriteCount, const VkWriteDescriptorSet * pDescriptorWrites)
{
	assert(pfn_vkCmdPushDescriptorSet);
	pfn_vkCmdPushDescriptorSet(commandBuffer, pipelineBindPoint, layout, set, descriptorWriteCount, pDescriptorWrites);
}

static PFN_vkCmdPushDescriptorSetWithTemplate pfn_vkCmdPushDescriptorSetWithTemplate;
VKAPI_ATTR void vkCmdPushDescriptorSetWithTemplate(VkCommandBuffer commandBuffer, VkDescriptorUpdateTemplate descriptorUpdateTemplate, VkPipelineLayout layout, uint32_t set, const void * pData)
{
	assert(pfn_vkCmdPushDescriptorSetWithTemplate);
	pfn_vkCmdPushDescriptorSetWithTemplate(commandBuffer, descriptorUpdateTemplate, layout, set, pData);
}

// Promoted from VK_KHR_dynamic_rendering_local_read (extension 233) 'Roadmap 2024'

static PFN_vkCmdSetRenderingAttachmentLocations pfn_vkCmdSetRenderingAttachmentLocations;
VKAPI_ATTR void vkCmdSetRenderingAttachmentLocations(VkCommandBuffer commandBuffer, const VkRenderingAttachmentLocationInfo * pLocationInfo)
{
	assert(pfn_vkCmdSetRenderingAttachmentLocations);
	pfn_vkCmdSetRenderingAttachmentLocations(commandBuffer, pLocationInfo);
}

static PFN_vkCmdSetRenderingInputAttachmentIndices pfn_vkCmdSetRenderingInputAttachmentIndices;
VKAPI_ATTR void vkCmdSetRenderingInputAttachmentIndices(VkCommandBuffer commandBuffer, const VkRenderingInputAttachmentIndexInfo * pInputAttachmentIndexInfo)
{
	assert(pfn_vkCmdSetRenderingInputAttachmentIndices);
	pfn_vkCmdSetRenderingInputAttachmentIndices(commandBuffer, pInputAttachmentIndexInfo);
}

// Promoted from VK_KHR_maintenance6 (extension 546) 'additional functionality'

static PFN_vkCmdBindDescriptorSets2 pfn_vkCmdBindDescriptorSets2;
VKAPI_ATTR void vkCmdBindDescriptorSets2(VkCommandBuffer commandBuffer, const VkBindDescriptorSetsInfo * pBindDescriptorSetsInfo)
{
	assert(pfn_vkCmdBindDescriptorSets2);
	pfn_vkCmdBindDescriptorSets2(commandBuffer, pBindDescriptorSetsInfo);
}

static PFN_vkCmdPushConstants2 pfn_vkCmdPushConstants2;
VKAPI_ATTR void vkCmdPushConstants2(VkCommandBuffer commandBuffer, const VkPushConstantsInfo * pPushConstantsInfo)
{
	assert(pfn_vkCmdPushConstants2);
	pfn_vkCmdPushConstants2(commandBuffer, pPushConstantsInfo);
}

static PFN_vkCmdPushDescriptorSet2 pfn_vkCmdPushDescriptorSet2;
VKAPI_ATTR void vkCmdPushDescriptorSet2(VkCommandBuffer commandBuffer, const VkPushDescriptorSetInfo * pPushDescriptorSetInfo)
{
	assert(pfn_vkCmdPushDescriptorSet2);
	pfn_vkCmdPushDescriptorSet2(commandBuffer, pPushDescriptorSetInfo);
}

static PFN_vkCmdPushDescriptorSetWithTemplate2 pfn_vkCmdPushDescriptorSetWithTemplate2;
VKAPI_ATTR void vkCmdPushDescriptorSetWithTemplate2(VkCommandBuffer commandBuffer, const VkPushDescriptorSetWithTemplateInfo * pPushDescriptorSetWithTemplateInfo)
{
	assert(pfn_vkCmdPushDescriptorSetWithTemplate2);
	pfn_vkCmdPushDescriptorSetWithTemplate2(commandBuffer, pPushDescriptorSetWithTemplateInfo);
}

// Promoted (as optional feature) from VK_EXT_host_image_copy (extension 271) 'streaming transfers'

static PFN_vkCopyMemoryToImage pfn_vkCopyMemoryToImage;
VKAPI_ATTR VkResult vkCopyMemoryToImage(VkDevice device, const VkCopyMemoryToImageInfo * pCopyMemoryToImageInfo)
{
	assert(pfn_vkCopyMemoryToImage);
	return pfn_vkCopyMemoryToImage(device, pCopyMemoryToImageInfo);
}

static PFN_vkCopyImageToMemory pfn_vkCopyImageToMemory;
VKAPI_ATTR VkResult vkCopyImageToMemory(VkDevice device, const VkCopyImageToMemoryInfo * pCopyImageToMemoryInfo)
{
	assert(pfn_vkCopyImageToMemory);
	return pfn_vkCopyImageToMemory(device, pCopyImageToMemoryInfo);
}

static PFN_vkCopyImageToImage pfn_vkCopyImageToImage;
VKAPI_ATTR VkResult vkCopyImageToImage(VkDevice device, const VkCopyImageToImageInfo * pCopyImageToImageInfo)
{
	assert(pfn_vkCopyImageToImage);
	return pfn_vkCopyImageToImage(device, pCopyImageToImageInfo);
}

static PFN_vkTransitionImageLayout pfn_vkTransitionImageLayout;
VKAPI_ATTR VkResult vkTransitionImageLayout(VkDevice device, uint32_t transitionCount, const VkHostImageLayoutTransitionInfo * pTransitions)
{
	assert(pfn_vkTransitionImageLayout);
	return pfn_vkTransitionImageLayout(device, transitionCount, pTransitions);
}

#endif // defined(VK_VERSION_1_4)

// Vulkan SC core API interface definitions
#if defined(VKSC_VERSION_1_0)

// static memory functionality

static PFN_vkGetCommandPoolMemoryConsumption pfn_vkGetCommandPoolMemoryConsumption;
VKAPI_ATTR void vkGetCommandPoolMemoryConsumption(VkDevice device, VkCommandPool commandPool, VkCommandBuffer commandBuffer, VkCommandPoolMemoryConsumption * pConsumption)
{
	assert(pfn_vkGetCommandPoolMemoryConsumption);
	pfn_vkGetCommandPoolMemoryConsumption(device, commandPool, commandBuffer, pConsumption);
}

// fault handling functionality

static PFN_vkGetFaultData pfn_vkGetFaultData;
VKAPI_ATTR VkResult vkGetFaultData(VkDevice device, VkFaultQueryBehavior faultQueryBehavior, VkBool32 * pUnrecordedFaults, uint32_t * pFaultCount, VkFaultData * pFaults)
{
	assert(pfn_vkGetFaultData);
	return pfn_vkGetFaultData(device, faultQueryBehavior, pUnrecordedFaults, pFaultCount, pFaults);
}

#endif // defined(VKSC_VERSION_1_0)
#if defined(VK_AMDX_shader_enqueue)

static PFN_vkGetExecutionGraphPipelineScratchSizeAMDX pfn_vkGetExecutionGraphPipelineScratchSizeAMDX;
VKAPI_ATTR VkResult vkGetExecutionGraphPipelineScratchSizeAMDX(VkDevice device, VkPipeline executionGraph, VkExecutionGraphPipelineScratchSizeAMDX * pSizeInfo)
{
	assert(pfn_vkGetExecutionGraphPipelineScratchSizeAMDX);
	return pfn_vkGetExecutionGraphPipelineScratchSizeAMDX(device, executionGraph, pSizeInfo);
}

static PFN_vkCreateExecutionGraphPipelinesAMDX pfn_vkCreateExecutionGraphPipelinesAMDX;
VKAPI_ATTR VkResult vkCreateExecutionGraphPipelinesAMDX(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkExecutionGraphPipelineCreateInfoAMDX * pCreateInfos, const VkAllocationCallbacks * pAllocator, VkPipeline * pPipelines)
{
	assert(pfn_vkCreateExecutionGraphPipelinesAMDX);
	return pfn_vkCreateExecutionGraphPipelinesAMDX(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
}

static PFN_vkGetExecutionGraphPipelineNodeIndexAMDX pfn_vkGetExecutionGraphPipelineNodeIndexAMDX;
VKAPI_ATTR VkResult vkGetExecutionGraphPipelineNodeIndexAMDX(VkDevice device, VkPipeline executionGraph, const VkPipelineShaderStageNodeCreateInfoAMDX * pNodeInfo, uint32_t * pNodeIndex)
{
	assert(pfn_vkGetExecutionGraphPipelineNodeIndexAMDX);
	return pfn_vkGetExecutionGraphPipelineNodeIndexAMDX(device, executionGraph, pNodeInfo, pNodeIndex);
}

static PFN_vkCmdInitializeGraphScratchMemoryAMDX pfn_vkCmdInitializeGraphScratchMemoryAMDX;
VKAPI_ATTR void vkCmdInitializeGraphScratchMemoryAMDX(VkCommandBuffer commandBuffer, VkPipeline executionGraph, VkDeviceAddress scratch, VkDeviceSize scratchSize)
{
	assert(pfn_vkCmdInitializeGraphScratchMemoryAMDX);
	pfn_vkCmdInitializeGraphScratchMemoryAMDX(commandBuffer, executionGraph, scratch, scratchSize);
}

static PFN_vkCmdDispatchGraphAMDX pfn_vkCmdDispatchGraphAMDX;
VKAPI_ATTR void vkCmdDispatchGraphAMDX(VkCommandBuffer commandBuffer, VkDeviceAddress scratch, VkDeviceSize scratchSize, const VkDispatchGraphCountInfoAMDX * pCountInfo)
{
	assert(pfn_vkCmdDispatchGraphAMDX);
	pfn_vkCmdDispatchGraphAMDX(commandBuffer, scratch, scratchSize, pCountInfo);
}

static PFN_vkCmdDispatchGraphIndirectAMDX pfn_vkCmdDispatchGraphIndirectAMDX;
VKAPI_ATTR void vkCmdDispatchGraphIndirectAMDX(VkCommandBuffer commandBuffer, VkDeviceAddress scratch, VkDeviceSize scratchSize, const VkDispatchGraphCountInfoAMDX * pCountInfo)
{
	assert(pfn_vkCmdDispatchGraphIndirectAMDX);
	pfn_vkCmdDispatchGraphIndirectAMDX(commandBuffer, scratch, scratchSize, pCountInfo);
}

static PFN_vkCmdDispatchGraphIndirectCountAMDX pfn_vkCmdDispatchGraphIndirectCountAMDX;
VKAPI_ATTR void vkCmdDispatchGraphIndirectCountAMDX(VkCommandBuffer commandBuffer, VkDeviceAddress scratch, VkDeviceSize scratchSize, VkDeviceAddress countInfo)
{
	assert(pfn_vkCmdDispatchGraphIndirectCountAMDX);
	pfn_vkCmdDispatchGraphIndirectCountAMDX(commandBuffer, scratch, scratchSize, countInfo);
}
#endif // defined(VK_AMDX_shader_enqueue)
#if defined(VK_AMD_anti_lag)

static PFN_vkAntiLagUpdateAMD pfn_vkAntiLagUpdateAMD;
VKAPI_ATTR void vkAntiLagUpdateAMD(VkDevice device, const VkAntiLagDataAMD * pData)
{
	assert(pfn_vkAntiLagUpdateAMD);
	pfn_vkAntiLagUpdateAMD(device, pData);
}
#endif // defined(VK_AMD_anti_lag)
#if defined(VK_AMD_buffer_marker)

static PFN_vkCmdWriteBufferMarkerAMD pfn_vkCmdWriteBufferMarkerAMD;
VKAPI_ATTR void vkCmdWriteBufferMarkerAMD(VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkBuffer dstBuffer, VkDeviceSize dstOffset, uint32_t marker)
{
	assert(pfn_vkCmdWriteBufferMarkerAMD);
	pfn_vkCmdWriteBufferMarkerAMD(commandBuffer, pipelineStage, dstBuffer, dstOffset, marker);
}

static PFN_vkCmdWriteBufferMarker2AMD pfn_vkCmdWriteBufferMarker2AMD;
VKAPI_ATTR void vkCmdWriteBufferMarker2AMD(VkCommandBuffer commandBuffer, VkPipelineStageFlags2 stage, VkBuffer dstBuffer, VkDeviceSize dstOffset, uint32_t marker)
{
	assert(pfn_vkCmdWriteBufferMarker2AMD);
	pfn_vkCmdWriteBufferMarker2AMD(commandBuffer, stage, dstBuffer, dstOffset, marker);
}
#endif // defined(VK_AMD_buffer_marker)
#if defined(VK_AMD_display_native_hdr)

static PFN_vkSetLocalDimmingAMD pfn_vkSetLocalDimmingAMD;
VKAPI_ATTR void vkSetLocalDimmingAMD(VkDevice device, VkSwapchainKHR swapChain, VkBool32 localDimmingEnable)
{
	assert(pfn_vkSetLocalDimmingAMD);
	pfn_vkSetLocalDimmingAMD(device, swapChain, localDimmingEnable);
}
#endif // defined(VK_AMD_display_native_hdr)
#if defined(VK_AMD_draw_indirect_count)

static PFN_vkCmdDrawIndirectCountAMD pfn_vkCmdDrawIndirectCountAMD;
VKAPI_ATTR void vkCmdDrawIndirectCountAMD(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride)
{
	assert(pfn_vkCmdDrawIndirectCountAMD);
	pfn_vkCmdDrawIndirectCountAMD(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
}

static PFN_vkCmdDrawIndexedIndirectCountAMD pfn_vkCmdDrawIndexedIndirectCountAMD;
VKAPI_ATTR void vkCmdDrawIndexedIndirectCountAMD(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride)
{
	assert(pfn_vkCmdDrawIndexedIndirectCountAMD);
	pfn_vkCmdDrawIndexedIndirectCountAMD(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
}
#endif // defined(VK_AMD_draw_indirect_count)
#if defined(VK_AMD_shader_info)

static PFN_vkGetShaderInfoAMD pfn_vkGetShaderInfoAMD;
VKAPI_ATTR VkResult vkGetShaderInfoAMD(VkDevice device, VkPipeline pipeline, VkShaderStageFlagBits shaderStage, VkShaderInfoTypeAMD infoType, size_t * pInfoSize, void * pInfo)
{
	assert(pfn_vkGetShaderInfoAMD);
	return pfn_vkGetShaderInfoAMD(device, pipeline, shaderStage, infoType, pInfoSize, pInfo);
}
#endif // defined(VK_AMD_shader_info)
#if defined(VK_ANDROID_external_memory_android_hardware_buffer)

static PFN_vkGetAndroidHardwareBufferPropertiesANDROID pfn_vkGetAndroidHardwareBufferPropertiesANDROID;
VKAPI_ATTR VkResult vkGetAndroidHardwareBufferPropertiesANDROID(VkDevice device, const struct AHardwareBuffer * buffer, VkAndroidHardwareBufferPropertiesANDROID * pProperties)
{
	assert(pfn_vkGetAndroidHardwareBufferPropertiesANDROID);
	return pfn_vkGetAndroidHardwareBufferPropertiesANDROID(device, buffer, pProperties);
}

static PFN_vkGetMemoryAndroidHardwareBufferANDROID pfn_vkGetMemoryAndroidHardwareBufferANDROID;
VKAPI_ATTR VkResult vkGetMemoryAndroidHardwareBufferANDROID(VkDevice device, const VkMemoryGetAndroidHardwareBufferInfoANDROID * pInfo, struct AHardwareBuffer ** pBuffer)
{
	assert(pfn_vkGetMemoryAndroidHardwareBufferANDROID);
	return pfn_vkGetMemoryAndroidHardwareBufferANDROID(device, pInfo, pBuffer);
}
#endif // defined(VK_ANDROID_external_memory_android_hardware_buffer)
#if defined(VK_ARM_data_graph)

static PFN_vkCreateDataGraphPipelinesARM pfn_vkCreateDataGraphPipelinesARM;
VKAPI_ATTR VkResult vkCreateDataGraphPipelinesARM(VkDevice device, VkDeferredOperationKHR deferredOperation, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkDataGraphPipelineCreateInfoARM * pCreateInfos, const VkAllocationCallbacks * pAllocator, VkPipeline * pPipelines)
{
	assert(pfn_vkCreateDataGraphPipelinesARM);
	return pfn_vkCreateDataGraphPipelinesARM(device, deferredOperation, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
}

static PFN_vkGetDataGraphPipelinePropertiesARM pfn_vkGetDataGraphPipelinePropertiesARM;
VKAPI_ATTR VkResult vkGetDataGraphPipelinePropertiesARM(VkDevice device, const VkDataGraphPipelineInfoARM * pPipelineInfo, uint32_t propertiesCount, VkDataGraphPipelinePropertyQueryResultARM * pProperties)
{
	assert(pfn_vkGetDataGraphPipelinePropertiesARM);
	return pfn_vkGetDataGraphPipelinePropertiesARM(device, pPipelineInfo, propertiesCount, pProperties);
}

static PFN_vkGetDataGraphPipelineSessionBindPointRequirementsARM pfn_vkGetDataGraphPipelineSessionBindPointRequirementsARM;
VKAPI_ATTR VkResult vkGetDataGraphPipelineSessionBindPointRequirementsARM(VkDevice device, const VkDataGraphPipelineSessionBindPointRequirementsInfoARM * pInfo, uint32_t * pBindPointRequirementCount, VkDataGraphPipelineSessionBindPointRequirementARM * pBindPointRequirements)
{
	assert(pfn_vkGetDataGraphPipelineSessionBindPointRequirementsARM);
	return pfn_vkGetDataGraphPipelineSessionBindPointRequirementsARM(device, pInfo, pBindPointRequirementCount, pBindPointRequirements);
}

static PFN_vkGetPhysicalDeviceQueueFamilyDataGraphProcessingEnginePropertiesARM pfn_vkGetPhysicalDeviceQueueFamilyDataGraphProcessingEnginePropertiesARM;
VKAPI_ATTR void vkGetPhysicalDeviceQueueFamilyDataGraphProcessingEnginePropertiesARM(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceQueueFamilyDataGraphProcessingEngineInfoARM * pQueueFamilyDataGraphProcessingEngineInfo, VkQueueFamilyDataGraphProcessingEnginePropertiesARM * pQueueFamilyDataGraphProcessingEngineProperties)
{
	assert(pfn_vkGetPhysicalDeviceQueueFamilyDataGraphProcessingEnginePropertiesARM);
	pfn_vkGetPhysicalDeviceQueueFamilyDataGraphProcessingEnginePropertiesARM(physicalDevice, pQueueFamilyDataGraphProcessingEngineInfo, pQueueFamilyDataGraphProcessingEngineProperties);
}

static PFN_vkCreateDataGraphPipelineSessionARM pfn_vkCreateDataGraphPipelineSessionARM;
VKAPI_ATTR VkResult vkCreateDataGraphPipelineSessionARM(VkDevice device, const VkDataGraphPipelineSessionCreateInfoARM * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDataGraphPipelineSessionARM * pSession)
{
	assert(pfn_vkCreateDataGraphPipelineSessionARM);
	return pfn_vkCreateDataGraphPipelineSessionARM(device, pCreateInfo, pAllocator, pSession);
}

static PFN_vkGetDataGraphPipelineSessionMemoryRequirementsARM pfn_vkGetDataGraphPipelineSessionMemoryRequirementsARM;
VKAPI_ATTR void vkGetDataGraphPipelineSessionMemoryRequirementsARM(VkDevice device, const VkDataGraphPipelineSessionMemoryRequirementsInfoARM * pInfo, VkMemoryRequirements2 * pMemoryRequirements)
{
	assert(pfn_vkGetDataGraphPipelineSessionMemoryRequirementsARM);
	pfn_vkGetDataGraphPipelineSessionMemoryRequirementsARM(device, pInfo, pMemoryRequirements);
}

static PFN_vkBindDataGraphPipelineSessionMemoryARM pfn_vkBindDataGraphPipelineSessionMemoryARM;
VKAPI_ATTR VkResult vkBindDataGraphPipelineSessionMemoryARM(VkDevice device, uint32_t bindInfoCount, const VkBindDataGraphPipelineSessionMemoryInfoARM * pBindInfos)
{
	assert(pfn_vkBindDataGraphPipelineSessionMemoryARM);
	return pfn_vkBindDataGraphPipelineSessionMemoryARM(device, bindInfoCount, pBindInfos);
}

static PFN_vkDestroyDataGraphPipelineSessionARM pfn_vkDestroyDataGraphPipelineSessionARM;
VKAPI_ATTR void vkDestroyDataGraphPipelineSessionARM(VkDevice device, VkDataGraphPipelineSessionARM session, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroyDataGraphPipelineSessionARM);
	pfn_vkDestroyDataGraphPipelineSessionARM(device, session, pAllocator);
}

static PFN_vkCmdDispatchDataGraphARM pfn_vkCmdDispatchDataGraphARM;
VKAPI_ATTR void vkCmdDispatchDataGraphARM(VkCommandBuffer commandBuffer, VkDataGraphPipelineSessionARM session, const VkDataGraphPipelineDispatchInfoARM * pInfo)
{
	assert(pfn_vkCmdDispatchDataGraphARM);
	pfn_vkCmdDispatchDataGraphARM(commandBuffer, session, pInfo);
}

static PFN_vkGetDataGraphPipelineAvailablePropertiesARM pfn_vkGetDataGraphPipelineAvailablePropertiesARM;
VKAPI_ATTR VkResult vkGetDataGraphPipelineAvailablePropertiesARM(VkDevice device, const VkDataGraphPipelineInfoARM * pPipelineInfo, uint32_t * pPropertiesCount, VkDataGraphPipelinePropertyARM * pProperties)
{
	assert(pfn_vkGetDataGraphPipelineAvailablePropertiesARM);
	return pfn_vkGetDataGraphPipelineAvailablePropertiesARM(device, pPipelineInfo, pPropertiesCount, pProperties);
}

static PFN_vkGetPhysicalDeviceQueueFamilyDataGraphPropertiesARM pfn_vkGetPhysicalDeviceQueueFamilyDataGraphPropertiesARM;
VKAPI_ATTR VkResult vkGetPhysicalDeviceQueueFamilyDataGraphPropertiesARM(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, uint32_t * pQueueFamilyDataGraphPropertyCount, VkQueueFamilyDataGraphPropertiesARM * pQueueFamilyDataGraphProperties)
{
	assert(pfn_vkGetPhysicalDeviceQueueFamilyDataGraphPropertiesARM);
	return pfn_vkGetPhysicalDeviceQueueFamilyDataGraphPropertiesARM(physicalDevice, queueFamilyIndex, pQueueFamilyDataGraphPropertyCount, pQueueFamilyDataGraphProperties);
}
#endif // defined(VK_ARM_data_graph)
#if defined(VK_ARM_tensors)

static PFN_vkCreateTensorARM pfn_vkCreateTensorARM;
VKAPI_ATTR VkResult vkCreateTensorARM(VkDevice device, const VkTensorCreateInfoARM * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkTensorARM * pTensor)
{
	assert(pfn_vkCreateTensorARM);
	return pfn_vkCreateTensorARM(device, pCreateInfo, pAllocator, pTensor);
}

static PFN_vkGetTensorViewOpaqueCaptureDescriptorDataARM pfn_vkGetTensorViewOpaqueCaptureDescriptorDataARM;
VKAPI_ATTR VkResult vkGetTensorViewOpaqueCaptureDescriptorDataARM(VkDevice device, const VkTensorViewCaptureDescriptorDataInfoARM * pInfo, void * pData)
{
	assert(pfn_vkGetTensorViewOpaqueCaptureDescriptorDataARM);
	return pfn_vkGetTensorViewOpaqueCaptureDescriptorDataARM(device, pInfo, pData);
}

static PFN_vkDestroyTensorARM pfn_vkDestroyTensorARM;
VKAPI_ATTR void vkDestroyTensorARM(VkDevice device, VkTensorARM tensor, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroyTensorARM);
	pfn_vkDestroyTensorARM(device, tensor, pAllocator);
}

static PFN_vkBindTensorMemoryARM pfn_vkBindTensorMemoryARM;
VKAPI_ATTR VkResult vkBindTensorMemoryARM(VkDevice device, uint32_t bindInfoCount, const VkBindTensorMemoryInfoARM * pBindInfos)
{
	assert(pfn_vkBindTensorMemoryARM);
	return pfn_vkBindTensorMemoryARM(device, bindInfoCount, pBindInfos);
}

static PFN_vkGetTensorMemoryRequirementsARM pfn_vkGetTensorMemoryRequirementsARM;
VKAPI_ATTR void vkGetTensorMemoryRequirementsARM(VkDevice device, const VkTensorMemoryRequirementsInfoARM * pInfo, VkMemoryRequirements2 * pMemoryRequirements)
{
	assert(pfn_vkGetTensorMemoryRequirementsARM);
	pfn_vkGetTensorMemoryRequirementsARM(device, pInfo, pMemoryRequirements);
}

static PFN_vkGetPhysicalDeviceExternalTensorPropertiesARM pfn_vkGetPhysicalDeviceExternalTensorPropertiesARM;
VKAPI_ATTR void vkGetPhysicalDeviceExternalTensorPropertiesARM(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalTensorInfoARM * pExternalTensorInfo, VkExternalTensorPropertiesARM * pExternalTensorProperties)
{
	assert(pfn_vkGetPhysicalDeviceExternalTensorPropertiesARM);
	pfn_vkGetPhysicalDeviceExternalTensorPropertiesARM(physicalDevice, pExternalTensorInfo, pExternalTensorProperties);
}

static PFN_vkGetDeviceTensorMemoryRequirementsARM pfn_vkGetDeviceTensorMemoryRequirementsARM;
VKAPI_ATTR void vkGetDeviceTensorMemoryRequirementsARM(VkDevice device, const VkDeviceTensorMemoryRequirementsARM * pInfo, VkMemoryRequirements2 * pMemoryRequirements)
{
	assert(pfn_vkGetDeviceTensorMemoryRequirementsARM);
	pfn_vkGetDeviceTensorMemoryRequirementsARM(device, pInfo, pMemoryRequirements);
}

static PFN_vkCreateTensorViewARM pfn_vkCreateTensorViewARM;
VKAPI_ATTR VkResult vkCreateTensorViewARM(VkDevice device, const VkTensorViewCreateInfoARM * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkTensorViewARM * pView)
{
	assert(pfn_vkCreateTensorViewARM);
	return pfn_vkCreateTensorViewARM(device, pCreateInfo, pAllocator, pView);
}

static PFN_vkDestroyTensorViewARM pfn_vkDestroyTensorViewARM;
VKAPI_ATTR void vkDestroyTensorViewARM(VkDevice device, VkTensorViewARM tensorView, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroyTensorViewARM);
	pfn_vkDestroyTensorViewARM(device, tensorView, pAllocator);
}

static PFN_vkCmdCopyTensorARM pfn_vkCmdCopyTensorARM;
VKAPI_ATTR void vkCmdCopyTensorARM(VkCommandBuffer commandBuffer, const VkCopyTensorInfoARM * pCopyTensorInfo)
{
	assert(pfn_vkCmdCopyTensorARM);
	pfn_vkCmdCopyTensorARM(commandBuffer, pCopyTensorInfo);
}

static PFN_vkGetTensorOpaqueCaptureDescriptorDataARM pfn_vkGetTensorOpaqueCaptureDescriptorDataARM;
VKAPI_ATTR VkResult vkGetTensorOpaqueCaptureDescriptorDataARM(VkDevice device, const VkTensorCaptureDescriptorDataInfoARM * pInfo, void * pData)
{
	assert(pfn_vkGetTensorOpaqueCaptureDescriptorDataARM);
	return pfn_vkGetTensorOpaqueCaptureDescriptorDataARM(device, pInfo, pData);
}
#endif // defined(VK_ARM_tensors)
#if defined(VK_EXT_acquire_drm_display)

static PFN_vkAcquireDrmDisplayEXT pfn_vkAcquireDrmDisplayEXT;
VKAPI_ATTR VkResult vkAcquireDrmDisplayEXT(VkPhysicalDevice physicalDevice, int32_t drmFd, VkDisplayKHR display)
{
	assert(pfn_vkAcquireDrmDisplayEXT);
	return pfn_vkAcquireDrmDisplayEXT(physicalDevice, drmFd, display);
}

static PFN_vkGetDrmDisplayEXT pfn_vkGetDrmDisplayEXT;
VKAPI_ATTR VkResult vkGetDrmDisplayEXT(VkPhysicalDevice physicalDevice, int32_t drmFd, uint32_t connectorId, VkDisplayKHR * display)
{
	assert(pfn_vkGetDrmDisplayEXT);
	return pfn_vkGetDrmDisplayEXT(physicalDevice, drmFd, connectorId, display);
}
#endif // defined(VK_EXT_acquire_drm_display)
#if defined(VK_EXT_acquire_xlib_display)

static PFN_vkAcquireXlibDisplayEXT pfn_vkAcquireXlibDisplayEXT;
VKAPI_ATTR VkResult vkAcquireXlibDisplayEXT(VkPhysicalDevice physicalDevice, Display * dpy, VkDisplayKHR display)
{
	assert(pfn_vkAcquireXlibDisplayEXT);
	return pfn_vkAcquireXlibDisplayEXT(physicalDevice, dpy, display);
}

static PFN_vkGetRandROutputDisplayEXT pfn_vkGetRandROutputDisplayEXT;
VKAPI_ATTR VkResult vkGetRandROutputDisplayEXT(VkPhysicalDevice physicalDevice, Display * dpy, RROutput rrOutput, VkDisplayKHR * pDisplay)
{
	assert(pfn_vkGetRandROutputDisplayEXT);
	return pfn_vkGetRandROutputDisplayEXT(physicalDevice, dpy, rrOutput, pDisplay);
}
#endif // defined(VK_EXT_acquire_xlib_display)
#if defined(VK_EXT_attachment_feedback_loop_dynamic_state)

static PFN_vkCmdSetAttachmentFeedbackLoopEnableEXT pfn_vkCmdSetAttachmentFeedbackLoopEnableEXT;
VKAPI_ATTR void vkCmdSetAttachmentFeedbackLoopEnableEXT(VkCommandBuffer commandBuffer, VkImageAspectFlags aspectMask)
{
	assert(pfn_vkCmdSetAttachmentFeedbackLoopEnableEXT);
	pfn_vkCmdSetAttachmentFeedbackLoopEnableEXT(commandBuffer, aspectMask);
}
#endif // defined(VK_EXT_attachment_feedback_loop_dynamic_state)
#if defined(VK_EXT_buffer_device_address)

static PFN_vkGetBufferDeviceAddressEXT pfn_vkGetBufferDeviceAddressEXT;
VKAPI_ATTR VkDeviceAddress vkGetBufferDeviceAddressEXT(VkDevice device, const VkBufferDeviceAddressInfo * pInfo)
{
	assert(pfn_vkGetBufferDeviceAddressEXT);
	return pfn_vkGetBufferDeviceAddressEXT(device, pInfo);
}
#endif // defined(VK_EXT_buffer_device_address)
#if defined(VK_EXT_calibrated_timestamps)

static PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT pfn_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT;
VKAPI_ATTR VkResult vkGetPhysicalDeviceCalibrateableTimeDomainsEXT(VkPhysicalDevice physicalDevice, uint32_t * pTimeDomainCount, VkTimeDomainKHR * pTimeDomains)
{
	assert(pfn_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT);
	return pfn_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT(physicalDevice, pTimeDomainCount, pTimeDomains);
}

static PFN_vkGetCalibratedTimestampsEXT pfn_vkGetCalibratedTimestampsEXT;
VKAPI_ATTR VkResult vkGetCalibratedTimestampsEXT(VkDevice device, uint32_t timestampCount, const VkCalibratedTimestampInfoKHR * pTimestampInfos, uint64_t * pTimestamps, uint64_t * pMaxDeviation)
{
	assert(pfn_vkGetCalibratedTimestampsEXT);
	return pfn_vkGetCalibratedTimestampsEXT(device, timestampCount, pTimestampInfos, pTimestamps, pMaxDeviation);
}
#endif // defined(VK_EXT_calibrated_timestamps)
#if defined(VK_EXT_color_write_enable)

static PFN_vkCmdSetColorWriteEnableEXT pfn_vkCmdSetColorWriteEnableEXT;
VKAPI_ATTR void vkCmdSetColorWriteEnableEXT(VkCommandBuffer commandBuffer, uint32_t attachmentCount, const VkBool32 * pColorWriteEnables)
{
	assert(pfn_vkCmdSetColorWriteEnableEXT);
	pfn_vkCmdSetColorWriteEnableEXT(commandBuffer, attachmentCount, pColorWriteEnables);
}
#endif // defined(VK_EXT_color_write_enable)
#if defined(VK_EXT_conditional_rendering)

static PFN_vkCmdBeginConditionalRenderingEXT pfn_vkCmdBeginConditionalRenderingEXT;
VKAPI_ATTR void vkCmdBeginConditionalRenderingEXT(VkCommandBuffer commandBuffer, const VkConditionalRenderingBeginInfoEXT * pConditionalRenderingBegin)
{
	assert(pfn_vkCmdBeginConditionalRenderingEXT);
	pfn_vkCmdBeginConditionalRenderingEXT(commandBuffer, pConditionalRenderingBegin);
}

static PFN_vkCmdEndConditionalRenderingEXT pfn_vkCmdEndConditionalRenderingEXT;
VKAPI_ATTR void vkCmdEndConditionalRenderingEXT(VkCommandBuffer commandBuffer)
{
	assert(pfn_vkCmdEndConditionalRenderingEXT);
	pfn_vkCmdEndConditionalRenderingEXT(commandBuffer);
}
#endif // defined(VK_EXT_conditional_rendering)
#if defined(VK_EXT_debug_marker)

static PFN_vkCmdDebugMarkerEndEXT pfn_vkCmdDebugMarkerEndEXT;
VKAPI_ATTR void vkCmdDebugMarkerEndEXT(VkCommandBuffer commandBuffer)
{
	assert(pfn_vkCmdDebugMarkerEndEXT);
	pfn_vkCmdDebugMarkerEndEXT(commandBuffer);
}

static PFN_vkCmdDebugMarkerBeginEXT pfn_vkCmdDebugMarkerBeginEXT;
VKAPI_ATTR void vkCmdDebugMarkerBeginEXT(VkCommandBuffer commandBuffer, const VkDebugMarkerMarkerInfoEXT * pMarkerInfo)
{
	assert(pfn_vkCmdDebugMarkerBeginEXT);
	pfn_vkCmdDebugMarkerBeginEXT(commandBuffer, pMarkerInfo);
}

static PFN_vkDebugMarkerSetObjectTagEXT pfn_vkDebugMarkerSetObjectTagEXT;
VKAPI_ATTR VkResult vkDebugMarkerSetObjectTagEXT(VkDevice device, const VkDebugMarkerObjectTagInfoEXT * pTagInfo)
{
	assert(pfn_vkDebugMarkerSetObjectTagEXT);
	return pfn_vkDebugMarkerSetObjectTagEXT(device, pTagInfo);
}

static PFN_vkDebugMarkerSetObjectNameEXT pfn_vkDebugMarkerSetObjectNameEXT;
VKAPI_ATTR VkResult vkDebugMarkerSetObjectNameEXT(VkDevice device, const VkDebugMarkerObjectNameInfoEXT * pNameInfo)
{
	assert(pfn_vkDebugMarkerSetObjectNameEXT);
	return pfn_vkDebugMarkerSetObjectNameEXT(device, pNameInfo);
}

static PFN_vkCmdDebugMarkerInsertEXT pfn_vkCmdDebugMarkerInsertEXT;
VKAPI_ATTR void vkCmdDebugMarkerInsertEXT(VkCommandBuffer commandBuffer, const VkDebugMarkerMarkerInfoEXT * pMarkerInfo)
{
	assert(pfn_vkCmdDebugMarkerInsertEXT);
	pfn_vkCmdDebugMarkerInsertEXT(commandBuffer, pMarkerInfo);
}
#endif // defined(VK_EXT_debug_marker)
#if defined(VK_EXT_debug_report)

static PFN_vkDestroyDebugReportCallbackEXT pfn_vkDestroyDebugReportCallbackEXT;
VKAPI_ATTR void vkDestroyDebugReportCallbackEXT(VkInstance instance, VkDebugReportCallbackEXT callback, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroyDebugReportCallbackEXT);
	pfn_vkDestroyDebugReportCallbackEXT(instance, callback, pAllocator);
}

static PFN_vkDebugReportMessageEXT pfn_vkDebugReportMessageEXT;
VKAPI_ATTR void vkDebugReportMessageEXT(VkInstance instance, VkDebugReportFlagsEXT flags, VkDebugReportObjectTypeEXT objectType, uint64_t object, size_t location, int32_t messageCode, const char * pLayerPrefix, const char * pMessage)
{
	assert(pfn_vkDebugReportMessageEXT);
	pfn_vkDebugReportMessageEXT(instance, flags, objectType, object, location, messageCode, pLayerPrefix, pMessage);
}

static PFN_vkCreateDebugReportCallbackEXT pfn_vkCreateDebugReportCallbackEXT;
VKAPI_ATTR VkResult vkCreateDebugReportCallbackEXT(VkInstance instance, const VkDebugReportCallbackCreateInfoEXT * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDebugReportCallbackEXT * pCallback)
{
	assert(pfn_vkCreateDebugReportCallbackEXT);
	return pfn_vkCreateDebugReportCallbackEXT(instance, pCreateInfo, pAllocator, pCallback);
}
#endif // defined(VK_EXT_debug_report)
#if defined(VK_EXT_debug_utils)

static PFN_vkCmdInsertDebugUtilsLabelEXT pfn_vkCmdInsertDebugUtilsLabelEXT;
VKAPI_ATTR void vkCmdInsertDebugUtilsLabelEXT(VkCommandBuffer commandBuffer, const VkDebugUtilsLabelEXT * pLabelInfo)
{
	assert(pfn_vkCmdInsertDebugUtilsLabelEXT);
	pfn_vkCmdInsertDebugUtilsLabelEXT(commandBuffer, pLabelInfo);
}

static PFN_vkCmdEndDebugUtilsLabelEXT pfn_vkCmdEndDebugUtilsLabelEXT;
VKAPI_ATTR void vkCmdEndDebugUtilsLabelEXT(VkCommandBuffer commandBuffer)
{
	assert(pfn_vkCmdEndDebugUtilsLabelEXT);
	pfn_vkCmdEndDebugUtilsLabelEXT(commandBuffer);
}

static PFN_vkSubmitDebugUtilsMessageEXT pfn_vkSubmitDebugUtilsMessageEXT;
VKAPI_ATTR void vkSubmitDebugUtilsMessageEXT(VkInstance instance, VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity, VkDebugUtilsMessageTypeFlagsEXT messageTypes, const VkDebugUtilsMessengerCallbackDataEXT * pCallbackData)
{
	assert(pfn_vkSubmitDebugUtilsMessageEXT);
	pfn_vkSubmitDebugUtilsMessageEXT(instance, messageSeverity, messageTypes, pCallbackData);
}

static PFN_vkSetDebugUtilsObjectTagEXT pfn_vkSetDebugUtilsObjectTagEXT;
VKAPI_ATTR VkResult vkSetDebugUtilsObjectTagEXT(VkDevice device, const VkDebugUtilsObjectTagInfoEXT * pTagInfo)
{
	assert(pfn_vkSetDebugUtilsObjectTagEXT);
	return pfn_vkSetDebugUtilsObjectTagEXT(device, pTagInfo);
}

static PFN_vkSetDebugUtilsObjectNameEXT pfn_vkSetDebugUtilsObjectNameEXT;
VKAPI_ATTR VkResult vkSetDebugUtilsObjectNameEXT(VkDevice device, const VkDebugUtilsObjectNameInfoEXT * pNameInfo)
{
	assert(pfn_vkSetDebugUtilsObjectNameEXT);
	return pfn_vkSetDebugUtilsObjectNameEXT(device, pNameInfo);
}

static PFN_vkQueueInsertDebugUtilsLabelEXT pfn_vkQueueInsertDebugUtilsLabelEXT;
VKAPI_ATTR void vkQueueInsertDebugUtilsLabelEXT(VkQueue queue, const VkDebugUtilsLabelEXT * pLabelInfo)
{
	assert(pfn_vkQueueInsertDebugUtilsLabelEXT);
	pfn_vkQueueInsertDebugUtilsLabelEXT(queue, pLabelInfo);
}

static PFN_vkQueueBeginDebugUtilsLabelEXT pfn_vkQueueBeginDebugUtilsLabelEXT;
VKAPI_ATTR void vkQueueBeginDebugUtilsLabelEXT(VkQueue queue, const VkDebugUtilsLabelEXT * pLabelInfo)
{
	assert(pfn_vkQueueBeginDebugUtilsLabelEXT);
	pfn_vkQueueBeginDebugUtilsLabelEXT(queue, pLabelInfo);
}

static PFN_vkQueueEndDebugUtilsLabelEXT pfn_vkQueueEndDebugUtilsLabelEXT;
VKAPI_ATTR void vkQueueEndDebugUtilsLabelEXT(VkQueue queue)
{
	assert(pfn_vkQueueEndDebugUtilsLabelEXT);
	pfn_vkQueueEndDebugUtilsLabelEXT(queue);
}

static PFN_vkCmdBeginDebugUtilsLabelEXT pfn_vkCmdBeginDebugUtilsLabelEXT;
VKAPI_ATTR void vkCmdBeginDebugUtilsLabelEXT(VkCommandBuffer commandBuffer, const VkDebugUtilsLabelEXT * pLabelInfo)
{
	assert(pfn_vkCmdBeginDebugUtilsLabelEXT);
	pfn_vkCmdBeginDebugUtilsLabelEXT(commandBuffer, pLabelInfo);
}

static PFN_vkCreateDebugUtilsMessengerEXT pfn_vkCreateDebugUtilsMessengerEXT;
VKAPI_ATTR VkResult vkCreateDebugUtilsMessengerEXT(VkInstance instance, const VkDebugUtilsMessengerCreateInfoEXT * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDebugUtilsMessengerEXT * pMessenger)
{
	assert(pfn_vkCreateDebugUtilsMessengerEXT);
	return pfn_vkCreateDebugUtilsMessengerEXT(instance, pCreateInfo, pAllocator, pMessenger);
}

static PFN_vkDestroyDebugUtilsMessengerEXT pfn_vkDestroyDebugUtilsMessengerEXT;
VKAPI_ATTR void vkDestroyDebugUtilsMessengerEXT(VkInstance instance, VkDebugUtilsMessengerEXT messenger, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroyDebugUtilsMessengerEXT);
	pfn_vkDestroyDebugUtilsMessengerEXT(instance, messenger, pAllocator);
}
#endif // defined(VK_EXT_debug_utils)
#if defined(VK_EXT_depth_bias_control)

static PFN_vkCmdSetDepthBias2EXT pfn_vkCmdSetDepthBias2EXT;
VKAPI_ATTR void vkCmdSetDepthBias2EXT(VkCommandBuffer commandBuffer, const VkDepthBiasInfoEXT * pDepthBiasInfo)
{
	assert(pfn_vkCmdSetDepthBias2EXT);
	pfn_vkCmdSetDepthBias2EXT(commandBuffer, pDepthBiasInfo);
}
#endif // defined(VK_EXT_depth_bias_control)
#if defined(VK_EXT_depth_clamp_control) || defined(VK_EXT_shader_object)

static PFN_vkCmdSetDepthClampRangeEXT pfn_vkCmdSetDepthClampRangeEXT;
VKAPI_ATTR void vkCmdSetDepthClampRangeEXT(VkCommandBuffer commandBuffer, VkDepthClampModeEXT depthClampMode, const VkDepthClampRangeEXT * pDepthClampRange)
{
	assert(pfn_vkCmdSetDepthClampRangeEXT);
	pfn_vkCmdSetDepthClampRangeEXT(commandBuffer, depthClampMode, pDepthClampRange);
}
#endif // defined(VK_EXT_depth_clamp_control) || defined(VK_EXT_shader_object)
#if defined(VK_EXT_descriptor_buffer)

static PFN_vkGetImageOpaqueCaptureDescriptorDataEXT pfn_vkGetImageOpaqueCaptureDescriptorDataEXT;
VKAPI_ATTR VkResult vkGetImageOpaqueCaptureDescriptorDataEXT(VkDevice device, const VkImageCaptureDescriptorDataInfoEXT * pInfo, void * pData)
{
	assert(pfn_vkGetImageOpaqueCaptureDescriptorDataEXT);
	return pfn_vkGetImageOpaqueCaptureDescriptorDataEXT(device, pInfo, pData);
}

static PFN_vkCmdBindDescriptorBuffersEXT pfn_vkCmdBindDescriptorBuffersEXT;
VKAPI_ATTR void vkCmdBindDescriptorBuffersEXT(VkCommandBuffer commandBuffer, uint32_t bufferCount, const VkDescriptorBufferBindingInfoEXT * pBindingInfos)
{
	assert(pfn_vkCmdBindDescriptorBuffersEXT);
	pfn_vkCmdBindDescriptorBuffersEXT(commandBuffer, bufferCount, pBindingInfos);
}

static PFN_vkCmdSetDescriptorBufferOffsetsEXT pfn_vkCmdSetDescriptorBufferOffsetsEXT;
VKAPI_ATTR void vkCmdSetDescriptorBufferOffsetsEXT(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t firstSet, uint32_t setCount, const uint32_t * pBufferIndices, const VkDeviceSize * pOffsets)
{
	assert(pfn_vkCmdSetDescriptorBufferOffsetsEXT);
	pfn_vkCmdSetDescriptorBufferOffsetsEXT(commandBuffer, pipelineBindPoint, layout, firstSet, setCount, pBufferIndices, pOffsets);
}

static PFN_vkGetSamplerOpaqueCaptureDescriptorDataEXT pfn_vkGetSamplerOpaqueCaptureDescriptorDataEXT;
VKAPI_ATTR VkResult vkGetSamplerOpaqueCaptureDescriptorDataEXT(VkDevice device, const VkSamplerCaptureDescriptorDataInfoEXT * pInfo, void * pData)
{
	assert(pfn_vkGetSamplerOpaqueCaptureDescriptorDataEXT);
	return pfn_vkGetSamplerOpaqueCaptureDescriptorDataEXT(device, pInfo, pData);
}

static PFN_vkGetDescriptorSetLayoutSizeEXT pfn_vkGetDescriptorSetLayoutSizeEXT;
VKAPI_ATTR void vkGetDescriptorSetLayoutSizeEXT(VkDevice device, VkDescriptorSetLayout layout, VkDeviceSize * pLayoutSizeInBytes)
{
	assert(pfn_vkGetDescriptorSetLayoutSizeEXT);
	pfn_vkGetDescriptorSetLayoutSizeEXT(device, layout, pLayoutSizeInBytes);
}

static PFN_vkGetDescriptorSetLayoutBindingOffsetEXT pfn_vkGetDescriptorSetLayoutBindingOffsetEXT;
VKAPI_ATTR void vkGetDescriptorSetLayoutBindingOffsetEXT(VkDevice device, VkDescriptorSetLayout layout, uint32_t binding, VkDeviceSize * pOffset)
{
	assert(pfn_vkGetDescriptorSetLayoutBindingOffsetEXT);
	pfn_vkGetDescriptorSetLayoutBindingOffsetEXT(device, layout, binding, pOffset);
}

static PFN_vkGetDescriptorEXT pfn_vkGetDescriptorEXT;
VKAPI_ATTR void vkGetDescriptorEXT(VkDevice device, const VkDescriptorGetInfoEXT * pDescriptorInfo, size_t dataSize, void * pDescriptor)
{
	assert(pfn_vkGetDescriptorEXT);
	pfn_vkGetDescriptorEXT(device, pDescriptorInfo, dataSize, pDescriptor);
}

static PFN_vkCmdBindDescriptorBufferEmbeddedSamplersEXT pfn_vkCmdBindDescriptorBufferEmbeddedSamplersEXT;
VKAPI_ATTR void vkCmdBindDescriptorBufferEmbeddedSamplersEXT(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t set)
{
	assert(pfn_vkCmdBindDescriptorBufferEmbeddedSamplersEXT);
	pfn_vkCmdBindDescriptorBufferEmbeddedSamplersEXT(commandBuffer, pipelineBindPoint, layout, set);
}

static PFN_vkGetBufferOpaqueCaptureDescriptorDataEXT pfn_vkGetBufferOpaqueCaptureDescriptorDataEXT;
VKAPI_ATTR VkResult vkGetBufferOpaqueCaptureDescriptorDataEXT(VkDevice device, const VkBufferCaptureDescriptorDataInfoEXT * pInfo, void * pData)
{
	assert(pfn_vkGetBufferOpaqueCaptureDescriptorDataEXT);
	return pfn_vkGetBufferOpaqueCaptureDescriptorDataEXT(device, pInfo, pData);
}

static PFN_vkGetImageViewOpaqueCaptureDescriptorDataEXT pfn_vkGetImageViewOpaqueCaptureDescriptorDataEXT;
VKAPI_ATTR VkResult vkGetImageViewOpaqueCaptureDescriptorDataEXT(VkDevice device, const VkImageViewCaptureDescriptorDataInfoEXT * pInfo, void * pData)
{
	assert(pfn_vkGetImageViewOpaqueCaptureDescriptorDataEXT);
	return pfn_vkGetImageViewOpaqueCaptureDescriptorDataEXT(device, pInfo, pData);
}

static PFN_vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT pfn_vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT;
VKAPI_ATTR VkResult vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT(VkDevice device, const VkAccelerationStructureCaptureDescriptorDataInfoEXT * pInfo, void * pData)
{
	assert(pfn_vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT);
	return pfn_vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT(device, pInfo, pData);
}
#endif // defined(VK_EXT_descriptor_buffer)
#if defined(VK_EXT_device_fault)

static PFN_vkGetDeviceFaultInfoEXT pfn_vkGetDeviceFaultInfoEXT;
VKAPI_ATTR VkResult vkGetDeviceFaultInfoEXT(VkDevice device, VkDeviceFaultCountsEXT * pFaultCounts, VkDeviceFaultInfoEXT * pFaultInfo)
{
	assert(pfn_vkGetDeviceFaultInfoEXT);
	return pfn_vkGetDeviceFaultInfoEXT(device, pFaultCounts, pFaultInfo);
}
#endif // defined(VK_EXT_device_fault)
#if defined(VK_EXT_device_generated_commands)

static PFN_vkCreateIndirectCommandsLayoutEXT pfn_vkCreateIndirectCommandsLayoutEXT;
VKAPI_ATTR VkResult vkCreateIndirectCommandsLayoutEXT(VkDevice device, const VkIndirectCommandsLayoutCreateInfoEXT * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkIndirectCommandsLayoutEXT * pIndirectCommandsLayout)
{
	assert(pfn_vkCreateIndirectCommandsLayoutEXT);
	return pfn_vkCreateIndirectCommandsLayoutEXT(device, pCreateInfo, pAllocator, pIndirectCommandsLayout);
}

static PFN_vkDestroyIndirectCommandsLayoutEXT pfn_vkDestroyIndirectCommandsLayoutEXT;
VKAPI_ATTR void vkDestroyIndirectCommandsLayoutEXT(VkDevice device, VkIndirectCommandsLayoutEXT indirectCommandsLayout, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroyIndirectCommandsLayoutEXT);
	pfn_vkDestroyIndirectCommandsLayoutEXT(device, indirectCommandsLayout, pAllocator);
}

static PFN_vkUpdateIndirectExecutionSetShaderEXT pfn_vkUpdateIndirectExecutionSetShaderEXT;
VKAPI_ATTR void vkUpdateIndirectExecutionSetShaderEXT(VkDevice device, VkIndirectExecutionSetEXT indirectExecutionSet, uint32_t executionSetWriteCount, const VkWriteIndirectExecutionSetShaderEXT * pExecutionSetWrites)
{
	assert(pfn_vkUpdateIndirectExecutionSetShaderEXT);
	pfn_vkUpdateIndirectExecutionSetShaderEXT(device, indirectExecutionSet, executionSetWriteCount, pExecutionSetWrites);
}

static PFN_vkCmdPreprocessGeneratedCommandsEXT pfn_vkCmdPreprocessGeneratedCommandsEXT;
VKAPI_ATTR void vkCmdPreprocessGeneratedCommandsEXT(VkCommandBuffer commandBuffer, const VkGeneratedCommandsInfoEXT * pGeneratedCommandsInfo, VkCommandBuffer stateCommandBuffer)
{
	assert(pfn_vkCmdPreprocessGeneratedCommandsEXT);
	pfn_vkCmdPreprocessGeneratedCommandsEXT(commandBuffer, pGeneratedCommandsInfo, stateCommandBuffer);
}

static PFN_vkUpdateIndirectExecutionSetPipelineEXT pfn_vkUpdateIndirectExecutionSetPipelineEXT;
VKAPI_ATTR void vkUpdateIndirectExecutionSetPipelineEXT(VkDevice device, VkIndirectExecutionSetEXT indirectExecutionSet, uint32_t executionSetWriteCount, const VkWriteIndirectExecutionSetPipelineEXT * pExecutionSetWrites)
{
	assert(pfn_vkUpdateIndirectExecutionSetPipelineEXT);
	pfn_vkUpdateIndirectExecutionSetPipelineEXT(device, indirectExecutionSet, executionSetWriteCount, pExecutionSetWrites);
}

static PFN_vkGetGeneratedCommandsMemoryRequirementsEXT pfn_vkGetGeneratedCommandsMemoryRequirementsEXT;
VKAPI_ATTR void vkGetGeneratedCommandsMemoryRequirementsEXT(VkDevice device, const VkGeneratedCommandsMemoryRequirementsInfoEXT * pInfo, VkMemoryRequirements2 * pMemoryRequirements)
{
	assert(pfn_vkGetGeneratedCommandsMemoryRequirementsEXT);
	pfn_vkGetGeneratedCommandsMemoryRequirementsEXT(device, pInfo, pMemoryRequirements);
}

static PFN_vkCmdExecuteGeneratedCommandsEXT pfn_vkCmdExecuteGeneratedCommandsEXT;
VKAPI_ATTR void vkCmdExecuteGeneratedCommandsEXT(VkCommandBuffer commandBuffer, VkBool32 isPreprocessed, const VkGeneratedCommandsInfoEXT * pGeneratedCommandsInfo)
{
	assert(pfn_vkCmdExecuteGeneratedCommandsEXT);
	pfn_vkCmdExecuteGeneratedCommandsEXT(commandBuffer, isPreprocessed, pGeneratedCommandsInfo);
}

static PFN_vkCreateIndirectExecutionSetEXT pfn_vkCreateIndirectExecutionSetEXT;
VKAPI_ATTR VkResult vkCreateIndirectExecutionSetEXT(VkDevice device, const VkIndirectExecutionSetCreateInfoEXT * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkIndirectExecutionSetEXT * pIndirectExecutionSet)
{
	assert(pfn_vkCreateIndirectExecutionSetEXT);
	return pfn_vkCreateIndirectExecutionSetEXT(device, pCreateInfo, pAllocator, pIndirectExecutionSet);
}

static PFN_vkDestroyIndirectExecutionSetEXT pfn_vkDestroyIndirectExecutionSetEXT;
VKAPI_ATTR void vkDestroyIndirectExecutionSetEXT(VkDevice device, VkIndirectExecutionSetEXT indirectExecutionSet, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroyIndirectExecutionSetEXT);
	pfn_vkDestroyIndirectExecutionSetEXT(device, indirectExecutionSet, pAllocator);
}
#endif // defined(VK_EXT_device_generated_commands)
#if defined(VK_EXT_direct_mode_display)

static PFN_vkReleaseDisplayEXT pfn_vkReleaseDisplayEXT;
VKAPI_ATTR VkResult vkReleaseDisplayEXT(VkPhysicalDevice physicalDevice, VkDisplayKHR display)
{
	assert(pfn_vkReleaseDisplayEXT);
	return pfn_vkReleaseDisplayEXT(physicalDevice, display);
}
#endif // defined(VK_EXT_direct_mode_display)
#if defined(VK_EXT_directfb_surface)

static PFN_vkGetPhysicalDeviceDirectFBPresentationSupportEXT pfn_vkGetPhysicalDeviceDirectFBPresentationSupportEXT;
VKAPI_ATTR VkBool32 vkGetPhysicalDeviceDirectFBPresentationSupportEXT(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, IDirectFB * dfb)
{
	assert(pfn_vkGetPhysicalDeviceDirectFBPresentationSupportEXT);
	return pfn_vkGetPhysicalDeviceDirectFBPresentationSupportEXT(physicalDevice, queueFamilyIndex, dfb);
}

static PFN_vkCreateDirectFBSurfaceEXT pfn_vkCreateDirectFBSurfaceEXT;
VKAPI_ATTR VkResult vkCreateDirectFBSurfaceEXT(VkInstance instance, const VkDirectFBSurfaceCreateInfoEXT * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface)
{
	assert(pfn_vkCreateDirectFBSurfaceEXT);
	return pfn_vkCreateDirectFBSurfaceEXT(instance, pCreateInfo, pAllocator, pSurface);
}
#endif // defined(VK_EXT_directfb_surface)
#if defined(VK_EXT_discard_rectangles)

static PFN_vkCmdSetDiscardRectangleEXT pfn_vkCmdSetDiscardRectangleEXT;
VKAPI_ATTR void vkCmdSetDiscardRectangleEXT(VkCommandBuffer commandBuffer, uint32_t firstDiscardRectangle, uint32_t discardRectangleCount, const VkRect2D * pDiscardRectangles)
{
	assert(pfn_vkCmdSetDiscardRectangleEXT);
	pfn_vkCmdSetDiscardRectangleEXT(commandBuffer, firstDiscardRectangle, discardRectangleCount, pDiscardRectangles);
}

static PFN_vkCmdSetDiscardRectangleEnableEXT pfn_vkCmdSetDiscardRectangleEnableEXT;
VKAPI_ATTR void vkCmdSetDiscardRectangleEnableEXT(VkCommandBuffer commandBuffer, VkBool32 discardRectangleEnable)
{
	assert(pfn_vkCmdSetDiscardRectangleEnableEXT);
	pfn_vkCmdSetDiscardRectangleEnableEXT(commandBuffer, discardRectangleEnable);
}

static PFN_vkCmdSetDiscardRectangleModeEXT pfn_vkCmdSetDiscardRectangleModeEXT;
VKAPI_ATTR void vkCmdSetDiscardRectangleModeEXT(VkCommandBuffer commandBuffer, VkDiscardRectangleModeEXT discardRectangleMode)
{
	assert(pfn_vkCmdSetDiscardRectangleModeEXT);
	pfn_vkCmdSetDiscardRectangleModeEXT(commandBuffer, discardRectangleMode);
}
#endif // defined(VK_EXT_discard_rectangles)
#if defined(VK_EXT_display_control)

static PFN_vkDisplayPowerControlEXT pfn_vkDisplayPowerControlEXT;
VKAPI_ATTR VkResult vkDisplayPowerControlEXT(VkDevice device, VkDisplayKHR display, const VkDisplayPowerInfoEXT * pDisplayPowerInfo)
{
	assert(pfn_vkDisplayPowerControlEXT);
	return pfn_vkDisplayPowerControlEXT(device, display, pDisplayPowerInfo);
}

static PFN_vkGetSwapchainCounterEXT pfn_vkGetSwapchainCounterEXT;
VKAPI_ATTR VkResult vkGetSwapchainCounterEXT(VkDevice device, VkSwapchainKHR swapchain, VkSurfaceCounterFlagBitsEXT counter, uint64_t * pCounterValue)
{
	assert(pfn_vkGetSwapchainCounterEXT);
	return pfn_vkGetSwapchainCounterEXT(device, swapchain, counter, pCounterValue);
}

static PFN_vkRegisterDeviceEventEXT pfn_vkRegisterDeviceEventEXT;
VKAPI_ATTR VkResult vkRegisterDeviceEventEXT(VkDevice device, const VkDeviceEventInfoEXT * pDeviceEventInfo, const VkAllocationCallbacks * pAllocator, VkFence * pFence)
{
	assert(pfn_vkRegisterDeviceEventEXT);
	return pfn_vkRegisterDeviceEventEXT(device, pDeviceEventInfo, pAllocator, pFence);
}

static PFN_vkRegisterDisplayEventEXT pfn_vkRegisterDisplayEventEXT;
VKAPI_ATTR VkResult vkRegisterDisplayEventEXT(VkDevice device, VkDisplayKHR display, const VkDisplayEventInfoEXT * pDisplayEventInfo, const VkAllocationCallbacks * pAllocator, VkFence * pFence)
{
	assert(pfn_vkRegisterDisplayEventEXT);
	return pfn_vkRegisterDisplayEventEXT(device, display, pDisplayEventInfo, pAllocator, pFence);
}
#endif // defined(VK_EXT_display_control)
#if defined(VK_EXT_display_surface_counter)

static PFN_vkGetPhysicalDeviceSurfaceCapabilities2EXT pfn_vkGetPhysicalDeviceSurfaceCapabilities2EXT;
VKAPI_ATTR VkResult vkGetPhysicalDeviceSurfaceCapabilities2EXT(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, VkSurfaceCapabilities2EXT * pSurfaceCapabilities)
{
	assert(pfn_vkGetPhysicalDeviceSurfaceCapabilities2EXT);
	return pfn_vkGetPhysicalDeviceSurfaceCapabilities2EXT(physicalDevice, surface, pSurfaceCapabilities);
}
#endif // defined(VK_EXT_display_surface_counter)
#if defined(VK_EXT_extended_dynamic_state) || defined(VK_EXT_shader_object)

static PFN_vkCmdBindVertexBuffers2EXT pfn_vkCmdBindVertexBuffers2EXT;
VKAPI_ATTR void vkCmdBindVertexBuffers2EXT(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer * pBuffers, const VkDeviceSize * pOffsets, const VkDeviceSize * pSizes, const VkDeviceSize * pStrides)
{
	assert(pfn_vkCmdBindVertexBuffers2EXT);
	pfn_vkCmdBindVertexBuffers2EXT(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets, pSizes, pStrides);
}

static PFN_vkCmdSetCullModeEXT pfn_vkCmdSetCullModeEXT;
VKAPI_ATTR void vkCmdSetCullModeEXT(VkCommandBuffer commandBuffer, VkCullModeFlags cullMode)
{
	assert(pfn_vkCmdSetCullModeEXT);
	pfn_vkCmdSetCullModeEXT(commandBuffer, cullMode);
}

static PFN_vkCmdSetDepthTestEnableEXT pfn_vkCmdSetDepthTestEnableEXT;
VKAPI_ATTR void vkCmdSetDepthTestEnableEXT(VkCommandBuffer commandBuffer, VkBool32 depthTestEnable)
{
	assert(pfn_vkCmdSetDepthTestEnableEXT);
	pfn_vkCmdSetDepthTestEnableEXT(commandBuffer, depthTestEnable);
}

static PFN_vkCmdSetFrontFaceEXT pfn_vkCmdSetFrontFaceEXT;
VKAPI_ATTR void vkCmdSetFrontFaceEXT(VkCommandBuffer commandBuffer, VkFrontFace frontFace)
{
	assert(pfn_vkCmdSetFrontFaceEXT);
	pfn_vkCmdSetFrontFaceEXT(commandBuffer, frontFace);
}

static PFN_vkCmdSetPrimitiveTopologyEXT pfn_vkCmdSetPrimitiveTopologyEXT;
VKAPI_ATTR void vkCmdSetPrimitiveTopologyEXT(VkCommandBuffer commandBuffer, VkPrimitiveTopology primitiveTopology)
{
	assert(pfn_vkCmdSetPrimitiveTopologyEXT);
	pfn_vkCmdSetPrimitiveTopologyEXT(commandBuffer, primitiveTopology);
}

static PFN_vkCmdSetViewportWithCountEXT pfn_vkCmdSetViewportWithCountEXT;
VKAPI_ATTR void vkCmdSetViewportWithCountEXT(VkCommandBuffer commandBuffer, uint32_t viewportCount, const VkViewport * pViewports)
{
	assert(pfn_vkCmdSetViewportWithCountEXT);
	pfn_vkCmdSetViewportWithCountEXT(commandBuffer, viewportCount, pViewports);
}

static PFN_vkCmdSetScissorWithCountEXT pfn_vkCmdSetScissorWithCountEXT;
VKAPI_ATTR void vkCmdSetScissorWithCountEXT(VkCommandBuffer commandBuffer, uint32_t scissorCount, const VkRect2D * pScissors)
{
	assert(pfn_vkCmdSetScissorWithCountEXT);
	pfn_vkCmdSetScissorWithCountEXT(commandBuffer, scissorCount, pScissors);
}

static PFN_vkCmdSetDepthWriteEnableEXT pfn_vkCmdSetDepthWriteEnableEXT;
VKAPI_ATTR void vkCmdSetDepthWriteEnableEXT(VkCommandBuffer commandBuffer, VkBool32 depthWriteEnable)
{
	assert(pfn_vkCmdSetDepthWriteEnableEXT);
	pfn_vkCmdSetDepthWriteEnableEXT(commandBuffer, depthWriteEnable);
}

static PFN_vkCmdSetDepthCompareOpEXT pfn_vkCmdSetDepthCompareOpEXT;
VKAPI_ATTR void vkCmdSetDepthCompareOpEXT(VkCommandBuffer commandBuffer, VkCompareOp depthCompareOp)
{
	assert(pfn_vkCmdSetDepthCompareOpEXT);
	pfn_vkCmdSetDepthCompareOpEXT(commandBuffer, depthCompareOp);
}

static PFN_vkCmdSetDepthBoundsTestEnableEXT pfn_vkCmdSetDepthBoundsTestEnableEXT;
VKAPI_ATTR void vkCmdSetDepthBoundsTestEnableEXT(VkCommandBuffer commandBuffer, VkBool32 depthBoundsTestEnable)
{
	assert(pfn_vkCmdSetDepthBoundsTestEnableEXT);
	pfn_vkCmdSetDepthBoundsTestEnableEXT(commandBuffer, depthBoundsTestEnable);
}

static PFN_vkCmdSetStencilTestEnableEXT pfn_vkCmdSetStencilTestEnableEXT;
VKAPI_ATTR void vkCmdSetStencilTestEnableEXT(VkCommandBuffer commandBuffer, VkBool32 stencilTestEnable)
{
	assert(pfn_vkCmdSetStencilTestEnableEXT);
	pfn_vkCmdSetStencilTestEnableEXT(commandBuffer, stencilTestEnable);
}

static PFN_vkCmdSetStencilOpEXT pfn_vkCmdSetStencilOpEXT;
VKAPI_ATTR void vkCmdSetStencilOpEXT(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, VkStencilOp failOp, VkStencilOp passOp, VkStencilOp depthFailOp, VkCompareOp compareOp)
{
	assert(pfn_vkCmdSetStencilOpEXT);
	pfn_vkCmdSetStencilOpEXT(commandBuffer, faceMask, failOp, passOp, depthFailOp, compareOp);
}
#endif // defined(VK_EXT_extended_dynamic_state) || defined(VK_EXT_shader_object)
#if defined(VK_EXT_extended_dynamic_state2) || defined(VK_EXT_shader_object)

static PFN_vkCmdSetDepthBiasEnableEXT pfn_vkCmdSetDepthBiasEnableEXT;
VKAPI_ATTR void vkCmdSetDepthBiasEnableEXT(VkCommandBuffer commandBuffer, VkBool32 depthBiasEnable)
{
	assert(pfn_vkCmdSetDepthBiasEnableEXT);
	pfn_vkCmdSetDepthBiasEnableEXT(commandBuffer, depthBiasEnable);
}

static PFN_vkCmdSetPrimitiveRestartEnableEXT pfn_vkCmdSetPrimitiveRestartEnableEXT;
VKAPI_ATTR void vkCmdSetPrimitiveRestartEnableEXT(VkCommandBuffer commandBuffer, VkBool32 primitiveRestartEnable)
{
	assert(pfn_vkCmdSetPrimitiveRestartEnableEXT);
	pfn_vkCmdSetPrimitiveRestartEnableEXT(commandBuffer, primitiveRestartEnable);
}

static PFN_vkCmdSetLogicOpEXT pfn_vkCmdSetLogicOpEXT;
VKAPI_ATTR void vkCmdSetLogicOpEXT(VkCommandBuffer commandBuffer, VkLogicOp logicOp)
{
	assert(pfn_vkCmdSetLogicOpEXT);
	pfn_vkCmdSetLogicOpEXT(commandBuffer, logicOp);
}

static PFN_vkCmdSetPatchControlPointsEXT pfn_vkCmdSetPatchControlPointsEXT;
VKAPI_ATTR void vkCmdSetPatchControlPointsEXT(VkCommandBuffer commandBuffer, uint32_t patchControlPoints)
{
	assert(pfn_vkCmdSetPatchControlPointsEXT);
	pfn_vkCmdSetPatchControlPointsEXT(commandBuffer, patchControlPoints);
}

static PFN_vkCmdSetRasterizerDiscardEnableEXT pfn_vkCmdSetRasterizerDiscardEnableEXT;
VKAPI_ATTR void vkCmdSetRasterizerDiscardEnableEXT(VkCommandBuffer commandBuffer, VkBool32 rasterizerDiscardEnable)
{
	assert(pfn_vkCmdSetRasterizerDiscardEnableEXT);
	pfn_vkCmdSetRasterizerDiscardEnableEXT(commandBuffer, rasterizerDiscardEnable);
}
#endif // defined(VK_EXT_extended_dynamic_state2) || defined(VK_EXT_shader_object)
#if defined(VK_EXT_extended_dynamic_state3) || defined(VK_EXT_shader_object)

static PFN_vkCmdSetLineStippleEnableEXT pfn_vkCmdSetLineStippleEnableEXT;
VKAPI_ATTR void vkCmdSetLineStippleEnableEXT(VkCommandBuffer commandBuffer, VkBool32 stippledLineEnable)
{
	assert(pfn_vkCmdSetLineStippleEnableEXT);
	pfn_vkCmdSetLineStippleEnableEXT(commandBuffer, stippledLineEnable);
}

static PFN_vkCmdSetRasterizationSamplesEXT pfn_vkCmdSetRasterizationSamplesEXT;
VKAPI_ATTR void vkCmdSetRasterizationSamplesEXT(VkCommandBuffer commandBuffer, VkSampleCountFlagBits rasterizationSamples)
{
	assert(pfn_vkCmdSetRasterizationSamplesEXT);
	pfn_vkCmdSetRasterizationSamplesEXT(commandBuffer, rasterizationSamples);
}

static PFN_vkCmdSetRepresentativeFragmentTestEnableNV pfn_vkCmdSetRepresentativeFragmentTestEnableNV;
VKAPI_ATTR void vkCmdSetRepresentativeFragmentTestEnableNV(VkCommandBuffer commandBuffer, VkBool32 representativeFragmentTestEnable)
{
	assert(pfn_vkCmdSetRepresentativeFragmentTestEnableNV);
	pfn_vkCmdSetRepresentativeFragmentTestEnableNV(commandBuffer, representativeFragmentTestEnable);
}

static PFN_vkCmdSetPolygonModeEXT pfn_vkCmdSetPolygonModeEXT;
VKAPI_ATTR void vkCmdSetPolygonModeEXT(VkCommandBuffer commandBuffer, VkPolygonMode polygonMode)
{
	assert(pfn_vkCmdSetPolygonModeEXT);
	pfn_vkCmdSetPolygonModeEXT(commandBuffer, polygonMode);
}

static PFN_vkCmdSetDepthClipNegativeOneToOneEXT pfn_vkCmdSetDepthClipNegativeOneToOneEXT;
VKAPI_ATTR void vkCmdSetDepthClipNegativeOneToOneEXT(VkCommandBuffer commandBuffer, VkBool32 negativeOneToOne)
{
	assert(pfn_vkCmdSetDepthClipNegativeOneToOneEXT);
	pfn_vkCmdSetDepthClipNegativeOneToOneEXT(commandBuffer, negativeOneToOne);
}

static PFN_vkCmdSetCoverageModulationTableEnableNV pfn_vkCmdSetCoverageModulationTableEnableNV;
VKAPI_ATTR void vkCmdSetCoverageModulationTableEnableNV(VkCommandBuffer commandBuffer, VkBool32 coverageModulationTableEnable)
{
	assert(pfn_vkCmdSetCoverageModulationTableEnableNV);
	pfn_vkCmdSetCoverageModulationTableEnableNV(commandBuffer, coverageModulationTableEnable);
}

static PFN_vkCmdSetProvokingVertexModeEXT pfn_vkCmdSetProvokingVertexModeEXT;
VKAPI_ATTR void vkCmdSetProvokingVertexModeEXT(VkCommandBuffer commandBuffer, VkProvokingVertexModeEXT provokingVertexMode)
{
	assert(pfn_vkCmdSetProvokingVertexModeEXT);
	pfn_vkCmdSetProvokingVertexModeEXT(commandBuffer, provokingVertexMode);
}

static PFN_vkCmdSetDepthClipEnableEXT pfn_vkCmdSetDepthClipEnableEXT;
VKAPI_ATTR void vkCmdSetDepthClipEnableEXT(VkCommandBuffer commandBuffer, VkBool32 depthClipEnable)
{
	assert(pfn_vkCmdSetDepthClipEnableEXT);
	pfn_vkCmdSetDepthClipEnableEXT(commandBuffer, depthClipEnable);
}

static PFN_vkCmdSetShadingRateImageEnableNV pfn_vkCmdSetShadingRateImageEnableNV;
VKAPI_ATTR void vkCmdSetShadingRateImageEnableNV(VkCommandBuffer commandBuffer, VkBool32 shadingRateImageEnable)
{
	assert(pfn_vkCmdSetShadingRateImageEnableNV);
	pfn_vkCmdSetShadingRateImageEnableNV(commandBuffer, shadingRateImageEnable);
}

static PFN_vkCmdSetCoverageToColorLocationNV pfn_vkCmdSetCoverageToColorLocationNV;
VKAPI_ATTR void vkCmdSetCoverageToColorLocationNV(VkCommandBuffer commandBuffer, uint32_t coverageToColorLocation)
{
	assert(pfn_vkCmdSetCoverageToColorLocationNV);
	pfn_vkCmdSetCoverageToColorLocationNV(commandBuffer, coverageToColorLocation);
}

static PFN_vkCmdSetSampleLocationsEnableEXT pfn_vkCmdSetSampleLocationsEnableEXT;
VKAPI_ATTR void vkCmdSetSampleLocationsEnableEXT(VkCommandBuffer commandBuffer, VkBool32 sampleLocationsEnable)
{
	assert(pfn_vkCmdSetSampleLocationsEnableEXT);
	pfn_vkCmdSetSampleLocationsEnableEXT(commandBuffer, sampleLocationsEnable);
}

static PFN_vkCmdSetLineRasterizationModeEXT pfn_vkCmdSetLineRasterizationModeEXT;
VKAPI_ATTR void vkCmdSetLineRasterizationModeEXT(VkCommandBuffer commandBuffer, VkLineRasterizationModeEXT lineRasterizationMode)
{
	assert(pfn_vkCmdSetLineRasterizationModeEXT);
	pfn_vkCmdSetLineRasterizationModeEXT(commandBuffer, lineRasterizationMode);
}

static PFN_vkCmdSetConservativeRasterizationModeEXT pfn_vkCmdSetConservativeRasterizationModeEXT;
VKAPI_ATTR void vkCmdSetConservativeRasterizationModeEXT(VkCommandBuffer commandBuffer, VkConservativeRasterizationModeEXT conservativeRasterizationMode)
{
	assert(pfn_vkCmdSetConservativeRasterizationModeEXT);
	pfn_vkCmdSetConservativeRasterizationModeEXT(commandBuffer, conservativeRasterizationMode);
}

static PFN_vkCmdSetDepthClampEnableEXT pfn_vkCmdSetDepthClampEnableEXT;
VKAPI_ATTR void vkCmdSetDepthClampEnableEXT(VkCommandBuffer commandBuffer, VkBool32 depthClampEnable)
{
	assert(pfn_vkCmdSetDepthClampEnableEXT);
	pfn_vkCmdSetDepthClampEnableEXT(commandBuffer, depthClampEnable);
}

static PFN_vkCmdSetColorWriteMaskEXT pfn_vkCmdSetColorWriteMaskEXT;
VKAPI_ATTR void vkCmdSetColorWriteMaskEXT(VkCommandBuffer commandBuffer, uint32_t firstAttachment, uint32_t attachmentCount, const VkColorComponentFlags * pColorWriteMasks)
{
	assert(pfn_vkCmdSetColorWriteMaskEXT);
	pfn_vkCmdSetColorWriteMaskEXT(commandBuffer, firstAttachment, attachmentCount, pColorWriteMasks);
}

static PFN_vkCmdSetColorBlendAdvancedEXT pfn_vkCmdSetColorBlendAdvancedEXT;
VKAPI_ATTR void vkCmdSetColorBlendAdvancedEXT(VkCommandBuffer commandBuffer, uint32_t firstAttachment, uint32_t attachmentCount, const VkColorBlendAdvancedEXT * pColorBlendAdvanced)
{
	assert(pfn_vkCmdSetColorBlendAdvancedEXT);
	pfn_vkCmdSetColorBlendAdvancedEXT(commandBuffer, firstAttachment, attachmentCount, pColorBlendAdvanced);
}

static PFN_vkCmdSetLogicOpEnableEXT pfn_vkCmdSetLogicOpEnableEXT;
VKAPI_ATTR void vkCmdSetLogicOpEnableEXT(VkCommandBuffer commandBuffer, VkBool32 logicOpEnable)
{
	assert(pfn_vkCmdSetLogicOpEnableEXT);
	pfn_vkCmdSetLogicOpEnableEXT(commandBuffer, logicOpEnable);
}

static PFN_vkCmdSetAlphaToOneEnableEXT pfn_vkCmdSetAlphaToOneEnableEXT;
VKAPI_ATTR void vkCmdSetAlphaToOneEnableEXT(VkCommandBuffer commandBuffer, VkBool32 alphaToOneEnable)
{
	assert(pfn_vkCmdSetAlphaToOneEnableEXT);
	pfn_vkCmdSetAlphaToOneEnableEXT(commandBuffer, alphaToOneEnable);
}

static PFN_vkCmdSetViewportWScalingEnableNV pfn_vkCmdSetViewportWScalingEnableNV;
VKAPI_ATTR void vkCmdSetViewportWScalingEnableNV(VkCommandBuffer commandBuffer, VkBool32 viewportWScalingEnable)
{
	assert(pfn_vkCmdSetViewportWScalingEnableNV);
	pfn_vkCmdSetViewportWScalingEnableNV(commandBuffer, viewportWScalingEnable);
}

static PFN_vkCmdSetRasterizationStreamEXT pfn_vkCmdSetRasterizationStreamEXT;
VKAPI_ATTR void vkCmdSetRasterizationStreamEXT(VkCommandBuffer commandBuffer, uint32_t rasterizationStream)
{
	assert(pfn_vkCmdSetRasterizationStreamEXT);
	pfn_vkCmdSetRasterizationStreamEXT(commandBuffer, rasterizationStream);
}

static PFN_vkCmdSetColorBlendEquationEXT pfn_vkCmdSetColorBlendEquationEXT;
VKAPI_ATTR void vkCmdSetColorBlendEquationEXT(VkCommandBuffer commandBuffer, uint32_t firstAttachment, uint32_t attachmentCount, const VkColorBlendEquationEXT * pColorBlendEquations)
{
	assert(pfn_vkCmdSetColorBlendEquationEXT);
	pfn_vkCmdSetColorBlendEquationEXT(commandBuffer, firstAttachment, attachmentCount, pColorBlendEquations);
}

static PFN_vkCmdSetSampleMaskEXT pfn_vkCmdSetSampleMaskEXT;
VKAPI_ATTR void vkCmdSetSampleMaskEXT(VkCommandBuffer commandBuffer, VkSampleCountFlagBits samples, const VkSampleMask * pSampleMask)
{
	assert(pfn_vkCmdSetSampleMaskEXT);
	pfn_vkCmdSetSampleMaskEXT(commandBuffer, samples, pSampleMask);
}

static PFN_vkCmdSetAlphaToCoverageEnableEXT pfn_vkCmdSetAlphaToCoverageEnableEXT;
VKAPI_ATTR void vkCmdSetAlphaToCoverageEnableEXT(VkCommandBuffer commandBuffer, VkBool32 alphaToCoverageEnable)
{
	assert(pfn_vkCmdSetAlphaToCoverageEnableEXT);
	pfn_vkCmdSetAlphaToCoverageEnableEXT(commandBuffer, alphaToCoverageEnable);
}

static PFN_vkCmdSetColorBlendEnableEXT pfn_vkCmdSetColorBlendEnableEXT;
VKAPI_ATTR void vkCmdSetColorBlendEnableEXT(VkCommandBuffer commandBuffer, uint32_t firstAttachment, uint32_t attachmentCount, const VkBool32 * pColorBlendEnables)
{
	assert(pfn_vkCmdSetColorBlendEnableEXT);
	pfn_vkCmdSetColorBlendEnableEXT(commandBuffer, firstAttachment, attachmentCount, pColorBlendEnables);
}

static PFN_vkCmdSetTessellationDomainOriginEXT pfn_vkCmdSetTessellationDomainOriginEXT;
VKAPI_ATTR void vkCmdSetTessellationDomainOriginEXT(VkCommandBuffer commandBuffer, VkTessellationDomainOrigin domainOrigin)
{
	assert(pfn_vkCmdSetTessellationDomainOriginEXT);
	pfn_vkCmdSetTessellationDomainOriginEXT(commandBuffer, domainOrigin);
}

static PFN_vkCmdSetExtraPrimitiveOverestimationSizeEXT pfn_vkCmdSetExtraPrimitiveOverestimationSizeEXT;
VKAPI_ATTR void vkCmdSetExtraPrimitiveOverestimationSizeEXT(VkCommandBuffer commandBuffer, float extraPrimitiveOverestimationSize)
{
	assert(pfn_vkCmdSetExtraPrimitiveOverestimationSizeEXT);
	pfn_vkCmdSetExtraPrimitiveOverestimationSizeEXT(commandBuffer, extraPrimitiveOverestimationSize);
}

static PFN_vkCmdSetViewportSwizzleNV pfn_vkCmdSetViewportSwizzleNV;
VKAPI_ATTR void vkCmdSetViewportSwizzleNV(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkViewportSwizzleNV * pViewportSwizzles)
{
	assert(pfn_vkCmdSetViewportSwizzleNV);
	pfn_vkCmdSetViewportSwizzleNV(commandBuffer, firstViewport, viewportCount, pViewportSwizzles);
}

static PFN_vkCmdSetCoverageToColorEnableNV pfn_vkCmdSetCoverageToColorEnableNV;
VKAPI_ATTR void vkCmdSetCoverageToColorEnableNV(VkCommandBuffer commandBuffer, VkBool32 coverageToColorEnable)
{
	assert(pfn_vkCmdSetCoverageToColorEnableNV);
	pfn_vkCmdSetCoverageToColorEnableNV(commandBuffer, coverageToColorEnable);
}

static PFN_vkCmdSetCoverageModulationModeNV pfn_vkCmdSetCoverageModulationModeNV;
VKAPI_ATTR void vkCmdSetCoverageModulationModeNV(VkCommandBuffer commandBuffer, VkCoverageModulationModeNV coverageModulationMode)
{
	assert(pfn_vkCmdSetCoverageModulationModeNV);
	pfn_vkCmdSetCoverageModulationModeNV(commandBuffer, coverageModulationMode);
}

static PFN_vkCmdSetCoverageModulationTableNV pfn_vkCmdSetCoverageModulationTableNV;
VKAPI_ATTR void vkCmdSetCoverageModulationTableNV(VkCommandBuffer commandBuffer, uint32_t coverageModulationTableCount, const float * pCoverageModulationTable)
{
	assert(pfn_vkCmdSetCoverageModulationTableNV);
	pfn_vkCmdSetCoverageModulationTableNV(commandBuffer, coverageModulationTableCount, pCoverageModulationTable);
}

static PFN_vkCmdSetCoverageReductionModeNV pfn_vkCmdSetCoverageReductionModeNV;
VKAPI_ATTR void vkCmdSetCoverageReductionModeNV(VkCommandBuffer commandBuffer, VkCoverageReductionModeNV coverageReductionMode)
{
	assert(pfn_vkCmdSetCoverageReductionModeNV);
	pfn_vkCmdSetCoverageReductionModeNV(commandBuffer, coverageReductionMode);
}
#endif // defined(VK_EXT_extended_dynamic_state3) || defined(VK_EXT_shader_object)
#if defined(VK_EXT_external_memory_host)

static PFN_vkGetMemoryHostPointerPropertiesEXT pfn_vkGetMemoryHostPointerPropertiesEXT;
VKAPI_ATTR VkResult vkGetMemoryHostPointerPropertiesEXT(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, const void * pHostPointer, VkMemoryHostPointerPropertiesEXT * pMemoryHostPointerProperties)
{
	assert(pfn_vkGetMemoryHostPointerPropertiesEXT);
	return pfn_vkGetMemoryHostPointerPropertiesEXT(device, handleType, pHostPointer, pMemoryHostPointerProperties);
}
#endif // defined(VK_EXT_external_memory_host)
#if defined(VK_EXT_external_memory_metal)

static PFN_vkGetMemoryMetalHandleEXT pfn_vkGetMemoryMetalHandleEXT;
VKAPI_ATTR VkResult vkGetMemoryMetalHandleEXT(VkDevice device, const VkMemoryGetMetalHandleInfoEXT * pGetMetalHandleInfo, void ** pHandle)
{
	assert(pfn_vkGetMemoryMetalHandleEXT);
	return pfn_vkGetMemoryMetalHandleEXT(device, pGetMetalHandleInfo, pHandle);
}

static PFN_vkGetMemoryMetalHandlePropertiesEXT pfn_vkGetMemoryMetalHandlePropertiesEXT;
VKAPI_ATTR VkResult vkGetMemoryMetalHandlePropertiesEXT(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, const void * pHandle, VkMemoryMetalHandlePropertiesEXT * pMemoryMetalHandleProperties)
{
	assert(pfn_vkGetMemoryMetalHandlePropertiesEXT);
	return pfn_vkGetMemoryMetalHandlePropertiesEXT(device, handleType, pHandle, pMemoryMetalHandleProperties);
}
#endif // defined(VK_EXT_external_memory_metal)
#if defined(VK_EXT_fragment_density_map_offset)

static PFN_vkCmdEndRendering2EXT pfn_vkCmdEndRendering2EXT;
VKAPI_ATTR void vkCmdEndRendering2EXT(VkCommandBuffer commandBuffer, const VkRenderingEndInfoEXT * pRenderingEndInfo)
{
	assert(pfn_vkCmdEndRendering2EXT);
	pfn_vkCmdEndRendering2EXT(commandBuffer, pRenderingEndInfo);
}
#endif // defined(VK_EXT_fragment_density_map_offset)
#if defined(VK_EXT_full_screen_exclusive)

static PFN_vkGetDeviceGroupSurfacePresentModes2EXT pfn_vkGetDeviceGroupSurfacePresentModes2EXT;
VKAPI_ATTR VkResult vkGetDeviceGroupSurfacePresentModes2EXT(VkDevice device, const VkPhysicalDeviceSurfaceInfo2KHR * pSurfaceInfo, VkDeviceGroupPresentModeFlagsKHR * pModes)
{
	assert(pfn_vkGetDeviceGroupSurfacePresentModes2EXT);
	return pfn_vkGetDeviceGroupSurfacePresentModes2EXT(device, pSurfaceInfo, pModes);
}

static PFN_vkGetPhysicalDeviceSurfacePresentModes2EXT pfn_vkGetPhysicalDeviceSurfacePresentModes2EXT;
VKAPI_ATTR VkResult vkGetPhysicalDeviceSurfacePresentModes2EXT(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR * pSurfaceInfo, uint32_t * pPresentModeCount, VkPresentModeKHR * pPresentModes)
{
	assert(pfn_vkGetPhysicalDeviceSurfacePresentModes2EXT);
	return pfn_vkGetPhysicalDeviceSurfacePresentModes2EXT(physicalDevice, pSurfaceInfo, pPresentModeCount, pPresentModes);
}

static PFN_vkAcquireFullScreenExclusiveModeEXT pfn_vkAcquireFullScreenExclusiveModeEXT;
VKAPI_ATTR VkResult vkAcquireFullScreenExclusiveModeEXT(VkDevice device, VkSwapchainKHR swapchain)
{
	assert(pfn_vkAcquireFullScreenExclusiveModeEXT);
	return pfn_vkAcquireFullScreenExclusiveModeEXT(device, swapchain);
}

static PFN_vkReleaseFullScreenExclusiveModeEXT pfn_vkReleaseFullScreenExclusiveModeEXT;
VKAPI_ATTR VkResult vkReleaseFullScreenExclusiveModeEXT(VkDevice device, VkSwapchainKHR swapchain)
{
	assert(pfn_vkReleaseFullScreenExclusiveModeEXT);
	return pfn_vkReleaseFullScreenExclusiveModeEXT(device, swapchain);
}
#endif // defined(VK_EXT_full_screen_exclusive)
#if defined(VK_EXT_hdr_metadata)

static PFN_vkSetHdrMetadataEXT pfn_vkSetHdrMetadataEXT;
VKAPI_ATTR void vkSetHdrMetadataEXT(VkDevice device, uint32_t swapchainCount, const VkSwapchainKHR * pSwapchains, const VkHdrMetadataEXT * pMetadata)
{
	assert(pfn_vkSetHdrMetadataEXT);
	pfn_vkSetHdrMetadataEXT(device, swapchainCount, pSwapchains, pMetadata);
}
#endif // defined(VK_EXT_hdr_metadata)
#if defined(VK_EXT_headless_surface)

static PFN_vkCreateHeadlessSurfaceEXT pfn_vkCreateHeadlessSurfaceEXT;
VKAPI_ATTR VkResult vkCreateHeadlessSurfaceEXT(VkInstance instance, const VkHeadlessSurfaceCreateInfoEXT * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface)
{
	assert(pfn_vkCreateHeadlessSurfaceEXT);
	return pfn_vkCreateHeadlessSurfaceEXT(instance, pCreateInfo, pAllocator, pSurface);
}
#endif // defined(VK_EXT_headless_surface)
#if defined(VK_EXT_host_image_copy)

static PFN_vkCopyImageToImageEXT pfn_vkCopyImageToImageEXT;
VKAPI_ATTR VkResult vkCopyImageToImageEXT(VkDevice device, const VkCopyImageToImageInfo * pCopyImageToImageInfo)
{
	assert(pfn_vkCopyImageToImageEXT);
	return pfn_vkCopyImageToImageEXT(device, pCopyImageToImageInfo);
}

static PFN_vkCopyMemoryToImageEXT pfn_vkCopyMemoryToImageEXT;
VKAPI_ATTR VkResult vkCopyMemoryToImageEXT(VkDevice device, const VkCopyMemoryToImageInfo * pCopyMemoryToImageInfo)
{
	assert(pfn_vkCopyMemoryToImageEXT);
	return pfn_vkCopyMemoryToImageEXT(device, pCopyMemoryToImageInfo);
}

static PFN_vkCopyImageToMemoryEXT pfn_vkCopyImageToMemoryEXT;
VKAPI_ATTR VkResult vkCopyImageToMemoryEXT(VkDevice device, const VkCopyImageToMemoryInfo * pCopyImageToMemoryInfo)
{
	assert(pfn_vkCopyImageToMemoryEXT);
	return pfn_vkCopyImageToMemoryEXT(device, pCopyImageToMemoryInfo);
}

static PFN_vkTransitionImageLayoutEXT pfn_vkTransitionImageLayoutEXT;
VKAPI_ATTR VkResult vkTransitionImageLayoutEXT(VkDevice device, uint32_t transitionCount, const VkHostImageLayoutTransitionInfo * pTransitions)
{
	assert(pfn_vkTransitionImageLayoutEXT);
	return pfn_vkTransitionImageLayoutEXT(device, transitionCount, pTransitions);
}
#endif // defined(VK_EXT_host_image_copy)
#if defined(VK_EXT_host_image_copy) || defined(VK_EXT_image_compression_control)

static PFN_vkGetImageSubresourceLayout2EXT pfn_vkGetImageSubresourceLayout2EXT;
VKAPI_ATTR void vkGetImageSubresourceLayout2EXT(VkDevice device, VkImage image, const VkImageSubresource2 * pSubresource, VkSubresourceLayout2 * pLayout)
{
	assert(pfn_vkGetImageSubresourceLayout2EXT);
	pfn_vkGetImageSubresourceLayout2EXT(device, image, pSubresource, pLayout);
}
#endif // defined(VK_EXT_host_image_copy) || defined(VK_EXT_image_compression_control)
#if defined(VK_EXT_host_query_reset)

static PFN_vkResetQueryPoolEXT pfn_vkResetQueryPoolEXT;
VKAPI_ATTR void vkResetQueryPoolEXT(VkDevice device, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount)
{
	assert(pfn_vkResetQueryPoolEXT);
	pfn_vkResetQueryPoolEXT(device, queryPool, firstQuery, queryCount);
}
#endif // defined(VK_EXT_host_query_reset)
#if defined(VK_EXT_image_drm_format_modifier)

static PFN_vkGetImageDrmFormatModifierPropertiesEXT pfn_vkGetImageDrmFormatModifierPropertiesEXT;
VKAPI_ATTR VkResult vkGetImageDrmFormatModifierPropertiesEXT(VkDevice device, VkImage image, VkImageDrmFormatModifierPropertiesEXT * pProperties)
{
	assert(pfn_vkGetImageDrmFormatModifierPropertiesEXT);
	return pfn_vkGetImageDrmFormatModifierPropertiesEXT(device, image, pProperties);
}
#endif // defined(VK_EXT_image_drm_format_modifier)
#if defined(VK_EXT_line_rasterization)

static PFN_vkCmdSetLineStippleEXT pfn_vkCmdSetLineStippleEXT;
VKAPI_ATTR void vkCmdSetLineStippleEXT(VkCommandBuffer commandBuffer, uint32_t lineStippleFactor, uint16_t lineStipplePattern)
{
	assert(pfn_vkCmdSetLineStippleEXT);
	pfn_vkCmdSetLineStippleEXT(commandBuffer, lineStippleFactor, lineStipplePattern);
}
#endif // defined(VK_EXT_line_rasterization)
#if defined(VK_EXT_mesh_shader)

static PFN_vkCmdDrawMeshTasksEXT pfn_vkCmdDrawMeshTasksEXT;
VKAPI_ATTR void vkCmdDrawMeshTasksEXT(VkCommandBuffer commandBuffer, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ)
{
	assert(pfn_vkCmdDrawMeshTasksEXT);
	pfn_vkCmdDrawMeshTasksEXT(commandBuffer, groupCountX, groupCountY, groupCountZ);
}

static PFN_vkCmdDrawMeshTasksIndirectEXT pfn_vkCmdDrawMeshTasksIndirectEXT;
VKAPI_ATTR void vkCmdDrawMeshTasksIndirectEXT(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride)
{
	assert(pfn_vkCmdDrawMeshTasksIndirectEXT);
	pfn_vkCmdDrawMeshTasksIndirectEXT(commandBuffer, buffer, offset, drawCount, stride);
}

static PFN_vkCmdDrawMeshTasksIndirectCountEXT pfn_vkCmdDrawMeshTasksIndirectCountEXT;
VKAPI_ATTR void vkCmdDrawMeshTasksIndirectCountEXT(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride)
{
	assert(pfn_vkCmdDrawMeshTasksIndirectCountEXT);
	pfn_vkCmdDrawMeshTasksIndirectCountEXT(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
}
#endif // defined(VK_EXT_mesh_shader)
#if defined(VK_EXT_metal_objects)

static PFN_vkExportMetalObjectsEXT pfn_vkExportMetalObjectsEXT;
VKAPI_ATTR void vkExportMetalObjectsEXT(VkDevice device, VkExportMetalObjectsInfoEXT * pMetalObjectsInfo)
{
	assert(pfn_vkExportMetalObjectsEXT);
	pfn_vkExportMetalObjectsEXT(device, pMetalObjectsInfo);
}
#endif // defined(VK_EXT_metal_objects)
#if defined(VK_EXT_metal_surface)

static PFN_vkCreateMetalSurfaceEXT pfn_vkCreateMetalSurfaceEXT;
VKAPI_ATTR VkResult vkCreateMetalSurfaceEXT(VkInstance instance, const VkMetalSurfaceCreateInfoEXT * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface)
{
	assert(pfn_vkCreateMetalSurfaceEXT);
	return pfn_vkCreateMetalSurfaceEXT(instance, pCreateInfo, pAllocator, pSurface);
}
#endif // defined(VK_EXT_metal_surface)
#if defined(VK_EXT_multi_draw)

static PFN_vkCmdDrawMultiEXT pfn_vkCmdDrawMultiEXT;
VKAPI_ATTR void vkCmdDrawMultiEXT(VkCommandBuffer commandBuffer, uint32_t drawCount, const VkMultiDrawInfoEXT * pVertexInfo, uint32_t instanceCount, uint32_t firstInstance, uint32_t stride)
{
	assert(pfn_vkCmdDrawMultiEXT);
	pfn_vkCmdDrawMultiEXT(commandBuffer, drawCount, pVertexInfo, instanceCount, firstInstance, stride);
}

static PFN_vkCmdDrawMultiIndexedEXT pfn_vkCmdDrawMultiIndexedEXT;
VKAPI_ATTR void vkCmdDrawMultiIndexedEXT(VkCommandBuffer commandBuffer, uint32_t drawCount, const VkMultiDrawIndexedInfoEXT * pIndexInfo, uint32_t instanceCount, uint32_t firstInstance, uint32_t stride, const int32_t * pVertexOffset)
{
	assert(pfn_vkCmdDrawMultiIndexedEXT);
	pfn_vkCmdDrawMultiIndexedEXT(commandBuffer, drawCount, pIndexInfo, instanceCount, firstInstance, stride, pVertexOffset);
}
#endif // defined(VK_EXT_multi_draw)
#if defined(VK_EXT_opacity_micromap)

static PFN_vkGetDeviceMicromapCompatibilityEXT pfn_vkGetDeviceMicromapCompatibilityEXT;
VKAPI_ATTR void vkGetDeviceMicromapCompatibilityEXT(VkDevice device, const VkMicromapVersionInfoEXT * pVersionInfo, VkAccelerationStructureCompatibilityKHR * pCompatibility)
{
	assert(pfn_vkGetDeviceMicromapCompatibilityEXT);
	pfn_vkGetDeviceMicromapCompatibilityEXT(device, pVersionInfo, pCompatibility);
}

static PFN_vkGetMicromapBuildSizesEXT pfn_vkGetMicromapBuildSizesEXT;
VKAPI_ATTR void vkGetMicromapBuildSizesEXT(VkDevice device, VkAccelerationStructureBuildTypeKHR buildType, const VkMicromapBuildInfoEXT * pBuildInfo, VkMicromapBuildSizesInfoEXT * pSizeInfo)
{
	assert(pfn_vkGetMicromapBuildSizesEXT);
	pfn_vkGetMicromapBuildSizesEXT(device, buildType, pBuildInfo, pSizeInfo);
}

static PFN_vkCopyMicromapEXT pfn_vkCopyMicromapEXT;
VKAPI_ATTR VkResult vkCopyMicromapEXT(VkDevice device, VkDeferredOperationKHR deferredOperation, const VkCopyMicromapInfoEXT * pInfo)
{
	assert(pfn_vkCopyMicromapEXT);
	return pfn_vkCopyMicromapEXT(device, deferredOperation, pInfo);
}

static PFN_vkCopyMemoryToMicromapEXT pfn_vkCopyMemoryToMicromapEXT;
VKAPI_ATTR VkResult vkCopyMemoryToMicromapEXT(VkDevice device, VkDeferredOperationKHR deferredOperation, const VkCopyMemoryToMicromapInfoEXT * pInfo)
{
	assert(pfn_vkCopyMemoryToMicromapEXT);
	return pfn_vkCopyMemoryToMicromapEXT(device, deferredOperation, pInfo);
}

static PFN_vkCmdWriteMicromapsPropertiesEXT pfn_vkCmdWriteMicromapsPropertiesEXT;
VKAPI_ATTR void vkCmdWriteMicromapsPropertiesEXT(VkCommandBuffer commandBuffer, uint32_t micromapCount, const VkMicromapEXT * pMicromaps, VkQueryType queryType, VkQueryPool queryPool, uint32_t firstQuery)
{
	assert(pfn_vkCmdWriteMicromapsPropertiesEXT);
	pfn_vkCmdWriteMicromapsPropertiesEXT(commandBuffer, micromapCount, pMicromaps, queryType, queryPool, firstQuery);
}

static PFN_vkCreateMicromapEXT pfn_vkCreateMicromapEXT;
VKAPI_ATTR VkResult vkCreateMicromapEXT(VkDevice device, const VkMicromapCreateInfoEXT * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkMicromapEXT * pMicromap)
{
	assert(pfn_vkCreateMicromapEXT);
	return pfn_vkCreateMicromapEXT(device, pCreateInfo, pAllocator, pMicromap);
}

static PFN_vkDestroyMicromapEXT pfn_vkDestroyMicromapEXT;
VKAPI_ATTR void vkDestroyMicromapEXT(VkDevice device, VkMicromapEXT micromap, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroyMicromapEXT);
	pfn_vkDestroyMicromapEXT(device, micromap, pAllocator);
}

static PFN_vkBuildMicromapsEXT pfn_vkBuildMicromapsEXT;
VKAPI_ATTR VkResult vkBuildMicromapsEXT(VkDevice device, VkDeferredOperationKHR deferredOperation, uint32_t infoCount, const VkMicromapBuildInfoEXT * pInfos)
{
	assert(pfn_vkBuildMicromapsEXT);
	return pfn_vkBuildMicromapsEXT(device, deferredOperation, infoCount, pInfos);
}

static PFN_vkCmdBuildMicromapsEXT pfn_vkCmdBuildMicromapsEXT;
VKAPI_ATTR void vkCmdBuildMicromapsEXT(VkCommandBuffer commandBuffer, uint32_t infoCount, const VkMicromapBuildInfoEXT * pInfos)
{
	assert(pfn_vkCmdBuildMicromapsEXT);
	pfn_vkCmdBuildMicromapsEXT(commandBuffer, infoCount, pInfos);
}

static PFN_vkCopyMicromapToMemoryEXT pfn_vkCopyMicromapToMemoryEXT;
VKAPI_ATTR VkResult vkCopyMicromapToMemoryEXT(VkDevice device, VkDeferredOperationKHR deferredOperation, const VkCopyMicromapToMemoryInfoEXT * pInfo)
{
	assert(pfn_vkCopyMicromapToMemoryEXT);
	return pfn_vkCopyMicromapToMemoryEXT(device, deferredOperation, pInfo);
}

static PFN_vkWriteMicromapsPropertiesEXT pfn_vkWriteMicromapsPropertiesEXT;
VKAPI_ATTR VkResult vkWriteMicromapsPropertiesEXT(VkDevice device, uint32_t micromapCount, const VkMicromapEXT * pMicromaps, VkQueryType queryType, size_t dataSize, void * pData, size_t stride)
{
	assert(pfn_vkWriteMicromapsPropertiesEXT);
	return pfn_vkWriteMicromapsPropertiesEXT(device, micromapCount, pMicromaps, queryType, dataSize, pData, stride);
}

static PFN_vkCmdCopyMicromapEXT pfn_vkCmdCopyMicromapEXT;
VKAPI_ATTR void vkCmdCopyMicromapEXT(VkCommandBuffer commandBuffer, const VkCopyMicromapInfoEXT * pInfo)
{
	assert(pfn_vkCmdCopyMicromapEXT);
	pfn_vkCmdCopyMicromapEXT(commandBuffer, pInfo);
}

static PFN_vkCmdCopyMicromapToMemoryEXT pfn_vkCmdCopyMicromapToMemoryEXT;
VKAPI_ATTR void vkCmdCopyMicromapToMemoryEXT(VkCommandBuffer commandBuffer, const VkCopyMicromapToMemoryInfoEXT * pInfo)
{
	assert(pfn_vkCmdCopyMicromapToMemoryEXT);
	pfn_vkCmdCopyMicromapToMemoryEXT(commandBuffer, pInfo);
}

static PFN_vkCmdCopyMemoryToMicromapEXT pfn_vkCmdCopyMemoryToMicromapEXT;
VKAPI_ATTR void vkCmdCopyMemoryToMicromapEXT(VkCommandBuffer commandBuffer, const VkCopyMemoryToMicromapInfoEXT * pInfo)
{
	assert(pfn_vkCmdCopyMemoryToMicromapEXT);
	pfn_vkCmdCopyMemoryToMicromapEXT(commandBuffer, pInfo);
}
#endif // defined(VK_EXT_opacity_micromap)
#if defined(VK_EXT_pageable_device_local_memory)

static PFN_vkSetDeviceMemoryPriorityEXT pfn_vkSetDeviceMemoryPriorityEXT;
VKAPI_ATTR void vkSetDeviceMemoryPriorityEXT(VkDevice device, VkDeviceMemory memory, float priority)
{
	assert(pfn_vkSetDeviceMemoryPriorityEXT);
	pfn_vkSetDeviceMemoryPriorityEXT(device, memory, priority);
}
#endif // defined(VK_EXT_pageable_device_local_memory)
#if defined(VK_EXT_pipeline_properties)

static PFN_vkGetPipelinePropertiesEXT pfn_vkGetPipelinePropertiesEXT;
VKAPI_ATTR VkResult vkGetPipelinePropertiesEXT(VkDevice device, const VkPipelineInfoEXT * pPipelineInfo, VkBaseOutStructure * pPipelineProperties)
{
	assert(pfn_vkGetPipelinePropertiesEXT);
	return pfn_vkGetPipelinePropertiesEXT(device, pPipelineInfo, pPipelineProperties);
}
#endif // defined(VK_EXT_pipeline_properties)
#if defined(VK_EXT_private_data)

static PFN_vkDestroyPrivateDataSlotEXT pfn_vkDestroyPrivateDataSlotEXT;
VKAPI_ATTR void vkDestroyPrivateDataSlotEXT(VkDevice device, VkPrivateDataSlot privateDataSlot, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroyPrivateDataSlotEXT);
	pfn_vkDestroyPrivateDataSlotEXT(device, privateDataSlot, pAllocator);
}

static PFN_vkSetPrivateDataEXT pfn_vkSetPrivateDataEXT;
VKAPI_ATTR VkResult vkSetPrivateDataEXT(VkDevice device, VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlot privateDataSlot, uint64_t data)
{
	assert(pfn_vkSetPrivateDataEXT);
	return pfn_vkSetPrivateDataEXT(device, objectType, objectHandle, privateDataSlot, data);
}

static PFN_vkCreatePrivateDataSlotEXT pfn_vkCreatePrivateDataSlotEXT;
VKAPI_ATTR VkResult vkCreatePrivateDataSlotEXT(VkDevice device, const VkPrivateDataSlotCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkPrivateDataSlot * pPrivateDataSlot)
{
	assert(pfn_vkCreatePrivateDataSlotEXT);
	return pfn_vkCreatePrivateDataSlotEXT(device, pCreateInfo, pAllocator, pPrivateDataSlot);
}

static PFN_vkGetPrivateDataEXT pfn_vkGetPrivateDataEXT;
VKAPI_ATTR void vkGetPrivateDataEXT(VkDevice device, VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlot privateDataSlot, uint64_t * pData)
{
	assert(pfn_vkGetPrivateDataEXT);
	pfn_vkGetPrivateDataEXT(device, objectType, objectHandle, privateDataSlot, pData);
}
#endif // defined(VK_EXT_private_data)
#if defined(VK_EXT_sample_locations)

static PFN_vkCmdSetSampleLocationsEXT pfn_vkCmdSetSampleLocationsEXT;
VKAPI_ATTR void vkCmdSetSampleLocationsEXT(VkCommandBuffer commandBuffer, const VkSampleLocationsInfoEXT * pSampleLocationsInfo)
{
	assert(pfn_vkCmdSetSampleLocationsEXT);
	pfn_vkCmdSetSampleLocationsEXT(commandBuffer, pSampleLocationsInfo);
}

static PFN_vkGetPhysicalDeviceMultisamplePropertiesEXT pfn_vkGetPhysicalDeviceMultisamplePropertiesEXT;
VKAPI_ATTR void vkGetPhysicalDeviceMultisamplePropertiesEXT(VkPhysicalDevice physicalDevice, VkSampleCountFlagBits samples, VkMultisamplePropertiesEXT * pMultisampleProperties)
{
	assert(pfn_vkGetPhysicalDeviceMultisamplePropertiesEXT);
	pfn_vkGetPhysicalDeviceMultisamplePropertiesEXT(physicalDevice, samples, pMultisampleProperties);
}
#endif // defined(VK_EXT_sample_locations)
#if defined(VK_EXT_shader_module_identifier)

static PFN_vkGetShaderModuleCreateInfoIdentifierEXT pfn_vkGetShaderModuleCreateInfoIdentifierEXT;
VKAPI_ATTR void vkGetShaderModuleCreateInfoIdentifierEXT(VkDevice device, const VkShaderModuleCreateInfo * pCreateInfo, VkShaderModuleIdentifierEXT * pIdentifier)
{
	assert(pfn_vkGetShaderModuleCreateInfoIdentifierEXT);
	pfn_vkGetShaderModuleCreateInfoIdentifierEXT(device, pCreateInfo, pIdentifier);
}

static PFN_vkGetShaderModuleIdentifierEXT pfn_vkGetShaderModuleIdentifierEXT;
VKAPI_ATTR void vkGetShaderModuleIdentifierEXT(VkDevice device, VkShaderModule shaderModule, VkShaderModuleIdentifierEXT * pIdentifier)
{
	assert(pfn_vkGetShaderModuleIdentifierEXT);
	pfn_vkGetShaderModuleIdentifierEXT(device, shaderModule, pIdentifier);
}
#endif // defined(VK_EXT_shader_module_identifier)
#if defined(VK_EXT_shader_object)

static PFN_vkDestroyShaderEXT pfn_vkDestroyShaderEXT;
VKAPI_ATTR void vkDestroyShaderEXT(VkDevice device, VkShaderEXT shader, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroyShaderEXT);
	pfn_vkDestroyShaderEXT(device, shader, pAllocator);
}

static PFN_vkGetShaderBinaryDataEXT pfn_vkGetShaderBinaryDataEXT;
VKAPI_ATTR VkResult vkGetShaderBinaryDataEXT(VkDevice device, VkShaderEXT shader, size_t * pDataSize, void * pData)
{
	assert(pfn_vkGetShaderBinaryDataEXT);
	return pfn_vkGetShaderBinaryDataEXT(device, shader, pDataSize, pData);
}

static PFN_vkCmdBindShadersEXT pfn_vkCmdBindShadersEXT;
VKAPI_ATTR void vkCmdBindShadersEXT(VkCommandBuffer commandBuffer, uint32_t stageCount, const VkShaderStageFlagBits * pStages, const VkShaderEXT * pShaders)
{
	assert(pfn_vkCmdBindShadersEXT);
	pfn_vkCmdBindShadersEXT(commandBuffer, stageCount, pStages, pShaders);
}

static PFN_vkCreateShadersEXT pfn_vkCreateShadersEXT;
VKAPI_ATTR VkResult vkCreateShadersEXT(VkDevice device, uint32_t createInfoCount, const VkShaderCreateInfoEXT * pCreateInfos, const VkAllocationCallbacks * pAllocator, VkShaderEXT * pShaders)
{
	assert(pfn_vkCreateShadersEXT);
	return pfn_vkCreateShadersEXT(device, createInfoCount, pCreateInfos, pAllocator, pShaders);
}
#endif // defined(VK_EXT_shader_object)
#if defined(VK_EXT_shader_object) || defined(VK_EXT_vertex_input_dynamic_state)

static PFN_vkCmdSetVertexInputEXT pfn_vkCmdSetVertexInputEXT;
VKAPI_ATTR void vkCmdSetVertexInputEXT(VkCommandBuffer commandBuffer, uint32_t vertexBindingDescriptionCount, const VkVertexInputBindingDescription2EXT * pVertexBindingDescriptions, uint32_t vertexAttributeDescriptionCount, const VkVertexInputAttributeDescription2EXT * pVertexAttributeDescriptions)
{
	assert(pfn_vkCmdSetVertexInputEXT);
	pfn_vkCmdSetVertexInputEXT(commandBuffer, vertexBindingDescriptionCount, pVertexBindingDescriptions, vertexAttributeDescriptionCount, pVertexAttributeDescriptions);
}
#endif // defined(VK_EXT_shader_object) || defined(VK_EXT_vertex_input_dynamic_state)
#if defined(VK_EXT_swapchain_maintenance1)

static PFN_vkReleaseSwapchainImagesEXT pfn_vkReleaseSwapchainImagesEXT;
VKAPI_ATTR VkResult vkReleaseSwapchainImagesEXT(VkDevice device, const VkReleaseSwapchainImagesInfoKHR * pReleaseInfo)
{
	assert(pfn_vkReleaseSwapchainImagesEXT);
	return pfn_vkReleaseSwapchainImagesEXT(device, pReleaseInfo);
}
#endif // defined(VK_EXT_swapchain_maintenance1)
#if defined(VK_EXT_tooling_info)

static PFN_vkGetPhysicalDeviceToolPropertiesEXT pfn_vkGetPhysicalDeviceToolPropertiesEXT;
VKAPI_ATTR VkResult vkGetPhysicalDeviceToolPropertiesEXT(VkPhysicalDevice physicalDevice, uint32_t * pToolCount, VkPhysicalDeviceToolProperties * pToolProperties)
{
	assert(pfn_vkGetPhysicalDeviceToolPropertiesEXT);
	return pfn_vkGetPhysicalDeviceToolPropertiesEXT(physicalDevice, pToolCount, pToolProperties);
}
#endif // defined(VK_EXT_tooling_info)
#if defined(VK_EXT_transform_feedback)

static PFN_vkCmdEndQueryIndexedEXT pfn_vkCmdEndQueryIndexedEXT;
VKAPI_ATTR void vkCmdEndQueryIndexedEXT(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, uint32_t index)
{
	assert(pfn_vkCmdEndQueryIndexedEXT);
	pfn_vkCmdEndQueryIndexedEXT(commandBuffer, queryPool, query, index);
}

static PFN_vkCmdEndTransformFeedbackEXT pfn_vkCmdEndTransformFeedbackEXT;
VKAPI_ATTR void vkCmdEndTransformFeedbackEXT(VkCommandBuffer commandBuffer, uint32_t firstCounterBuffer, uint32_t counterBufferCount, const VkBuffer * pCounterBuffers, const VkDeviceSize * pCounterBufferOffsets)
{
	assert(pfn_vkCmdEndTransformFeedbackEXT);
	pfn_vkCmdEndTransformFeedbackEXT(commandBuffer, firstCounterBuffer, counterBufferCount, pCounterBuffers, pCounterBufferOffsets);
}

static PFN_vkCmdDrawIndirectByteCountEXT pfn_vkCmdDrawIndirectByteCountEXT;
VKAPI_ATTR void vkCmdDrawIndirectByteCountEXT(VkCommandBuffer commandBuffer, uint32_t instanceCount, uint32_t firstInstance, VkBuffer counterBuffer, VkDeviceSize counterBufferOffset, uint32_t counterOffset, uint32_t vertexStride)
{
	assert(pfn_vkCmdDrawIndirectByteCountEXT);
	pfn_vkCmdDrawIndirectByteCountEXT(commandBuffer, instanceCount, firstInstance, counterBuffer, counterBufferOffset, counterOffset, vertexStride);
}

static PFN_vkCmdBindTransformFeedbackBuffersEXT pfn_vkCmdBindTransformFeedbackBuffersEXT;
VKAPI_ATTR void vkCmdBindTransformFeedbackBuffersEXT(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer * pBuffers, const VkDeviceSize * pOffsets, const VkDeviceSize * pSizes)
{
	assert(pfn_vkCmdBindTransformFeedbackBuffersEXT);
	pfn_vkCmdBindTransformFeedbackBuffersEXT(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets, pSizes);
}

static PFN_vkCmdBeginTransformFeedbackEXT pfn_vkCmdBeginTransformFeedbackEXT;
VKAPI_ATTR void vkCmdBeginTransformFeedbackEXT(VkCommandBuffer commandBuffer, uint32_t firstCounterBuffer, uint32_t counterBufferCount, const VkBuffer * pCounterBuffers, const VkDeviceSize * pCounterBufferOffsets)
{
	assert(pfn_vkCmdBeginTransformFeedbackEXT);
	pfn_vkCmdBeginTransformFeedbackEXT(commandBuffer, firstCounterBuffer, counterBufferCount, pCounterBuffers, pCounterBufferOffsets);
}

static PFN_vkCmdBeginQueryIndexedEXT pfn_vkCmdBeginQueryIndexedEXT;
VKAPI_ATTR void vkCmdBeginQueryIndexedEXT(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags, uint32_t index)
{
	assert(pfn_vkCmdBeginQueryIndexedEXT);
	pfn_vkCmdBeginQueryIndexedEXT(commandBuffer, queryPool, query, flags, index);
}
#endif // defined(VK_EXT_transform_feedback)
#if defined(VK_EXT_validation_cache)

static PFN_vkGetValidationCacheDataEXT pfn_vkGetValidationCacheDataEXT;
VKAPI_ATTR VkResult vkGetValidationCacheDataEXT(VkDevice device, VkValidationCacheEXT validationCache, size_t * pDataSize, void * pData)
{
	assert(pfn_vkGetValidationCacheDataEXT);
	return pfn_vkGetValidationCacheDataEXT(device, validationCache, pDataSize, pData);
}

static PFN_vkMergeValidationCachesEXT pfn_vkMergeValidationCachesEXT;
VKAPI_ATTR VkResult vkMergeValidationCachesEXT(VkDevice device, VkValidationCacheEXT dstCache, uint32_t srcCacheCount, const VkValidationCacheEXT * pSrcCaches)
{
	assert(pfn_vkMergeValidationCachesEXT);
	return pfn_vkMergeValidationCachesEXT(device, dstCache, srcCacheCount, pSrcCaches);
}

static PFN_vkCreateValidationCacheEXT pfn_vkCreateValidationCacheEXT;
VKAPI_ATTR VkResult vkCreateValidationCacheEXT(VkDevice device, const VkValidationCacheCreateInfoEXT * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkValidationCacheEXT * pValidationCache)
{
	assert(pfn_vkCreateValidationCacheEXT);
	return pfn_vkCreateValidationCacheEXT(device, pCreateInfo, pAllocator, pValidationCache);
}

static PFN_vkDestroyValidationCacheEXT pfn_vkDestroyValidationCacheEXT;
VKAPI_ATTR void vkDestroyValidationCacheEXT(VkDevice device, VkValidationCacheEXT validationCache, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroyValidationCacheEXT);
	pfn_vkDestroyValidationCacheEXT(device, validationCache, pAllocator);
}
#endif // defined(VK_EXT_validation_cache)
#if defined(VK_FUCHSIA_buffer_collection)

static PFN_vkSetBufferCollectionImageConstraintsFUCHSIA pfn_vkSetBufferCollectionImageConstraintsFUCHSIA;
VKAPI_ATTR VkResult vkSetBufferCollectionImageConstraintsFUCHSIA(VkDevice device, VkBufferCollectionFUCHSIA collection, const VkImageConstraintsInfoFUCHSIA * pImageConstraintsInfo)
{
	assert(pfn_vkSetBufferCollectionImageConstraintsFUCHSIA);
	return pfn_vkSetBufferCollectionImageConstraintsFUCHSIA(device, collection, pImageConstraintsInfo);
}

static PFN_vkDestroyBufferCollectionFUCHSIA pfn_vkDestroyBufferCollectionFUCHSIA;
VKAPI_ATTR void vkDestroyBufferCollectionFUCHSIA(VkDevice device, VkBufferCollectionFUCHSIA collection, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroyBufferCollectionFUCHSIA);
	pfn_vkDestroyBufferCollectionFUCHSIA(device, collection, pAllocator);
}

static PFN_vkCreateBufferCollectionFUCHSIA pfn_vkCreateBufferCollectionFUCHSIA;
VKAPI_ATTR VkResult vkCreateBufferCollectionFUCHSIA(VkDevice device, const VkBufferCollectionCreateInfoFUCHSIA * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkBufferCollectionFUCHSIA * pCollection)
{
	assert(pfn_vkCreateBufferCollectionFUCHSIA);
	return pfn_vkCreateBufferCollectionFUCHSIA(device, pCreateInfo, pAllocator, pCollection);
}

static PFN_vkSetBufferCollectionBufferConstraintsFUCHSIA pfn_vkSetBufferCollectionBufferConstraintsFUCHSIA;
VKAPI_ATTR VkResult vkSetBufferCollectionBufferConstraintsFUCHSIA(VkDevice device, VkBufferCollectionFUCHSIA collection, const VkBufferConstraintsInfoFUCHSIA * pBufferConstraintsInfo)
{
	assert(pfn_vkSetBufferCollectionBufferConstraintsFUCHSIA);
	return pfn_vkSetBufferCollectionBufferConstraintsFUCHSIA(device, collection, pBufferConstraintsInfo);
}

static PFN_vkGetBufferCollectionPropertiesFUCHSIA pfn_vkGetBufferCollectionPropertiesFUCHSIA;
VKAPI_ATTR VkResult vkGetBufferCollectionPropertiesFUCHSIA(VkDevice device, VkBufferCollectionFUCHSIA collection, VkBufferCollectionPropertiesFUCHSIA * pProperties)
{
	assert(pfn_vkGetBufferCollectionPropertiesFUCHSIA);
	return pfn_vkGetBufferCollectionPropertiesFUCHSIA(device, collection, pProperties);
}
#endif // defined(VK_FUCHSIA_buffer_collection)
#if defined(VK_FUCHSIA_external_memory)

static PFN_vkGetMemoryZirconHandleFUCHSIA pfn_vkGetMemoryZirconHandleFUCHSIA;
VKAPI_ATTR VkResult vkGetMemoryZirconHandleFUCHSIA(VkDevice device, const VkMemoryGetZirconHandleInfoFUCHSIA * pGetZirconHandleInfo, zx_handle_t * pZirconHandle)
{
	assert(pfn_vkGetMemoryZirconHandleFUCHSIA);
	return pfn_vkGetMemoryZirconHandleFUCHSIA(device, pGetZirconHandleInfo, pZirconHandle);
}

static PFN_vkGetMemoryZirconHandlePropertiesFUCHSIA pfn_vkGetMemoryZirconHandlePropertiesFUCHSIA;
VKAPI_ATTR VkResult vkGetMemoryZirconHandlePropertiesFUCHSIA(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, zx_handle_t zirconHandle, VkMemoryZirconHandlePropertiesFUCHSIA * pMemoryZirconHandleProperties)
{
	assert(pfn_vkGetMemoryZirconHandlePropertiesFUCHSIA);
	return pfn_vkGetMemoryZirconHandlePropertiesFUCHSIA(device, handleType, zirconHandle, pMemoryZirconHandleProperties);
}
#endif // defined(VK_FUCHSIA_external_memory)
#if defined(VK_FUCHSIA_external_semaphore)

static PFN_vkImportSemaphoreZirconHandleFUCHSIA pfn_vkImportSemaphoreZirconHandleFUCHSIA;
VKAPI_ATTR VkResult vkImportSemaphoreZirconHandleFUCHSIA(VkDevice device, const VkImportSemaphoreZirconHandleInfoFUCHSIA * pImportSemaphoreZirconHandleInfo)
{
	assert(pfn_vkImportSemaphoreZirconHandleFUCHSIA);
	return pfn_vkImportSemaphoreZirconHandleFUCHSIA(device, pImportSemaphoreZirconHandleInfo);
}

static PFN_vkGetSemaphoreZirconHandleFUCHSIA pfn_vkGetSemaphoreZirconHandleFUCHSIA;
VKAPI_ATTR VkResult vkGetSemaphoreZirconHandleFUCHSIA(VkDevice device, const VkSemaphoreGetZirconHandleInfoFUCHSIA * pGetZirconHandleInfo, zx_handle_t * pZirconHandle)
{
	assert(pfn_vkGetSemaphoreZirconHandleFUCHSIA);
	return pfn_vkGetSemaphoreZirconHandleFUCHSIA(device, pGetZirconHandleInfo, pZirconHandle);
}
#endif // defined(VK_FUCHSIA_external_semaphore)
#if defined(VK_FUCHSIA_imagepipe_surface)

static PFN_vkCreateImagePipeSurfaceFUCHSIA pfn_vkCreateImagePipeSurfaceFUCHSIA;
VKAPI_ATTR VkResult vkCreateImagePipeSurfaceFUCHSIA(VkInstance instance, const VkImagePipeSurfaceCreateInfoFUCHSIA * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface)
{
	assert(pfn_vkCreateImagePipeSurfaceFUCHSIA);
	return pfn_vkCreateImagePipeSurfaceFUCHSIA(instance, pCreateInfo, pAllocator, pSurface);
}
#endif // defined(VK_FUCHSIA_imagepipe_surface)
#if defined(VK_GGP_stream_descriptor_surface)

static PFN_vkCreateStreamDescriptorSurfaceGGP pfn_vkCreateStreamDescriptorSurfaceGGP;
VKAPI_ATTR VkResult vkCreateStreamDescriptorSurfaceGGP(VkInstance instance, const VkStreamDescriptorSurfaceCreateInfoGGP * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface)
{
	assert(pfn_vkCreateStreamDescriptorSurfaceGGP);
	return pfn_vkCreateStreamDescriptorSurfaceGGP(instance, pCreateInfo, pAllocator, pSurface);
}
#endif // defined(VK_GGP_stream_descriptor_surface)
#if defined(VK_GOOGLE_display_timing)

static PFN_vkGetRefreshCycleDurationGOOGLE pfn_vkGetRefreshCycleDurationGOOGLE;
VKAPI_ATTR VkResult vkGetRefreshCycleDurationGOOGLE(VkDevice device, VkSwapchainKHR swapchain, VkRefreshCycleDurationGOOGLE * pDisplayTimingProperties)
{
	assert(pfn_vkGetRefreshCycleDurationGOOGLE);
	return pfn_vkGetRefreshCycleDurationGOOGLE(device, swapchain, pDisplayTimingProperties);
}

static PFN_vkGetPastPresentationTimingGOOGLE pfn_vkGetPastPresentationTimingGOOGLE;
VKAPI_ATTR VkResult vkGetPastPresentationTimingGOOGLE(VkDevice device, VkSwapchainKHR swapchain, uint32_t * pPresentationTimingCount, VkPastPresentationTimingGOOGLE * pPresentationTimings)
{
	assert(pfn_vkGetPastPresentationTimingGOOGLE);
	return pfn_vkGetPastPresentationTimingGOOGLE(device, swapchain, pPresentationTimingCount, pPresentationTimings);
}
#endif // defined(VK_GOOGLE_display_timing)
#if defined(VK_HUAWEI_cluster_culling_shader)

static PFN_vkCmdDrawClusterHUAWEI pfn_vkCmdDrawClusterHUAWEI;
VKAPI_ATTR void vkCmdDrawClusterHUAWEI(VkCommandBuffer commandBuffer, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ)
{
	assert(pfn_vkCmdDrawClusterHUAWEI);
	pfn_vkCmdDrawClusterHUAWEI(commandBuffer, groupCountX, groupCountY, groupCountZ);
}

static PFN_vkCmdDrawClusterIndirectHUAWEI pfn_vkCmdDrawClusterIndirectHUAWEI;
VKAPI_ATTR void vkCmdDrawClusterIndirectHUAWEI(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset)
{
	assert(pfn_vkCmdDrawClusterIndirectHUAWEI);
	pfn_vkCmdDrawClusterIndirectHUAWEI(commandBuffer, buffer, offset);
}
#endif // defined(VK_HUAWEI_cluster_culling_shader)
#if defined(VK_HUAWEI_invocation_mask)

static PFN_vkCmdBindInvocationMaskHUAWEI pfn_vkCmdBindInvocationMaskHUAWEI;
VKAPI_ATTR void vkCmdBindInvocationMaskHUAWEI(VkCommandBuffer commandBuffer, VkImageView imageView, VkImageLayout imageLayout)
{
	assert(pfn_vkCmdBindInvocationMaskHUAWEI);
	pfn_vkCmdBindInvocationMaskHUAWEI(commandBuffer, imageView, imageLayout);
}
#endif // defined(VK_HUAWEI_invocation_mask)
#if defined(VK_HUAWEI_subpass_shading)

static PFN_vkCmdSubpassShadingHUAWEI pfn_vkCmdSubpassShadingHUAWEI;
VKAPI_ATTR void vkCmdSubpassShadingHUAWEI(VkCommandBuffer commandBuffer)
{
	assert(pfn_vkCmdSubpassShadingHUAWEI);
	pfn_vkCmdSubpassShadingHUAWEI(commandBuffer);
}

static PFN_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI pfn_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI;
VKAPI_ATTR VkResult vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI(VkDevice device, VkRenderPass renderpass, VkExtent2D * pMaxWorkgroupSize)
{
	assert(pfn_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI);
	return pfn_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI(device, renderpass, pMaxWorkgroupSize);
}
#endif // defined(VK_HUAWEI_subpass_shading)
#if defined(VK_INTEL_performance_query)

static PFN_vkCmdSetPerformanceStreamMarkerINTEL pfn_vkCmdSetPerformanceStreamMarkerINTEL;
VKAPI_ATTR VkResult vkCmdSetPerformanceStreamMarkerINTEL(VkCommandBuffer commandBuffer, const VkPerformanceStreamMarkerInfoINTEL * pMarkerInfo)
{
	assert(pfn_vkCmdSetPerformanceStreamMarkerINTEL);
	return pfn_vkCmdSetPerformanceStreamMarkerINTEL(commandBuffer, pMarkerInfo);
}

static PFN_vkAcquirePerformanceConfigurationINTEL pfn_vkAcquirePerformanceConfigurationINTEL;
VKAPI_ATTR VkResult vkAcquirePerformanceConfigurationINTEL(VkDevice device, const VkPerformanceConfigurationAcquireInfoINTEL * pAcquireInfo, VkPerformanceConfigurationINTEL * pConfiguration)
{
	assert(pfn_vkAcquirePerformanceConfigurationINTEL);
	return pfn_vkAcquirePerformanceConfigurationINTEL(device, pAcquireInfo, pConfiguration);
}

static PFN_vkInitializePerformanceApiINTEL pfn_vkInitializePerformanceApiINTEL;
VKAPI_ATTR VkResult vkInitializePerformanceApiINTEL(VkDevice device, const VkInitializePerformanceApiInfoINTEL * pInitializeInfo)
{
	assert(pfn_vkInitializePerformanceApiINTEL);
	return pfn_vkInitializePerformanceApiINTEL(device, pInitializeInfo);
}

static PFN_vkUninitializePerformanceApiINTEL pfn_vkUninitializePerformanceApiINTEL;
VKAPI_ATTR void vkUninitializePerformanceApiINTEL(VkDevice device)
{
	assert(pfn_vkUninitializePerformanceApiINTEL);
	pfn_vkUninitializePerformanceApiINTEL(device);
}

static PFN_vkCmdSetPerformanceMarkerINTEL pfn_vkCmdSetPerformanceMarkerINTEL;
VKAPI_ATTR VkResult vkCmdSetPerformanceMarkerINTEL(VkCommandBuffer commandBuffer, const VkPerformanceMarkerInfoINTEL * pMarkerInfo)
{
	assert(pfn_vkCmdSetPerformanceMarkerINTEL);
	return pfn_vkCmdSetPerformanceMarkerINTEL(commandBuffer, pMarkerInfo);
}

static PFN_vkCmdSetPerformanceOverrideINTEL pfn_vkCmdSetPerformanceOverrideINTEL;
VKAPI_ATTR VkResult vkCmdSetPerformanceOverrideINTEL(VkCommandBuffer commandBuffer, const VkPerformanceOverrideInfoINTEL * pOverrideInfo)
{
	assert(pfn_vkCmdSetPerformanceOverrideINTEL);
	return pfn_vkCmdSetPerformanceOverrideINTEL(commandBuffer, pOverrideInfo);
}

static PFN_vkReleasePerformanceConfigurationINTEL pfn_vkReleasePerformanceConfigurationINTEL;
VKAPI_ATTR VkResult vkReleasePerformanceConfigurationINTEL(VkDevice device, VkPerformanceConfigurationINTEL configuration)
{
	assert(pfn_vkReleasePerformanceConfigurationINTEL);
	return pfn_vkReleasePerformanceConfigurationINTEL(device, configuration);
}

static PFN_vkQueueSetPerformanceConfigurationINTEL pfn_vkQueueSetPerformanceConfigurationINTEL;
VKAPI_ATTR VkResult vkQueueSetPerformanceConfigurationINTEL(VkQueue queue, VkPerformanceConfigurationINTEL configuration)
{
	assert(pfn_vkQueueSetPerformanceConfigurationINTEL);
	return pfn_vkQueueSetPerformanceConfigurationINTEL(queue, configuration);
}

static PFN_vkGetPerformanceParameterINTEL pfn_vkGetPerformanceParameterINTEL;
VKAPI_ATTR VkResult vkGetPerformanceParameterINTEL(VkDevice device, VkPerformanceParameterTypeINTEL parameter, VkPerformanceValueINTEL * pValue)
{
	assert(pfn_vkGetPerformanceParameterINTEL);
	return pfn_vkGetPerformanceParameterINTEL(device, parameter, pValue);
}
#endif // defined(VK_INTEL_performance_query)
#if defined(VK_KHR_acceleration_structure)

static PFN_vkGetAccelerationStructureBuildSizesKHR pfn_vkGetAccelerationStructureBuildSizesKHR;
VKAPI_ATTR void vkGetAccelerationStructureBuildSizesKHR(VkDevice device, VkAccelerationStructureBuildTypeKHR buildType, const VkAccelerationStructureBuildGeometryInfoKHR * pBuildInfo, const uint32_t * pMaxPrimitiveCounts, VkAccelerationStructureBuildSizesInfoKHR * pSizeInfo)
{
	assert(pfn_vkGetAccelerationStructureBuildSizesKHR);
	pfn_vkGetAccelerationStructureBuildSizesKHR(device, buildType, pBuildInfo, pMaxPrimitiveCounts, pSizeInfo);
}

static PFN_vkCmdBuildAccelerationStructuresIndirectKHR pfn_vkCmdBuildAccelerationStructuresIndirectKHR;
VKAPI_ATTR void vkCmdBuildAccelerationStructuresIndirectKHR(VkCommandBuffer commandBuffer, uint32_t infoCount, const VkAccelerationStructureBuildGeometryInfoKHR * pInfos, const VkDeviceAddress * pIndirectDeviceAddresses, const uint32_t * pIndirectStrides, const uint32_t * const* ppMaxPrimitiveCounts)
{
	assert(pfn_vkCmdBuildAccelerationStructuresIndirectKHR);
	pfn_vkCmdBuildAccelerationStructuresIndirectKHR(commandBuffer, infoCount, pInfos, pIndirectDeviceAddresses, pIndirectStrides, ppMaxPrimitiveCounts);
}

static PFN_vkCopyAccelerationStructureToMemoryKHR pfn_vkCopyAccelerationStructureToMemoryKHR;
VKAPI_ATTR VkResult vkCopyAccelerationStructureToMemoryKHR(VkDevice device, VkDeferredOperationKHR deferredOperation, const VkCopyAccelerationStructureToMemoryInfoKHR * pInfo)
{
	assert(pfn_vkCopyAccelerationStructureToMemoryKHR);
	return pfn_vkCopyAccelerationStructureToMemoryKHR(device, deferredOperation, pInfo);
}

static PFN_vkCreateAccelerationStructureKHR pfn_vkCreateAccelerationStructureKHR;
VKAPI_ATTR VkResult vkCreateAccelerationStructureKHR(VkDevice device, const VkAccelerationStructureCreateInfoKHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkAccelerationStructureKHR * pAccelerationStructure)
{
	assert(pfn_vkCreateAccelerationStructureKHR);
	return pfn_vkCreateAccelerationStructureKHR(device, pCreateInfo, pAllocator, pAccelerationStructure);
}

static PFN_vkDestroyAccelerationStructureKHR pfn_vkDestroyAccelerationStructureKHR;
VKAPI_ATTR void vkDestroyAccelerationStructureKHR(VkDevice device, VkAccelerationStructureKHR accelerationStructure, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroyAccelerationStructureKHR);
	pfn_vkDestroyAccelerationStructureKHR(device, accelerationStructure, pAllocator);
}

static PFN_vkCmdBuildAccelerationStructuresKHR pfn_vkCmdBuildAccelerationStructuresKHR;
VKAPI_ATTR void vkCmdBuildAccelerationStructuresKHR(VkCommandBuffer commandBuffer, uint32_t infoCount, const VkAccelerationStructureBuildGeometryInfoKHR * pInfos, const VkAccelerationStructureBuildRangeInfoKHR * const* ppBuildRangeInfos)
{
	assert(pfn_vkCmdBuildAccelerationStructuresKHR);
	pfn_vkCmdBuildAccelerationStructuresKHR(commandBuffer, infoCount, pInfos, ppBuildRangeInfos);
}

static PFN_vkBuildAccelerationStructuresKHR pfn_vkBuildAccelerationStructuresKHR;
VKAPI_ATTR VkResult vkBuildAccelerationStructuresKHR(VkDevice device, VkDeferredOperationKHR deferredOperation, uint32_t infoCount, const VkAccelerationStructureBuildGeometryInfoKHR * pInfos, const VkAccelerationStructureBuildRangeInfoKHR * const* ppBuildRangeInfos)
{
	assert(pfn_vkBuildAccelerationStructuresKHR);
	return pfn_vkBuildAccelerationStructuresKHR(device, deferredOperation, infoCount, pInfos, ppBuildRangeInfos);
}

static PFN_vkCopyAccelerationStructureKHR pfn_vkCopyAccelerationStructureKHR;
VKAPI_ATTR VkResult vkCopyAccelerationStructureKHR(VkDevice device, VkDeferredOperationKHR deferredOperation, const VkCopyAccelerationStructureInfoKHR * pInfo)
{
	assert(pfn_vkCopyAccelerationStructureKHR);
	return pfn_vkCopyAccelerationStructureKHR(device, deferredOperation, pInfo);
}

static PFN_vkCopyMemoryToAccelerationStructureKHR pfn_vkCopyMemoryToAccelerationStructureKHR;
VKAPI_ATTR VkResult vkCopyMemoryToAccelerationStructureKHR(VkDevice device, VkDeferredOperationKHR deferredOperation, const VkCopyMemoryToAccelerationStructureInfoKHR * pInfo)
{
	assert(pfn_vkCopyMemoryToAccelerationStructureKHR);
	return pfn_vkCopyMemoryToAccelerationStructureKHR(device, deferredOperation, pInfo);
}

static PFN_vkWriteAccelerationStructuresPropertiesKHR pfn_vkWriteAccelerationStructuresPropertiesKHR;
VKAPI_ATTR VkResult vkWriteAccelerationStructuresPropertiesKHR(VkDevice device, uint32_t accelerationStructureCount, const VkAccelerationStructureKHR * pAccelerationStructures, VkQueryType queryType, size_t dataSize, void * pData, size_t stride)
{
	assert(pfn_vkWriteAccelerationStructuresPropertiesKHR);
	return pfn_vkWriteAccelerationStructuresPropertiesKHR(device, accelerationStructureCount, pAccelerationStructures, queryType, dataSize, pData, stride);
}

static PFN_vkCmdCopyAccelerationStructureKHR pfn_vkCmdCopyAccelerationStructureKHR;
VKAPI_ATTR void vkCmdCopyAccelerationStructureKHR(VkCommandBuffer commandBuffer, const VkCopyAccelerationStructureInfoKHR * pInfo)
{
	assert(pfn_vkCmdCopyAccelerationStructureKHR);
	pfn_vkCmdCopyAccelerationStructureKHR(commandBuffer, pInfo);
}

static PFN_vkCmdCopyAccelerationStructureToMemoryKHR pfn_vkCmdCopyAccelerationStructureToMemoryKHR;
VKAPI_ATTR void vkCmdCopyAccelerationStructureToMemoryKHR(VkCommandBuffer commandBuffer, const VkCopyAccelerationStructureToMemoryInfoKHR * pInfo)
{
	assert(pfn_vkCmdCopyAccelerationStructureToMemoryKHR);
	pfn_vkCmdCopyAccelerationStructureToMemoryKHR(commandBuffer, pInfo);
}

static PFN_vkCmdCopyMemoryToAccelerationStructureKHR pfn_vkCmdCopyMemoryToAccelerationStructureKHR;
VKAPI_ATTR void vkCmdCopyMemoryToAccelerationStructureKHR(VkCommandBuffer commandBuffer, const VkCopyMemoryToAccelerationStructureInfoKHR * pInfo)
{
	assert(pfn_vkCmdCopyMemoryToAccelerationStructureKHR);
	pfn_vkCmdCopyMemoryToAccelerationStructureKHR(commandBuffer, pInfo);
}

static PFN_vkGetAccelerationStructureDeviceAddressKHR pfn_vkGetAccelerationStructureDeviceAddressKHR;
VKAPI_ATTR VkDeviceAddress vkGetAccelerationStructureDeviceAddressKHR(VkDevice device, const VkAccelerationStructureDeviceAddressInfoKHR * pInfo)
{
	assert(pfn_vkGetAccelerationStructureDeviceAddressKHR);
	return pfn_vkGetAccelerationStructureDeviceAddressKHR(device, pInfo);
}

static PFN_vkCmdWriteAccelerationStructuresPropertiesKHR pfn_vkCmdWriteAccelerationStructuresPropertiesKHR;
VKAPI_ATTR void vkCmdWriteAccelerationStructuresPropertiesKHR(VkCommandBuffer commandBuffer, uint32_t accelerationStructureCount, const VkAccelerationStructureKHR * pAccelerationStructures, VkQueryType queryType, VkQueryPool queryPool, uint32_t firstQuery)
{
	assert(pfn_vkCmdWriteAccelerationStructuresPropertiesKHR);
	pfn_vkCmdWriteAccelerationStructuresPropertiesKHR(commandBuffer, accelerationStructureCount, pAccelerationStructures, queryType, queryPool, firstQuery);
}

static PFN_vkGetDeviceAccelerationStructureCompatibilityKHR pfn_vkGetDeviceAccelerationStructureCompatibilityKHR;
VKAPI_ATTR void vkGetDeviceAccelerationStructureCompatibilityKHR(VkDevice device, const VkAccelerationStructureVersionInfoKHR * pVersionInfo, VkAccelerationStructureCompatibilityKHR * pCompatibility)
{
	assert(pfn_vkGetDeviceAccelerationStructureCompatibilityKHR);
	pfn_vkGetDeviceAccelerationStructureCompatibilityKHR(device, pVersionInfo, pCompatibility);
}
#endif // defined(VK_KHR_acceleration_structure)
#if defined(VK_KHR_android_surface)

static PFN_vkCreateAndroidSurfaceKHR pfn_vkCreateAndroidSurfaceKHR;
VKAPI_ATTR VkResult vkCreateAndroidSurfaceKHR(VkInstance instance, const VkAndroidSurfaceCreateInfoKHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface)
{
	assert(pfn_vkCreateAndroidSurfaceKHR);
	return pfn_vkCreateAndroidSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
}
#endif // defined(VK_KHR_android_surface)
#if defined(VK_KHR_bind_memory2)

static PFN_vkBindBufferMemory2KHR pfn_vkBindBufferMemory2KHR;
VKAPI_ATTR VkResult vkBindBufferMemory2KHR(VkDevice device, uint32_t bindInfoCount, const VkBindBufferMemoryInfo * pBindInfos)
{
	assert(pfn_vkBindBufferMemory2KHR);
	return pfn_vkBindBufferMemory2KHR(device, bindInfoCount, pBindInfos);
}

static PFN_vkBindImageMemory2KHR pfn_vkBindImageMemory2KHR;
VKAPI_ATTR VkResult vkBindImageMemory2KHR(VkDevice device, uint32_t bindInfoCount, const VkBindImageMemoryInfo * pBindInfos)
{
	assert(pfn_vkBindImageMemory2KHR);
	return pfn_vkBindImageMemory2KHR(device, bindInfoCount, pBindInfos);
}
#endif // defined(VK_KHR_bind_memory2)
#if defined(VK_KHR_buffer_device_address)

static PFN_vkGetDeviceMemoryOpaqueCaptureAddressKHR pfn_vkGetDeviceMemoryOpaqueCaptureAddressKHR;
VKAPI_ATTR uint64_t vkGetDeviceMemoryOpaqueCaptureAddressKHR(VkDevice device, const VkDeviceMemoryOpaqueCaptureAddressInfo * pInfo)
{
	assert(pfn_vkGetDeviceMemoryOpaqueCaptureAddressKHR);
	return pfn_vkGetDeviceMemoryOpaqueCaptureAddressKHR(device, pInfo);
}

static PFN_vkGetBufferDeviceAddressKHR pfn_vkGetBufferDeviceAddressKHR;
VKAPI_ATTR VkDeviceAddress vkGetBufferDeviceAddressKHR(VkDevice device, const VkBufferDeviceAddressInfo * pInfo)
{
	assert(pfn_vkGetBufferDeviceAddressKHR);
	return pfn_vkGetBufferDeviceAddressKHR(device, pInfo);
}

static PFN_vkGetBufferOpaqueCaptureAddressKHR pfn_vkGetBufferOpaqueCaptureAddressKHR;
VKAPI_ATTR uint64_t vkGetBufferOpaqueCaptureAddressKHR(VkDevice device, const VkBufferDeviceAddressInfo * pInfo)
{
	assert(pfn_vkGetBufferOpaqueCaptureAddressKHR);
	return pfn_vkGetBufferOpaqueCaptureAddressKHR(device, pInfo);
}
#endif // defined(VK_KHR_buffer_device_address)
#if defined(VK_KHR_calibrated_timestamps)

static PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR pfn_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR;
VKAPI_ATTR VkResult vkGetPhysicalDeviceCalibrateableTimeDomainsKHR(VkPhysicalDevice physicalDevice, uint32_t * pTimeDomainCount, VkTimeDomainKHR * pTimeDomains)
{
	assert(pfn_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR);
	return pfn_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR(physicalDevice, pTimeDomainCount, pTimeDomains);
}

static PFN_vkGetCalibratedTimestampsKHR pfn_vkGetCalibratedTimestampsKHR;
VKAPI_ATTR VkResult vkGetCalibratedTimestampsKHR(VkDevice device, uint32_t timestampCount, const VkCalibratedTimestampInfoKHR * pTimestampInfos, uint64_t * pTimestamps, uint64_t * pMaxDeviation)
{
	assert(pfn_vkGetCalibratedTimestampsKHR);
	return pfn_vkGetCalibratedTimestampsKHR(device, timestampCount, pTimestampInfos, pTimestamps, pMaxDeviation);
}
#endif // defined(VK_KHR_calibrated_timestamps)
#if defined(VK_KHR_cooperative_matrix)

static PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR pfn_vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR;
VKAPI_ATTR VkResult vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR(VkPhysicalDevice physicalDevice, uint32_t * pPropertyCount, VkCooperativeMatrixPropertiesKHR * pProperties)
{
	assert(pfn_vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR);
	return pfn_vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR(physicalDevice, pPropertyCount, pProperties);
}
#endif // defined(VK_KHR_cooperative_matrix)
#if defined(VK_KHR_copy_commands2)

static PFN_vkCmdCopyBuffer2KHR pfn_vkCmdCopyBuffer2KHR;
VKAPI_ATTR void vkCmdCopyBuffer2KHR(VkCommandBuffer commandBuffer, const VkCopyBufferInfo2 * pCopyBufferInfo)
{
	assert(pfn_vkCmdCopyBuffer2KHR);
	pfn_vkCmdCopyBuffer2KHR(commandBuffer, pCopyBufferInfo);
}

static PFN_vkCmdCopyImage2KHR pfn_vkCmdCopyImage2KHR;
VKAPI_ATTR void vkCmdCopyImage2KHR(VkCommandBuffer commandBuffer, const VkCopyImageInfo2 * pCopyImageInfo)
{
	assert(pfn_vkCmdCopyImage2KHR);
	pfn_vkCmdCopyImage2KHR(commandBuffer, pCopyImageInfo);
}

static PFN_vkCmdCopyBufferToImage2KHR pfn_vkCmdCopyBufferToImage2KHR;
VKAPI_ATTR void vkCmdCopyBufferToImage2KHR(VkCommandBuffer commandBuffer, const VkCopyBufferToImageInfo2 * pCopyBufferToImageInfo)
{
	assert(pfn_vkCmdCopyBufferToImage2KHR);
	pfn_vkCmdCopyBufferToImage2KHR(commandBuffer, pCopyBufferToImageInfo);
}

static PFN_vkCmdCopyImageToBuffer2KHR pfn_vkCmdCopyImageToBuffer2KHR;
VKAPI_ATTR void vkCmdCopyImageToBuffer2KHR(VkCommandBuffer commandBuffer, const VkCopyImageToBufferInfo2 * pCopyImageToBufferInfo)
{
	assert(pfn_vkCmdCopyImageToBuffer2KHR);
	pfn_vkCmdCopyImageToBuffer2KHR(commandBuffer, pCopyImageToBufferInfo);
}

static PFN_vkCmdBlitImage2KHR pfn_vkCmdBlitImage2KHR;
VKAPI_ATTR void vkCmdBlitImage2KHR(VkCommandBuffer commandBuffer, const VkBlitImageInfo2 * pBlitImageInfo)
{
	assert(pfn_vkCmdBlitImage2KHR);
	pfn_vkCmdBlitImage2KHR(commandBuffer, pBlitImageInfo);
}

static PFN_vkCmdResolveImage2KHR pfn_vkCmdResolveImage2KHR;
VKAPI_ATTR void vkCmdResolveImage2KHR(VkCommandBuffer commandBuffer, const VkResolveImageInfo2 * pResolveImageInfo)
{
	assert(pfn_vkCmdResolveImage2KHR);
	pfn_vkCmdResolveImage2KHR(commandBuffer, pResolveImageInfo);
}
#endif // defined(VK_KHR_copy_commands2)
#if defined(VK_KHR_create_renderpass2)

static PFN_vkCreateRenderPass2KHR pfn_vkCreateRenderPass2KHR;
VKAPI_ATTR VkResult vkCreateRenderPass2KHR(VkDevice device, const VkRenderPassCreateInfo2 * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkRenderPass * pRenderPass)
{
	assert(pfn_vkCreateRenderPass2KHR);
	return pfn_vkCreateRenderPass2KHR(device, pCreateInfo, pAllocator, pRenderPass);
}

static PFN_vkCmdBeginRenderPass2KHR pfn_vkCmdBeginRenderPass2KHR;
VKAPI_ATTR void vkCmdBeginRenderPass2KHR(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo * pRenderPassBegin, const VkSubpassBeginInfo * pSubpassBeginInfo)
{
	assert(pfn_vkCmdBeginRenderPass2KHR);
	pfn_vkCmdBeginRenderPass2KHR(commandBuffer, pRenderPassBegin, pSubpassBeginInfo);
}

static PFN_vkCmdNextSubpass2KHR pfn_vkCmdNextSubpass2KHR;
VKAPI_ATTR void vkCmdNextSubpass2KHR(VkCommandBuffer commandBuffer, const VkSubpassBeginInfo * pSubpassBeginInfo, const VkSubpassEndInfo * pSubpassEndInfo)
{
	assert(pfn_vkCmdNextSubpass2KHR);
	pfn_vkCmdNextSubpass2KHR(commandBuffer, pSubpassBeginInfo, pSubpassEndInfo);
}

static PFN_vkCmdEndRenderPass2KHR pfn_vkCmdEndRenderPass2KHR;
VKAPI_ATTR void vkCmdEndRenderPass2KHR(VkCommandBuffer commandBuffer, const VkSubpassEndInfo * pSubpassEndInfo)
{
	assert(pfn_vkCmdEndRenderPass2KHR);
	pfn_vkCmdEndRenderPass2KHR(commandBuffer, pSubpassEndInfo);
}
#endif // defined(VK_KHR_create_renderpass2)
#if defined(VK_KHR_deferred_host_operations)

static PFN_vkDeferredOperationJoinKHR pfn_vkDeferredOperationJoinKHR;
VKAPI_ATTR VkResult vkDeferredOperationJoinKHR(VkDevice device, VkDeferredOperationKHR operation)
{
	assert(pfn_vkDeferredOperationJoinKHR);
	return pfn_vkDeferredOperationJoinKHR(device, operation);
}

static PFN_vkCreateDeferredOperationKHR pfn_vkCreateDeferredOperationKHR;
VKAPI_ATTR VkResult vkCreateDeferredOperationKHR(VkDevice device, const VkAllocationCallbacks * pAllocator, VkDeferredOperationKHR * pDeferredOperation)
{
	assert(pfn_vkCreateDeferredOperationKHR);
	return pfn_vkCreateDeferredOperationKHR(device, pAllocator, pDeferredOperation);
}

static PFN_vkDestroyDeferredOperationKHR pfn_vkDestroyDeferredOperationKHR;
VKAPI_ATTR void vkDestroyDeferredOperationKHR(VkDevice device, VkDeferredOperationKHR operation, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroyDeferredOperationKHR);
	pfn_vkDestroyDeferredOperationKHR(device, operation, pAllocator);
}

static PFN_vkGetDeferredOperationMaxConcurrencyKHR pfn_vkGetDeferredOperationMaxConcurrencyKHR;
VKAPI_ATTR uint32_t vkGetDeferredOperationMaxConcurrencyKHR(VkDevice device, VkDeferredOperationKHR operation)
{
	assert(pfn_vkGetDeferredOperationMaxConcurrencyKHR);
	return pfn_vkGetDeferredOperationMaxConcurrencyKHR(device, operation);
}

static PFN_vkGetDeferredOperationResultKHR pfn_vkGetDeferredOperationResultKHR;
VKAPI_ATTR VkResult vkGetDeferredOperationResultKHR(VkDevice device, VkDeferredOperationKHR operation)
{
	assert(pfn_vkGetDeferredOperationResultKHR);
	return pfn_vkGetDeferredOperationResultKHR(device, operation);
}
#endif // defined(VK_KHR_deferred_host_operations)
#if defined(VK_KHR_descriptor_update_template)

static PFN_vkCreateDescriptorUpdateTemplateKHR pfn_vkCreateDescriptorUpdateTemplateKHR;
VKAPI_ATTR VkResult vkCreateDescriptorUpdateTemplateKHR(VkDevice device, const VkDescriptorUpdateTemplateCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDescriptorUpdateTemplate * pDescriptorUpdateTemplate)
{
	assert(pfn_vkCreateDescriptorUpdateTemplateKHR);
	return pfn_vkCreateDescriptorUpdateTemplateKHR(device, pCreateInfo, pAllocator, pDescriptorUpdateTemplate);
}

static PFN_vkDestroyDescriptorUpdateTemplateKHR pfn_vkDestroyDescriptorUpdateTemplateKHR;
VKAPI_ATTR void vkDestroyDescriptorUpdateTemplateKHR(VkDevice device, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroyDescriptorUpdateTemplateKHR);
	pfn_vkDestroyDescriptorUpdateTemplateKHR(device, descriptorUpdateTemplate, pAllocator);
}

static PFN_vkUpdateDescriptorSetWithTemplateKHR pfn_vkUpdateDescriptorSetWithTemplateKHR;
VKAPI_ATTR void vkUpdateDescriptorSetWithTemplateKHR(VkDevice device, VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const void * pData)
{
	assert(pfn_vkUpdateDescriptorSetWithTemplateKHR);
	pfn_vkUpdateDescriptorSetWithTemplateKHR(device, descriptorSet, descriptorUpdateTemplate, pData);
}
#endif // defined(VK_KHR_descriptor_update_template)
#if defined(VK_KHR_descriptor_update_template) || defined(VK_KHR_push_descriptor)

static PFN_vkCmdPushDescriptorSetWithTemplateKHR pfn_vkCmdPushDescriptorSetWithTemplateKHR;
VKAPI_ATTR void vkCmdPushDescriptorSetWithTemplateKHR(VkCommandBuffer commandBuffer, VkDescriptorUpdateTemplate descriptorUpdateTemplate, VkPipelineLayout layout, uint32_t set, const void * pData)
{
	assert(pfn_vkCmdPushDescriptorSetWithTemplateKHR);
	pfn_vkCmdPushDescriptorSetWithTemplateKHR(commandBuffer, descriptorUpdateTemplate, layout, set, pData);
}
#endif // defined(VK_KHR_descriptor_update_template) || defined(VK_KHR_push_descriptor)
#if defined(VK_KHR_device_group)

static PFN_vkGetDeviceGroupPeerMemoryFeaturesKHR pfn_vkGetDeviceGroupPeerMemoryFeaturesKHR;
VKAPI_ATTR void vkGetDeviceGroupPeerMemoryFeaturesKHR(VkDevice device, uint32_t heapIndex, uint32_t localDeviceIndex, uint32_t remoteDeviceIndex, VkPeerMemoryFeatureFlags * pPeerMemoryFeatures)
{
	assert(pfn_vkGetDeviceGroupPeerMemoryFeaturesKHR);
	pfn_vkGetDeviceGroupPeerMemoryFeaturesKHR(device, heapIndex, localDeviceIndex, remoteDeviceIndex, pPeerMemoryFeatures);
}

static PFN_vkCmdSetDeviceMaskKHR pfn_vkCmdSetDeviceMaskKHR;
VKAPI_ATTR void vkCmdSetDeviceMaskKHR(VkCommandBuffer commandBuffer, uint32_t deviceMask)
{
	assert(pfn_vkCmdSetDeviceMaskKHR);
	pfn_vkCmdSetDeviceMaskKHR(commandBuffer, deviceMask);
}

static PFN_vkCmdDispatchBaseKHR pfn_vkCmdDispatchBaseKHR;
VKAPI_ATTR void vkCmdDispatchBaseKHR(VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ)
{
	assert(pfn_vkCmdDispatchBaseKHR);
	pfn_vkCmdDispatchBaseKHR(commandBuffer, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ);
}
#endif // defined(VK_KHR_device_group)
#if defined(VK_KHR_device_group) || defined(VK_KHR_swapchain)

static PFN_vkGetDeviceGroupPresentCapabilitiesKHR pfn_vkGetDeviceGroupPresentCapabilitiesKHR;
VKAPI_ATTR VkResult vkGetDeviceGroupPresentCapabilitiesKHR(VkDevice device, VkDeviceGroupPresentCapabilitiesKHR * pDeviceGroupPresentCapabilities)
{
	assert(pfn_vkGetDeviceGroupPresentCapabilitiesKHR);
	return pfn_vkGetDeviceGroupPresentCapabilitiesKHR(device, pDeviceGroupPresentCapabilities);
}

static PFN_vkGetDeviceGroupSurfacePresentModesKHR pfn_vkGetDeviceGroupSurfacePresentModesKHR;
VKAPI_ATTR VkResult vkGetDeviceGroupSurfacePresentModesKHR(VkDevice device, VkSurfaceKHR surface, VkDeviceGroupPresentModeFlagsKHR * pModes)
{
	assert(pfn_vkGetDeviceGroupSurfacePresentModesKHR);
	return pfn_vkGetDeviceGroupSurfacePresentModesKHR(device, surface, pModes);
}

static PFN_vkGetPhysicalDevicePresentRectanglesKHR pfn_vkGetPhysicalDevicePresentRectanglesKHR;
VKAPI_ATTR VkResult vkGetPhysicalDevicePresentRectanglesKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t * pRectCount, VkRect2D * pRects)
{
	assert(pfn_vkGetPhysicalDevicePresentRectanglesKHR);
	return pfn_vkGetPhysicalDevicePresentRectanglesKHR(physicalDevice, surface, pRectCount, pRects);
}

static PFN_vkAcquireNextImage2KHR pfn_vkAcquireNextImage2KHR;
VKAPI_ATTR VkResult vkAcquireNextImage2KHR(VkDevice device, const VkAcquireNextImageInfoKHR * pAcquireInfo, uint32_t * pImageIndex)
{
	assert(pfn_vkAcquireNextImage2KHR);
	return pfn_vkAcquireNextImage2KHR(device, pAcquireInfo, pImageIndex);
}
#endif // defined(VK_KHR_device_group) || defined(VK_KHR_swapchain)
#if defined(VK_KHR_device_group_creation)

static PFN_vkEnumeratePhysicalDeviceGroupsKHR pfn_vkEnumeratePhysicalDeviceGroupsKHR;
VKAPI_ATTR VkResult vkEnumeratePhysicalDeviceGroupsKHR(VkInstance instance, uint32_t * pPhysicalDeviceGroupCount, VkPhysicalDeviceGroupProperties * pPhysicalDeviceGroupProperties)
{
	assert(pfn_vkEnumeratePhysicalDeviceGroupsKHR);
	return pfn_vkEnumeratePhysicalDeviceGroupsKHR(instance, pPhysicalDeviceGroupCount, pPhysicalDeviceGroupProperties);
}
#endif // defined(VK_KHR_device_group_creation)
#if defined(VK_KHR_display)

static PFN_vkGetPhysicalDeviceDisplayPropertiesKHR pfn_vkGetPhysicalDeviceDisplayPropertiesKHR;
VKAPI_ATTR VkResult vkGetPhysicalDeviceDisplayPropertiesKHR(VkPhysicalDevice physicalDevice, uint32_t * pPropertyCount, VkDisplayPropertiesKHR * pProperties)
{
	assert(pfn_vkGetPhysicalDeviceDisplayPropertiesKHR);
	return pfn_vkGetPhysicalDeviceDisplayPropertiesKHR(physicalDevice, pPropertyCount, pProperties);
}

static PFN_vkGetPhysicalDeviceDisplayPlanePropertiesKHR pfn_vkGetPhysicalDeviceDisplayPlanePropertiesKHR;
VKAPI_ATTR VkResult vkGetPhysicalDeviceDisplayPlanePropertiesKHR(VkPhysicalDevice physicalDevice, uint32_t * pPropertyCount, VkDisplayPlanePropertiesKHR * pProperties)
{
	assert(pfn_vkGetPhysicalDeviceDisplayPlanePropertiesKHR);
	return pfn_vkGetPhysicalDeviceDisplayPlanePropertiesKHR(physicalDevice, pPropertyCount, pProperties);
}

static PFN_vkGetDisplayPlaneSupportedDisplaysKHR pfn_vkGetDisplayPlaneSupportedDisplaysKHR;
VKAPI_ATTR VkResult vkGetDisplayPlaneSupportedDisplaysKHR(VkPhysicalDevice physicalDevice, uint32_t planeIndex, uint32_t * pDisplayCount, VkDisplayKHR * pDisplays)
{
	assert(pfn_vkGetDisplayPlaneSupportedDisplaysKHR);
	return pfn_vkGetDisplayPlaneSupportedDisplaysKHR(physicalDevice, planeIndex, pDisplayCount, pDisplays);
}

static PFN_vkGetDisplayModePropertiesKHR pfn_vkGetDisplayModePropertiesKHR;
VKAPI_ATTR VkResult vkGetDisplayModePropertiesKHR(VkPhysicalDevice physicalDevice, VkDisplayKHR display, uint32_t * pPropertyCount, VkDisplayModePropertiesKHR * pProperties)
{
	assert(pfn_vkGetDisplayModePropertiesKHR);
	return pfn_vkGetDisplayModePropertiesKHR(physicalDevice, display, pPropertyCount, pProperties);
}

static PFN_vkCreateDisplayModeKHR pfn_vkCreateDisplayModeKHR;
VKAPI_ATTR VkResult vkCreateDisplayModeKHR(VkPhysicalDevice physicalDevice, VkDisplayKHR display, const VkDisplayModeCreateInfoKHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDisplayModeKHR * pMode)
{
	assert(pfn_vkCreateDisplayModeKHR);
	return pfn_vkCreateDisplayModeKHR(physicalDevice, display, pCreateInfo, pAllocator, pMode);
}

static PFN_vkGetDisplayPlaneCapabilitiesKHR pfn_vkGetDisplayPlaneCapabilitiesKHR;
VKAPI_ATTR VkResult vkGetDisplayPlaneCapabilitiesKHR(VkPhysicalDevice physicalDevice, VkDisplayModeKHR mode, uint32_t planeIndex, VkDisplayPlaneCapabilitiesKHR * pCapabilities)
{
	assert(pfn_vkGetDisplayPlaneCapabilitiesKHR);
	return pfn_vkGetDisplayPlaneCapabilitiesKHR(physicalDevice, mode, planeIndex, pCapabilities);
}

static PFN_vkCreateDisplayPlaneSurfaceKHR pfn_vkCreateDisplayPlaneSurfaceKHR;
VKAPI_ATTR VkResult vkCreateDisplayPlaneSurfaceKHR(VkInstance instance, const VkDisplaySurfaceCreateInfoKHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface)
{
	assert(pfn_vkCreateDisplayPlaneSurfaceKHR);
	return pfn_vkCreateDisplayPlaneSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
}
#endif // defined(VK_KHR_display)
#if defined(VK_KHR_display_swapchain)

static PFN_vkCreateSharedSwapchainsKHR pfn_vkCreateSharedSwapchainsKHR;
VKAPI_ATTR VkResult vkCreateSharedSwapchainsKHR(VkDevice device, uint32_t swapchainCount, const VkSwapchainCreateInfoKHR * pCreateInfos, const VkSwapchainCreateInfoKHR * pCreateInfos, const VkAllocationCallbacks * pAllocator, VkSwapchainKHR * pSwapchains)
{
	assert(pfn_vkCreateSharedSwapchainsKHR);
	return pfn_vkCreateSharedSwapchainsKHR(device, swapchainCount, pCreateInfos, pCreateInfos, pAllocator, pSwapchains);
}
#endif // defined(VK_KHR_display_swapchain)
#if defined(VK_KHR_draw_indirect_count)

static PFN_vkCmdDrawIndirectCountKHR pfn_vkCmdDrawIndirectCountKHR;
VKAPI_ATTR void vkCmdDrawIndirectCountKHR(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride)
{
	assert(pfn_vkCmdDrawIndirectCountKHR);
	pfn_vkCmdDrawIndirectCountKHR(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
}

static PFN_vkCmdDrawIndexedIndirectCountKHR pfn_vkCmdDrawIndexedIndirectCountKHR;
VKAPI_ATTR void vkCmdDrawIndexedIndirectCountKHR(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride)
{
	assert(pfn_vkCmdDrawIndexedIndirectCountKHR);
	pfn_vkCmdDrawIndexedIndirectCountKHR(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
}
#endif // defined(VK_KHR_draw_indirect_count)
#if defined(VK_KHR_dynamic_rendering)

static PFN_vkCmdBeginRenderingKHR pfn_vkCmdBeginRenderingKHR;
VKAPI_ATTR void vkCmdBeginRenderingKHR(VkCommandBuffer commandBuffer, const VkRenderingInfo * pRenderingInfo)
{
	assert(pfn_vkCmdBeginRenderingKHR);
	pfn_vkCmdBeginRenderingKHR(commandBuffer, pRenderingInfo);
}

static PFN_vkCmdEndRenderingKHR pfn_vkCmdEndRenderingKHR;
VKAPI_ATTR void vkCmdEndRenderingKHR(VkCommandBuffer commandBuffer)
{
	assert(pfn_vkCmdEndRenderingKHR);
	pfn_vkCmdEndRenderingKHR(commandBuffer);
}
#endif // defined(VK_KHR_dynamic_rendering)
#if defined(VK_KHR_dynamic_rendering_local_read)

static PFN_vkCmdSetRenderingAttachmentLocationsKHR pfn_vkCmdSetRenderingAttachmentLocationsKHR;
VKAPI_ATTR void vkCmdSetRenderingAttachmentLocationsKHR(VkCommandBuffer commandBuffer, const VkRenderingAttachmentLocationInfo * pLocationInfo)
{
	assert(pfn_vkCmdSetRenderingAttachmentLocationsKHR);
	pfn_vkCmdSetRenderingAttachmentLocationsKHR(commandBuffer, pLocationInfo);
}

static PFN_vkCmdSetRenderingInputAttachmentIndicesKHR pfn_vkCmdSetRenderingInputAttachmentIndicesKHR;
VKAPI_ATTR void vkCmdSetRenderingInputAttachmentIndicesKHR(VkCommandBuffer commandBuffer, const VkRenderingInputAttachmentIndexInfo * pInputAttachmentIndexInfo)
{
	assert(pfn_vkCmdSetRenderingInputAttachmentIndicesKHR);
	pfn_vkCmdSetRenderingInputAttachmentIndicesKHR(commandBuffer, pInputAttachmentIndexInfo);
}
#endif // defined(VK_KHR_dynamic_rendering_local_read)
#if defined(VK_KHR_external_fence_capabilities)

static PFN_vkGetPhysicalDeviceExternalFencePropertiesKHR pfn_vkGetPhysicalDeviceExternalFencePropertiesKHR;
VKAPI_ATTR void vkGetPhysicalDeviceExternalFencePropertiesKHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalFenceInfo * pExternalFenceInfo, VkExternalFenceProperties * pExternalFenceProperties)
{
	assert(pfn_vkGetPhysicalDeviceExternalFencePropertiesKHR);
	pfn_vkGetPhysicalDeviceExternalFencePropertiesKHR(physicalDevice, pExternalFenceInfo, pExternalFenceProperties);
}
#endif // defined(VK_KHR_external_fence_capabilities)
#if defined(VK_KHR_external_fence_fd)

static PFN_vkImportFenceFdKHR pfn_vkImportFenceFdKHR;
VKAPI_ATTR VkResult vkImportFenceFdKHR(VkDevice device, const VkImportFenceFdInfoKHR * pImportFenceFdInfo)
{
	assert(pfn_vkImportFenceFdKHR);
	return pfn_vkImportFenceFdKHR(device, pImportFenceFdInfo);
}

static PFN_vkGetFenceFdKHR pfn_vkGetFenceFdKHR;
VKAPI_ATTR VkResult vkGetFenceFdKHR(VkDevice device, const VkFenceGetFdInfoKHR * pGetFdInfo, int * pFd)
{
	assert(pfn_vkGetFenceFdKHR);
	return pfn_vkGetFenceFdKHR(device, pGetFdInfo, pFd);
}
#endif // defined(VK_KHR_external_fence_fd)
#if defined(VK_KHR_external_fence_win32)

static PFN_vkGetFenceWin32HandleKHR pfn_vkGetFenceWin32HandleKHR;
VKAPI_ATTR VkResult vkGetFenceWin32HandleKHR(VkDevice device, const VkFenceGetWin32HandleInfoKHR * pGetWin32HandleInfo, HANDLE * pHandle)
{
	assert(pfn_vkGetFenceWin32HandleKHR);
	return pfn_vkGetFenceWin32HandleKHR(device, pGetWin32HandleInfo, pHandle);
}

static PFN_vkImportFenceWin32HandleKHR pfn_vkImportFenceWin32HandleKHR;
VKAPI_ATTR VkResult vkImportFenceWin32HandleKHR(VkDevice device, const VkImportFenceWin32HandleInfoKHR * pImportFenceWin32HandleInfo)
{
	assert(pfn_vkImportFenceWin32HandleKHR);
	return pfn_vkImportFenceWin32HandleKHR(device, pImportFenceWin32HandleInfo);
}
#endif // defined(VK_KHR_external_fence_win32)
#if defined(VK_KHR_external_memory_capabilities)

static PFN_vkGetPhysicalDeviceExternalBufferPropertiesKHR pfn_vkGetPhysicalDeviceExternalBufferPropertiesKHR;
VKAPI_ATTR void vkGetPhysicalDeviceExternalBufferPropertiesKHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalBufferInfo * pExternalBufferInfo, VkExternalBufferProperties * pExternalBufferProperties)
{
	assert(pfn_vkGetPhysicalDeviceExternalBufferPropertiesKHR);
	pfn_vkGetPhysicalDeviceExternalBufferPropertiesKHR(physicalDevice, pExternalBufferInfo, pExternalBufferProperties);
}
#endif // defined(VK_KHR_external_memory_capabilities)
#if defined(VK_KHR_external_memory_fd)

static PFN_vkGetMemoryFdPropertiesKHR pfn_vkGetMemoryFdPropertiesKHR;
VKAPI_ATTR VkResult vkGetMemoryFdPropertiesKHR(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, int fd, VkMemoryFdPropertiesKHR * pMemoryFdProperties)
{
	assert(pfn_vkGetMemoryFdPropertiesKHR);
	return pfn_vkGetMemoryFdPropertiesKHR(device, handleType, fd, pMemoryFdProperties);
}

static PFN_vkGetMemoryFdKHR pfn_vkGetMemoryFdKHR;
VKAPI_ATTR VkResult vkGetMemoryFdKHR(VkDevice device, const VkMemoryGetFdInfoKHR * pGetFdInfo, int * pFd)
{
	assert(pfn_vkGetMemoryFdKHR);
	return pfn_vkGetMemoryFdKHR(device, pGetFdInfo, pFd);
}
#endif // defined(VK_KHR_external_memory_fd)
#if defined(VK_KHR_external_memory_win32)

static PFN_vkGetMemoryWin32HandleKHR pfn_vkGetMemoryWin32HandleKHR;
VKAPI_ATTR VkResult vkGetMemoryWin32HandleKHR(VkDevice device, const VkMemoryGetWin32HandleInfoKHR * pGetWin32HandleInfo, HANDLE * pHandle)
{
	assert(pfn_vkGetMemoryWin32HandleKHR);
	return pfn_vkGetMemoryWin32HandleKHR(device, pGetWin32HandleInfo, pHandle);
}

static PFN_vkGetMemoryWin32HandlePropertiesKHR pfn_vkGetMemoryWin32HandlePropertiesKHR;
VKAPI_ATTR VkResult vkGetMemoryWin32HandlePropertiesKHR(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, HANDLE handle, VkMemoryWin32HandlePropertiesKHR * pMemoryWin32HandleProperties)
{
	assert(pfn_vkGetMemoryWin32HandlePropertiesKHR);
	return pfn_vkGetMemoryWin32HandlePropertiesKHR(device, handleType, handle, pMemoryWin32HandleProperties);
}
#endif // defined(VK_KHR_external_memory_win32)
#if defined(VK_KHR_external_semaphore_capabilities)

static PFN_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR pfn_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR;
VKAPI_ATTR void vkGetPhysicalDeviceExternalSemaphorePropertiesKHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalSemaphoreInfo * pExternalSemaphoreInfo, VkExternalSemaphoreProperties * pExternalSemaphoreProperties)
{
	assert(pfn_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR);
	pfn_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR(physicalDevice, pExternalSemaphoreInfo, pExternalSemaphoreProperties);
}
#endif // defined(VK_KHR_external_semaphore_capabilities)
#if defined(VK_KHR_external_semaphore_fd)

static PFN_vkImportSemaphoreFdKHR pfn_vkImportSemaphoreFdKHR;
VKAPI_ATTR VkResult vkImportSemaphoreFdKHR(VkDevice device, const VkImportSemaphoreFdInfoKHR * pImportSemaphoreFdInfo)
{
	assert(pfn_vkImportSemaphoreFdKHR);
	return pfn_vkImportSemaphoreFdKHR(device, pImportSemaphoreFdInfo);
}

static PFN_vkGetSemaphoreFdKHR pfn_vkGetSemaphoreFdKHR;
VKAPI_ATTR VkResult vkGetSemaphoreFdKHR(VkDevice device, const VkSemaphoreGetFdInfoKHR * pGetFdInfo, int * pFd)
{
	assert(pfn_vkGetSemaphoreFdKHR);
	return pfn_vkGetSemaphoreFdKHR(device, pGetFdInfo, pFd);
}
#endif // defined(VK_KHR_external_semaphore_fd)
#if defined(VK_KHR_external_semaphore_win32)

static PFN_vkImportSemaphoreWin32HandleKHR pfn_vkImportSemaphoreWin32HandleKHR;
VKAPI_ATTR VkResult vkImportSemaphoreWin32HandleKHR(VkDevice device, const VkImportSemaphoreWin32HandleInfoKHR * pImportSemaphoreWin32HandleInfo)
{
	assert(pfn_vkImportSemaphoreWin32HandleKHR);
	return pfn_vkImportSemaphoreWin32HandleKHR(device, pImportSemaphoreWin32HandleInfo);
}

static PFN_vkGetSemaphoreWin32HandleKHR pfn_vkGetSemaphoreWin32HandleKHR;
VKAPI_ATTR VkResult vkGetSemaphoreWin32HandleKHR(VkDevice device, const VkSemaphoreGetWin32HandleInfoKHR * pGetWin32HandleInfo, HANDLE * pHandle)
{
	assert(pfn_vkGetSemaphoreWin32HandleKHR);
	return pfn_vkGetSemaphoreWin32HandleKHR(device, pGetWin32HandleInfo, pHandle);
}
#endif // defined(VK_KHR_external_semaphore_win32)
#if defined(VK_KHR_fragment_shading_rate)

static PFN_vkGetPhysicalDeviceFragmentShadingRatesKHR pfn_vkGetPhysicalDeviceFragmentShadingRatesKHR;
VKAPI_ATTR VkResult vkGetPhysicalDeviceFragmentShadingRatesKHR(VkPhysicalDevice physicalDevice, uint32_t * pFragmentShadingRateCount, VkPhysicalDeviceFragmentShadingRateKHR * pFragmentShadingRates)
{
	assert(pfn_vkGetPhysicalDeviceFragmentShadingRatesKHR);
	return pfn_vkGetPhysicalDeviceFragmentShadingRatesKHR(physicalDevice, pFragmentShadingRateCount, pFragmentShadingRates);
}

static PFN_vkCmdSetFragmentShadingRateKHR pfn_vkCmdSetFragmentShadingRateKHR;
VKAPI_ATTR void vkCmdSetFragmentShadingRateKHR(VkCommandBuffer commandBuffer, const VkExtent2D * pFragmentSize, const VkFragmentShadingRateCombinerOpKHR combinerOps [2])
{
	assert(pfn_vkCmdSetFragmentShadingRateKHR);
	pfn_vkCmdSetFragmentShadingRateKHR(commandBuffer, pFragmentSize, combinerOps);
}
#endif // defined(VK_KHR_fragment_shading_rate)
#if defined(VK_KHR_get_display_properties2)

static PFN_vkGetPhysicalDeviceDisplayPlaneProperties2KHR pfn_vkGetPhysicalDeviceDisplayPlaneProperties2KHR;
VKAPI_ATTR VkResult vkGetPhysicalDeviceDisplayPlaneProperties2KHR(VkPhysicalDevice physicalDevice, uint32_t * pPropertyCount, VkDisplayPlaneProperties2KHR * pProperties)
{
	assert(pfn_vkGetPhysicalDeviceDisplayPlaneProperties2KHR);
	return pfn_vkGetPhysicalDeviceDisplayPlaneProperties2KHR(physicalDevice, pPropertyCount, pProperties);
}

static PFN_vkGetPhysicalDeviceDisplayProperties2KHR pfn_vkGetPhysicalDeviceDisplayProperties2KHR;
VKAPI_ATTR VkResult vkGetPhysicalDeviceDisplayProperties2KHR(VkPhysicalDevice physicalDevice, uint32_t * pPropertyCount, VkDisplayProperties2KHR * pProperties)
{
	assert(pfn_vkGetPhysicalDeviceDisplayProperties2KHR);
	return pfn_vkGetPhysicalDeviceDisplayProperties2KHR(physicalDevice, pPropertyCount, pProperties);
}

static PFN_vkGetDisplayModeProperties2KHR pfn_vkGetDisplayModeProperties2KHR;
VKAPI_ATTR VkResult vkGetDisplayModeProperties2KHR(VkPhysicalDevice physicalDevice, VkDisplayKHR display, uint32_t * pPropertyCount, VkDisplayModeProperties2KHR * pProperties)
{
	assert(pfn_vkGetDisplayModeProperties2KHR);
	return pfn_vkGetDisplayModeProperties2KHR(physicalDevice, display, pPropertyCount, pProperties);
}

static PFN_vkGetDisplayPlaneCapabilities2KHR pfn_vkGetDisplayPlaneCapabilities2KHR;
VKAPI_ATTR VkResult vkGetDisplayPlaneCapabilities2KHR(VkPhysicalDevice physicalDevice, const VkDisplayPlaneInfo2KHR * pDisplayPlaneInfo, VkDisplayPlaneCapabilities2KHR * pCapabilities)
{
	assert(pfn_vkGetDisplayPlaneCapabilities2KHR);
	return pfn_vkGetDisplayPlaneCapabilities2KHR(physicalDevice, pDisplayPlaneInfo, pCapabilities);
}
#endif // defined(VK_KHR_get_display_properties2)
#if defined(VK_KHR_get_memory_requirements2)

static PFN_vkGetImageMemoryRequirements2KHR pfn_vkGetImageMemoryRequirements2KHR;
VKAPI_ATTR void vkGetImageMemoryRequirements2KHR(VkDevice device, const VkImageMemoryRequirementsInfo2 * pInfo, VkMemoryRequirements2 * pMemoryRequirements)
{
	assert(pfn_vkGetImageMemoryRequirements2KHR);
	pfn_vkGetImageMemoryRequirements2KHR(device, pInfo, pMemoryRequirements);
}

static PFN_vkGetBufferMemoryRequirements2KHR pfn_vkGetBufferMemoryRequirements2KHR;
VKAPI_ATTR void vkGetBufferMemoryRequirements2KHR(VkDevice device, const VkBufferMemoryRequirementsInfo2 * pInfo, VkMemoryRequirements2 * pMemoryRequirements)
{
	assert(pfn_vkGetBufferMemoryRequirements2KHR);
	pfn_vkGetBufferMemoryRequirements2KHR(device, pInfo, pMemoryRequirements);
}

static PFN_vkGetImageSparseMemoryRequirements2KHR pfn_vkGetImageSparseMemoryRequirements2KHR;
VKAPI_ATTR void vkGetImageSparseMemoryRequirements2KHR(VkDevice device, const VkImageSparseMemoryRequirementsInfo2 * pInfo, uint32_t * pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2 * pSparseMemoryRequirements)
{
	assert(pfn_vkGetImageSparseMemoryRequirements2KHR);
	pfn_vkGetImageSparseMemoryRequirements2KHR(device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
}
#endif // defined(VK_KHR_get_memory_requirements2)
#if defined(VK_KHR_get_physical_device_properties2)

static PFN_vkGetPhysicalDeviceFeatures2KHR pfn_vkGetPhysicalDeviceFeatures2KHR;
VKAPI_ATTR void vkGetPhysicalDeviceFeatures2KHR(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures2 * pFeatures)
{
	assert(pfn_vkGetPhysicalDeviceFeatures2KHR);
	pfn_vkGetPhysicalDeviceFeatures2KHR(physicalDevice, pFeatures);
}

static PFN_vkGetPhysicalDeviceProperties2KHR pfn_vkGetPhysicalDeviceProperties2KHR;
VKAPI_ATTR void vkGetPhysicalDeviceProperties2KHR(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties2 * pProperties)
{
	assert(pfn_vkGetPhysicalDeviceProperties2KHR);
	pfn_vkGetPhysicalDeviceProperties2KHR(physicalDevice, pProperties);
}

static PFN_vkGetPhysicalDeviceFormatProperties2KHR pfn_vkGetPhysicalDeviceFormatProperties2KHR;
VKAPI_ATTR void vkGetPhysicalDeviceFormatProperties2KHR(VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties2 * pFormatProperties)
{
	assert(pfn_vkGetPhysicalDeviceFormatProperties2KHR);
	pfn_vkGetPhysicalDeviceFormatProperties2KHR(physicalDevice, format, pFormatProperties);
}

static PFN_vkGetPhysicalDeviceImageFormatProperties2KHR pfn_vkGetPhysicalDeviceImageFormatProperties2KHR;
VKAPI_ATTR VkResult vkGetPhysicalDeviceImageFormatProperties2KHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceImageFormatInfo2 * pImageFormatInfo, VkImageFormatProperties2 * pImageFormatProperties)
{
	assert(pfn_vkGetPhysicalDeviceImageFormatProperties2KHR);
	return pfn_vkGetPhysicalDeviceImageFormatProperties2KHR(physicalDevice, pImageFormatInfo, pImageFormatProperties);
}

static PFN_vkGetPhysicalDeviceQueueFamilyProperties2KHR pfn_vkGetPhysicalDeviceQueueFamilyProperties2KHR;
VKAPI_ATTR void vkGetPhysicalDeviceQueueFamilyProperties2KHR(VkPhysicalDevice physicalDevice, uint32_t * pQueueFamilyPropertyCount, VkQueueFamilyProperties2 * pQueueFamilyProperties)
{
	assert(pfn_vkGetPhysicalDeviceQueueFamilyProperties2KHR);
	pfn_vkGetPhysicalDeviceQueueFamilyProperties2KHR(physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties);
}

static PFN_vkGetPhysicalDeviceMemoryProperties2KHR pfn_vkGetPhysicalDeviceMemoryProperties2KHR;
VKAPI_ATTR void vkGetPhysicalDeviceMemoryProperties2KHR(VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties2 * pMemoryProperties)
{
	assert(pfn_vkGetPhysicalDeviceMemoryProperties2KHR);
	pfn_vkGetPhysicalDeviceMemoryProperties2KHR(physicalDevice, pMemoryProperties);
}

static PFN_vkGetPhysicalDeviceSparseImageFormatProperties2KHR pfn_vkGetPhysicalDeviceSparseImageFormatProperties2KHR;
VKAPI_ATTR void vkGetPhysicalDeviceSparseImageFormatProperties2KHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSparseImageFormatInfo2 * pFormatInfo, uint32_t * pPropertyCount, VkSparseImageFormatProperties2 * pProperties)
{
	assert(pfn_vkGetPhysicalDeviceSparseImageFormatProperties2KHR);
	pfn_vkGetPhysicalDeviceSparseImageFormatProperties2KHR(physicalDevice, pFormatInfo, pPropertyCount, pProperties);
}
#endif // defined(VK_KHR_get_physical_device_properties2)
#if defined(VK_KHR_get_surface_capabilities2)

static PFN_vkGetPhysicalDeviceSurfaceCapabilities2KHR pfn_vkGetPhysicalDeviceSurfaceCapabilities2KHR;
VKAPI_ATTR VkResult vkGetPhysicalDeviceSurfaceCapabilities2KHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR * pSurfaceInfo, VkSurfaceCapabilities2KHR * pSurfaceCapabilities)
{
	assert(pfn_vkGetPhysicalDeviceSurfaceCapabilities2KHR);
	return pfn_vkGetPhysicalDeviceSurfaceCapabilities2KHR(physicalDevice, pSurfaceInfo, pSurfaceCapabilities);
}

static PFN_vkGetPhysicalDeviceSurfaceFormats2KHR pfn_vkGetPhysicalDeviceSurfaceFormats2KHR;
VKAPI_ATTR VkResult vkGetPhysicalDeviceSurfaceFormats2KHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR * pSurfaceInfo, uint32_t * pSurfaceFormatCount, VkSurfaceFormat2KHR * pSurfaceFormats)
{
	assert(pfn_vkGetPhysicalDeviceSurfaceFormats2KHR);
	return pfn_vkGetPhysicalDeviceSurfaceFormats2KHR(physicalDevice, pSurfaceInfo, pSurfaceFormatCount, pSurfaceFormats);
}
#endif // defined(VK_KHR_get_surface_capabilities2)
#if defined(VK_KHR_line_rasterization)

static PFN_vkCmdSetLineStippleKHR pfn_vkCmdSetLineStippleKHR;
VKAPI_ATTR void vkCmdSetLineStippleKHR(VkCommandBuffer commandBuffer, uint32_t lineStippleFactor, uint16_t lineStipplePattern)
{
	assert(pfn_vkCmdSetLineStippleKHR);
	pfn_vkCmdSetLineStippleKHR(commandBuffer, lineStippleFactor, lineStipplePattern);
}
#endif // defined(VK_KHR_line_rasterization)
#if defined(VK_KHR_maintenance1)

static PFN_vkTrimCommandPoolKHR pfn_vkTrimCommandPoolKHR;
VKAPI_ATTR void vkTrimCommandPoolKHR(VkDevice device, VkCommandPool commandPool, VkCommandPoolTrimFlags flags)
{
	assert(pfn_vkTrimCommandPoolKHR);
	pfn_vkTrimCommandPoolKHR(device, commandPool, flags);
}
#endif // defined(VK_KHR_maintenance1)
#if defined(VK_KHR_maintenance3)

static PFN_vkGetDescriptorSetLayoutSupportKHR pfn_vkGetDescriptorSetLayoutSupportKHR;
VKAPI_ATTR void vkGetDescriptorSetLayoutSupportKHR(VkDevice device, const VkDescriptorSetLayoutCreateInfo * pCreateInfo, VkDescriptorSetLayoutSupport * pSupport)
{
	assert(pfn_vkGetDescriptorSetLayoutSupportKHR);
	pfn_vkGetDescriptorSetLayoutSupportKHR(device, pCreateInfo, pSupport);
}
#endif // defined(VK_KHR_maintenance3)
#if defined(VK_KHR_maintenance4)

static PFN_vkGetDeviceImageMemoryRequirementsKHR pfn_vkGetDeviceImageMemoryRequirementsKHR;
VKAPI_ATTR void vkGetDeviceImageMemoryRequirementsKHR(VkDevice device, const VkDeviceImageMemoryRequirements * pInfo, VkMemoryRequirements2 * pMemoryRequirements)
{
	assert(pfn_vkGetDeviceImageMemoryRequirementsKHR);
	pfn_vkGetDeviceImageMemoryRequirementsKHR(device, pInfo, pMemoryRequirements);
}

static PFN_vkGetDeviceBufferMemoryRequirementsKHR pfn_vkGetDeviceBufferMemoryRequirementsKHR;
VKAPI_ATTR void vkGetDeviceBufferMemoryRequirementsKHR(VkDevice device, const VkDeviceBufferMemoryRequirements * pInfo, VkMemoryRequirements2 * pMemoryRequirements)
{
	assert(pfn_vkGetDeviceBufferMemoryRequirementsKHR);
	pfn_vkGetDeviceBufferMemoryRequirementsKHR(device, pInfo, pMemoryRequirements);
}

static PFN_vkGetDeviceImageSparseMemoryRequirementsKHR pfn_vkGetDeviceImageSparseMemoryRequirementsKHR;
VKAPI_ATTR void vkGetDeviceImageSparseMemoryRequirementsKHR(VkDevice device, const VkDeviceImageMemoryRequirements * pInfo, uint32_t * pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2 * pSparseMemoryRequirements)
{
	assert(pfn_vkGetDeviceImageSparseMemoryRequirementsKHR);
	pfn_vkGetDeviceImageSparseMemoryRequirementsKHR(device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
}
#endif // defined(VK_KHR_maintenance4)
#if defined(VK_KHR_maintenance5)

static PFN_vkCmdBindIndexBuffer2KHR pfn_vkCmdBindIndexBuffer2KHR;
VKAPI_ATTR void vkCmdBindIndexBuffer2KHR(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkDeviceSize size, VkIndexType indexType)
{
	assert(pfn_vkCmdBindIndexBuffer2KHR);
	pfn_vkCmdBindIndexBuffer2KHR(commandBuffer, buffer, offset, size, indexType);
}

static PFN_vkGetDeviceImageSubresourceLayoutKHR pfn_vkGetDeviceImageSubresourceLayoutKHR;
VKAPI_ATTR void vkGetDeviceImageSubresourceLayoutKHR(VkDevice device, const VkDeviceImageSubresourceInfo * pInfo, VkSubresourceLayout2 * pLayout)
{
	assert(pfn_vkGetDeviceImageSubresourceLayoutKHR);
	pfn_vkGetDeviceImageSubresourceLayoutKHR(device, pInfo, pLayout);
}

static PFN_vkGetRenderingAreaGranularityKHR pfn_vkGetRenderingAreaGranularityKHR;
VKAPI_ATTR void vkGetRenderingAreaGranularityKHR(VkDevice device, const VkRenderingAreaInfo * pRenderingAreaInfo, VkExtent2D * pGranularity)
{
	assert(pfn_vkGetRenderingAreaGranularityKHR);
	pfn_vkGetRenderingAreaGranularityKHR(device, pRenderingAreaInfo, pGranularity);
}

static PFN_vkGetImageSubresourceLayout2KHR pfn_vkGetImageSubresourceLayout2KHR;
VKAPI_ATTR void vkGetImageSubresourceLayout2KHR(VkDevice device, VkImage image, const VkImageSubresource2 * pSubresource, VkSubresourceLayout2 * pLayout)
{
	assert(pfn_vkGetImageSubresourceLayout2KHR);
	pfn_vkGetImageSubresourceLayout2KHR(device, image, pSubresource, pLayout);
}
#endif // defined(VK_KHR_maintenance5)
#if defined(VK_KHR_maintenance6)

static PFN_vkCmdBindDescriptorSets2KHR pfn_vkCmdBindDescriptorSets2KHR;
VKAPI_ATTR void vkCmdBindDescriptorSets2KHR(VkCommandBuffer commandBuffer, const VkBindDescriptorSetsInfo * pBindDescriptorSetsInfo)
{
	assert(pfn_vkCmdBindDescriptorSets2KHR);
	pfn_vkCmdBindDescriptorSets2KHR(commandBuffer, pBindDescriptorSetsInfo);
}

static PFN_vkCmdBindDescriptorBufferEmbeddedSamplers2EXT pfn_vkCmdBindDescriptorBufferEmbeddedSamplers2EXT;
VKAPI_ATTR void vkCmdBindDescriptorBufferEmbeddedSamplers2EXT(VkCommandBuffer commandBuffer, const VkBindDescriptorBufferEmbeddedSamplersInfoEXT * pBindDescriptorBufferEmbeddedSamplersInfo)
{
	assert(pfn_vkCmdBindDescriptorBufferEmbeddedSamplers2EXT);
	pfn_vkCmdBindDescriptorBufferEmbeddedSamplers2EXT(commandBuffer, pBindDescriptorBufferEmbeddedSamplersInfo);
}

static PFN_vkCmdPushConstants2KHR pfn_vkCmdPushConstants2KHR;
VKAPI_ATTR void vkCmdPushConstants2KHR(VkCommandBuffer commandBuffer, const VkPushConstantsInfo * pPushConstantsInfo)
{
	assert(pfn_vkCmdPushConstants2KHR);
	pfn_vkCmdPushConstants2KHR(commandBuffer, pPushConstantsInfo);
}

static PFN_vkCmdPushDescriptorSet2KHR pfn_vkCmdPushDescriptorSet2KHR;
VKAPI_ATTR void vkCmdPushDescriptorSet2KHR(VkCommandBuffer commandBuffer, const VkPushDescriptorSetInfo * pPushDescriptorSetInfo)
{
	assert(pfn_vkCmdPushDescriptorSet2KHR);
	pfn_vkCmdPushDescriptorSet2KHR(commandBuffer, pPushDescriptorSetInfo);
}

static PFN_vkCmdPushDescriptorSetWithTemplate2KHR pfn_vkCmdPushDescriptorSetWithTemplate2KHR;
VKAPI_ATTR void vkCmdPushDescriptorSetWithTemplate2KHR(VkCommandBuffer commandBuffer, const VkPushDescriptorSetWithTemplateInfo * pPushDescriptorSetWithTemplateInfo)
{
	assert(pfn_vkCmdPushDescriptorSetWithTemplate2KHR);
	pfn_vkCmdPushDescriptorSetWithTemplate2KHR(commandBuffer, pPushDescriptorSetWithTemplateInfo);
}

static PFN_vkCmdSetDescriptorBufferOffsets2EXT pfn_vkCmdSetDescriptorBufferOffsets2EXT;
VKAPI_ATTR void vkCmdSetDescriptorBufferOffsets2EXT(VkCommandBuffer commandBuffer, const VkSetDescriptorBufferOffsetsInfoEXT * pSetDescriptorBufferOffsetsInfo)
{
	assert(pfn_vkCmdSetDescriptorBufferOffsets2EXT);
	pfn_vkCmdSetDescriptorBufferOffsets2EXT(commandBuffer, pSetDescriptorBufferOffsetsInfo);
}
#endif // defined(VK_KHR_maintenance6)
#if defined(VK_KHR_map_memory2)

static PFN_vkUnmapMemory2KHR pfn_vkUnmapMemory2KHR;
VKAPI_ATTR VkResult vkUnmapMemory2KHR(VkDevice device, const VkMemoryUnmapInfo * pMemoryUnmapInfo)
{
	assert(pfn_vkUnmapMemory2KHR);
	return pfn_vkUnmapMemory2KHR(device, pMemoryUnmapInfo);
}

static PFN_vkMapMemory2KHR pfn_vkMapMemory2KHR;
VKAPI_ATTR VkResult vkMapMemory2KHR(VkDevice device, const VkMemoryMapInfo * pMemoryMapInfo, void ** ppData)
{
	assert(pfn_vkMapMemory2KHR);
	return pfn_vkMapMemory2KHR(device, pMemoryMapInfo, ppData);
}
#endif // defined(VK_KHR_map_memory2)
#if defined(VK_KHR_object_refresh)

static PFN_vkGetPhysicalDeviceRefreshableObjectTypesKHR pfn_vkGetPhysicalDeviceRefreshableObjectTypesKHR;
VKAPI_ATTR VkResult vkGetPhysicalDeviceRefreshableObjectTypesKHR(VkPhysicalDevice physicalDevice, uint32_t * pRefreshableObjectTypeCount, VkObjectType * pRefreshableObjectTypes)
{
	assert(pfn_vkGetPhysicalDeviceRefreshableObjectTypesKHR);
	return pfn_vkGetPhysicalDeviceRefreshableObjectTypesKHR(physicalDevice, pRefreshableObjectTypeCount, pRefreshableObjectTypes);
}

static PFN_vkCmdRefreshObjectsKHR pfn_vkCmdRefreshObjectsKHR;
VKAPI_ATTR void vkCmdRefreshObjectsKHR(VkCommandBuffer commandBuffer, const VkRefreshObjectListKHR * pRefreshObjects)
{
	assert(pfn_vkCmdRefreshObjectsKHR);
	pfn_vkCmdRefreshObjectsKHR(commandBuffer, pRefreshObjects);
}
#endif // defined(VK_KHR_object_refresh)
#if defined(VK_KHR_performance_query)

static PFN_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR pfn_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR;
VKAPI_ATTR VkResult vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, uint32_t * pCounterCount, VkPerformanceCounterKHR * pCounters, VkPerformanceCounterDescriptionKHR * pCounterDescriptions)
{
	assert(pfn_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR);
	return pfn_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR(physicalDevice, queueFamilyIndex, pCounterCount, pCounters, pCounterDescriptions);
}

static PFN_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR pfn_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR;
VKAPI_ATTR void vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR(VkPhysicalDevice physicalDevice, const VkQueryPoolPerformanceCreateInfoKHR * pPerformanceQueryCreateInfo, uint32_t * pNumPasses)
{
	assert(pfn_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR);
	pfn_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR(physicalDevice, pPerformanceQueryCreateInfo, pNumPasses);
}

static PFN_vkAcquireProfilingLockKHR pfn_vkAcquireProfilingLockKHR;
VKAPI_ATTR VkResult vkAcquireProfilingLockKHR(VkDevice device, const VkAcquireProfilingLockInfoKHR * pInfo)
{
	assert(pfn_vkAcquireProfilingLockKHR);
	return pfn_vkAcquireProfilingLockKHR(device, pInfo);
}

static PFN_vkReleaseProfilingLockKHR pfn_vkReleaseProfilingLockKHR;
VKAPI_ATTR void vkReleaseProfilingLockKHR(VkDevice device)
{
	assert(pfn_vkReleaseProfilingLockKHR);
	pfn_vkReleaseProfilingLockKHR(device);
}
#endif // defined(VK_KHR_performance_query)
#if defined(VK_KHR_pipeline_binary)

static PFN_vkGetPipelineBinaryDataKHR pfn_vkGetPipelineBinaryDataKHR;
VKAPI_ATTR VkResult vkGetPipelineBinaryDataKHR(VkDevice device, const VkPipelineBinaryDataInfoKHR * pInfo, VkPipelineBinaryKeyKHR * pPipelineBinaryKey, size_t * pPipelineBinaryDataSize, void * pPipelineBinaryData)
{
	assert(pfn_vkGetPipelineBinaryDataKHR);
	return pfn_vkGetPipelineBinaryDataKHR(device, pInfo, pPipelineBinaryKey, pPipelineBinaryDataSize, pPipelineBinaryData);
}

static PFN_vkCreatePipelineBinariesKHR pfn_vkCreatePipelineBinariesKHR;
VKAPI_ATTR VkResult vkCreatePipelineBinariesKHR(VkDevice device, const VkPipelineBinaryCreateInfoKHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkPipelineBinaryHandlesInfoKHR * pBinaries)
{
	assert(pfn_vkCreatePipelineBinariesKHR);
	return pfn_vkCreatePipelineBinariesKHR(device, pCreateInfo, pAllocator, pBinaries);
}

static PFN_vkDestroyPipelineBinaryKHR pfn_vkDestroyPipelineBinaryKHR;
VKAPI_ATTR void vkDestroyPipelineBinaryKHR(VkDevice device, VkPipelineBinaryKHR pipelineBinary, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroyPipelineBinaryKHR);
	pfn_vkDestroyPipelineBinaryKHR(device, pipelineBinary, pAllocator);
}

static PFN_vkGetPipelineKeyKHR pfn_vkGetPipelineKeyKHR;
VKAPI_ATTR VkResult vkGetPipelineKeyKHR(VkDevice device, const VkPipelineCreateInfoKHR * pPipelineCreateInfo, VkPipelineBinaryKeyKHR * pPipelineKey)
{
	assert(pfn_vkGetPipelineKeyKHR);
	return pfn_vkGetPipelineKeyKHR(device, pPipelineCreateInfo, pPipelineKey);
}

static PFN_vkReleaseCapturedPipelineDataKHR pfn_vkReleaseCapturedPipelineDataKHR;
VKAPI_ATTR VkResult vkReleaseCapturedPipelineDataKHR(VkDevice device, const VkReleaseCapturedPipelineDataInfoKHR * pInfo, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkReleaseCapturedPipelineDataKHR);
	return pfn_vkReleaseCapturedPipelineDataKHR(device, pInfo, pAllocator);
}
#endif // defined(VK_KHR_pipeline_binary)
#if defined(VK_KHR_pipeline_executable_properties)

static PFN_vkGetPipelineExecutableInternalRepresentationsKHR pfn_vkGetPipelineExecutableInternalRepresentationsKHR;
VKAPI_ATTR VkResult vkGetPipelineExecutableInternalRepresentationsKHR(VkDevice device, const VkPipelineExecutableInfoKHR * pExecutableInfo, uint32_t * pInternalRepresentationCount, VkPipelineExecutableInternalRepresentationKHR * pInternalRepresentations)
{
	assert(pfn_vkGetPipelineExecutableInternalRepresentationsKHR);
	return pfn_vkGetPipelineExecutableInternalRepresentationsKHR(device, pExecutableInfo, pInternalRepresentationCount, pInternalRepresentations);
}

static PFN_vkGetPipelineExecutablePropertiesKHR pfn_vkGetPipelineExecutablePropertiesKHR;
VKAPI_ATTR VkResult vkGetPipelineExecutablePropertiesKHR(VkDevice device, const VkPipelineInfoKHR * pPipelineInfo, uint32_t * pExecutableCount, VkPipelineExecutablePropertiesKHR * pProperties)
{
	assert(pfn_vkGetPipelineExecutablePropertiesKHR);
	return pfn_vkGetPipelineExecutablePropertiesKHR(device, pPipelineInfo, pExecutableCount, pProperties);
}

static PFN_vkGetPipelineExecutableStatisticsKHR pfn_vkGetPipelineExecutableStatisticsKHR;
VKAPI_ATTR VkResult vkGetPipelineExecutableStatisticsKHR(VkDevice device, const VkPipelineExecutableInfoKHR * pExecutableInfo, uint32_t * pStatisticCount, VkPipelineExecutableStatisticKHR * pStatistics)
{
	assert(pfn_vkGetPipelineExecutableStatisticsKHR);
	return pfn_vkGetPipelineExecutableStatisticsKHR(device, pExecutableInfo, pStatisticCount, pStatistics);
}
#endif // defined(VK_KHR_pipeline_executable_properties)
#if defined(VK_KHR_present_wait)

static PFN_vkWaitForPresentKHR pfn_vkWaitForPresentKHR;
VKAPI_ATTR VkResult vkWaitForPresentKHR(VkDevice device, VkSwapchainKHR swapchain, uint64_t presentId, uint64_t timeout)
{
	assert(pfn_vkWaitForPresentKHR);
	return pfn_vkWaitForPresentKHR(device, swapchain, presentId, timeout);
}
#endif // defined(VK_KHR_present_wait)
#if defined(VK_KHR_present_wait2)

static PFN_vkWaitForPresent2KHR pfn_vkWaitForPresent2KHR;
VKAPI_ATTR VkResult vkWaitForPresent2KHR(VkDevice device, VkSwapchainKHR swapchain, const VkPresentWait2InfoKHR * pPresentWait2Info)
{
	assert(pfn_vkWaitForPresent2KHR);
	return pfn_vkWaitForPresent2KHR(device, swapchain, pPresentWait2Info);
}
#endif // defined(VK_KHR_present_wait2)
#if defined(VK_KHR_push_descriptor)

static PFN_vkCmdPushDescriptorSetKHR pfn_vkCmdPushDescriptorSetKHR;
VKAPI_ATTR void vkCmdPushDescriptorSetKHR(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t set, uint32_t descriptorWriteCount, const VkWriteDescriptorSet * pDescriptorWrites)
{
	assert(pfn_vkCmdPushDescriptorSetKHR);
	pfn_vkCmdPushDescriptorSetKHR(commandBuffer, pipelineBindPoint, layout, set, descriptorWriteCount, pDescriptorWrites);
}
#endif // defined(VK_KHR_push_descriptor)
#if defined(VK_KHR_ray_tracing_maintenance1)

static PFN_vkCmdTraceRaysIndirect2KHR pfn_vkCmdTraceRaysIndirect2KHR;
VKAPI_ATTR void vkCmdTraceRaysIndirect2KHR(VkCommandBuffer commandBuffer, VkDeviceAddress indirectDeviceAddress)
{
	assert(pfn_vkCmdTraceRaysIndirect2KHR);
	pfn_vkCmdTraceRaysIndirect2KHR(commandBuffer, indirectDeviceAddress);
}
#endif // defined(VK_KHR_ray_tracing_maintenance1)
#if defined(VK_KHR_ray_tracing_pipeline)

static PFN_vkCreateRayTracingPipelinesKHR pfn_vkCreateRayTracingPipelinesKHR;
VKAPI_ATTR VkResult vkCreateRayTracingPipelinesKHR(VkDevice device, VkDeferredOperationKHR deferredOperation, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkRayTracingPipelineCreateInfoKHR * pCreateInfos, const VkAllocationCallbacks * pAllocator, VkPipeline * pPipelines)
{
	assert(pfn_vkCreateRayTracingPipelinesKHR);
	return pfn_vkCreateRayTracingPipelinesKHR(device, deferredOperation, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
}

static PFN_vkGetRayTracingShaderGroupHandlesKHR pfn_vkGetRayTracingShaderGroupHandlesKHR;
VKAPI_ATTR VkResult vkGetRayTracingShaderGroupHandlesKHR(VkDevice device, VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount, size_t dataSize, void * pData)
{
	assert(pfn_vkGetRayTracingShaderGroupHandlesKHR);
	return pfn_vkGetRayTracingShaderGroupHandlesKHR(device, pipeline, firstGroup, groupCount, dataSize, pData);
}

static PFN_vkCmdSetRayTracingPipelineStackSizeKHR pfn_vkCmdSetRayTracingPipelineStackSizeKHR;
VKAPI_ATTR void vkCmdSetRayTracingPipelineStackSizeKHR(VkCommandBuffer commandBuffer, uint32_t pipelineStackSize)
{
	assert(pfn_vkCmdSetRayTracingPipelineStackSizeKHR);
	pfn_vkCmdSetRayTracingPipelineStackSizeKHR(commandBuffer, pipelineStackSize);
}

static PFN_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR pfn_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR;
VKAPI_ATTR VkResult vkGetRayTracingCaptureReplayShaderGroupHandlesKHR(VkDevice device, VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount, size_t dataSize, void * pData)
{
	assert(pfn_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR);
	return pfn_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR(device, pipeline, firstGroup, groupCount, dataSize, pData);
}

static PFN_vkCmdTraceRaysKHR pfn_vkCmdTraceRaysKHR;
VKAPI_ATTR void vkCmdTraceRaysKHR(VkCommandBuffer commandBuffer, const VkStridedDeviceAddressRegionKHR * pRaygenShaderBindingTable, const VkStridedDeviceAddressRegionKHR * pMissShaderBindingTable, const VkStridedDeviceAddressRegionKHR * pHitShaderBindingTable, const VkStridedDeviceAddressRegionKHR * pCallableShaderBindingTable, uint32_t width, uint32_t height, uint32_t depth)
{
	assert(pfn_vkCmdTraceRaysKHR);
	pfn_vkCmdTraceRaysKHR(commandBuffer, pRaygenShaderBindingTable, pMissShaderBindingTable, pHitShaderBindingTable, pCallableShaderBindingTable, width, height, depth);
}

static PFN_vkCmdTraceRaysIndirectKHR pfn_vkCmdTraceRaysIndirectKHR;
VKAPI_ATTR void vkCmdTraceRaysIndirectKHR(VkCommandBuffer commandBuffer, const VkStridedDeviceAddressRegionKHR * pRaygenShaderBindingTable, const VkStridedDeviceAddressRegionKHR * pMissShaderBindingTable, const VkStridedDeviceAddressRegionKHR * pHitShaderBindingTable, const VkStridedDeviceAddressRegionKHR * pCallableShaderBindingTable, VkDeviceAddress indirectDeviceAddress)
{
	assert(pfn_vkCmdTraceRaysIndirectKHR);
	pfn_vkCmdTraceRaysIndirectKHR(commandBuffer, pRaygenShaderBindingTable, pMissShaderBindingTable, pHitShaderBindingTable, pCallableShaderBindingTable, indirectDeviceAddress);
}

static PFN_vkGetRayTracingShaderGroupStackSizeKHR pfn_vkGetRayTracingShaderGroupStackSizeKHR;
VKAPI_ATTR VkDeviceSize vkGetRayTracingShaderGroupStackSizeKHR(VkDevice device, VkPipeline pipeline, uint32_t group, VkShaderGroupShaderKHR groupShader)
{
	assert(pfn_vkGetRayTracingShaderGroupStackSizeKHR);
	return pfn_vkGetRayTracingShaderGroupStackSizeKHR(device, pipeline, group, groupShader);
}
#endif // defined(VK_KHR_ray_tracing_pipeline)
#if defined(VK_KHR_sampler_ycbcr_conversion)

static PFN_vkDestroySamplerYcbcrConversionKHR pfn_vkDestroySamplerYcbcrConversionKHR;
VKAPI_ATTR void vkDestroySamplerYcbcrConversionKHR(VkDevice device, VkSamplerYcbcrConversion ycbcrConversion, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroySamplerYcbcrConversionKHR);
	pfn_vkDestroySamplerYcbcrConversionKHR(device, ycbcrConversion, pAllocator);
}

static PFN_vkCreateSamplerYcbcrConversionKHR pfn_vkCreateSamplerYcbcrConversionKHR;
VKAPI_ATTR VkResult vkCreateSamplerYcbcrConversionKHR(VkDevice device, const VkSamplerYcbcrConversionCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSamplerYcbcrConversion * pYcbcrConversion)
{
	assert(pfn_vkCreateSamplerYcbcrConversionKHR);
	return pfn_vkCreateSamplerYcbcrConversionKHR(device, pCreateInfo, pAllocator, pYcbcrConversion);
}
#endif // defined(VK_KHR_sampler_ycbcr_conversion)
#if defined(VK_KHR_shared_presentable_image)

static PFN_vkGetSwapchainStatusKHR pfn_vkGetSwapchainStatusKHR;
VKAPI_ATTR VkResult vkGetSwapchainStatusKHR(VkDevice device, VkSwapchainKHR swapchain)
{
	assert(pfn_vkGetSwapchainStatusKHR);
	return pfn_vkGetSwapchainStatusKHR(device, swapchain);
}
#endif // defined(VK_KHR_shared_presentable_image)
#if defined(VK_KHR_surface)

static PFN_vkGetPhysicalDeviceSurfaceSupportKHR pfn_vkGetPhysicalDeviceSurfaceSupportKHR;
VKAPI_ATTR VkResult vkGetPhysicalDeviceSurfaceSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, VkSurfaceKHR surface, VkBool32 * pSupported)
{
	assert(pfn_vkGetPhysicalDeviceSurfaceSupportKHR);
	return pfn_vkGetPhysicalDeviceSurfaceSupportKHR(physicalDevice, queueFamilyIndex, surface, pSupported);
}

static PFN_vkDestroySurfaceKHR pfn_vkDestroySurfaceKHR;
VKAPI_ATTR void vkDestroySurfaceKHR(VkInstance instance, VkSurfaceKHR surface, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroySurfaceKHR);
	pfn_vkDestroySurfaceKHR(instance, surface, pAllocator);
}

static PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR pfn_vkGetPhysicalDeviceSurfaceCapabilitiesKHR;
VKAPI_ATTR VkResult vkGetPhysicalDeviceSurfaceCapabilitiesKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, VkSurfaceCapabilitiesKHR * pSurfaceCapabilities)
{
	assert(pfn_vkGetPhysicalDeviceSurfaceCapabilitiesKHR);
	return pfn_vkGetPhysicalDeviceSurfaceCapabilitiesKHR(physicalDevice, surface, pSurfaceCapabilities);
}

static PFN_vkGetPhysicalDeviceSurfaceFormatsKHR pfn_vkGetPhysicalDeviceSurfaceFormatsKHR;
VKAPI_ATTR VkResult vkGetPhysicalDeviceSurfaceFormatsKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t * pSurfaceFormatCount, VkSurfaceFormatKHR * pSurfaceFormats)
{
	assert(pfn_vkGetPhysicalDeviceSurfaceFormatsKHR);
	return pfn_vkGetPhysicalDeviceSurfaceFormatsKHR(physicalDevice, surface, pSurfaceFormatCount, pSurfaceFormats);
}

static PFN_vkGetPhysicalDeviceSurfacePresentModesKHR pfn_vkGetPhysicalDeviceSurfacePresentModesKHR;
VKAPI_ATTR VkResult vkGetPhysicalDeviceSurfacePresentModesKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t * pPresentModeCount, VkPresentModeKHR * pPresentModes)
{
	assert(pfn_vkGetPhysicalDeviceSurfacePresentModesKHR);
	return pfn_vkGetPhysicalDeviceSurfacePresentModesKHR(physicalDevice, surface, pPresentModeCount, pPresentModes);
}
#endif // defined(VK_KHR_surface)
#if defined(VK_KHR_swapchain)

static PFN_vkCreateSwapchainKHR pfn_vkCreateSwapchainKHR;
VKAPI_ATTR VkResult vkCreateSwapchainKHR(VkDevice device, const VkSwapchainCreateInfoKHR * pCreateInfo, const VkSwapchainCreateInfoKHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSwapchainKHR * pSwapchain)
{
	assert(pfn_vkCreateSwapchainKHR);
	return pfn_vkCreateSwapchainKHR(device, pCreateInfo, pCreateInfo, pAllocator, pSwapchain);
}

static PFN_vkGetSwapchainImagesKHR pfn_vkGetSwapchainImagesKHR;
VKAPI_ATTR VkResult vkGetSwapchainImagesKHR(VkDevice device, VkSwapchainKHR swapchain, uint32_t * pSwapchainImageCount, VkImage * pSwapchainImages)
{
	assert(pfn_vkGetSwapchainImagesKHR);
	return pfn_vkGetSwapchainImagesKHR(device, swapchain, pSwapchainImageCount, pSwapchainImages);
}

static PFN_vkDestroySwapchainKHR pfn_vkDestroySwapchainKHR;
VKAPI_ATTR void vkDestroySwapchainKHR(VkDevice device, VkSwapchainKHR swapchain, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroySwapchainKHR);
	pfn_vkDestroySwapchainKHR(device, swapchain, pAllocator);
}

static PFN_vkAcquireNextImageKHR pfn_vkAcquireNextImageKHR;
VKAPI_ATTR VkResult vkAcquireNextImageKHR(VkDevice device, VkSwapchainKHR swapchain, uint64_t timeout, VkSemaphore semaphore, VkFence fence, uint32_t * pImageIndex)
{
	assert(pfn_vkAcquireNextImageKHR);
	return pfn_vkAcquireNextImageKHR(device, swapchain, timeout, semaphore, fence, pImageIndex);
}

static PFN_vkQueuePresentKHR pfn_vkQueuePresentKHR;
VKAPI_ATTR VkResult vkQueuePresentKHR(VkQueue queue, const VkPresentInfoKHR * pPresentInfo)
{
	assert(pfn_vkQueuePresentKHR);
	return pfn_vkQueuePresentKHR(queue, pPresentInfo);
}
#endif // defined(VK_KHR_swapchain)
#if defined(VK_KHR_swapchain_maintenance1)

static PFN_vkReleaseSwapchainImagesKHR pfn_vkReleaseSwapchainImagesKHR;
VKAPI_ATTR VkResult vkReleaseSwapchainImagesKHR(VkDevice device, const VkReleaseSwapchainImagesInfoKHR * pReleaseInfo)
{
	assert(pfn_vkReleaseSwapchainImagesKHR);
	return pfn_vkReleaseSwapchainImagesKHR(device, pReleaseInfo);
}
#endif // defined(VK_KHR_swapchain_maintenance1)
#if defined(VK_KHR_synchronization2)

static PFN_vkCmdResetEvent2KHR pfn_vkCmdResetEvent2KHR;
VKAPI_ATTR void vkCmdResetEvent2KHR(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags2 stageMask)
{
	assert(pfn_vkCmdResetEvent2KHR);
	pfn_vkCmdResetEvent2KHR(commandBuffer, event, stageMask);
}

static PFN_vkCmdWriteTimestamp2KHR pfn_vkCmdWriteTimestamp2KHR;
VKAPI_ATTR void vkCmdWriteTimestamp2KHR(VkCommandBuffer commandBuffer, VkPipelineStageFlags2 stage, VkQueryPool queryPool, uint32_t query)
{
	assert(pfn_vkCmdWriteTimestamp2KHR);
	pfn_vkCmdWriteTimestamp2KHR(commandBuffer, stage, queryPool, query);
}

static PFN_vkCmdWaitEvents2KHR pfn_vkCmdWaitEvents2KHR;
VKAPI_ATTR void vkCmdWaitEvents2KHR(VkCommandBuffer commandBuffer, uint32_t eventCount, const VkEvent * pEvents, const VkDependencyInfo * pDependencyInfos)
{
	assert(pfn_vkCmdWaitEvents2KHR);
	pfn_vkCmdWaitEvents2KHR(commandBuffer, eventCount, pEvents, pDependencyInfos);
}

static PFN_vkCmdPipelineBarrier2KHR pfn_vkCmdPipelineBarrier2KHR;
VKAPI_ATTR void vkCmdPipelineBarrier2KHR(VkCommandBuffer commandBuffer, const VkDependencyInfo * pDependencyInfo)
{
	assert(pfn_vkCmdPipelineBarrier2KHR);
	pfn_vkCmdPipelineBarrier2KHR(commandBuffer, pDependencyInfo);
}

static PFN_vkCmdSetEvent2KHR pfn_vkCmdSetEvent2KHR;
VKAPI_ATTR void vkCmdSetEvent2KHR(VkCommandBuffer commandBuffer, VkEvent event, const VkDependencyInfo * pDependencyInfo)
{
	assert(pfn_vkCmdSetEvent2KHR);
	pfn_vkCmdSetEvent2KHR(commandBuffer, event, pDependencyInfo);
}

static PFN_vkQueueSubmit2KHR pfn_vkQueueSubmit2KHR;
VKAPI_ATTR VkResult vkQueueSubmit2KHR(VkQueue queue, uint32_t submitCount, const VkSubmitInfo2 * pSubmits, VkFence fence)
{
	assert(pfn_vkQueueSubmit2KHR);
	return pfn_vkQueueSubmit2KHR(queue, submitCount, pSubmits, fence);
}
#endif // defined(VK_KHR_synchronization2)
#if defined(VK_KHR_timeline_semaphore)

static PFN_vkWaitSemaphoresKHR pfn_vkWaitSemaphoresKHR;
VKAPI_ATTR VkResult vkWaitSemaphoresKHR(VkDevice device, const VkSemaphoreWaitInfo * pWaitInfo, uint64_t timeout)
{
	assert(pfn_vkWaitSemaphoresKHR);
	return pfn_vkWaitSemaphoresKHR(device, pWaitInfo, timeout);
}

static PFN_vkGetSemaphoreCounterValueKHR pfn_vkGetSemaphoreCounterValueKHR;
VKAPI_ATTR VkResult vkGetSemaphoreCounterValueKHR(VkDevice device, VkSemaphore semaphore, uint64_t * pValue)
{
	assert(pfn_vkGetSemaphoreCounterValueKHR);
	return pfn_vkGetSemaphoreCounterValueKHR(device, semaphore, pValue);
}

static PFN_vkSignalSemaphoreKHR pfn_vkSignalSemaphoreKHR;
VKAPI_ATTR VkResult vkSignalSemaphoreKHR(VkDevice device, const VkSemaphoreSignalInfo * pSignalInfo)
{
	assert(pfn_vkSignalSemaphoreKHR);
	return pfn_vkSignalSemaphoreKHR(device, pSignalInfo);
}
#endif // defined(VK_KHR_timeline_semaphore)
#if defined(VK_KHR_video_decode_queue)

static PFN_vkCmdDecodeVideoKHR pfn_vkCmdDecodeVideoKHR;
VKAPI_ATTR void vkCmdDecodeVideoKHR(VkCommandBuffer commandBuffer, const VkVideoDecodeInfoKHR * pDecodeInfo)
{
	assert(pfn_vkCmdDecodeVideoKHR);
	pfn_vkCmdDecodeVideoKHR(commandBuffer, pDecodeInfo);
}
#endif // defined(VK_KHR_video_decode_queue)
#if defined(VK_KHR_video_encode_queue)

static PFN_vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR pfn_vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR;
VKAPI_ATTR VkResult vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR * pQualityLevelInfo, VkVideoEncodeQualityLevelPropertiesKHR * pQualityLevelProperties)
{
	assert(pfn_vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR);
	return pfn_vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR(physicalDevice, pQualityLevelInfo, pQualityLevelProperties);
}

static PFN_vkGetEncodedVideoSessionParametersKHR pfn_vkGetEncodedVideoSessionParametersKHR;
VKAPI_ATTR VkResult vkGetEncodedVideoSessionParametersKHR(VkDevice device, const VkVideoEncodeSessionParametersGetInfoKHR * pVideoSessionParametersInfo, VkVideoEncodeSessionParametersFeedbackInfoKHR * pFeedbackInfo, size_t * pDataSize, void * pData)
{
	assert(pfn_vkGetEncodedVideoSessionParametersKHR);
	return pfn_vkGetEncodedVideoSessionParametersKHR(device, pVideoSessionParametersInfo, pFeedbackInfo, pDataSize, pData);
}

static PFN_vkCmdEncodeVideoKHR pfn_vkCmdEncodeVideoKHR;
VKAPI_ATTR void vkCmdEncodeVideoKHR(VkCommandBuffer commandBuffer, const VkVideoEncodeInfoKHR * pEncodeInfo)
{
	assert(pfn_vkCmdEncodeVideoKHR);
	pfn_vkCmdEncodeVideoKHR(commandBuffer, pEncodeInfo);
}
#endif // defined(VK_KHR_video_encode_queue)
#if defined(VK_KHR_video_queue)

static PFN_vkCmdEndVideoCodingKHR pfn_vkCmdEndVideoCodingKHR;
VKAPI_ATTR void vkCmdEndVideoCodingKHR(VkCommandBuffer commandBuffer, const VkVideoEndCodingInfoKHR * pEndCodingInfo)
{
	assert(pfn_vkCmdEndVideoCodingKHR);
	pfn_vkCmdEndVideoCodingKHR(commandBuffer, pEndCodingInfo);
}

static PFN_vkUpdateVideoSessionParametersKHR pfn_vkUpdateVideoSessionParametersKHR;
VKAPI_ATTR VkResult vkUpdateVideoSessionParametersKHR(VkDevice device, VkVideoSessionParametersKHR videoSessionParameters, const VkVideoSessionParametersUpdateInfoKHR * pUpdateInfo)
{
	assert(pfn_vkUpdateVideoSessionParametersKHR);
	return pfn_vkUpdateVideoSessionParametersKHR(device, videoSessionParameters, pUpdateInfo);
}

static PFN_vkCmdBeginVideoCodingKHR pfn_vkCmdBeginVideoCodingKHR;
VKAPI_ATTR void vkCmdBeginVideoCodingKHR(VkCommandBuffer commandBuffer, const VkVideoBeginCodingInfoKHR * pBeginInfo)
{
	assert(pfn_vkCmdBeginVideoCodingKHR);
	pfn_vkCmdBeginVideoCodingKHR(commandBuffer, pBeginInfo);
}

static PFN_vkGetVideoSessionMemoryRequirementsKHR pfn_vkGetVideoSessionMemoryRequirementsKHR;
VKAPI_ATTR VkResult vkGetVideoSessionMemoryRequirementsKHR(VkDevice device, VkVideoSessionKHR videoSession, uint32_t * pMemoryRequirementsCount, VkVideoSessionMemoryRequirementsKHR * pMemoryRequirements)
{
	assert(pfn_vkGetVideoSessionMemoryRequirementsKHR);
	return pfn_vkGetVideoSessionMemoryRequirementsKHR(device, videoSession, pMemoryRequirementsCount, pMemoryRequirements);
}

static PFN_vkCreateVideoSessionParametersKHR pfn_vkCreateVideoSessionParametersKHR;
VKAPI_ATTR VkResult vkCreateVideoSessionParametersKHR(VkDevice device, const VkVideoSessionParametersCreateInfoKHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkVideoSessionParametersKHR * pVideoSessionParameters)
{
	assert(pfn_vkCreateVideoSessionParametersKHR);
	return pfn_vkCreateVideoSessionParametersKHR(device, pCreateInfo, pAllocator, pVideoSessionParameters);
}

static PFN_vkCmdControlVideoCodingKHR pfn_vkCmdControlVideoCodingKHR;
VKAPI_ATTR void vkCmdControlVideoCodingKHR(VkCommandBuffer commandBuffer, const VkVideoCodingControlInfoKHR * pCodingControlInfo)
{
	assert(pfn_vkCmdControlVideoCodingKHR);
	pfn_vkCmdControlVideoCodingKHR(commandBuffer, pCodingControlInfo);
}

static PFN_vkDestroyVideoSessionKHR pfn_vkDestroyVideoSessionKHR;
VKAPI_ATTR void vkDestroyVideoSessionKHR(VkDevice device, VkVideoSessionKHR videoSession, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroyVideoSessionKHR);
	pfn_vkDestroyVideoSessionKHR(device, videoSession, pAllocator);
}

static PFN_vkGetPhysicalDeviceVideoCapabilitiesKHR pfn_vkGetPhysicalDeviceVideoCapabilitiesKHR;
VKAPI_ATTR VkResult vkGetPhysicalDeviceVideoCapabilitiesKHR(VkPhysicalDevice physicalDevice, const VkVideoProfileInfoKHR * pVideoProfile, VkVideoCapabilitiesKHR * pCapabilities)
{
	assert(pfn_vkGetPhysicalDeviceVideoCapabilitiesKHR);
	return pfn_vkGetPhysicalDeviceVideoCapabilitiesKHR(physicalDevice, pVideoProfile, pCapabilities);
}

static PFN_vkGetPhysicalDeviceVideoFormatPropertiesKHR pfn_vkGetPhysicalDeviceVideoFormatPropertiesKHR;
VKAPI_ATTR VkResult vkGetPhysicalDeviceVideoFormatPropertiesKHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceVideoFormatInfoKHR * pVideoFormatInfo, uint32_t * pVideoFormatPropertyCount, VkVideoFormatPropertiesKHR * pVideoFormatProperties)
{
	assert(pfn_vkGetPhysicalDeviceVideoFormatPropertiesKHR);
	return pfn_vkGetPhysicalDeviceVideoFormatPropertiesKHR(physicalDevice, pVideoFormatInfo, pVideoFormatPropertyCount, pVideoFormatProperties);
}

static PFN_vkBindVideoSessionMemoryKHR pfn_vkBindVideoSessionMemoryKHR;
VKAPI_ATTR VkResult vkBindVideoSessionMemoryKHR(VkDevice device, VkVideoSessionKHR videoSession, uint32_t bindSessionMemoryInfoCount, const VkBindVideoSessionMemoryInfoKHR * pBindSessionMemoryInfos)
{
	assert(pfn_vkBindVideoSessionMemoryKHR);
	return pfn_vkBindVideoSessionMemoryKHR(device, videoSession, bindSessionMemoryInfoCount, pBindSessionMemoryInfos);
}

static PFN_vkCreateVideoSessionKHR pfn_vkCreateVideoSessionKHR;
VKAPI_ATTR VkResult vkCreateVideoSessionKHR(VkDevice device, const VkVideoSessionCreateInfoKHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkVideoSessionKHR * pVideoSession)
{
	assert(pfn_vkCreateVideoSessionKHR);
	return pfn_vkCreateVideoSessionKHR(device, pCreateInfo, pAllocator, pVideoSession);
}

static PFN_vkDestroyVideoSessionParametersKHR pfn_vkDestroyVideoSessionParametersKHR;
VKAPI_ATTR void vkDestroyVideoSessionParametersKHR(VkDevice device, VkVideoSessionParametersKHR videoSessionParameters, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroyVideoSessionParametersKHR);
	pfn_vkDestroyVideoSessionParametersKHR(device, videoSessionParameters, pAllocator);
}
#endif // defined(VK_KHR_video_queue)
#if defined(VK_KHR_wayland_surface)

static PFN_vkCreateWaylandSurfaceKHR pfn_vkCreateWaylandSurfaceKHR;
VKAPI_ATTR VkResult vkCreateWaylandSurfaceKHR(VkInstance instance, const VkWaylandSurfaceCreateInfoKHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface)
{
	assert(pfn_vkCreateWaylandSurfaceKHR);
	return pfn_vkCreateWaylandSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
}

static PFN_vkGetPhysicalDeviceWaylandPresentationSupportKHR pfn_vkGetPhysicalDeviceWaylandPresentationSupportKHR;
VKAPI_ATTR VkBool32 vkGetPhysicalDeviceWaylandPresentationSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, struct wl_display * display)
{
	assert(pfn_vkGetPhysicalDeviceWaylandPresentationSupportKHR);
	return pfn_vkGetPhysicalDeviceWaylandPresentationSupportKHR(physicalDevice, queueFamilyIndex, display);
}
#endif // defined(VK_KHR_wayland_surface)
#if defined(VK_KHR_win32_surface)

static PFN_vkCreateWin32SurfaceKHR pfn_vkCreateWin32SurfaceKHR;
VKAPI_ATTR VkResult vkCreateWin32SurfaceKHR(VkInstance instance, const VkWin32SurfaceCreateInfoKHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface)
{
	assert(pfn_vkCreateWin32SurfaceKHR);
	return pfn_vkCreateWin32SurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
}

static PFN_vkGetPhysicalDeviceWin32PresentationSupportKHR pfn_vkGetPhysicalDeviceWin32PresentationSupportKHR;
VKAPI_ATTR VkBool32 vkGetPhysicalDeviceWin32PresentationSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex)
{
	assert(pfn_vkGetPhysicalDeviceWin32PresentationSupportKHR);
	return pfn_vkGetPhysicalDeviceWin32PresentationSupportKHR(physicalDevice, queueFamilyIndex);
}
#endif // defined(VK_KHR_win32_surface)
#if defined(VK_KHR_xcb_surface)

static PFN_vkCreateXcbSurfaceKHR pfn_vkCreateXcbSurfaceKHR;
VKAPI_ATTR VkResult vkCreateXcbSurfaceKHR(VkInstance instance, const VkXcbSurfaceCreateInfoKHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface)
{
	assert(pfn_vkCreateXcbSurfaceKHR);
	return pfn_vkCreateXcbSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
}

static PFN_vkGetPhysicalDeviceXcbPresentationSupportKHR pfn_vkGetPhysicalDeviceXcbPresentationSupportKHR;
VKAPI_ATTR VkBool32 vkGetPhysicalDeviceXcbPresentationSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, xcb_connection_t * connection, xcb_visualid_t visual_id)
{
	assert(pfn_vkGetPhysicalDeviceXcbPresentationSupportKHR);
	return pfn_vkGetPhysicalDeviceXcbPresentationSupportKHR(physicalDevice, queueFamilyIndex, connection, visual_id);
}
#endif // defined(VK_KHR_xcb_surface)
#if defined(VK_KHR_xlib_surface)

static PFN_vkGetPhysicalDeviceXlibPresentationSupportKHR pfn_vkGetPhysicalDeviceXlibPresentationSupportKHR;
VKAPI_ATTR VkBool32 vkGetPhysicalDeviceXlibPresentationSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, Display * dpy, VisualID visualID)
{
	assert(pfn_vkGetPhysicalDeviceXlibPresentationSupportKHR);
	return pfn_vkGetPhysicalDeviceXlibPresentationSupportKHR(physicalDevice, queueFamilyIndex, dpy, visualID);
}

static PFN_vkCreateXlibSurfaceKHR pfn_vkCreateXlibSurfaceKHR;
VKAPI_ATTR VkResult vkCreateXlibSurfaceKHR(VkInstance instance, const VkXlibSurfaceCreateInfoKHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface)
{
	assert(pfn_vkCreateXlibSurfaceKHR);
	return pfn_vkCreateXlibSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
}
#endif // defined(VK_KHR_xlib_surface)
#if defined(VK_MVK_ios_surface)

static PFN_vkCreateIOSSurfaceMVK pfn_vkCreateIOSSurfaceMVK;
VKAPI_ATTR VkResult vkCreateIOSSurfaceMVK(VkInstance instance, const VkIOSSurfaceCreateInfoMVK * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface)
{
	assert(pfn_vkCreateIOSSurfaceMVK);
	return pfn_vkCreateIOSSurfaceMVK(instance, pCreateInfo, pAllocator, pSurface);
}
#endif // defined(VK_MVK_ios_surface)
#if defined(VK_MVK_macos_surface)

static PFN_vkCreateMacOSSurfaceMVK pfn_vkCreateMacOSSurfaceMVK;
VKAPI_ATTR VkResult vkCreateMacOSSurfaceMVK(VkInstance instance, const VkMacOSSurfaceCreateInfoMVK * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface)
{
	assert(pfn_vkCreateMacOSSurfaceMVK);
	return pfn_vkCreateMacOSSurfaceMVK(instance, pCreateInfo, pAllocator, pSurface);
}
#endif // defined(VK_MVK_macos_surface)
#if defined(VK_NN_vi_surface)

static PFN_vkCreateViSurfaceNN pfn_vkCreateViSurfaceNN;
VKAPI_ATTR VkResult vkCreateViSurfaceNN(VkInstance instance, const VkViSurfaceCreateInfoNN * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface)
{
	assert(pfn_vkCreateViSurfaceNN);
	return pfn_vkCreateViSurfaceNN(instance, pCreateInfo, pAllocator, pSurface);
}
#endif // defined(VK_NN_vi_surface)
#if defined(VK_NVX_binary_import)

static PFN_vkDestroyCuFunctionNVX pfn_vkDestroyCuFunctionNVX;
VKAPI_ATTR void vkDestroyCuFunctionNVX(VkDevice device, VkCuFunctionNVX function, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroyCuFunctionNVX);
	pfn_vkDestroyCuFunctionNVX(device, function, pAllocator);
}

static PFN_vkCreateCuModuleNVX pfn_vkCreateCuModuleNVX;
VKAPI_ATTR VkResult vkCreateCuModuleNVX(VkDevice device, const VkCuModuleCreateInfoNVX * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkCuModuleNVX * pModule)
{
	assert(pfn_vkCreateCuModuleNVX);
	return pfn_vkCreateCuModuleNVX(device, pCreateInfo, pAllocator, pModule);
}

static PFN_vkCreateCuFunctionNVX pfn_vkCreateCuFunctionNVX;
VKAPI_ATTR VkResult vkCreateCuFunctionNVX(VkDevice device, const VkCuFunctionCreateInfoNVX * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkCuFunctionNVX * pFunction)
{
	assert(pfn_vkCreateCuFunctionNVX);
	return pfn_vkCreateCuFunctionNVX(device, pCreateInfo, pAllocator, pFunction);
}

static PFN_vkDestroyCuModuleNVX pfn_vkDestroyCuModuleNVX;
VKAPI_ATTR void vkDestroyCuModuleNVX(VkDevice device, VkCuModuleNVX module, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroyCuModuleNVX);
	pfn_vkDestroyCuModuleNVX(device, module, pAllocator);
}

static PFN_vkCmdCuLaunchKernelNVX pfn_vkCmdCuLaunchKernelNVX;
VKAPI_ATTR void vkCmdCuLaunchKernelNVX(VkCommandBuffer commandBuffer, const VkCuLaunchInfoNVX * pLaunchInfo)
{
	assert(pfn_vkCmdCuLaunchKernelNVX);
	pfn_vkCmdCuLaunchKernelNVX(commandBuffer, pLaunchInfo);
}
#endif // defined(VK_NVX_binary_import)
#if defined(VK_NVX_image_view_handle)

static PFN_vkGetImageViewHandle64NVX pfn_vkGetImageViewHandle64NVX;
VKAPI_ATTR uint64_t vkGetImageViewHandle64NVX(VkDevice device, const VkImageViewHandleInfoNVX * pInfo)
{
	assert(pfn_vkGetImageViewHandle64NVX);
	return pfn_vkGetImageViewHandle64NVX(device, pInfo);
}

static PFN_vkGetImageViewHandleNVX pfn_vkGetImageViewHandleNVX;
VKAPI_ATTR uint32_t vkGetImageViewHandleNVX(VkDevice device, const VkImageViewHandleInfoNVX * pInfo)
{
	assert(pfn_vkGetImageViewHandleNVX);
	return pfn_vkGetImageViewHandleNVX(device, pInfo);
}

static PFN_vkGetImageViewAddressNVX pfn_vkGetImageViewAddressNVX;
VKAPI_ATTR VkResult vkGetImageViewAddressNVX(VkDevice device, VkImageView imageView, VkImageViewAddressPropertiesNVX * pProperties)
{
	assert(pfn_vkGetImageViewAddressNVX);
	return pfn_vkGetImageViewAddressNVX(device, imageView, pProperties);
}
#endif // defined(VK_NVX_image_view_handle)
#if defined(VK_NV_acquire_winrt_display)

static PFN_vkGetWinrtDisplayNV pfn_vkGetWinrtDisplayNV;
VKAPI_ATTR VkResult vkGetWinrtDisplayNV(VkPhysicalDevice physicalDevice, uint32_t deviceRelativeId, VkDisplayKHR * pDisplay)
{
	assert(pfn_vkGetWinrtDisplayNV);
	return pfn_vkGetWinrtDisplayNV(physicalDevice, deviceRelativeId, pDisplay);
}

static PFN_vkAcquireWinrtDisplayNV pfn_vkAcquireWinrtDisplayNV;
VKAPI_ATTR VkResult vkAcquireWinrtDisplayNV(VkPhysicalDevice physicalDevice, VkDisplayKHR display)
{
	assert(pfn_vkAcquireWinrtDisplayNV);
	return pfn_vkAcquireWinrtDisplayNV(physicalDevice, display);
}
#endif // defined(VK_NV_acquire_winrt_display)
#if defined(VK_NV_clip_space_w_scaling)

static PFN_vkCmdSetViewportWScalingNV pfn_vkCmdSetViewportWScalingNV;
VKAPI_ATTR void vkCmdSetViewportWScalingNV(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkViewportWScalingNV * pViewportWScalings)
{
	assert(pfn_vkCmdSetViewportWScalingNV);
	pfn_vkCmdSetViewportWScalingNV(commandBuffer, firstViewport, viewportCount, pViewportWScalings);
}
#endif // defined(VK_NV_clip_space_w_scaling)
#if defined(VK_NV_cluster_acceleration_structure)

static PFN_vkCmdBuildClusterAccelerationStructureIndirectNV pfn_vkCmdBuildClusterAccelerationStructureIndirectNV;
VKAPI_ATTR void vkCmdBuildClusterAccelerationStructureIndirectNV(VkCommandBuffer commandBuffer, const VkClusterAccelerationStructureCommandsInfoNV * pCommandInfos)
{
	assert(pfn_vkCmdBuildClusterAccelerationStructureIndirectNV);
	pfn_vkCmdBuildClusterAccelerationStructureIndirectNV(commandBuffer, pCommandInfos);
}

static PFN_vkGetClusterAccelerationStructureBuildSizesNV pfn_vkGetClusterAccelerationStructureBuildSizesNV;
VKAPI_ATTR void vkGetClusterAccelerationStructureBuildSizesNV(VkDevice device, const VkClusterAccelerationStructureInputInfoNV * pInfo, VkAccelerationStructureBuildSizesInfoKHR * pSizeInfo)
{
	assert(pfn_vkGetClusterAccelerationStructureBuildSizesNV);
	pfn_vkGetClusterAccelerationStructureBuildSizesNV(device, pInfo, pSizeInfo);
}
#endif // defined(VK_NV_cluster_acceleration_structure)
#if defined(VK_NV_cooperative_matrix)

static PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV pfn_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV;
VKAPI_ATTR VkResult vkGetPhysicalDeviceCooperativeMatrixPropertiesNV(VkPhysicalDevice physicalDevice, uint32_t * pPropertyCount, VkCooperativeMatrixPropertiesNV * pProperties)
{
	assert(pfn_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV);
	return pfn_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV(physicalDevice, pPropertyCount, pProperties);
}
#endif // defined(VK_NV_cooperative_matrix)
#if defined(VK_NV_cooperative_matrix2)

static PFN_vkGetPhysicalDeviceCooperativeMatrixFlexibleDimensionsPropertiesNV pfn_vkGetPhysicalDeviceCooperativeMatrixFlexibleDimensionsPropertiesNV;
VKAPI_ATTR VkResult vkGetPhysicalDeviceCooperativeMatrixFlexibleDimensionsPropertiesNV(VkPhysicalDevice physicalDevice, uint32_t * pPropertyCount, VkCooperativeMatrixFlexibleDimensionsPropertiesNV * pProperties)
{
	assert(pfn_vkGetPhysicalDeviceCooperativeMatrixFlexibleDimensionsPropertiesNV);
	return pfn_vkGetPhysicalDeviceCooperativeMatrixFlexibleDimensionsPropertiesNV(physicalDevice, pPropertyCount, pProperties);
}
#endif // defined(VK_NV_cooperative_matrix2)
#if defined(VK_NV_cooperative_vector)

static PFN_vkCmdConvertCooperativeVectorMatrixNV pfn_vkCmdConvertCooperativeVectorMatrixNV;
VKAPI_ATTR void vkCmdConvertCooperativeVectorMatrixNV(VkCommandBuffer commandBuffer, uint32_t infoCount, const VkConvertCooperativeVectorMatrixInfoNV * pInfos)
{
	assert(pfn_vkCmdConvertCooperativeVectorMatrixNV);
	pfn_vkCmdConvertCooperativeVectorMatrixNV(commandBuffer, infoCount, pInfos);
}

static PFN_vkConvertCooperativeVectorMatrixNV pfn_vkConvertCooperativeVectorMatrixNV;
VKAPI_ATTR VkResult vkConvertCooperativeVectorMatrixNV(VkDevice device, const VkConvertCooperativeVectorMatrixInfoNV * pInfo)
{
	assert(pfn_vkConvertCooperativeVectorMatrixNV);
	return pfn_vkConvertCooperativeVectorMatrixNV(device, pInfo);
}

static PFN_vkGetPhysicalDeviceCooperativeVectorPropertiesNV pfn_vkGetPhysicalDeviceCooperativeVectorPropertiesNV;
VKAPI_ATTR VkResult vkGetPhysicalDeviceCooperativeVectorPropertiesNV(VkPhysicalDevice physicalDevice, uint32_t * pPropertyCount, VkCooperativeVectorPropertiesNV * pProperties)
{
	assert(pfn_vkGetPhysicalDeviceCooperativeVectorPropertiesNV);
	return pfn_vkGetPhysicalDeviceCooperativeVectorPropertiesNV(physicalDevice, pPropertyCount, pProperties);
}
#endif // defined(VK_NV_cooperative_vector)
#if defined(VK_NV_copy_memory_indirect)

static PFN_vkCmdCopyMemoryToImageIndirectNV pfn_vkCmdCopyMemoryToImageIndirectNV;
VKAPI_ATTR void vkCmdCopyMemoryToImageIndirectNV(VkCommandBuffer commandBuffer, VkDeviceAddress copyBufferAddress, uint32_t copyCount, uint32_t stride, VkImage dstImage, VkImageLayout dstImageLayout, const VkImageSubresourceLayers * pImageSubresources)
{
	assert(pfn_vkCmdCopyMemoryToImageIndirectNV);
	pfn_vkCmdCopyMemoryToImageIndirectNV(commandBuffer, copyBufferAddress, copyCount, stride, dstImage, dstImageLayout, pImageSubresources);
}

static PFN_vkCmdCopyMemoryIndirectNV pfn_vkCmdCopyMemoryIndirectNV;
VKAPI_ATTR void vkCmdCopyMemoryIndirectNV(VkCommandBuffer commandBuffer, VkDeviceAddress copyBufferAddress, uint32_t copyCount, uint32_t stride)
{
	assert(pfn_vkCmdCopyMemoryIndirectNV);
	pfn_vkCmdCopyMemoryIndirectNV(commandBuffer, copyBufferAddress, copyCount, stride);
}
#endif // defined(VK_NV_copy_memory_indirect)
#if defined(VK_NV_coverage_reduction_mode)

static PFN_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV pfn_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV;
VKAPI_ATTR VkResult vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(VkPhysicalDevice physicalDevice, uint32_t * pCombinationCount, VkFramebufferMixedSamplesCombinationNV * pCombinations)
{
	assert(pfn_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV);
	return pfn_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(physicalDevice, pCombinationCount, pCombinations);
}
#endif // defined(VK_NV_coverage_reduction_mode)
#if defined(VK_NV_cuda_kernel_launch)

static PFN_vkCreateCudaFunctionNV pfn_vkCreateCudaFunctionNV;
VKAPI_ATTR VkResult vkCreateCudaFunctionNV(VkDevice device, const VkCudaFunctionCreateInfoNV * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkCudaFunctionNV * pFunction)
{
	assert(pfn_vkCreateCudaFunctionNV);
	return pfn_vkCreateCudaFunctionNV(device, pCreateInfo, pAllocator, pFunction);
}

static PFN_vkCreateCudaModuleNV pfn_vkCreateCudaModuleNV;
VKAPI_ATTR VkResult vkCreateCudaModuleNV(VkDevice device, const VkCudaModuleCreateInfoNV * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkCudaModuleNV * pModule)
{
	assert(pfn_vkCreateCudaModuleNV);
	return pfn_vkCreateCudaModuleNV(device, pCreateInfo, pAllocator, pModule);
}

static PFN_vkGetCudaModuleCacheNV pfn_vkGetCudaModuleCacheNV;
VKAPI_ATTR VkResult vkGetCudaModuleCacheNV(VkDevice device, VkCudaModuleNV module, size_t * pCacheSize, void * pCacheData)
{
	assert(pfn_vkGetCudaModuleCacheNV);
	return pfn_vkGetCudaModuleCacheNV(device, module, pCacheSize, pCacheData);
}

static PFN_vkDestroyCudaModuleNV pfn_vkDestroyCudaModuleNV;
VKAPI_ATTR void vkDestroyCudaModuleNV(VkDevice device, VkCudaModuleNV module, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroyCudaModuleNV);
	pfn_vkDestroyCudaModuleNV(device, module, pAllocator);
}

static PFN_vkDestroyCudaFunctionNV pfn_vkDestroyCudaFunctionNV;
VKAPI_ATTR void vkDestroyCudaFunctionNV(VkDevice device, VkCudaFunctionNV function, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroyCudaFunctionNV);
	pfn_vkDestroyCudaFunctionNV(device, function, pAllocator);
}

static PFN_vkCmdCudaLaunchKernelNV pfn_vkCmdCudaLaunchKernelNV;
VKAPI_ATTR void vkCmdCudaLaunchKernelNV(VkCommandBuffer commandBuffer, const VkCudaLaunchInfoNV * pLaunchInfo)
{
	assert(pfn_vkCmdCudaLaunchKernelNV);
	pfn_vkCmdCudaLaunchKernelNV(commandBuffer, pLaunchInfo);
}
#endif // defined(VK_NV_cuda_kernel_launch)
#if defined(VK_NV_device_diagnostic_checkpoints)

static PFN_vkGetQueueCheckpointDataNV pfn_vkGetQueueCheckpointDataNV;
VKAPI_ATTR void vkGetQueueCheckpointDataNV(VkQueue queue, uint32_t * pCheckpointDataCount, VkCheckpointDataNV * pCheckpointData)
{
	assert(pfn_vkGetQueueCheckpointDataNV);
	pfn_vkGetQueueCheckpointDataNV(queue, pCheckpointDataCount, pCheckpointData);
}

static PFN_vkCmdSetCheckpointNV pfn_vkCmdSetCheckpointNV;
VKAPI_ATTR void vkCmdSetCheckpointNV(VkCommandBuffer commandBuffer, const void * pCheckpointMarker)
{
	assert(pfn_vkCmdSetCheckpointNV);
	pfn_vkCmdSetCheckpointNV(commandBuffer, pCheckpointMarker);
}

static PFN_vkGetQueueCheckpointData2NV pfn_vkGetQueueCheckpointData2NV;
VKAPI_ATTR void vkGetQueueCheckpointData2NV(VkQueue queue, uint32_t * pCheckpointDataCount, VkCheckpointData2NV * pCheckpointData)
{
	assert(pfn_vkGetQueueCheckpointData2NV);
	pfn_vkGetQueueCheckpointData2NV(queue, pCheckpointDataCount, pCheckpointData);
}
#endif // defined(VK_NV_device_diagnostic_checkpoints)
#if defined(VK_NV_device_generated_commands)

static PFN_vkGetGeneratedCommandsMemoryRequirementsNV pfn_vkGetGeneratedCommandsMemoryRequirementsNV;
VKAPI_ATTR void vkGetGeneratedCommandsMemoryRequirementsNV(VkDevice device, const VkGeneratedCommandsMemoryRequirementsInfoNV * pInfo, VkMemoryRequirements2 * pMemoryRequirements)
{
	assert(pfn_vkGetGeneratedCommandsMemoryRequirementsNV);
	pfn_vkGetGeneratedCommandsMemoryRequirementsNV(device, pInfo, pMemoryRequirements);
}

static PFN_vkCreateIndirectCommandsLayoutNV pfn_vkCreateIndirectCommandsLayoutNV;
VKAPI_ATTR VkResult vkCreateIndirectCommandsLayoutNV(VkDevice device, const VkIndirectCommandsLayoutCreateInfoNV * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkIndirectCommandsLayoutNV * pIndirectCommandsLayout)
{
	assert(pfn_vkCreateIndirectCommandsLayoutNV);
	return pfn_vkCreateIndirectCommandsLayoutNV(device, pCreateInfo, pAllocator, pIndirectCommandsLayout);
}

static PFN_vkCmdPreprocessGeneratedCommandsNV pfn_vkCmdPreprocessGeneratedCommandsNV;
VKAPI_ATTR void vkCmdPreprocessGeneratedCommandsNV(VkCommandBuffer commandBuffer, const VkGeneratedCommandsInfoNV * pGeneratedCommandsInfo)
{
	assert(pfn_vkCmdPreprocessGeneratedCommandsNV);
	pfn_vkCmdPreprocessGeneratedCommandsNV(commandBuffer, pGeneratedCommandsInfo);
}

static PFN_vkCmdExecuteGeneratedCommandsNV pfn_vkCmdExecuteGeneratedCommandsNV;
VKAPI_ATTR void vkCmdExecuteGeneratedCommandsNV(VkCommandBuffer commandBuffer, VkBool32 isPreprocessed, const VkGeneratedCommandsInfoNV * pGeneratedCommandsInfo)
{
	assert(pfn_vkCmdExecuteGeneratedCommandsNV);
	pfn_vkCmdExecuteGeneratedCommandsNV(commandBuffer, isPreprocessed, pGeneratedCommandsInfo);
}

static PFN_vkCmdBindPipelineShaderGroupNV pfn_vkCmdBindPipelineShaderGroupNV;
VKAPI_ATTR void vkCmdBindPipelineShaderGroupNV(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline, uint32_t groupIndex)
{
	assert(pfn_vkCmdBindPipelineShaderGroupNV);
	pfn_vkCmdBindPipelineShaderGroupNV(commandBuffer, pipelineBindPoint, pipeline, groupIndex);
}

static PFN_vkDestroyIndirectCommandsLayoutNV pfn_vkDestroyIndirectCommandsLayoutNV;
VKAPI_ATTR void vkDestroyIndirectCommandsLayoutNV(VkDevice device, VkIndirectCommandsLayoutNV indirectCommandsLayout, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroyIndirectCommandsLayoutNV);
	pfn_vkDestroyIndirectCommandsLayoutNV(device, indirectCommandsLayout, pAllocator);
}
#endif // defined(VK_NV_device_generated_commands)
#if defined(VK_NV_device_generated_commands_compute)

static PFN_vkGetPipelineIndirectMemoryRequirementsNV pfn_vkGetPipelineIndirectMemoryRequirementsNV;
VKAPI_ATTR void vkGetPipelineIndirectMemoryRequirementsNV(VkDevice device, const VkComputePipelineCreateInfo * pCreateInfo, VkMemoryRequirements2 * pMemoryRequirements)
{
	assert(pfn_vkGetPipelineIndirectMemoryRequirementsNV);
	pfn_vkGetPipelineIndirectMemoryRequirementsNV(device, pCreateInfo, pMemoryRequirements);
}

static PFN_vkCmdUpdatePipelineIndirectBufferNV pfn_vkCmdUpdatePipelineIndirectBufferNV;
VKAPI_ATTR void vkCmdUpdatePipelineIndirectBufferNV(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline)
{
	assert(pfn_vkCmdUpdatePipelineIndirectBufferNV);
	pfn_vkCmdUpdatePipelineIndirectBufferNV(commandBuffer, pipelineBindPoint, pipeline);
}

static PFN_vkGetPipelineIndirectDeviceAddressNV pfn_vkGetPipelineIndirectDeviceAddressNV;
VKAPI_ATTR VkDeviceAddress vkGetPipelineIndirectDeviceAddressNV(VkDevice device, const VkPipelineIndirectDeviceAddressInfoNV * pInfo)
{
	assert(pfn_vkGetPipelineIndirectDeviceAddressNV);
	return pfn_vkGetPipelineIndirectDeviceAddressNV(device, pInfo);
}
#endif // defined(VK_NV_device_generated_commands_compute)
#if defined(VK_NV_external_compute_queue)

static PFN_vkDestroyExternalComputeQueueNV pfn_vkDestroyExternalComputeQueueNV;
VKAPI_ATTR void vkDestroyExternalComputeQueueNV(VkDevice device, VkExternalComputeQueueNV externalQueue, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroyExternalComputeQueueNV);
	pfn_vkDestroyExternalComputeQueueNV(device, externalQueue, pAllocator);
}

static PFN_vkCreateExternalComputeQueueNV pfn_vkCreateExternalComputeQueueNV;
VKAPI_ATTR VkResult vkCreateExternalComputeQueueNV(VkDevice device, const VkExternalComputeQueueCreateInfoNV * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkExternalComputeQueueNV * pExternalQueue)
{
	assert(pfn_vkCreateExternalComputeQueueNV);
	return pfn_vkCreateExternalComputeQueueNV(device, pCreateInfo, pAllocator, pExternalQueue);
}

static PFN_vkGetExternalComputeQueueDataNV pfn_vkGetExternalComputeQueueDataNV;
VKAPI_ATTR void vkGetExternalComputeQueueDataNV(VkExternalComputeQueueNV externalQueue, VkExternalComputeQueueDataParamsNV * params, void * pData)
{
	assert(pfn_vkGetExternalComputeQueueDataNV);
	pfn_vkGetExternalComputeQueueDataNV(externalQueue, params, pData);
}
#endif // defined(VK_NV_external_compute_queue)
#if defined(VK_NV_external_memory_capabilities)

static PFN_vkGetPhysicalDeviceExternalImageFormatPropertiesNV pfn_vkGetPhysicalDeviceExternalImageFormatPropertiesNV;
VKAPI_ATTR VkResult vkGetPhysicalDeviceExternalImageFormatPropertiesNV(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkImageTiling tiling, VkImageUsageFlags usage, VkImageCreateFlags flags, VkExternalMemoryHandleTypeFlagsNV externalHandleType, VkExternalImageFormatPropertiesNV * pExternalImageFormatProperties)
{
	assert(pfn_vkGetPhysicalDeviceExternalImageFormatPropertiesNV);
	return pfn_vkGetPhysicalDeviceExternalImageFormatPropertiesNV(physicalDevice, format, type, tiling, usage, flags, externalHandleType, pExternalImageFormatProperties);
}
#endif // defined(VK_NV_external_memory_capabilities)
#if defined(VK_NV_external_memory_rdma)

static PFN_vkGetMemoryRemoteAddressNV pfn_vkGetMemoryRemoteAddressNV;
VKAPI_ATTR VkResult vkGetMemoryRemoteAddressNV(VkDevice device, const VkMemoryGetRemoteAddressInfoNV * pMemoryGetRemoteAddressInfo, VkRemoteAddressNV * pAddress)
{
	assert(pfn_vkGetMemoryRemoteAddressNV);
	return pfn_vkGetMemoryRemoteAddressNV(device, pMemoryGetRemoteAddressInfo, pAddress);
}
#endif // defined(VK_NV_external_memory_rdma)
#if defined(VK_NV_external_memory_sci_buf)

static PFN_vkGetMemorySciBufNV pfn_vkGetMemorySciBufNV;
VKAPI_ATTR VkResult vkGetMemorySciBufNV(VkDevice device, const VkMemoryGetSciBufInfoNV * pGetSciBufInfo, NvSciBufObj * pHandle)
{
	assert(pfn_vkGetMemorySciBufNV);
	return pfn_vkGetMemorySciBufNV(device, pGetSciBufInfo, pHandle);
}

static PFN_vkGetPhysicalDeviceExternalMemorySciBufPropertiesNV pfn_vkGetPhysicalDeviceExternalMemorySciBufPropertiesNV;
VKAPI_ATTR VkResult vkGetPhysicalDeviceExternalMemorySciBufPropertiesNV(VkPhysicalDevice physicalDevice, VkExternalMemoryHandleTypeFlagBits handleType, NvSciBufObj handle, VkMemorySciBufPropertiesNV * pMemorySciBufProperties)
{
	assert(pfn_vkGetPhysicalDeviceExternalMemorySciBufPropertiesNV);
	return pfn_vkGetPhysicalDeviceExternalMemorySciBufPropertiesNV(physicalDevice, handleType, handle, pMemorySciBufProperties);
}

static PFN_vkGetPhysicalDeviceSciBufAttributesNV pfn_vkGetPhysicalDeviceSciBufAttributesNV;
VKAPI_ATTR VkResult vkGetPhysicalDeviceSciBufAttributesNV(VkPhysicalDevice physicalDevice, NvSciBufAttrList pAttributes)
{
	assert(pfn_vkGetPhysicalDeviceSciBufAttributesNV);
	return pfn_vkGetPhysicalDeviceSciBufAttributesNV(physicalDevice, pAttributes);
}
#endif // defined(VK_NV_external_memory_sci_buf)
#if defined(VK_NV_external_memory_win32)

static PFN_vkGetMemoryWin32HandleNV pfn_vkGetMemoryWin32HandleNV;
VKAPI_ATTR VkResult vkGetMemoryWin32HandleNV(VkDevice device, VkDeviceMemory memory, VkExternalMemoryHandleTypeFlagsNV handleType, HANDLE * pHandle)
{
	assert(pfn_vkGetMemoryWin32HandleNV);
	return pfn_vkGetMemoryWin32HandleNV(device, memory, handleType, pHandle);
}
#endif // defined(VK_NV_external_memory_win32)
#if defined(VK_NV_external_sci_sync)

static PFN_vkGetSemaphoreSciSyncObjNV pfn_vkGetSemaphoreSciSyncObjNV;
VKAPI_ATTR VkResult vkGetSemaphoreSciSyncObjNV(VkDevice device, const VkSemaphoreGetSciSyncInfoNV * pGetSciSyncInfo, void * pHandle)
{
	assert(pfn_vkGetSemaphoreSciSyncObjNV);
	return pfn_vkGetSemaphoreSciSyncObjNV(device, pGetSciSyncInfo, pHandle);
}

static PFN_vkImportSemaphoreSciSyncObjNV pfn_vkImportSemaphoreSciSyncObjNV;
VKAPI_ATTR VkResult vkImportSemaphoreSciSyncObjNV(VkDevice device, const VkImportSemaphoreSciSyncInfoNV * pImportSemaphoreSciSyncInfo)
{
	assert(pfn_vkImportSemaphoreSciSyncObjNV);
	return pfn_vkImportSemaphoreSciSyncObjNV(device, pImportSemaphoreSciSyncInfo);
}
#endif // defined(VK_NV_external_sci_sync)
#if defined(VK_NV_external_sci_sync) || defined(VK_NV_external_sci_sync2)

static PFN_vkImportFenceSciSyncFenceNV pfn_vkImportFenceSciSyncFenceNV;
VKAPI_ATTR VkResult vkImportFenceSciSyncFenceNV(VkDevice device, const VkImportFenceSciSyncInfoNV * pImportFenceSciSyncInfo)
{
	assert(pfn_vkImportFenceSciSyncFenceNV);
	return pfn_vkImportFenceSciSyncFenceNV(device, pImportFenceSciSyncInfo);
}

static PFN_vkGetFenceSciSyncObjNV pfn_vkGetFenceSciSyncObjNV;
VKAPI_ATTR VkResult vkGetFenceSciSyncObjNV(VkDevice device, const VkFenceGetSciSyncInfoNV * pGetSciSyncHandleInfo, void * pHandle)
{
	assert(pfn_vkGetFenceSciSyncObjNV);
	return pfn_vkGetFenceSciSyncObjNV(device, pGetSciSyncHandleInfo, pHandle);
}

static PFN_vkGetPhysicalDeviceSciSyncAttributesNV pfn_vkGetPhysicalDeviceSciSyncAttributesNV;
VKAPI_ATTR VkResult vkGetPhysicalDeviceSciSyncAttributesNV(VkPhysicalDevice physicalDevice, const VkSciSyncAttributesInfoNV * pSciSyncAttributesInfo, NvSciSyncAttrList pAttributes)
{
	assert(pfn_vkGetPhysicalDeviceSciSyncAttributesNV);
	return pfn_vkGetPhysicalDeviceSciSyncAttributesNV(physicalDevice, pSciSyncAttributesInfo, pAttributes);
}

static PFN_vkGetFenceSciSyncFenceNV pfn_vkGetFenceSciSyncFenceNV;
VKAPI_ATTR VkResult vkGetFenceSciSyncFenceNV(VkDevice device, const VkFenceGetSciSyncInfoNV * pGetSciSyncHandleInfo, void * pHandle)
{
	assert(pfn_vkGetFenceSciSyncFenceNV);
	return pfn_vkGetFenceSciSyncFenceNV(device, pGetSciSyncHandleInfo, pHandle);
}

static PFN_vkImportFenceSciSyncObjNV pfn_vkImportFenceSciSyncObjNV;
VKAPI_ATTR VkResult vkImportFenceSciSyncObjNV(VkDevice device, const VkImportFenceSciSyncInfoNV * pImportFenceSciSyncInfo)
{
	assert(pfn_vkImportFenceSciSyncObjNV);
	return pfn_vkImportFenceSciSyncObjNV(device, pImportFenceSciSyncInfo);
}
#endif // defined(VK_NV_external_sci_sync) || defined(VK_NV_external_sci_sync2)
#if defined(VK_NV_external_sci_sync2)

static PFN_vkDestroySemaphoreSciSyncPoolNV pfn_vkDestroySemaphoreSciSyncPoolNV;
VKAPI_ATTR void vkDestroySemaphoreSciSyncPoolNV(VkDevice device, VkSemaphoreSciSyncPoolNV semaphorePool, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroySemaphoreSciSyncPoolNV);
	pfn_vkDestroySemaphoreSciSyncPoolNV(device, semaphorePool, pAllocator);
}

static PFN_vkCreateSemaphoreSciSyncPoolNV pfn_vkCreateSemaphoreSciSyncPoolNV;
VKAPI_ATTR VkResult vkCreateSemaphoreSciSyncPoolNV(VkDevice device, const VkSemaphoreSciSyncPoolCreateInfoNV * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSemaphoreSciSyncPoolNV * pSemaphorePool)
{
	assert(pfn_vkCreateSemaphoreSciSyncPoolNV);
	return pfn_vkCreateSemaphoreSciSyncPoolNV(device, pCreateInfo, pAllocator, pSemaphorePool);
}
#endif // defined(VK_NV_external_sci_sync2)
#if defined(VK_NV_fragment_shading_rate_enums)

static PFN_vkCmdSetFragmentShadingRateEnumNV pfn_vkCmdSetFragmentShadingRateEnumNV;
VKAPI_ATTR void vkCmdSetFragmentShadingRateEnumNV(VkCommandBuffer commandBuffer, VkFragmentShadingRateNV shadingRate, const VkFragmentShadingRateCombinerOpKHR combinerOps [2])
{
	assert(pfn_vkCmdSetFragmentShadingRateEnumNV);
	pfn_vkCmdSetFragmentShadingRateEnumNV(commandBuffer, shadingRate, combinerOps);
}
#endif // defined(VK_NV_fragment_shading_rate_enums)
#if defined(VK_NV_low_latency2)

static PFN_vkLatencySleepNV pfn_vkLatencySleepNV;
VKAPI_ATTR VkResult vkLatencySleepNV(VkDevice device, VkSwapchainKHR swapchain, const VkLatencySleepInfoNV * pSleepInfo)
{
	assert(pfn_vkLatencySleepNV);
	return pfn_vkLatencySleepNV(device, swapchain, pSleepInfo);
}

static PFN_vkQueueNotifyOutOfBandNV pfn_vkQueueNotifyOutOfBandNV;
VKAPI_ATTR void vkQueueNotifyOutOfBandNV(VkQueue queue, const VkOutOfBandQueueTypeInfoNV * pQueueTypeInfo)
{
	assert(pfn_vkQueueNotifyOutOfBandNV);
	pfn_vkQueueNotifyOutOfBandNV(queue, pQueueTypeInfo);
}

static PFN_vkSetLatencySleepModeNV pfn_vkSetLatencySleepModeNV;
VKAPI_ATTR VkResult vkSetLatencySleepModeNV(VkDevice device, VkSwapchainKHR swapchain, const VkLatencySleepModeInfoNV * pSleepModeInfo)
{
	assert(pfn_vkSetLatencySleepModeNV);
	return pfn_vkSetLatencySleepModeNV(device, swapchain, pSleepModeInfo);
}

static PFN_vkSetLatencyMarkerNV pfn_vkSetLatencyMarkerNV;
VKAPI_ATTR void vkSetLatencyMarkerNV(VkDevice device, VkSwapchainKHR swapchain, const VkSetLatencyMarkerInfoNV * pLatencyMarkerInfo)
{
	assert(pfn_vkSetLatencyMarkerNV);
	pfn_vkSetLatencyMarkerNV(device, swapchain, pLatencyMarkerInfo);
}

static PFN_vkGetLatencyTimingsNV pfn_vkGetLatencyTimingsNV;
VKAPI_ATTR void vkGetLatencyTimingsNV(VkDevice device, VkSwapchainKHR swapchain, VkGetLatencyMarkerInfoNV * pLatencyMarkerInfo)
{
	assert(pfn_vkGetLatencyTimingsNV);
	pfn_vkGetLatencyTimingsNV(device, swapchain, pLatencyMarkerInfo);
}
#endif // defined(VK_NV_low_latency2)
#if defined(VK_NV_memory_decompression)

static PFN_vkCmdDecompressMemoryNV pfn_vkCmdDecompressMemoryNV;
VKAPI_ATTR void vkCmdDecompressMemoryNV(VkCommandBuffer commandBuffer, uint32_t decompressRegionCount, const VkDecompressMemoryRegionNV * pDecompressMemoryRegions)
{
	assert(pfn_vkCmdDecompressMemoryNV);
	pfn_vkCmdDecompressMemoryNV(commandBuffer, decompressRegionCount, pDecompressMemoryRegions);
}

static PFN_vkCmdDecompressMemoryIndirectCountNV pfn_vkCmdDecompressMemoryIndirectCountNV;
VKAPI_ATTR void vkCmdDecompressMemoryIndirectCountNV(VkCommandBuffer commandBuffer, VkDeviceAddress indirectCommandsAddress, VkDeviceAddress indirectCommandsCountAddress, uint32_t stride)
{
	assert(pfn_vkCmdDecompressMemoryIndirectCountNV);
	pfn_vkCmdDecompressMemoryIndirectCountNV(commandBuffer, indirectCommandsAddress, indirectCommandsCountAddress, stride);
}
#endif // defined(VK_NV_memory_decompression)
#if defined(VK_NV_mesh_shader)

static PFN_vkCmdDrawMeshTasksIndirectNV pfn_vkCmdDrawMeshTasksIndirectNV;
VKAPI_ATTR void vkCmdDrawMeshTasksIndirectNV(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride)
{
	assert(pfn_vkCmdDrawMeshTasksIndirectNV);
	pfn_vkCmdDrawMeshTasksIndirectNV(commandBuffer, buffer, offset, drawCount, stride);
}

static PFN_vkCmdDrawMeshTasksNV pfn_vkCmdDrawMeshTasksNV;
VKAPI_ATTR void vkCmdDrawMeshTasksNV(VkCommandBuffer commandBuffer, uint32_t taskCount, uint32_t firstTask)
{
	assert(pfn_vkCmdDrawMeshTasksNV);
	pfn_vkCmdDrawMeshTasksNV(commandBuffer, taskCount, firstTask);
}

static PFN_vkCmdDrawMeshTasksIndirectCountNV pfn_vkCmdDrawMeshTasksIndirectCountNV;
VKAPI_ATTR void vkCmdDrawMeshTasksIndirectCountNV(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride)
{
	assert(pfn_vkCmdDrawMeshTasksIndirectCountNV);
	pfn_vkCmdDrawMeshTasksIndirectCountNV(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
}
#endif // defined(VK_NV_mesh_shader)
#if defined(VK_NV_optical_flow)

static PFN_vkBindOpticalFlowSessionImageNV pfn_vkBindOpticalFlowSessionImageNV;
VKAPI_ATTR VkResult vkBindOpticalFlowSessionImageNV(VkDevice device, VkOpticalFlowSessionNV session, VkOpticalFlowSessionBindingPointNV bindingPoint, VkImageView view, VkImageLayout layout)
{
	assert(pfn_vkBindOpticalFlowSessionImageNV);
	return pfn_vkBindOpticalFlowSessionImageNV(device, session, bindingPoint, view, layout);
}

static PFN_vkGetPhysicalDeviceOpticalFlowImageFormatsNV pfn_vkGetPhysicalDeviceOpticalFlowImageFormatsNV;
VKAPI_ATTR VkResult vkGetPhysicalDeviceOpticalFlowImageFormatsNV(VkPhysicalDevice physicalDevice, const VkOpticalFlowImageFormatInfoNV * pOpticalFlowImageFormatInfo, uint32_t * pFormatCount, VkOpticalFlowImageFormatPropertiesNV * pImageFormatProperties)
{
	assert(pfn_vkGetPhysicalDeviceOpticalFlowImageFormatsNV);
	return pfn_vkGetPhysicalDeviceOpticalFlowImageFormatsNV(physicalDevice, pOpticalFlowImageFormatInfo, pFormatCount, pImageFormatProperties);
}

static PFN_vkCreateOpticalFlowSessionNV pfn_vkCreateOpticalFlowSessionNV;
VKAPI_ATTR VkResult vkCreateOpticalFlowSessionNV(VkDevice device, const VkOpticalFlowSessionCreateInfoNV * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkOpticalFlowSessionNV * pSession)
{
	assert(pfn_vkCreateOpticalFlowSessionNV);
	return pfn_vkCreateOpticalFlowSessionNV(device, pCreateInfo, pAllocator, pSession);
}

static PFN_vkDestroyOpticalFlowSessionNV pfn_vkDestroyOpticalFlowSessionNV;
VKAPI_ATTR void vkDestroyOpticalFlowSessionNV(VkDevice device, VkOpticalFlowSessionNV session, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroyOpticalFlowSessionNV);
	pfn_vkDestroyOpticalFlowSessionNV(device, session, pAllocator);
}

static PFN_vkCmdOpticalFlowExecuteNV pfn_vkCmdOpticalFlowExecuteNV;
VKAPI_ATTR void vkCmdOpticalFlowExecuteNV(VkCommandBuffer commandBuffer, VkOpticalFlowSessionNV session, const VkOpticalFlowExecuteInfoNV * pExecuteInfo)
{
	assert(pfn_vkCmdOpticalFlowExecuteNV);
	pfn_vkCmdOpticalFlowExecuteNV(commandBuffer, session, pExecuteInfo);
}
#endif // defined(VK_NV_optical_flow)
#if defined(VK_NV_partitioned_acceleration_structure)

static PFN_vkCmdBuildPartitionedAccelerationStructuresNV pfn_vkCmdBuildPartitionedAccelerationStructuresNV;
VKAPI_ATTR void vkCmdBuildPartitionedAccelerationStructuresNV(VkCommandBuffer commandBuffer, const VkBuildPartitionedAccelerationStructureInfoNV * pBuildInfo)
{
	assert(pfn_vkCmdBuildPartitionedAccelerationStructuresNV);
	pfn_vkCmdBuildPartitionedAccelerationStructuresNV(commandBuffer, pBuildInfo);
}

static PFN_vkGetPartitionedAccelerationStructuresBuildSizesNV pfn_vkGetPartitionedAccelerationStructuresBuildSizesNV;
VKAPI_ATTR void vkGetPartitionedAccelerationStructuresBuildSizesNV(VkDevice device, const VkPartitionedAccelerationStructureInstancesInputNV * pInfo, VkAccelerationStructureBuildSizesInfoKHR * pSizeInfo)
{
	assert(pfn_vkGetPartitionedAccelerationStructuresBuildSizesNV);
	pfn_vkGetPartitionedAccelerationStructuresBuildSizesNV(device, pInfo, pSizeInfo);
}
#endif // defined(VK_NV_partitioned_acceleration_structure)
#if defined(VK_NV_ray_tracing)

static PFN_vkCmdTraceRaysNV pfn_vkCmdTraceRaysNV;
VKAPI_ATTR void vkCmdTraceRaysNV(VkCommandBuffer commandBuffer, VkBuffer raygenShaderBindingTableBuffer, VkDeviceSize raygenShaderBindingOffset, VkBuffer missShaderBindingTableBuffer, VkDeviceSize missShaderBindingOffset, VkDeviceSize missShaderBindingStride, VkBuffer hitShaderBindingTableBuffer, VkDeviceSize hitShaderBindingOffset, VkDeviceSize hitShaderBindingStride, VkBuffer callableShaderBindingTableBuffer, VkDeviceSize callableShaderBindingOffset, VkDeviceSize callableShaderBindingStride, uint32_t width, uint32_t height, uint32_t depth)
{
	assert(pfn_vkCmdTraceRaysNV);
	pfn_vkCmdTraceRaysNV(commandBuffer, raygenShaderBindingTableBuffer, raygenShaderBindingOffset, missShaderBindingTableBuffer, missShaderBindingOffset, missShaderBindingStride, hitShaderBindingTableBuffer, hitShaderBindingOffset, hitShaderBindingStride, callableShaderBindingTableBuffer, callableShaderBindingOffset, callableShaderBindingStride, width, height, depth);
}

static PFN_vkDestroyAccelerationStructureNV pfn_vkDestroyAccelerationStructureNV;
VKAPI_ATTR void vkDestroyAccelerationStructureNV(VkDevice device, VkAccelerationStructureNV accelerationStructure, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroyAccelerationStructureNV);
	pfn_vkDestroyAccelerationStructureNV(device, accelerationStructure, pAllocator);
}

static PFN_vkCmdBuildAccelerationStructureNV pfn_vkCmdBuildAccelerationStructureNV;
VKAPI_ATTR void vkCmdBuildAccelerationStructureNV(VkCommandBuffer commandBuffer, const VkAccelerationStructureInfoNV * pInfo, VkBuffer instanceData, VkDeviceSize instanceOffset, VkBool32 update, VkAccelerationStructureNV dst, VkAccelerationStructureNV src, VkBuffer scratch, VkDeviceSize scratchOffset)
{
	assert(pfn_vkCmdBuildAccelerationStructureNV);
	pfn_vkCmdBuildAccelerationStructureNV(commandBuffer, pInfo, instanceData, instanceOffset, update, dst, src, scratch, scratchOffset);
}

static PFN_vkCreateAccelerationStructureNV pfn_vkCreateAccelerationStructureNV;
VKAPI_ATTR VkResult vkCreateAccelerationStructureNV(VkDevice device, const VkAccelerationStructureCreateInfoNV * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkAccelerationStructureNV * pAccelerationStructure)
{
	assert(pfn_vkCreateAccelerationStructureNV);
	return pfn_vkCreateAccelerationStructureNV(device, pCreateInfo, pAllocator, pAccelerationStructure);
}

static PFN_vkGetAccelerationStructureMemoryRequirementsNV pfn_vkGetAccelerationStructureMemoryRequirementsNV;
VKAPI_ATTR void vkGetAccelerationStructureMemoryRequirementsNV(VkDevice device, const VkAccelerationStructureMemoryRequirementsInfoNV * pInfo, VkMemoryRequirements2KHR * pMemoryRequirements)
{
	assert(pfn_vkGetAccelerationStructureMemoryRequirementsNV);
	pfn_vkGetAccelerationStructureMemoryRequirementsNV(device, pInfo, pMemoryRequirements);
}

static PFN_vkBindAccelerationStructureMemoryNV pfn_vkBindAccelerationStructureMemoryNV;
VKAPI_ATTR VkResult vkBindAccelerationStructureMemoryNV(VkDevice device, uint32_t bindInfoCount, const VkBindAccelerationStructureMemoryInfoNV * pBindInfos)
{
	assert(pfn_vkBindAccelerationStructureMemoryNV);
	return pfn_vkBindAccelerationStructureMemoryNV(device, bindInfoCount, pBindInfos);
}

static PFN_vkCmdCopyAccelerationStructureNV pfn_vkCmdCopyAccelerationStructureNV;
VKAPI_ATTR void vkCmdCopyAccelerationStructureNV(VkCommandBuffer commandBuffer, VkAccelerationStructureNV dst, VkAccelerationStructureNV src, VkCopyAccelerationStructureModeKHR mode)
{
	assert(pfn_vkCmdCopyAccelerationStructureNV);
	pfn_vkCmdCopyAccelerationStructureNV(commandBuffer, dst, src, mode);
}

static PFN_vkCreateRayTracingPipelinesNV pfn_vkCreateRayTracingPipelinesNV;
VKAPI_ATTR VkResult vkCreateRayTracingPipelinesNV(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkRayTracingPipelineCreateInfoNV * pCreateInfos, const VkAllocationCallbacks * pAllocator, VkPipeline * pPipelines)
{
	assert(pfn_vkCreateRayTracingPipelinesNV);
	return pfn_vkCreateRayTracingPipelinesNV(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
}

static PFN_vkGetRayTracingShaderGroupHandlesNV pfn_vkGetRayTracingShaderGroupHandlesNV;
VKAPI_ATTR VkResult vkGetRayTracingShaderGroupHandlesNV(VkDevice device, VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount, size_t dataSize, void * pData)
{
	assert(pfn_vkGetRayTracingShaderGroupHandlesNV);
	return pfn_vkGetRayTracingShaderGroupHandlesNV(device, pipeline, firstGroup, groupCount, dataSize, pData);
}

static PFN_vkGetAccelerationStructureHandleNV pfn_vkGetAccelerationStructureHandleNV;
VKAPI_ATTR VkResult vkGetAccelerationStructureHandleNV(VkDevice device, VkAccelerationStructureNV accelerationStructure, size_t dataSize, void * pData)
{
	assert(pfn_vkGetAccelerationStructureHandleNV);
	return pfn_vkGetAccelerationStructureHandleNV(device, accelerationStructure, dataSize, pData);
}

static PFN_vkCmdWriteAccelerationStructuresPropertiesNV pfn_vkCmdWriteAccelerationStructuresPropertiesNV;
VKAPI_ATTR void vkCmdWriteAccelerationStructuresPropertiesNV(VkCommandBuffer commandBuffer, uint32_t accelerationStructureCount, const VkAccelerationStructureNV * pAccelerationStructures, VkQueryType queryType, VkQueryPool queryPool, uint32_t firstQuery)
{
	assert(pfn_vkCmdWriteAccelerationStructuresPropertiesNV);
	pfn_vkCmdWriteAccelerationStructuresPropertiesNV(commandBuffer, accelerationStructureCount, pAccelerationStructures, queryType, queryPool, firstQuery);
}

static PFN_vkCompileDeferredNV pfn_vkCompileDeferredNV;
VKAPI_ATTR VkResult vkCompileDeferredNV(VkDevice device, VkPipeline pipeline, uint32_t shader)
{
	assert(pfn_vkCompileDeferredNV);
	return pfn_vkCompileDeferredNV(device, pipeline, shader);
}
#endif // defined(VK_NV_ray_tracing)
#if defined(VK_NV_scissor_exclusive)

static PFN_vkCmdSetExclusiveScissorEnableNV pfn_vkCmdSetExclusiveScissorEnableNV;
VKAPI_ATTR void vkCmdSetExclusiveScissorEnableNV(VkCommandBuffer commandBuffer, uint32_t firstExclusiveScissor, uint32_t exclusiveScissorCount, const VkBool32 * pExclusiveScissorEnables)
{
	assert(pfn_vkCmdSetExclusiveScissorEnableNV);
	pfn_vkCmdSetExclusiveScissorEnableNV(commandBuffer, firstExclusiveScissor, exclusiveScissorCount, pExclusiveScissorEnables);
}

static PFN_vkCmdSetExclusiveScissorNV pfn_vkCmdSetExclusiveScissorNV;
VKAPI_ATTR void vkCmdSetExclusiveScissorNV(VkCommandBuffer commandBuffer, uint32_t firstExclusiveScissor, uint32_t exclusiveScissorCount, const VkRect2D * pExclusiveScissors)
{
	assert(pfn_vkCmdSetExclusiveScissorNV);
	pfn_vkCmdSetExclusiveScissorNV(commandBuffer, firstExclusiveScissor, exclusiveScissorCount, pExclusiveScissors);
}
#endif // defined(VK_NV_scissor_exclusive)
#if defined(VK_NV_shading_rate_image)

static PFN_vkCmdSetViewportShadingRatePaletteNV pfn_vkCmdSetViewportShadingRatePaletteNV;
VKAPI_ATTR void vkCmdSetViewportShadingRatePaletteNV(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkShadingRatePaletteNV * pShadingRatePalettes)
{
	assert(pfn_vkCmdSetViewportShadingRatePaletteNV);
	pfn_vkCmdSetViewportShadingRatePaletteNV(commandBuffer, firstViewport, viewportCount, pShadingRatePalettes);
}

static PFN_vkCmdBindShadingRateImageNV pfn_vkCmdBindShadingRateImageNV;
VKAPI_ATTR void vkCmdBindShadingRateImageNV(VkCommandBuffer commandBuffer, VkImageView imageView, VkImageLayout imageLayout)
{
	assert(pfn_vkCmdBindShadingRateImageNV);
	pfn_vkCmdBindShadingRateImageNV(commandBuffer, imageView, imageLayout);
}

static PFN_vkCmdSetCoarseSampleOrderNV pfn_vkCmdSetCoarseSampleOrderNV;
VKAPI_ATTR void vkCmdSetCoarseSampleOrderNV(VkCommandBuffer commandBuffer, VkCoarseSampleOrderTypeNV sampleOrderType, uint32_t customSampleOrderCount, const VkCoarseSampleOrderCustomNV * pCustomSampleOrders)
{
	assert(pfn_vkCmdSetCoarseSampleOrderNV);
	pfn_vkCmdSetCoarseSampleOrderNV(commandBuffer, sampleOrderType, customSampleOrderCount, pCustomSampleOrders);
}
#endif // defined(VK_NV_shading_rate_image)
#if defined(VK_OHOS_surface)

static PFN_vkCreateSurfaceOHOS pfn_vkCreateSurfaceOHOS;
VKAPI_ATTR VkResult vkCreateSurfaceOHOS(VkInstance instance, const VkSurfaceCreateInfoOHOS * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface)
{
	assert(pfn_vkCreateSurfaceOHOS);
	return pfn_vkCreateSurfaceOHOS(instance, pCreateInfo, pAllocator, pSurface);
}
#endif // defined(VK_OHOS_surface)
#if defined(VK_QCOM_tile_memory_heap)

static PFN_vkCmdBindTileMemoryQCOM pfn_vkCmdBindTileMemoryQCOM;
VKAPI_ATTR void vkCmdBindTileMemoryQCOM(VkCommandBuffer commandBuffer, const VkTileMemoryBindInfoQCOM * pTileMemoryBindInfo)
{
	assert(pfn_vkCmdBindTileMemoryQCOM);
	pfn_vkCmdBindTileMemoryQCOM(commandBuffer, pTileMemoryBindInfo);
}
#endif // defined(VK_QCOM_tile_memory_heap)
#if defined(VK_QCOM_tile_properties)

static PFN_vkGetFramebufferTilePropertiesQCOM pfn_vkGetFramebufferTilePropertiesQCOM;
VKAPI_ATTR VkResult vkGetFramebufferTilePropertiesQCOM(VkDevice device, VkFramebuffer framebuffer, uint32_t * pPropertiesCount, VkTilePropertiesQCOM * pProperties)
{
	assert(pfn_vkGetFramebufferTilePropertiesQCOM);
	return pfn_vkGetFramebufferTilePropertiesQCOM(device, framebuffer, pPropertiesCount, pProperties);
}

static PFN_vkGetDynamicRenderingTilePropertiesQCOM pfn_vkGetDynamicRenderingTilePropertiesQCOM;
VKAPI_ATTR VkResult vkGetDynamicRenderingTilePropertiesQCOM(VkDevice device, const VkRenderingInfo * pRenderingInfo, VkTilePropertiesQCOM * pProperties)
{
	assert(pfn_vkGetDynamicRenderingTilePropertiesQCOM);
	return pfn_vkGetDynamicRenderingTilePropertiesQCOM(device, pRenderingInfo, pProperties);
}
#endif // defined(VK_QCOM_tile_properties)
#if defined(VK_QCOM_tile_shading)

static PFN_vkCmdDispatchTileQCOM pfn_vkCmdDispatchTileQCOM;
VKAPI_ATTR void vkCmdDispatchTileQCOM(VkCommandBuffer commandBuffer, const VkDispatchTileInfoQCOM * pDispatchTileInfo)
{
	assert(pfn_vkCmdDispatchTileQCOM);
	pfn_vkCmdDispatchTileQCOM(commandBuffer, pDispatchTileInfo);
}

static PFN_vkCmdBeginPerTileExecutionQCOM pfn_vkCmdBeginPerTileExecutionQCOM;
VKAPI_ATTR void vkCmdBeginPerTileExecutionQCOM(VkCommandBuffer commandBuffer, const VkPerTileBeginInfoQCOM * pPerTileBeginInfo)
{
	assert(pfn_vkCmdBeginPerTileExecutionQCOM);
	pfn_vkCmdBeginPerTileExecutionQCOM(commandBuffer, pPerTileBeginInfo);
}

static PFN_vkCmdEndPerTileExecutionQCOM pfn_vkCmdEndPerTileExecutionQCOM;
VKAPI_ATTR void vkCmdEndPerTileExecutionQCOM(VkCommandBuffer commandBuffer, const VkPerTileEndInfoQCOM * pPerTileEndInfo)
{
	assert(pfn_vkCmdEndPerTileExecutionQCOM);
	pfn_vkCmdEndPerTileExecutionQCOM(commandBuffer, pPerTileEndInfo);
}
#endif // defined(VK_QCOM_tile_shading)
#if defined(VK_QNX_external_memory_screen_buffer)

static PFN_vkGetScreenBufferPropertiesQNX pfn_vkGetScreenBufferPropertiesQNX;
VKAPI_ATTR VkResult vkGetScreenBufferPropertiesQNX(VkDevice device, const struct _screen_buffer * buffer, VkScreenBufferPropertiesQNX * pProperties)
{
	assert(pfn_vkGetScreenBufferPropertiesQNX);
	return pfn_vkGetScreenBufferPropertiesQNX(device, buffer, pProperties);
}
#endif // defined(VK_QNX_external_memory_screen_buffer)
#if defined(VK_QNX_screen_surface)

static PFN_vkGetPhysicalDeviceScreenPresentationSupportQNX pfn_vkGetPhysicalDeviceScreenPresentationSupportQNX;
VKAPI_ATTR VkBool32 vkGetPhysicalDeviceScreenPresentationSupportQNX(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, struct _screen_window * window)
{
	assert(pfn_vkGetPhysicalDeviceScreenPresentationSupportQNX);
	return pfn_vkGetPhysicalDeviceScreenPresentationSupportQNX(physicalDevice, queueFamilyIndex, window);
}

static PFN_vkCreateScreenSurfaceQNX pfn_vkCreateScreenSurfaceQNX;
VKAPI_ATTR VkResult vkCreateScreenSurfaceQNX(VkInstance instance, const VkScreenSurfaceCreateInfoQNX * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface)
{
	assert(pfn_vkCreateScreenSurfaceQNX);
	return pfn_vkCreateScreenSurfaceQNX(instance, pCreateInfo, pAllocator, pSurface);
}
#endif // defined(VK_QNX_screen_surface)
#if defined(VK_VALVE_descriptor_set_host_mapping)

static PFN_vkGetDescriptorSetHostMappingVALVE pfn_vkGetDescriptorSetHostMappingVALVE;
VKAPI_ATTR void vkGetDescriptorSetHostMappingVALVE(VkDevice device, VkDescriptorSet descriptorSet, void ** ppData)
{
	assert(pfn_vkGetDescriptorSetHostMappingVALVE);
	pfn_vkGetDescriptorSetHostMappingVALVE(device, descriptorSet, ppData);
}

static PFN_vkGetDescriptorSetLayoutHostMappingInfoVALVE pfn_vkGetDescriptorSetLayoutHostMappingInfoVALVE;
VKAPI_ATTR void vkGetDescriptorSetLayoutHostMappingInfoVALVE(VkDevice device, const VkDescriptorSetBindingReferenceVALVE * pBindingReference, VkDescriptorSetLayoutHostMappingInfoVALVE * pHostMapping)
{
	assert(pfn_vkGetDescriptorSetLayoutHostMappingInfoVALVE);
	pfn_vkGetDescriptorSetLayoutHostMappingInfoVALVE(device, pBindingReference, pHostMapping);
}
#endif // defined(VK_VALVE_descriptor_set_host_mapping)

void vgen_init_vulkan_loader(PFN_vkGetInstanceProcAddr get_address)
{
	pfn_vkGetInstanceProcAddr = get_address;
	pfn_vkCreateInstance = (PFN_vkCreateInstance)vkGetInstanceProcAddr(0, "vkCreateInstance");
	pfn_vkEnumerateInstanceExtensionProperties = (PFN_vkEnumerateInstanceExtensionProperties)vkGetInstanceProcAddr(0, "vkEnumerateInstanceExtensionProperties");
	pfn_vkEnumerateInstanceLayerProperties = (PFN_vkEnumerateInstanceLayerProperties)vkGetInstanceProcAddr(0, "vkEnumerateInstanceLayerProperties");
}

void vgen_load_instance_procs(VkInstance instance)
{

#if defined(VK_VERSION_1_0)

	pfn_vkDestroyInstance = (PFN_vkDestroyInstance)vkGetInstanceProcAddr(instance, "vkDestroyInstance");
	pfn_vkEnumeratePhysicalDevices = (PFN_vkEnumeratePhysicalDevices)vkGetInstanceProcAddr(instance, "vkEnumeratePhysicalDevices");
	pfn_vkGetPhysicalDeviceFeatures = (PFN_vkGetPhysicalDeviceFeatures)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceFeatures");
	pfn_vkGetPhysicalDeviceFormatProperties = (PFN_vkGetPhysicalDeviceFormatProperties)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceFormatProperties");
	pfn_vkGetPhysicalDeviceImageFormatProperties = (PFN_vkGetPhysicalDeviceImageFormatProperties)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceImageFormatProperties");
	pfn_vkGetPhysicalDeviceProperties = (PFN_vkGetPhysicalDeviceProperties)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceProperties");
	pfn_vkGetPhysicalDeviceQueueFamilyProperties = (PFN_vkGetPhysicalDeviceQueueFamilyProperties)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceQueueFamilyProperties");
	pfn_vkGetPhysicalDeviceMemoryProperties = (PFN_vkGetPhysicalDeviceMemoryProperties)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceMemoryProperties");
	pfn_vkGetInstanceProcAddr = (PFN_vkGetInstanceProcAddr)vkGetInstanceProcAddr(instance, "vkGetInstanceProcAddr");
	pfn_vkGetDeviceProcAddr = (PFN_vkGetDeviceProcAddr)vkGetInstanceProcAddr(instance, "vkGetDeviceProcAddr");

	pfn_vkCreateDevice = (PFN_vkCreateDevice)vkGetInstanceProcAddr(instance, "vkCreateDevice");
	pfn_vkDestroyDevice = (PFN_vkDestroyDevice)vkGetInstanceProcAddr(instance, "vkDestroyDevice");

	pfn_vkEnumerateDeviceExtensionProperties = (PFN_vkEnumerateDeviceExtensionProperties)vkGetInstanceProcAddr(instance, "vkEnumerateDeviceExtensionProperties");

	pfn_vkEnumerateDeviceLayerProperties = (PFN_vkEnumerateDeviceLayerProperties)vkGetInstanceProcAddr(instance, "vkEnumerateDeviceLayerProperties");

	pfn_vkGetDeviceQueue = (PFN_vkGetDeviceQueue)vkGetInstanceProcAddr(instance, "vkGetDeviceQueue");
	pfn_vkQueueSubmit = (PFN_vkQueueSubmit)vkGetInstanceProcAddr(instance, "vkQueueSubmit");
	pfn_vkQueueWaitIdle = (PFN_vkQueueWaitIdle)vkGetInstanceProcAddr(instance, "vkQueueWaitIdle");
	pfn_vkDeviceWaitIdle = (PFN_vkDeviceWaitIdle)vkGetInstanceProcAddr(instance, "vkDeviceWaitIdle");

	pfn_vkAllocateMemory = (PFN_vkAllocateMemory)vkGetInstanceProcAddr(instance, "vkAllocateMemory");
	pfn_vkFreeMemory = (PFN_vkFreeMemory)vkGetInstanceProcAddr(instance, "vkFreeMemory");
	pfn_vkMapMemory = (PFN_vkMapMemory)vkGetInstanceProcAddr(instance, "vkMapMemory");
	pfn_vkUnmapMemory = (PFN_vkUnmapMemory)vkGetInstanceProcAddr(instance, "vkUnmapMemory");
	pfn_vkFlushMappedMemoryRanges = (PFN_vkFlushMappedMemoryRanges)vkGetInstanceProcAddr(instance, "vkFlushMappedMemoryRanges");
	pfn_vkInvalidateMappedMemoryRanges = (PFN_vkInvalidateMappedMemoryRanges)vkGetInstanceProcAddr(instance, "vkInvalidateMappedMemoryRanges");
	pfn_vkGetDeviceMemoryCommitment = (PFN_vkGetDeviceMemoryCommitment)vkGetInstanceProcAddr(instance, "vkGetDeviceMemoryCommitment");

	pfn_vkBindBufferMemory = (PFN_vkBindBufferMemory)vkGetInstanceProcAddr(instance, "vkBindBufferMemory");
	pfn_vkBindImageMemory = (PFN_vkBindImageMemory)vkGetInstanceProcAddr(instance, "vkBindImageMemory");
	pfn_vkGetBufferMemoryRequirements = (PFN_vkGetBufferMemoryRequirements)vkGetInstanceProcAddr(instance, "vkGetBufferMemoryRequirements");
	pfn_vkGetImageMemoryRequirements = (PFN_vkGetImageMemoryRequirements)vkGetInstanceProcAddr(instance, "vkGetImageMemoryRequirements");

	pfn_vkGetImageSparseMemoryRequirements = (PFN_vkGetImageSparseMemoryRequirements)vkGetInstanceProcAddr(instance, "vkGetImageSparseMemoryRequirements");
	pfn_vkGetPhysicalDeviceSparseImageFormatProperties = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSparseImageFormatProperties");
	pfn_vkQueueBindSparse = (PFN_vkQueueBindSparse)vkGetInstanceProcAddr(instance, "vkQueueBindSparse");

	pfn_vkCreateFence = (PFN_vkCreateFence)vkGetInstanceProcAddr(instance, "vkCreateFence");
	pfn_vkDestroyFence = (PFN_vkDestroyFence)vkGetInstanceProcAddr(instance, "vkDestroyFence");
	pfn_vkResetFences = (PFN_vkResetFences)vkGetInstanceProcAddr(instance, "vkResetFences");
	pfn_vkGetFenceStatus = (PFN_vkGetFenceStatus)vkGetInstanceProcAddr(instance, "vkGetFenceStatus");
	pfn_vkWaitForFences = (PFN_vkWaitForFences)vkGetInstanceProcAddr(instance, "vkWaitForFences");

	pfn_vkCreateSemaphore = (PFN_vkCreateSemaphore)vkGetInstanceProcAddr(instance, "vkCreateSemaphore");
	pfn_vkDestroySemaphore = (PFN_vkDestroySemaphore)vkGetInstanceProcAddr(instance, "vkDestroySemaphore");

	pfn_vkCreateEvent = (PFN_vkCreateEvent)vkGetInstanceProcAddr(instance, "vkCreateEvent");
	pfn_vkDestroyEvent = (PFN_vkDestroyEvent)vkGetInstanceProcAddr(instance, "vkDestroyEvent");
	pfn_vkGetEventStatus = (PFN_vkGetEventStatus)vkGetInstanceProcAddr(instance, "vkGetEventStatus");
	pfn_vkSetEvent = (PFN_vkSetEvent)vkGetInstanceProcAddr(instance, "vkSetEvent");
	pfn_vkResetEvent = (PFN_vkResetEvent)vkGetInstanceProcAddr(instance, "vkResetEvent");

	pfn_vkCreateQueryPool = (PFN_vkCreateQueryPool)vkGetInstanceProcAddr(instance, "vkCreateQueryPool");
	pfn_vkDestroyQueryPool = (PFN_vkDestroyQueryPool)vkGetInstanceProcAddr(instance, "vkDestroyQueryPool");
	pfn_vkGetQueryPoolResults = (PFN_vkGetQueryPoolResults)vkGetInstanceProcAddr(instance, "vkGetQueryPoolResults");

	pfn_vkCreateBuffer = (PFN_vkCreateBuffer)vkGetInstanceProcAddr(instance, "vkCreateBuffer");
	pfn_vkDestroyBuffer = (PFN_vkDestroyBuffer)vkGetInstanceProcAddr(instance, "vkDestroyBuffer");

	pfn_vkCreateBufferView = (PFN_vkCreateBufferView)vkGetInstanceProcAddr(instance, "vkCreateBufferView");
	pfn_vkDestroyBufferView = (PFN_vkDestroyBufferView)vkGetInstanceProcAddr(instance, "vkDestroyBufferView");

	pfn_vkCreateImage = (PFN_vkCreateImage)vkGetInstanceProcAddr(instance, "vkCreateImage");
	pfn_vkDestroyImage = (PFN_vkDestroyImage)vkGetInstanceProcAddr(instance, "vkDestroyImage");
	pfn_vkGetImageSubresourceLayout = (PFN_vkGetImageSubresourceLayout)vkGetInstanceProcAddr(instance, "vkGetImageSubresourceLayout");

	pfn_vkCreateImageView = (PFN_vkCreateImageView)vkGetInstanceProcAddr(instance, "vkCreateImageView");
	pfn_vkDestroyImageView = (PFN_vkDestroyImageView)vkGetInstanceProcAddr(instance, "vkDestroyImageView");

	pfn_vkCreateShaderModule = (PFN_vkCreateShaderModule)vkGetInstanceProcAddr(instance, "vkCreateShaderModule");
	pfn_vkDestroyShaderModule = (PFN_vkDestroyShaderModule)vkGetInstanceProcAddr(instance, "vkDestroyShaderModule");

	pfn_vkCreatePipelineCache = (PFN_vkCreatePipelineCache)vkGetInstanceProcAddr(instance, "vkCreatePipelineCache");
	pfn_vkDestroyPipelineCache = (PFN_vkDestroyPipelineCache)vkGetInstanceProcAddr(instance, "vkDestroyPipelineCache");
	pfn_vkGetPipelineCacheData = (PFN_vkGetPipelineCacheData)vkGetInstanceProcAddr(instance, "vkGetPipelineCacheData");
	pfn_vkMergePipelineCaches = (PFN_vkMergePipelineCaches)vkGetInstanceProcAddr(instance, "vkMergePipelineCaches");

	pfn_vkCreateGraphicsPipelines = (PFN_vkCreateGraphicsPipelines)vkGetInstanceProcAddr(instance, "vkCreateGraphicsPipelines");
	pfn_vkCreateComputePipelines = (PFN_vkCreateComputePipelines)vkGetInstanceProcAddr(instance, "vkCreateComputePipelines");
	pfn_vkDestroyPipeline = (PFN_vkDestroyPipeline)vkGetInstanceProcAddr(instance, "vkDestroyPipeline");

	pfn_vkCreatePipelineLayout = (PFN_vkCreatePipelineLayout)vkGetInstanceProcAddr(instance, "vkCreatePipelineLayout");
	pfn_vkDestroyPipelineLayout = (PFN_vkDestroyPipelineLayout)vkGetInstanceProcAddr(instance, "vkDestroyPipelineLayout");

	pfn_vkCreateSampler = (PFN_vkCreateSampler)vkGetInstanceProcAddr(instance, "vkCreateSampler");
	pfn_vkDestroySampler = (PFN_vkDestroySampler)vkGetInstanceProcAddr(instance, "vkDestroySampler");

	pfn_vkCreateDescriptorSetLayout = (PFN_vkCreateDescriptorSetLayout)vkGetInstanceProcAddr(instance, "vkCreateDescriptorSetLayout");
	pfn_vkDestroyDescriptorSetLayout = (PFN_vkDestroyDescriptorSetLayout)vkGetInstanceProcAddr(instance, "vkDestroyDescriptorSetLayout");
	pfn_vkCreateDescriptorPool = (PFN_vkCreateDescriptorPool)vkGetInstanceProcAddr(instance, "vkCreateDescriptorPool");
	pfn_vkDestroyDescriptorPool = (PFN_vkDestroyDescriptorPool)vkGetInstanceProcAddr(instance, "vkDestroyDescriptorPool");
	pfn_vkResetDescriptorPool = (PFN_vkResetDescriptorPool)vkGetInstanceProcAddr(instance, "vkResetDescriptorPool");
	pfn_vkAllocateDescriptorSets = (PFN_vkAllocateDescriptorSets)vkGetInstanceProcAddr(instance, "vkAllocateDescriptorSets");
	pfn_vkFreeDescriptorSets = (PFN_vkFreeDescriptorSets)vkGetInstanceProcAddr(instance, "vkFreeDescriptorSets");
	pfn_vkUpdateDescriptorSets = (PFN_vkUpdateDescriptorSets)vkGetInstanceProcAddr(instance, "vkUpdateDescriptorSets");

	pfn_vkCreateFramebuffer = (PFN_vkCreateFramebuffer)vkGetInstanceProcAddr(instance, "vkCreateFramebuffer");
	pfn_vkDestroyFramebuffer = (PFN_vkDestroyFramebuffer)vkGetInstanceProcAddr(instance, "vkDestroyFramebuffer");
	pfn_vkCreateRenderPass = (PFN_vkCreateRenderPass)vkGetInstanceProcAddr(instance, "vkCreateRenderPass");
	pfn_vkDestroyRenderPass = (PFN_vkDestroyRenderPass)vkGetInstanceProcAddr(instance, "vkDestroyRenderPass");
	pfn_vkGetRenderAreaGranularity = (PFN_vkGetRenderAreaGranularity)vkGetInstanceProcAddr(instance, "vkGetRenderAreaGranularity");

	pfn_vkCreateCommandPool = (PFN_vkCreateCommandPool)vkGetInstanceProcAddr(instance, "vkCreateCommandPool");
	pfn_vkDestroyCommandPool = (PFN_vkDestroyCommandPool)vkGetInstanceProcAddr(instance, "vkDestroyCommandPool");
	pfn_vkResetCommandPool = (PFN_vkResetCommandPool)vkGetInstanceProcAddr(instance, "vkResetCommandPool");

	pfn_vkAllocateCommandBuffers = (PFN_vkAllocateCommandBuffers)vkGetInstanceProcAddr(instance, "vkAllocateCommandBuffers");
	pfn_vkFreeCommandBuffers = (PFN_vkFreeCommandBuffers)vkGetInstanceProcAddr(instance, "vkFreeCommandBuffers");
	pfn_vkBeginCommandBuffer = (PFN_vkBeginCommandBuffer)vkGetInstanceProcAddr(instance, "vkBeginCommandBuffer");
	pfn_vkEndCommandBuffer = (PFN_vkEndCommandBuffer)vkGetInstanceProcAddr(instance, "vkEndCommandBuffer");
	pfn_vkResetCommandBuffer = (PFN_vkResetCommandBuffer)vkGetInstanceProcAddr(instance, "vkResetCommandBuffer");

	pfn_vkCmdBindPipeline = (PFN_vkCmdBindPipeline)vkGetInstanceProcAddr(instance, "vkCmdBindPipeline");
	pfn_vkCmdSetViewport = (PFN_vkCmdSetViewport)vkGetInstanceProcAddr(instance, "vkCmdSetViewport");
	pfn_vkCmdSetScissor = (PFN_vkCmdSetScissor)vkGetInstanceProcAddr(instance, "vkCmdSetScissor");
	pfn_vkCmdSetLineWidth = (PFN_vkCmdSetLineWidth)vkGetInstanceProcAddr(instance, "vkCmdSetLineWidth");
	pfn_vkCmdSetDepthBias = (PFN_vkCmdSetDepthBias)vkGetInstanceProcAddr(instance, "vkCmdSetDepthBias");
	pfn_vkCmdSetBlendConstants = (PFN_vkCmdSetBlendConstants)vkGetInstanceProcAddr(instance, "vkCmdSetBlendConstants");
	pfn_vkCmdSetDepthBounds = (PFN_vkCmdSetDepthBounds)vkGetInstanceProcAddr(instance, "vkCmdSetDepthBounds");
	pfn_vkCmdSetStencilCompareMask = (PFN_vkCmdSetStencilCompareMask)vkGetInstanceProcAddr(instance, "vkCmdSetStencilCompareMask");
	pfn_vkCmdSetStencilWriteMask = (PFN_vkCmdSetStencilWriteMask)vkGetInstanceProcAddr(instance, "vkCmdSetStencilWriteMask");
	pfn_vkCmdSetStencilReference = (PFN_vkCmdSetStencilReference)vkGetInstanceProcAddr(instance, "vkCmdSetStencilReference");
	pfn_vkCmdBindDescriptorSets = (PFN_vkCmdBindDescriptorSets)vkGetInstanceProcAddr(instance, "vkCmdBindDescriptorSets");
	pfn_vkCmdBindIndexBuffer = (PFN_vkCmdBindIndexBuffer)vkGetInstanceProcAddr(instance, "vkCmdBindIndexBuffer");
	pfn_vkCmdBindVertexBuffers = (PFN_vkCmdBindVertexBuffers)vkGetInstanceProcAddr(instance, "vkCmdBindVertexBuffers");
	pfn_vkCmdDraw = (PFN_vkCmdDraw)vkGetInstanceProcAddr(instance, "vkCmdDraw");
	pfn_vkCmdDrawIndexed = (PFN_vkCmdDrawIndexed)vkGetInstanceProcAddr(instance, "vkCmdDrawIndexed");
	pfn_vkCmdDrawIndirect = (PFN_vkCmdDrawIndirect)vkGetInstanceProcAddr(instance, "vkCmdDrawIndirect");
	pfn_vkCmdDrawIndexedIndirect = (PFN_vkCmdDrawIndexedIndirect)vkGetInstanceProcAddr(instance, "vkCmdDrawIndexedIndirect");
	pfn_vkCmdDispatch = (PFN_vkCmdDispatch)vkGetInstanceProcAddr(instance, "vkCmdDispatch");
	pfn_vkCmdDispatchIndirect = (PFN_vkCmdDispatchIndirect)vkGetInstanceProcAddr(instance, "vkCmdDispatchIndirect");
	pfn_vkCmdCopyBuffer = (PFN_vkCmdCopyBuffer)vkGetInstanceProcAddr(instance, "vkCmdCopyBuffer");
	pfn_vkCmdCopyImage = (PFN_vkCmdCopyImage)vkGetInstanceProcAddr(instance, "vkCmdCopyImage");
	pfn_vkCmdBlitImage = (PFN_vkCmdBlitImage)vkGetInstanceProcAddr(instance, "vkCmdBlitImage");
	pfn_vkCmdCopyBufferToImage = (PFN_vkCmdCopyBufferToImage)vkGetInstanceProcAddr(instance, "vkCmdCopyBufferToImage");
	pfn_vkCmdCopyImageToBuffer = (PFN_vkCmdCopyImageToBuffer)vkGetInstanceProcAddr(instance, "vkCmdCopyImageToBuffer");
	pfn_vkCmdUpdateBuffer = (PFN_vkCmdUpdateBuffer)vkGetInstanceProcAddr(instance, "vkCmdUpdateBuffer");
	pfn_vkCmdFillBuffer = (PFN_vkCmdFillBuffer)vkGetInstanceProcAddr(instance, "vkCmdFillBuffer");
	pfn_vkCmdClearColorImage = (PFN_vkCmdClearColorImage)vkGetInstanceProcAddr(instance, "vkCmdClearColorImage");
	pfn_vkCmdClearDepthStencilImage = (PFN_vkCmdClearDepthStencilImage)vkGetInstanceProcAddr(instance, "vkCmdClearDepthStencilImage");
	pfn_vkCmdClearAttachments = (PFN_vkCmdClearAttachments)vkGetInstanceProcAddr(instance, "vkCmdClearAttachments");
	pfn_vkCmdResolveImage = (PFN_vkCmdResolveImage)vkGetInstanceProcAddr(instance, "vkCmdResolveImage");
	pfn_vkCmdSetEvent = (PFN_vkCmdSetEvent)vkGetInstanceProcAddr(instance, "vkCmdSetEvent");
	pfn_vkCmdResetEvent = (PFN_vkCmdResetEvent)vkGetInstanceProcAddr(instance, "vkCmdResetEvent");
	pfn_vkCmdWaitEvents = (PFN_vkCmdWaitEvents)vkGetInstanceProcAddr(instance, "vkCmdWaitEvents");
	pfn_vkCmdPipelineBarrier = (PFN_vkCmdPipelineBarrier)vkGetInstanceProcAddr(instance, "vkCmdPipelineBarrier");
	pfn_vkCmdBeginQuery = (PFN_vkCmdBeginQuery)vkGetInstanceProcAddr(instance, "vkCmdBeginQuery");
	pfn_vkCmdEndQuery = (PFN_vkCmdEndQuery)vkGetInstanceProcAddr(instance, "vkCmdEndQuery");
	pfn_vkCmdResetQueryPool = (PFN_vkCmdResetQueryPool)vkGetInstanceProcAddr(instance, "vkCmdResetQueryPool");
	pfn_vkCmdWriteTimestamp = (PFN_vkCmdWriteTimestamp)vkGetInstanceProcAddr(instance, "vkCmdWriteTimestamp");
	pfn_vkCmdCopyQueryPoolResults = (PFN_vkCmdCopyQueryPoolResults)vkGetInstanceProcAddr(instance, "vkCmdCopyQueryPoolResults");
	pfn_vkCmdPushConstants = (PFN_vkCmdPushConstants)vkGetInstanceProcAddr(instance, "vkCmdPushConstants");
	pfn_vkCmdBeginRenderPass = (PFN_vkCmdBeginRenderPass)vkGetInstanceProcAddr(instance, "vkCmdBeginRenderPass");
	pfn_vkCmdNextSubpass = (PFN_vkCmdNextSubpass)vkGetInstanceProcAddr(instance, "vkCmdNextSubpass");
	pfn_vkCmdEndRenderPass = (PFN_vkCmdEndRenderPass)vkGetInstanceProcAddr(instance, "vkCmdEndRenderPass");
	pfn_vkCmdExecuteCommands = (PFN_vkCmdExecuteCommands)vkGetInstanceProcAddr(instance, "vkCmdExecuteCommands");

#endif // defined(VK_VERSION_1_0)

#if defined(VK_VERSION_1_1)

	pfn_vkEnumerateInstanceVersion = (PFN_vkEnumerateInstanceVersion)vkGetInstanceProcAddr(instance, "vkEnumerateInstanceVersion");

	pfn_vkBindBufferMemory2 = (PFN_vkBindBufferMemory2)vkGetInstanceProcAddr(instance, "vkBindBufferMemory2");
	pfn_vkBindImageMemory2 = (PFN_vkBindImageMemory2)vkGetInstanceProcAddr(instance, "vkBindImageMemory2");

	pfn_vkGetDeviceGroupPeerMemoryFeatures = (PFN_vkGetDeviceGroupPeerMemoryFeatures)vkGetInstanceProcAddr(instance, "vkGetDeviceGroupPeerMemoryFeatures");
	pfn_vkCmdSetDeviceMask = (PFN_vkCmdSetDeviceMask)vkGetInstanceProcAddr(instance, "vkCmdSetDeviceMask");
	pfn_vkCmdDispatchBase = (PFN_vkCmdDispatchBase)vkGetInstanceProcAddr(instance, "vkCmdDispatchBase");

	pfn_vkEnumeratePhysicalDeviceGroups = (PFN_vkEnumeratePhysicalDeviceGroups)vkGetInstanceProcAddr(instance, "vkEnumeratePhysicalDeviceGroups");

	pfn_vkGetImageMemoryRequirements2 = (PFN_vkGetImageMemoryRequirements2)vkGetInstanceProcAddr(instance, "vkGetImageMemoryRequirements2");
	pfn_vkGetBufferMemoryRequirements2 = (PFN_vkGetBufferMemoryRequirements2)vkGetInstanceProcAddr(instance, "vkGetBufferMemoryRequirements2");
	pfn_vkGetImageSparseMemoryRequirements2 = (PFN_vkGetImageSparseMemoryRequirements2)vkGetInstanceProcAddr(instance, "vkGetImageSparseMemoryRequirements2");

	pfn_vkGetPhysicalDeviceFeatures2 = (PFN_vkGetPhysicalDeviceFeatures2)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceFeatures2");
	pfn_vkGetPhysicalDeviceProperties2 = (PFN_vkGetPhysicalDeviceProperties2)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceProperties2");
	pfn_vkGetPhysicalDeviceFormatProperties2 = (PFN_vkGetPhysicalDeviceFormatProperties2)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceFormatProperties2");
	pfn_vkGetPhysicalDeviceImageFormatProperties2 = (PFN_vkGetPhysicalDeviceImageFormatProperties2)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceImageFormatProperties2");
	pfn_vkGetPhysicalDeviceQueueFamilyProperties2 = (PFN_vkGetPhysicalDeviceQueueFamilyProperties2)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceQueueFamilyProperties2");
	pfn_vkGetPhysicalDeviceMemoryProperties2 = (PFN_vkGetPhysicalDeviceMemoryProperties2)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceMemoryProperties2");
	pfn_vkGetPhysicalDeviceSparseImageFormatProperties2 = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties2)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSparseImageFormatProperties2");

	pfn_vkTrimCommandPool = (PFN_vkTrimCommandPool)vkGetInstanceProcAddr(instance, "vkTrimCommandPool");

	pfn_vkGetDeviceQueue2 = (PFN_vkGetDeviceQueue2)vkGetInstanceProcAddr(instance, "vkGetDeviceQueue2");

	pfn_vkCreateSamplerYcbcrConversion = (PFN_vkCreateSamplerYcbcrConversion)vkGetInstanceProcAddr(instance, "vkCreateSamplerYcbcrConversion");
	pfn_vkDestroySamplerYcbcrConversion = (PFN_vkDestroySamplerYcbcrConversion)vkGetInstanceProcAddr(instance, "vkDestroySamplerYcbcrConversion");

	pfn_vkCreateDescriptorUpdateTemplate = (PFN_vkCreateDescriptorUpdateTemplate)vkGetInstanceProcAddr(instance, "vkCreateDescriptorUpdateTemplate");
	pfn_vkDestroyDescriptorUpdateTemplate = (PFN_vkDestroyDescriptorUpdateTemplate)vkGetInstanceProcAddr(instance, "vkDestroyDescriptorUpdateTemplate");
	pfn_vkUpdateDescriptorSetWithTemplate = (PFN_vkUpdateDescriptorSetWithTemplate)vkGetInstanceProcAddr(instance, "vkUpdateDescriptorSetWithTemplate");

	pfn_vkGetPhysicalDeviceExternalBufferProperties = (PFN_vkGetPhysicalDeviceExternalBufferProperties)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceExternalBufferProperties");

	pfn_vkGetPhysicalDeviceExternalFenceProperties = (PFN_vkGetPhysicalDeviceExternalFenceProperties)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceExternalFenceProperties");

	pfn_vkGetPhysicalDeviceExternalSemaphoreProperties = (PFN_vkGetPhysicalDeviceExternalSemaphoreProperties)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceExternalSemaphoreProperties");

	pfn_vkGetDescriptorSetLayoutSupport = (PFN_vkGetDescriptorSetLayoutSupport)vkGetInstanceProcAddr(instance, "vkGetDescriptorSetLayoutSupport");

#endif // defined(VK_VERSION_1_1)

#if defined(VK_VERSION_1_2)

	pfn_vkCmdDrawIndirectCount = (PFN_vkCmdDrawIndirectCount)vkGetInstanceProcAddr(instance, "vkCmdDrawIndirectCount");
	pfn_vkCmdDrawIndexedIndirectCount = (PFN_vkCmdDrawIndexedIndirectCount)vkGetInstanceProcAddr(instance, "vkCmdDrawIndexedIndirectCount");

	pfn_vkCreateRenderPass2 = (PFN_vkCreateRenderPass2)vkGetInstanceProcAddr(instance, "vkCreateRenderPass2");
	pfn_vkCmdBeginRenderPass2 = (PFN_vkCmdBeginRenderPass2)vkGetInstanceProcAddr(instance, "vkCmdBeginRenderPass2");
	pfn_vkCmdNextSubpass2 = (PFN_vkCmdNextSubpass2)vkGetInstanceProcAddr(instance, "vkCmdNextSubpass2");
	pfn_vkCmdEndRenderPass2 = (PFN_vkCmdEndRenderPass2)vkGetInstanceProcAddr(instance, "vkCmdEndRenderPass2");

	pfn_vkResetQueryPool = (PFN_vkResetQueryPool)vkGetInstanceProcAddr(instance, "vkResetQueryPool");

	pfn_vkGetSemaphoreCounterValue = (PFN_vkGetSemaphoreCounterValue)vkGetInstanceProcAddr(instance, "vkGetSemaphoreCounterValue");
	pfn_vkWaitSemaphores = (PFN_vkWaitSemaphores)vkGetInstanceProcAddr(instance, "vkWaitSemaphores");
	pfn_vkSignalSemaphore = (PFN_vkSignalSemaphore)vkGetInstanceProcAddr(instance, "vkSignalSemaphore");

	pfn_vkGetBufferDeviceAddress = (PFN_vkGetBufferDeviceAddress)vkGetInstanceProcAddr(instance, "vkGetBufferDeviceAddress");
	pfn_vkGetBufferOpaqueCaptureAddress = (PFN_vkGetBufferOpaqueCaptureAddress)vkGetInstanceProcAddr(instance, "vkGetBufferOpaqueCaptureAddress");
	pfn_vkGetDeviceMemoryOpaqueCaptureAddress = (PFN_vkGetDeviceMemoryOpaqueCaptureAddress)vkGetInstanceProcAddr(instance, "vkGetDeviceMemoryOpaqueCaptureAddress");

#endif // defined(VK_VERSION_1_2)

#if defined(VK_VERSION_1_3)

	pfn_vkGetPhysicalDeviceToolProperties = (PFN_vkGetPhysicalDeviceToolProperties)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceToolProperties");

	pfn_vkCreatePrivateDataSlot = (PFN_vkCreatePrivateDataSlot)vkGetInstanceProcAddr(instance, "vkCreatePrivateDataSlot");
	pfn_vkDestroyPrivateDataSlot = (PFN_vkDestroyPrivateDataSlot)vkGetInstanceProcAddr(instance, "vkDestroyPrivateDataSlot");
	pfn_vkSetPrivateData = (PFN_vkSetPrivateData)vkGetInstanceProcAddr(instance, "vkSetPrivateData");
	pfn_vkGetPrivateData = (PFN_vkGetPrivateData)vkGetInstanceProcAddr(instance, "vkGetPrivateData");

	pfn_vkCmdSetEvent2 = (PFN_vkCmdSetEvent2)vkGetInstanceProcAddr(instance, "vkCmdSetEvent2");
	pfn_vkCmdResetEvent2 = (PFN_vkCmdResetEvent2)vkGetInstanceProcAddr(instance, "vkCmdResetEvent2");
	pfn_vkCmdWaitEvents2 = (PFN_vkCmdWaitEvents2)vkGetInstanceProcAddr(instance, "vkCmdWaitEvents2");
	pfn_vkCmdPipelineBarrier2 = (PFN_vkCmdPipelineBarrier2)vkGetInstanceProcAddr(instance, "vkCmdPipelineBarrier2");
	pfn_vkCmdWriteTimestamp2 = (PFN_vkCmdWriteTimestamp2)vkGetInstanceProcAddr(instance, "vkCmdWriteTimestamp2");
	pfn_vkQueueSubmit2 = (PFN_vkQueueSubmit2)vkGetInstanceProcAddr(instance, "vkQueueSubmit2");

	pfn_vkCmdCopyBuffer2 = (PFN_vkCmdCopyBuffer2)vkGetInstanceProcAddr(instance, "vkCmdCopyBuffer2");
	pfn_vkCmdCopyImage2 = (PFN_vkCmdCopyImage2)vkGetInstanceProcAddr(instance, "vkCmdCopyImage2");
	pfn_vkCmdCopyBufferToImage2 = (PFN_vkCmdCopyBufferToImage2)vkGetInstanceProcAddr(instance, "vkCmdCopyBufferToImage2");
	pfn_vkCmdCopyImageToBuffer2 = (PFN_vkCmdCopyImageToBuffer2)vkGetInstanceProcAddr(instance, "vkCmdCopyImageToBuffer2");
	pfn_vkCmdBlitImage2 = (PFN_vkCmdBlitImage2)vkGetInstanceProcAddr(instance, "vkCmdBlitImage2");
	pfn_vkCmdResolveImage2 = (PFN_vkCmdResolveImage2)vkGetInstanceProcAddr(instance, "vkCmdResolveImage2");

	pfn_vkCmdBeginRendering = (PFN_vkCmdBeginRendering)vkGetInstanceProcAddr(instance, "vkCmdBeginRendering");
	pfn_vkCmdEndRendering = (PFN_vkCmdEndRendering)vkGetInstanceProcAddr(instance, "vkCmdEndRendering");

	pfn_vkCmdSetCullMode = (PFN_vkCmdSetCullMode)vkGetInstanceProcAddr(instance, "vkCmdSetCullMode");
	pfn_vkCmdSetFrontFace = (PFN_vkCmdSetFrontFace)vkGetInstanceProcAddr(instance, "vkCmdSetFrontFace");
	pfn_vkCmdSetPrimitiveTopology = (PFN_vkCmdSetPrimitiveTopology)vkGetInstanceProcAddr(instance, "vkCmdSetPrimitiveTopology");
	pfn_vkCmdSetViewportWithCount = (PFN_vkCmdSetViewportWithCount)vkGetInstanceProcAddr(instance, "vkCmdSetViewportWithCount");
	pfn_vkCmdSetScissorWithCount = (PFN_vkCmdSetScissorWithCount)vkGetInstanceProcAddr(instance, "vkCmdSetScissorWithCount");
	pfn_vkCmdBindVertexBuffers2 = (PFN_vkCmdBindVertexBuffers2)vkGetInstanceProcAddr(instance, "vkCmdBindVertexBuffers2");
	pfn_vkCmdSetDepthTestEnable = (PFN_vkCmdSetDepthTestEnable)vkGetInstanceProcAddr(instance, "vkCmdSetDepthTestEnable");
	pfn_vkCmdSetDepthWriteEnable = (PFN_vkCmdSetDepthWriteEnable)vkGetInstanceProcAddr(instance, "vkCmdSetDepthWriteEnable");
	pfn_vkCmdSetDepthCompareOp = (PFN_vkCmdSetDepthCompareOp)vkGetInstanceProcAddr(instance, "vkCmdSetDepthCompareOp");
	pfn_vkCmdSetDepthBoundsTestEnable = (PFN_vkCmdSetDepthBoundsTestEnable)vkGetInstanceProcAddr(instance, "vkCmdSetDepthBoundsTestEnable");
	pfn_vkCmdSetStencilTestEnable = (PFN_vkCmdSetStencilTestEnable)vkGetInstanceProcAddr(instance, "vkCmdSetStencilTestEnable");
	pfn_vkCmdSetStencilOp = (PFN_vkCmdSetStencilOp)vkGetInstanceProcAddr(instance, "vkCmdSetStencilOp");

	pfn_vkCmdSetRasterizerDiscardEnable = (PFN_vkCmdSetRasterizerDiscardEnable)vkGetInstanceProcAddr(instance, "vkCmdSetRasterizerDiscardEnable");
	pfn_vkCmdSetDepthBiasEnable = (PFN_vkCmdSetDepthBiasEnable)vkGetInstanceProcAddr(instance, "vkCmdSetDepthBiasEnable");
	pfn_vkCmdSetPrimitiveRestartEnable = (PFN_vkCmdSetPrimitiveRestartEnable)vkGetInstanceProcAddr(instance, "vkCmdSetPrimitiveRestartEnable");

	pfn_vkGetDeviceBufferMemoryRequirements = (PFN_vkGetDeviceBufferMemoryRequirements)vkGetInstanceProcAddr(instance, "vkGetDeviceBufferMemoryRequirements");
	pfn_vkGetDeviceImageMemoryRequirements = (PFN_vkGetDeviceImageMemoryRequirements)vkGetInstanceProcAddr(instance, "vkGetDeviceImageMemoryRequirements");
	pfn_vkGetDeviceImageSparseMemoryRequirements = (PFN_vkGetDeviceImageSparseMemoryRequirements)vkGetInstanceProcAddr(instance, "vkGetDeviceImageSparseMemoryRequirements");

#endif // defined(VK_VERSION_1_3)

#if defined(VK_VERSION_1_4)

	pfn_vkCmdSetLineStipple = (PFN_vkCmdSetLineStipple)vkGetInstanceProcAddr(instance, "vkCmdSetLineStipple");

	pfn_vkMapMemory2 = (PFN_vkMapMemory2)vkGetInstanceProcAddr(instance, "vkMapMemory2");
	pfn_vkUnmapMemory2 = (PFN_vkUnmapMemory2)vkGetInstanceProcAddr(instance, "vkUnmapMemory2");

	pfn_vkCmdBindIndexBuffer2 = (PFN_vkCmdBindIndexBuffer2)vkGetInstanceProcAddr(instance, "vkCmdBindIndexBuffer2");
	pfn_vkGetRenderingAreaGranularity = (PFN_vkGetRenderingAreaGranularity)vkGetInstanceProcAddr(instance, "vkGetRenderingAreaGranularity");
	pfn_vkGetDeviceImageSubresourceLayout = (PFN_vkGetDeviceImageSubresourceLayout)vkGetInstanceProcAddr(instance, "vkGetDeviceImageSubresourceLayout");
	pfn_vkGetImageSubresourceLayout2 = (PFN_vkGetImageSubresourceLayout2)vkGetInstanceProcAddr(instance, "vkGetImageSubresourceLayout2");

	pfn_vkCmdPushDescriptorSet = (PFN_vkCmdPushDescriptorSet)vkGetInstanceProcAddr(instance, "vkCmdPushDescriptorSet");
	pfn_vkCmdPushDescriptorSetWithTemplate = (PFN_vkCmdPushDescriptorSetWithTemplate)vkGetInstanceProcAddr(instance, "vkCmdPushDescriptorSetWithTemplate");

	pfn_vkCmdSetRenderingAttachmentLocations = (PFN_vkCmdSetRenderingAttachmentLocations)vkGetInstanceProcAddr(instance, "vkCmdSetRenderingAttachmentLocations");
	pfn_vkCmdSetRenderingInputAttachmentIndices = (PFN_vkCmdSetRenderingInputAttachmentIndices)vkGetInstanceProcAddr(instance, "vkCmdSetRenderingInputAttachmentIndices");

	pfn_vkCmdBindDescriptorSets2 = (PFN_vkCmdBindDescriptorSets2)vkGetInstanceProcAddr(instance, "vkCmdBindDescriptorSets2");
	pfn_vkCmdPushConstants2 = (PFN_vkCmdPushConstants2)vkGetInstanceProcAddr(instance, "vkCmdPushConstants2");
	pfn_vkCmdPushDescriptorSet2 = (PFN_vkCmdPushDescriptorSet2)vkGetInstanceProcAddr(instance, "vkCmdPushDescriptorSet2");
	pfn_vkCmdPushDescriptorSetWithTemplate2 = (PFN_vkCmdPushDescriptorSetWithTemplate2)vkGetInstanceProcAddr(instance, "vkCmdPushDescriptorSetWithTemplate2");

	pfn_vkCopyMemoryToImage = (PFN_vkCopyMemoryToImage)vkGetInstanceProcAddr(instance, "vkCopyMemoryToImage");
	pfn_vkCopyImageToMemory = (PFN_vkCopyImageToMemory)vkGetInstanceProcAddr(instance, "vkCopyImageToMemory");
	pfn_vkCopyImageToImage = (PFN_vkCopyImageToImage)vkGetInstanceProcAddr(instance, "vkCopyImageToImage");
	pfn_vkTransitionImageLayout = (PFN_vkTransitionImageLayout)vkGetInstanceProcAddr(instance, "vkTransitionImageLayout");

#endif // defined(VK_VERSION_1_4)

#if defined(VKSC_VERSION_1_0)

	pfn_vkGetCommandPoolMemoryConsumption = (PFN_vkGetCommandPoolMemoryConsumption)vkGetInstanceProcAddr(instance, "vkGetCommandPoolMemoryConsumption");

	pfn_vkGetFaultData = (PFN_vkGetFaultData)vkGetInstanceProcAddr(instance, "vkGetFaultData");

#endif // defined(VKSC_VERSION_1_0)
#if defined(VK_AMDX_shader_enqueue)
	pfn_vkGetExecutionGraphPipelineScratchSizeAMDX = (PFN_vkGetExecutionGraphPipelineScratchSizeAMDX)vkGetInstanceProcAddr(instance, "vkGetExecutionGraphPipelineScratchSizeAMDX");
	pfn_vkCreateExecutionGraphPipelinesAMDX = (PFN_vkCreateExecutionGraphPipelinesAMDX)vkGetInstanceProcAddr(instance, "vkCreateExecutionGraphPipelinesAMDX");
	pfn_vkGetExecutionGraphPipelineNodeIndexAMDX = (PFN_vkGetExecutionGraphPipelineNodeIndexAMDX)vkGetInstanceProcAddr(instance, "vkGetExecutionGraphPipelineNodeIndexAMDX");
	pfn_vkCmdInitializeGraphScratchMemoryAMDX = (PFN_vkCmdInitializeGraphScratchMemoryAMDX)vkGetInstanceProcAddr(instance, "vkCmdInitializeGraphScratchMemoryAMDX");
	pfn_vkCmdDispatchGraphAMDX = (PFN_vkCmdDispatchGraphAMDX)vkGetInstanceProcAddr(instance, "vkCmdDispatchGraphAMDX");
	pfn_vkCmdDispatchGraphIndirectAMDX = (PFN_vkCmdDispatchGraphIndirectAMDX)vkGetInstanceProcAddr(instance, "vkCmdDispatchGraphIndirectAMDX");
	pfn_vkCmdDispatchGraphIndirectCountAMDX = (PFN_vkCmdDispatchGraphIndirectCountAMDX)vkGetInstanceProcAddr(instance, "vkCmdDispatchGraphIndirectCountAMDX");
#endif // defined(VK_AMDX_shader_enqueue)
#if defined(VK_AMD_anti_lag)
	pfn_vkAntiLagUpdateAMD = (PFN_vkAntiLagUpdateAMD)vkGetInstanceProcAddr(instance, "vkAntiLagUpdateAMD");
#endif // defined(VK_AMD_anti_lag)
#if defined(VK_AMD_buffer_marker)
	pfn_vkCmdWriteBufferMarkerAMD = (PFN_vkCmdWriteBufferMarkerAMD)vkGetInstanceProcAddr(instance, "vkCmdWriteBufferMarkerAMD");
	pfn_vkCmdWriteBufferMarker2AMD = (PFN_vkCmdWriteBufferMarker2AMD)vkGetInstanceProcAddr(instance, "vkCmdWriteBufferMarker2AMD");
#endif // defined(VK_AMD_buffer_marker)
#if defined(VK_AMD_display_native_hdr)
	pfn_vkSetLocalDimmingAMD = (PFN_vkSetLocalDimmingAMD)vkGetInstanceProcAddr(instance, "vkSetLocalDimmingAMD");
#endif // defined(VK_AMD_display_native_hdr)
#if defined(VK_AMD_draw_indirect_count)
	pfn_vkCmdDrawIndirectCountAMD = (PFN_vkCmdDrawIndirectCountAMD)vkGetInstanceProcAddr(instance, "vkCmdDrawIndirectCountAMD");
	pfn_vkCmdDrawIndexedIndirectCountAMD = (PFN_vkCmdDrawIndexedIndirectCountAMD)vkGetInstanceProcAddr(instance, "vkCmdDrawIndexedIndirectCountAMD");
#endif // defined(VK_AMD_draw_indirect_count)
#if defined(VK_AMD_shader_info)
	pfn_vkGetShaderInfoAMD = (PFN_vkGetShaderInfoAMD)vkGetInstanceProcAddr(instance, "vkGetShaderInfoAMD");
#endif // defined(VK_AMD_shader_info)
#if defined(VK_ANDROID_external_memory_android_hardware_buffer)
	pfn_vkGetAndroidHardwareBufferPropertiesANDROID = (PFN_vkGetAndroidHardwareBufferPropertiesANDROID)vkGetInstanceProcAddr(instance, "vkGetAndroidHardwareBufferPropertiesANDROID");
	pfn_vkGetMemoryAndroidHardwareBufferANDROID = (PFN_vkGetMemoryAndroidHardwareBufferANDROID)vkGetInstanceProcAddr(instance, "vkGetMemoryAndroidHardwareBufferANDROID");
#endif // defined(VK_ANDROID_external_memory_android_hardware_buffer)
#if defined(VK_ARM_data_graph)
	pfn_vkCreateDataGraphPipelinesARM = (PFN_vkCreateDataGraphPipelinesARM)vkGetInstanceProcAddr(instance, "vkCreateDataGraphPipelinesARM");
	pfn_vkGetDataGraphPipelinePropertiesARM = (PFN_vkGetDataGraphPipelinePropertiesARM)vkGetInstanceProcAddr(instance, "vkGetDataGraphPipelinePropertiesARM");
	pfn_vkGetDataGraphPipelineSessionBindPointRequirementsARM = (PFN_vkGetDataGraphPipelineSessionBindPointRequirementsARM)vkGetInstanceProcAddr(instance, "vkGetDataGraphPipelineSessionBindPointRequirementsARM");
	pfn_vkGetPhysicalDeviceQueueFamilyDataGraphProcessingEnginePropertiesARM = (PFN_vkGetPhysicalDeviceQueueFamilyDataGraphProcessingEnginePropertiesARM)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceQueueFamilyDataGraphProcessingEnginePropertiesARM");
	pfn_vkCreateDataGraphPipelineSessionARM = (PFN_vkCreateDataGraphPipelineSessionARM)vkGetInstanceProcAddr(instance, "vkCreateDataGraphPipelineSessionARM");
	pfn_vkGetDataGraphPipelineSessionMemoryRequirementsARM = (PFN_vkGetDataGraphPipelineSessionMemoryRequirementsARM)vkGetInstanceProcAddr(instance, "vkGetDataGraphPipelineSessionMemoryRequirementsARM");
	pfn_vkBindDataGraphPipelineSessionMemoryARM = (PFN_vkBindDataGraphPipelineSessionMemoryARM)vkGetInstanceProcAddr(instance, "vkBindDataGraphPipelineSessionMemoryARM");
	pfn_vkDestroyDataGraphPipelineSessionARM = (PFN_vkDestroyDataGraphPipelineSessionARM)vkGetInstanceProcAddr(instance, "vkDestroyDataGraphPipelineSessionARM");
	pfn_vkCmdDispatchDataGraphARM = (PFN_vkCmdDispatchDataGraphARM)vkGetInstanceProcAddr(instance, "vkCmdDispatchDataGraphARM");
	pfn_vkGetDataGraphPipelineAvailablePropertiesARM = (PFN_vkGetDataGraphPipelineAvailablePropertiesARM)vkGetInstanceProcAddr(instance, "vkGetDataGraphPipelineAvailablePropertiesARM");
	pfn_vkGetPhysicalDeviceQueueFamilyDataGraphPropertiesARM = (PFN_vkGetPhysicalDeviceQueueFamilyDataGraphPropertiesARM)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceQueueFamilyDataGraphPropertiesARM");
#endif // defined(VK_ARM_data_graph)
#if defined(VK_ARM_tensors)
	pfn_vkCreateTensorARM = (PFN_vkCreateTensorARM)vkGetInstanceProcAddr(instance, "vkCreateTensorARM");
	pfn_vkGetTensorViewOpaqueCaptureDescriptorDataARM = (PFN_vkGetTensorViewOpaqueCaptureDescriptorDataARM)vkGetInstanceProcAddr(instance, "vkGetTensorViewOpaqueCaptureDescriptorDataARM");
	pfn_vkDestroyTensorARM = (PFN_vkDestroyTensorARM)vkGetInstanceProcAddr(instance, "vkDestroyTensorARM");
	pfn_vkBindTensorMemoryARM = (PFN_vkBindTensorMemoryARM)vkGetInstanceProcAddr(instance, "vkBindTensorMemoryARM");
	pfn_vkGetTensorMemoryRequirementsARM = (PFN_vkGetTensorMemoryRequirementsARM)vkGetInstanceProcAddr(instance, "vkGetTensorMemoryRequirementsARM");
	pfn_vkGetPhysicalDeviceExternalTensorPropertiesARM = (PFN_vkGetPhysicalDeviceExternalTensorPropertiesARM)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceExternalTensorPropertiesARM");
	pfn_vkGetDeviceTensorMemoryRequirementsARM = (PFN_vkGetDeviceTensorMemoryRequirementsARM)vkGetInstanceProcAddr(instance, "vkGetDeviceTensorMemoryRequirementsARM");
	pfn_vkCreateTensorViewARM = (PFN_vkCreateTensorViewARM)vkGetInstanceProcAddr(instance, "vkCreateTensorViewARM");
	pfn_vkDestroyTensorViewARM = (PFN_vkDestroyTensorViewARM)vkGetInstanceProcAddr(instance, "vkDestroyTensorViewARM");
	pfn_vkCmdCopyTensorARM = (PFN_vkCmdCopyTensorARM)vkGetInstanceProcAddr(instance, "vkCmdCopyTensorARM");
	pfn_vkGetTensorOpaqueCaptureDescriptorDataARM = (PFN_vkGetTensorOpaqueCaptureDescriptorDataARM)vkGetInstanceProcAddr(instance, "vkGetTensorOpaqueCaptureDescriptorDataARM");
#endif // defined(VK_ARM_tensors)
#if defined(VK_EXT_acquire_drm_display)
	pfn_vkAcquireDrmDisplayEXT = (PFN_vkAcquireDrmDisplayEXT)vkGetInstanceProcAddr(instance, "vkAcquireDrmDisplayEXT");
	pfn_vkGetDrmDisplayEXT = (PFN_vkGetDrmDisplayEXT)vkGetInstanceProcAddr(instance, "vkGetDrmDisplayEXT");
#endif // defined(VK_EXT_acquire_drm_display)
#if defined(VK_EXT_acquire_xlib_display)
	pfn_vkAcquireXlibDisplayEXT = (PFN_vkAcquireXlibDisplayEXT)vkGetInstanceProcAddr(instance, "vkAcquireXlibDisplayEXT");
	pfn_vkGetRandROutputDisplayEXT = (PFN_vkGetRandROutputDisplayEXT)vkGetInstanceProcAddr(instance, "vkGetRandROutputDisplayEXT");
#endif // defined(VK_EXT_acquire_xlib_display)
#if defined(VK_EXT_attachment_feedback_loop_dynamic_state)
	pfn_vkCmdSetAttachmentFeedbackLoopEnableEXT = (PFN_vkCmdSetAttachmentFeedbackLoopEnableEXT)vkGetInstanceProcAddr(instance, "vkCmdSetAttachmentFeedbackLoopEnableEXT");
#endif // defined(VK_EXT_attachment_feedback_loop_dynamic_state)
#if defined(VK_EXT_buffer_device_address)
	pfn_vkGetBufferDeviceAddressEXT = (PFN_vkGetBufferDeviceAddressEXT)vkGetInstanceProcAddr(instance, "vkGetBufferDeviceAddressEXT");
#endif // defined(VK_EXT_buffer_device_address)
#if defined(VK_EXT_calibrated_timestamps)
	pfn_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT = (PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceCalibrateableTimeDomainsEXT");
	pfn_vkGetCalibratedTimestampsEXT = (PFN_vkGetCalibratedTimestampsEXT)vkGetInstanceProcAddr(instance, "vkGetCalibratedTimestampsEXT");
#endif // defined(VK_EXT_calibrated_timestamps)
#if defined(VK_EXT_color_write_enable)
	pfn_vkCmdSetColorWriteEnableEXT = (PFN_vkCmdSetColorWriteEnableEXT)vkGetInstanceProcAddr(instance, "vkCmdSetColorWriteEnableEXT");
#endif // defined(VK_EXT_color_write_enable)
#if defined(VK_EXT_conditional_rendering)
	pfn_vkCmdBeginConditionalRenderingEXT = (PFN_vkCmdBeginConditionalRenderingEXT)vkGetInstanceProcAddr(instance, "vkCmdBeginConditionalRenderingEXT");
	pfn_vkCmdEndConditionalRenderingEXT = (PFN_vkCmdEndConditionalRenderingEXT)vkGetInstanceProcAddr(instance, "vkCmdEndConditionalRenderingEXT");
#endif // defined(VK_EXT_conditional_rendering)
#if defined(VK_EXT_debug_marker)
	pfn_vkCmdDebugMarkerEndEXT = (PFN_vkCmdDebugMarkerEndEXT)vkGetInstanceProcAddr(instance, "vkCmdDebugMarkerEndEXT");
	pfn_vkCmdDebugMarkerBeginEXT = (PFN_vkCmdDebugMarkerBeginEXT)vkGetInstanceProcAddr(instance, "vkCmdDebugMarkerBeginEXT");
	pfn_vkDebugMarkerSetObjectTagEXT = (PFN_vkDebugMarkerSetObjectTagEXT)vkGetInstanceProcAddr(instance, "vkDebugMarkerSetObjectTagEXT");
	pfn_vkDebugMarkerSetObjectNameEXT = (PFN_vkDebugMarkerSetObjectNameEXT)vkGetInstanceProcAddr(instance, "vkDebugMarkerSetObjectNameEXT");
	pfn_vkCmdDebugMarkerInsertEXT = (PFN_vkCmdDebugMarkerInsertEXT)vkGetInstanceProcAddr(instance, "vkCmdDebugMarkerInsertEXT");
#endif // defined(VK_EXT_debug_marker)
#if defined(VK_EXT_debug_report)
	pfn_vkDestroyDebugReportCallbackEXT = (PFN_vkDestroyDebugReportCallbackEXT)vkGetInstanceProcAddr(instance, "vkDestroyDebugReportCallbackEXT");
	pfn_vkDebugReportMessageEXT = (PFN_vkDebugReportMessageEXT)vkGetInstanceProcAddr(instance, "vkDebugReportMessageEXT");
	pfn_vkCreateDebugReportCallbackEXT = (PFN_vkCreateDebugReportCallbackEXT)vkGetInstanceProcAddr(instance, "vkCreateDebugReportCallbackEXT");
#endif // defined(VK_EXT_debug_report)
#if defined(VK_EXT_debug_utils)
	pfn_vkCmdInsertDebugUtilsLabelEXT = (PFN_vkCmdInsertDebugUtilsLabelEXT)vkGetInstanceProcAddr(instance, "vkCmdInsertDebugUtilsLabelEXT");
	pfn_vkCmdEndDebugUtilsLabelEXT = (PFN_vkCmdEndDebugUtilsLabelEXT)vkGetInstanceProcAddr(instance, "vkCmdEndDebugUtilsLabelEXT");
	pfn_vkSubmitDebugUtilsMessageEXT = (PFN_vkSubmitDebugUtilsMessageEXT)vkGetInstanceProcAddr(instance, "vkSubmitDebugUtilsMessageEXT");
	pfn_vkSetDebugUtilsObjectTagEXT = (PFN_vkSetDebugUtilsObjectTagEXT)vkGetInstanceProcAddr(instance, "vkSetDebugUtilsObjectTagEXT");
	pfn_vkSetDebugUtilsObjectNameEXT = (PFN_vkSetDebugUtilsObjectNameEXT)vkGetInstanceProcAddr(instance, "vkSetDebugUtilsObjectNameEXT");
	pfn_vkQueueInsertDebugUtilsLabelEXT = (PFN_vkQueueInsertDebugUtilsLabelEXT)vkGetInstanceProcAddr(instance, "vkQueueInsertDebugUtilsLabelEXT");
	pfn_vkQueueBeginDebugUtilsLabelEXT = (PFN_vkQueueBeginDebugUtilsLabelEXT)vkGetInstanceProcAddr(instance, "vkQueueBeginDebugUtilsLabelEXT");
	pfn_vkQueueEndDebugUtilsLabelEXT = (PFN_vkQueueEndDebugUtilsLabelEXT)vkGetInstanceProcAddr(instance, "vkQueueEndDebugUtilsLabelEXT");
	pfn_vkCmdBeginDebugUtilsLabelEXT = (PFN_vkCmdBeginDebugUtilsLabelEXT)vkGetInstanceProcAddr(instance, "vkCmdBeginDebugUtilsLabelEXT");
	pfn_vkCreateDebugUtilsMessengerEXT = (PFN_vkCreateDebugUtilsMessengerEXT)vkGetInstanceProcAddr(instance, "vkCreateDebugUtilsMessengerEXT");
	pfn_vkDestroyDebugUtilsMessengerEXT = (PFN_vkDestroyDebugUtilsMessengerEXT)vkGetInstanceProcAddr(instance, "vkDestroyDebugUtilsMessengerEXT");
#endif // defined(VK_EXT_debug_utils)
#if defined(VK_EXT_depth_bias_control)
	pfn_vkCmdSetDepthBias2EXT = (PFN_vkCmdSetDepthBias2EXT)vkGetInstanceProcAddr(instance, "vkCmdSetDepthBias2EXT");
#endif // defined(VK_EXT_depth_bias_control)
#if defined(VK_EXT_depth_clamp_control) || defined(VK_EXT_shader_object)
	pfn_vkCmdSetDepthClampRangeEXT = (PFN_vkCmdSetDepthClampRangeEXT)vkGetInstanceProcAddr(instance, "vkCmdSetDepthClampRangeEXT");
#endif // defined(VK_EXT_depth_clamp_control) || defined(VK_EXT_shader_object)
#if defined(VK_EXT_descriptor_buffer)
	pfn_vkGetImageOpaqueCaptureDescriptorDataEXT = (PFN_vkGetImageOpaqueCaptureDescriptorDataEXT)vkGetInstanceProcAddr(instance, "vkGetImageOpaqueCaptureDescriptorDataEXT");
	pfn_vkCmdBindDescriptorBuffersEXT = (PFN_vkCmdBindDescriptorBuffersEXT)vkGetInstanceProcAddr(instance, "vkCmdBindDescriptorBuffersEXT");
	pfn_vkCmdSetDescriptorBufferOffsetsEXT = (PFN_vkCmdSetDescriptorBufferOffsetsEXT)vkGetInstanceProcAddr(instance, "vkCmdSetDescriptorBufferOffsetsEXT");
	pfn_vkGetSamplerOpaqueCaptureDescriptorDataEXT = (PFN_vkGetSamplerOpaqueCaptureDescriptorDataEXT)vkGetInstanceProcAddr(instance, "vkGetSamplerOpaqueCaptureDescriptorDataEXT");
	pfn_vkGetDescriptorSetLayoutSizeEXT = (PFN_vkGetDescriptorSetLayoutSizeEXT)vkGetInstanceProcAddr(instance, "vkGetDescriptorSetLayoutSizeEXT");
	pfn_vkGetDescriptorSetLayoutBindingOffsetEXT = (PFN_vkGetDescriptorSetLayoutBindingOffsetEXT)vkGetInstanceProcAddr(instance, "vkGetDescriptorSetLayoutBindingOffsetEXT");
	pfn_vkGetDescriptorEXT = (PFN_vkGetDescriptorEXT)vkGetInstanceProcAddr(instance, "vkGetDescriptorEXT");
	pfn_vkCmdBindDescriptorBufferEmbeddedSamplersEXT = (PFN_vkCmdBindDescriptorBufferEmbeddedSamplersEXT)vkGetInstanceProcAddr(instance, "vkCmdBindDescriptorBufferEmbeddedSamplersEXT");
	pfn_vkGetBufferOpaqueCaptureDescriptorDataEXT = (PFN_vkGetBufferOpaqueCaptureDescriptorDataEXT)vkGetInstanceProcAddr(instance, "vkGetBufferOpaqueCaptureDescriptorDataEXT");
	pfn_vkGetImageViewOpaqueCaptureDescriptorDataEXT = (PFN_vkGetImageViewOpaqueCaptureDescriptorDataEXT)vkGetInstanceProcAddr(instance, "vkGetImageViewOpaqueCaptureDescriptorDataEXT");
	pfn_vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT = (PFN_vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT)vkGetInstanceProcAddr(instance, "vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT");
#endif // defined(VK_EXT_descriptor_buffer)
#if defined(VK_EXT_device_fault)
	pfn_vkGetDeviceFaultInfoEXT = (PFN_vkGetDeviceFaultInfoEXT)vkGetInstanceProcAddr(instance, "vkGetDeviceFaultInfoEXT");
#endif // defined(VK_EXT_device_fault)
#if defined(VK_EXT_device_generated_commands)
	pfn_vkCreateIndirectCommandsLayoutEXT = (PFN_vkCreateIndirectCommandsLayoutEXT)vkGetInstanceProcAddr(instance, "vkCreateIndirectCommandsLayoutEXT");
	pfn_vkDestroyIndirectCommandsLayoutEXT = (PFN_vkDestroyIndirectCommandsLayoutEXT)vkGetInstanceProcAddr(instance, "vkDestroyIndirectCommandsLayoutEXT");
	pfn_vkUpdateIndirectExecutionSetShaderEXT = (PFN_vkUpdateIndirectExecutionSetShaderEXT)vkGetInstanceProcAddr(instance, "vkUpdateIndirectExecutionSetShaderEXT");
	pfn_vkCmdPreprocessGeneratedCommandsEXT = (PFN_vkCmdPreprocessGeneratedCommandsEXT)vkGetInstanceProcAddr(instance, "vkCmdPreprocessGeneratedCommandsEXT");
	pfn_vkUpdateIndirectExecutionSetPipelineEXT = (PFN_vkUpdateIndirectExecutionSetPipelineEXT)vkGetInstanceProcAddr(instance, "vkUpdateIndirectExecutionSetPipelineEXT");
	pfn_vkGetGeneratedCommandsMemoryRequirementsEXT = (PFN_vkGetGeneratedCommandsMemoryRequirementsEXT)vkGetInstanceProcAddr(instance, "vkGetGeneratedCommandsMemoryRequirementsEXT");
	pfn_vkCmdExecuteGeneratedCommandsEXT = (PFN_vkCmdExecuteGeneratedCommandsEXT)vkGetInstanceProcAddr(instance, "vkCmdExecuteGeneratedCommandsEXT");
	pfn_vkCreateIndirectExecutionSetEXT = (PFN_vkCreateIndirectExecutionSetEXT)vkGetInstanceProcAddr(instance, "vkCreateIndirectExecutionSetEXT");
	pfn_vkDestroyIndirectExecutionSetEXT = (PFN_vkDestroyIndirectExecutionSetEXT)vkGetInstanceProcAddr(instance, "vkDestroyIndirectExecutionSetEXT");
#endif // defined(VK_EXT_device_generated_commands)
#if defined(VK_EXT_direct_mode_display)
	pfn_vkReleaseDisplayEXT = (PFN_vkReleaseDisplayEXT)vkGetInstanceProcAddr(instance, "vkReleaseDisplayEXT");
#endif // defined(VK_EXT_direct_mode_display)
#if defined(VK_EXT_directfb_surface)
	pfn_vkGetPhysicalDeviceDirectFBPresentationSupportEXT = (PFN_vkGetPhysicalDeviceDirectFBPresentationSupportEXT)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceDirectFBPresentationSupportEXT");
	pfn_vkCreateDirectFBSurfaceEXT = (PFN_vkCreateDirectFBSurfaceEXT)vkGetInstanceProcAddr(instance, "vkCreateDirectFBSurfaceEXT");
#endif // defined(VK_EXT_directfb_surface)
#if defined(VK_EXT_discard_rectangles)
	pfn_vkCmdSetDiscardRectangleEXT = (PFN_vkCmdSetDiscardRectangleEXT)vkGetInstanceProcAddr(instance, "vkCmdSetDiscardRectangleEXT");
	pfn_vkCmdSetDiscardRectangleEnableEXT = (PFN_vkCmdSetDiscardRectangleEnableEXT)vkGetInstanceProcAddr(instance, "vkCmdSetDiscardRectangleEnableEXT");
	pfn_vkCmdSetDiscardRectangleModeEXT = (PFN_vkCmdSetDiscardRectangleModeEXT)vkGetInstanceProcAddr(instance, "vkCmdSetDiscardRectangleModeEXT");
#endif // defined(VK_EXT_discard_rectangles)
#if defined(VK_EXT_display_control)
	pfn_vkDisplayPowerControlEXT = (PFN_vkDisplayPowerControlEXT)vkGetInstanceProcAddr(instance, "vkDisplayPowerControlEXT");
	pfn_vkGetSwapchainCounterEXT = (PFN_vkGetSwapchainCounterEXT)vkGetInstanceProcAddr(instance, "vkGetSwapchainCounterEXT");
	pfn_vkRegisterDeviceEventEXT = (PFN_vkRegisterDeviceEventEXT)vkGetInstanceProcAddr(instance, "vkRegisterDeviceEventEXT");
	pfn_vkRegisterDisplayEventEXT = (PFN_vkRegisterDisplayEventEXT)vkGetInstanceProcAddr(instance, "vkRegisterDisplayEventEXT");
#endif // defined(VK_EXT_display_control)
#if defined(VK_EXT_display_surface_counter)
	pfn_vkGetPhysicalDeviceSurfaceCapabilities2EXT = (PFN_vkGetPhysicalDeviceSurfaceCapabilities2EXT)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSurfaceCapabilities2EXT");
#endif // defined(VK_EXT_display_surface_counter)
#if defined(VK_EXT_extended_dynamic_state) || defined(VK_EXT_shader_object)
	pfn_vkCmdBindVertexBuffers2EXT = (PFN_vkCmdBindVertexBuffers2EXT)vkGetInstanceProcAddr(instance, "vkCmdBindVertexBuffers2EXT");
	pfn_vkCmdSetCullModeEXT = (PFN_vkCmdSetCullModeEXT)vkGetInstanceProcAddr(instance, "vkCmdSetCullModeEXT");
	pfn_vkCmdSetDepthTestEnableEXT = (PFN_vkCmdSetDepthTestEnableEXT)vkGetInstanceProcAddr(instance, "vkCmdSetDepthTestEnableEXT");
	pfn_vkCmdSetFrontFaceEXT = (PFN_vkCmdSetFrontFaceEXT)vkGetInstanceProcAddr(instance, "vkCmdSetFrontFaceEXT");
	pfn_vkCmdSetPrimitiveTopologyEXT = (PFN_vkCmdSetPrimitiveTopologyEXT)vkGetInstanceProcAddr(instance, "vkCmdSetPrimitiveTopologyEXT");
	pfn_vkCmdSetViewportWithCountEXT = (PFN_vkCmdSetViewportWithCountEXT)vkGetInstanceProcAddr(instance, "vkCmdSetViewportWithCountEXT");
	pfn_vkCmdSetScissorWithCountEXT = (PFN_vkCmdSetScissorWithCountEXT)vkGetInstanceProcAddr(instance, "vkCmdSetScissorWithCountEXT");
	pfn_vkCmdSetDepthWriteEnableEXT = (PFN_vkCmdSetDepthWriteEnableEXT)vkGetInstanceProcAddr(instance, "vkCmdSetDepthWriteEnableEXT");
	pfn_vkCmdSetDepthCompareOpEXT = (PFN_vkCmdSetDepthCompareOpEXT)vkGetInstanceProcAddr(instance, "vkCmdSetDepthCompareOpEXT");
	pfn_vkCmdSetDepthBoundsTestEnableEXT = (PFN_vkCmdSetDepthBoundsTestEnableEXT)vkGetInstanceProcAddr(instance, "vkCmdSetDepthBoundsTestEnableEXT");
	pfn_vkCmdSetStencilTestEnableEXT = (PFN_vkCmdSetStencilTestEnableEXT)vkGetInstanceProcAddr(instance, "vkCmdSetStencilTestEnableEXT");
	pfn_vkCmdSetStencilOpEXT = (PFN_vkCmdSetStencilOpEXT)vkGetInstanceProcAddr(instance, "vkCmdSetStencilOpEXT");
#endif // defined(VK_EXT_extended_dynamic_state) || defined(VK_EXT_shader_object)
#if defined(VK_EXT_extended_dynamic_state2) || defined(VK_EXT_shader_object)
	pfn_vkCmdSetDepthBiasEnableEXT = (PFN_vkCmdSetDepthBiasEnableEXT)vkGetInstanceProcAddr(instance, "vkCmdSetDepthBiasEnableEXT");
	pfn_vkCmdSetPrimitiveRestartEnableEXT = (PFN_vkCmdSetPrimitiveRestartEnableEXT)vkGetInstanceProcAddr(instance, "vkCmdSetPrimitiveRestartEnableEXT");
	pfn_vkCmdSetLogicOpEXT = (PFN_vkCmdSetLogicOpEXT)vkGetInstanceProcAddr(instance, "vkCmdSetLogicOpEXT");
	pfn_vkCmdSetPatchControlPointsEXT = (PFN_vkCmdSetPatchControlPointsEXT)vkGetInstanceProcAddr(instance, "vkCmdSetPatchControlPointsEXT");
	pfn_vkCmdSetRasterizerDiscardEnableEXT = (PFN_vkCmdSetRasterizerDiscardEnableEXT)vkGetInstanceProcAddr(instance, "vkCmdSetRasterizerDiscardEnableEXT");
#endif // defined(VK_EXT_extended_dynamic_state2) || defined(VK_EXT_shader_object)
#if defined(VK_EXT_extended_dynamic_state3) || defined(VK_EXT_shader_object)
	pfn_vkCmdSetLineStippleEnableEXT = (PFN_vkCmdSetLineStippleEnableEXT)vkGetInstanceProcAddr(instance, "vkCmdSetLineStippleEnableEXT");
	pfn_vkCmdSetRasterizationSamplesEXT = (PFN_vkCmdSetRasterizationSamplesEXT)vkGetInstanceProcAddr(instance, "vkCmdSetRasterizationSamplesEXT");
	pfn_vkCmdSetRepresentativeFragmentTestEnableNV = (PFN_vkCmdSetRepresentativeFragmentTestEnableNV)vkGetInstanceProcAddr(instance, "vkCmdSetRepresentativeFragmentTestEnableNV");
	pfn_vkCmdSetPolygonModeEXT = (PFN_vkCmdSetPolygonModeEXT)vkGetInstanceProcAddr(instance, "vkCmdSetPolygonModeEXT");
	pfn_vkCmdSetDepthClipNegativeOneToOneEXT = (PFN_vkCmdSetDepthClipNegativeOneToOneEXT)vkGetInstanceProcAddr(instance, "vkCmdSetDepthClipNegativeOneToOneEXT");
	pfn_vkCmdSetCoverageModulationTableEnableNV = (PFN_vkCmdSetCoverageModulationTableEnableNV)vkGetInstanceProcAddr(instance, "vkCmdSetCoverageModulationTableEnableNV");
	pfn_vkCmdSetProvokingVertexModeEXT = (PFN_vkCmdSetProvokingVertexModeEXT)vkGetInstanceProcAddr(instance, "vkCmdSetProvokingVertexModeEXT");
	pfn_vkCmdSetDepthClipEnableEXT = (PFN_vkCmdSetDepthClipEnableEXT)vkGetInstanceProcAddr(instance, "vkCmdSetDepthClipEnableEXT");
	pfn_vkCmdSetShadingRateImageEnableNV = (PFN_vkCmdSetShadingRateImageEnableNV)vkGetInstanceProcAddr(instance, "vkCmdSetShadingRateImageEnableNV");
	pfn_vkCmdSetCoverageToColorLocationNV = (PFN_vkCmdSetCoverageToColorLocationNV)vkGetInstanceProcAddr(instance, "vkCmdSetCoverageToColorLocationNV");
	pfn_vkCmdSetSampleLocationsEnableEXT = (PFN_vkCmdSetSampleLocationsEnableEXT)vkGetInstanceProcAddr(instance, "vkCmdSetSampleLocationsEnableEXT");
	pfn_vkCmdSetLineRasterizationModeEXT = (PFN_vkCmdSetLineRasterizationModeEXT)vkGetInstanceProcAddr(instance, "vkCmdSetLineRasterizationModeEXT");
	pfn_vkCmdSetConservativeRasterizationModeEXT = (PFN_vkCmdSetConservativeRasterizationModeEXT)vkGetInstanceProcAddr(instance, "vkCmdSetConservativeRasterizationModeEXT");
	pfn_vkCmdSetDepthClampEnableEXT = (PFN_vkCmdSetDepthClampEnableEXT)vkGetInstanceProcAddr(instance, "vkCmdSetDepthClampEnableEXT");
	pfn_vkCmdSetColorWriteMaskEXT = (PFN_vkCmdSetColorWriteMaskEXT)vkGetInstanceProcAddr(instance, "vkCmdSetColorWriteMaskEXT");
	pfn_vkCmdSetColorBlendAdvancedEXT = (PFN_vkCmdSetColorBlendAdvancedEXT)vkGetInstanceProcAddr(instance, "vkCmdSetColorBlendAdvancedEXT");
	pfn_vkCmdSetLogicOpEnableEXT = (PFN_vkCmdSetLogicOpEnableEXT)vkGetInstanceProcAddr(instance, "vkCmdSetLogicOpEnableEXT");
	pfn_vkCmdSetAlphaToOneEnableEXT = (PFN_vkCmdSetAlphaToOneEnableEXT)vkGetInstanceProcAddr(instance, "vkCmdSetAlphaToOneEnableEXT");
	pfn_vkCmdSetViewportWScalingEnableNV = (PFN_vkCmdSetViewportWScalingEnableNV)vkGetInstanceProcAddr(instance, "vkCmdSetViewportWScalingEnableNV");
	pfn_vkCmdSetRasterizationStreamEXT = (PFN_vkCmdSetRasterizationStreamEXT)vkGetInstanceProcAddr(instance, "vkCmdSetRasterizationStreamEXT");
	pfn_vkCmdSetColorBlendEquationEXT = (PFN_vkCmdSetColorBlendEquationEXT)vkGetInstanceProcAddr(instance, "vkCmdSetColorBlendEquationEXT");
	pfn_vkCmdSetSampleMaskEXT = (PFN_vkCmdSetSampleMaskEXT)vkGetInstanceProcAddr(instance, "vkCmdSetSampleMaskEXT");
	pfn_vkCmdSetAlphaToCoverageEnableEXT = (PFN_vkCmdSetAlphaToCoverageEnableEXT)vkGetInstanceProcAddr(instance, "vkCmdSetAlphaToCoverageEnableEXT");
	pfn_vkCmdSetColorBlendEnableEXT = (PFN_vkCmdSetColorBlendEnableEXT)vkGetInstanceProcAddr(instance, "vkCmdSetColorBlendEnableEXT");
	pfn_vkCmdSetTessellationDomainOriginEXT = (PFN_vkCmdSetTessellationDomainOriginEXT)vkGetInstanceProcAddr(instance, "vkCmdSetTessellationDomainOriginEXT");
	pfn_vkCmdSetExtraPrimitiveOverestimationSizeEXT = (PFN_vkCmdSetExtraPrimitiveOverestimationSizeEXT)vkGetInstanceProcAddr(instance, "vkCmdSetExtraPrimitiveOverestimationSizeEXT");
	pfn_vkCmdSetViewportSwizzleNV = (PFN_vkCmdSetViewportSwizzleNV)vkGetInstanceProcAddr(instance, "vkCmdSetViewportSwizzleNV");
	pfn_vkCmdSetCoverageToColorEnableNV = (PFN_vkCmdSetCoverageToColorEnableNV)vkGetInstanceProcAddr(instance, "vkCmdSetCoverageToColorEnableNV");
	pfn_vkCmdSetCoverageModulationModeNV = (PFN_vkCmdSetCoverageModulationModeNV)vkGetInstanceProcAddr(instance, "vkCmdSetCoverageModulationModeNV");
	pfn_vkCmdSetCoverageModulationTableNV = (PFN_vkCmdSetCoverageModulationTableNV)vkGetInstanceProcAddr(instance, "vkCmdSetCoverageModulationTableNV");
	pfn_vkCmdSetCoverageReductionModeNV = (PFN_vkCmdSetCoverageReductionModeNV)vkGetInstanceProcAddr(instance, "vkCmdSetCoverageReductionModeNV");
#endif // defined(VK_EXT_extended_dynamic_state3) || defined(VK_EXT_shader_object)
#if defined(VK_EXT_external_memory_host)
	pfn_vkGetMemoryHostPointerPropertiesEXT = (PFN_vkGetMemoryHostPointerPropertiesEXT)vkGetInstanceProcAddr(instance, "vkGetMemoryHostPointerPropertiesEXT");
#endif // defined(VK_EXT_external_memory_host)
#if defined(VK_EXT_external_memory_metal)
	pfn_vkGetMemoryMetalHandleEXT = (PFN_vkGetMemoryMetalHandleEXT)vkGetInstanceProcAddr(instance, "vkGetMemoryMetalHandleEXT");
	pfn_vkGetMemoryMetalHandlePropertiesEXT = (PFN_vkGetMemoryMetalHandlePropertiesEXT)vkGetInstanceProcAddr(instance, "vkGetMemoryMetalHandlePropertiesEXT");
#endif // defined(VK_EXT_external_memory_metal)
#if defined(VK_EXT_fragment_density_map_offset)
	pfn_vkCmdEndRendering2EXT = (PFN_vkCmdEndRendering2EXT)vkGetInstanceProcAddr(instance, "vkCmdEndRendering2EXT");
#endif // defined(VK_EXT_fragment_density_map_offset)
#if defined(VK_EXT_full_screen_exclusive)
	pfn_vkGetDeviceGroupSurfacePresentModes2EXT = (PFN_vkGetDeviceGroupSurfacePresentModes2EXT)vkGetInstanceProcAddr(instance, "vkGetDeviceGroupSurfacePresentModes2EXT");
	pfn_vkGetPhysicalDeviceSurfacePresentModes2EXT = (PFN_vkGetPhysicalDeviceSurfacePresentModes2EXT)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSurfacePresentModes2EXT");
	pfn_vkAcquireFullScreenExclusiveModeEXT = (PFN_vkAcquireFullScreenExclusiveModeEXT)vkGetInstanceProcAddr(instance, "vkAcquireFullScreenExclusiveModeEXT");
	pfn_vkReleaseFullScreenExclusiveModeEXT = (PFN_vkReleaseFullScreenExclusiveModeEXT)vkGetInstanceProcAddr(instance, "vkReleaseFullScreenExclusiveModeEXT");
#endif // defined(VK_EXT_full_screen_exclusive)
#if defined(VK_EXT_hdr_metadata)
	pfn_vkSetHdrMetadataEXT = (PFN_vkSetHdrMetadataEXT)vkGetInstanceProcAddr(instance, "vkSetHdrMetadataEXT");
#endif // defined(VK_EXT_hdr_metadata)
#if defined(VK_EXT_headless_surface)
	pfn_vkCreateHeadlessSurfaceEXT = (PFN_vkCreateHeadlessSurfaceEXT)vkGetInstanceProcAddr(instance, "vkCreateHeadlessSurfaceEXT");
#endif // defined(VK_EXT_headless_surface)
#if defined(VK_EXT_host_image_copy)
	pfn_vkCopyImageToImageEXT = (PFN_vkCopyImageToImageEXT)vkGetInstanceProcAddr(instance, "vkCopyImageToImageEXT");
	pfn_vkCopyMemoryToImageEXT = (PFN_vkCopyMemoryToImageEXT)vkGetInstanceProcAddr(instance, "vkCopyMemoryToImageEXT");
	pfn_vkCopyImageToMemoryEXT = (PFN_vkCopyImageToMemoryEXT)vkGetInstanceProcAddr(instance, "vkCopyImageToMemoryEXT");
	pfn_vkTransitionImageLayoutEXT = (PFN_vkTransitionImageLayoutEXT)vkGetInstanceProcAddr(instance, "vkTransitionImageLayoutEXT");
#endif // defined(VK_EXT_host_image_copy)
#if defined(VK_EXT_host_image_copy) || defined(VK_EXT_image_compression_control)
	pfn_vkGetImageSubresourceLayout2EXT = (PFN_vkGetImageSubresourceLayout2EXT)vkGetInstanceProcAddr(instance, "vkGetImageSubresourceLayout2EXT");
#endif // defined(VK_EXT_host_image_copy) || defined(VK_EXT_image_compression_control)
#if defined(VK_EXT_host_query_reset)
	pfn_vkResetQueryPoolEXT = (PFN_vkResetQueryPoolEXT)vkGetInstanceProcAddr(instance, "vkResetQueryPoolEXT");
#endif // defined(VK_EXT_host_query_reset)
#if defined(VK_EXT_image_drm_format_modifier)
	pfn_vkGetImageDrmFormatModifierPropertiesEXT = (PFN_vkGetImageDrmFormatModifierPropertiesEXT)vkGetInstanceProcAddr(instance, "vkGetImageDrmFormatModifierPropertiesEXT");
#endif // defined(VK_EXT_image_drm_format_modifier)
#if defined(VK_EXT_line_rasterization)
	pfn_vkCmdSetLineStippleEXT = (PFN_vkCmdSetLineStippleEXT)vkGetInstanceProcAddr(instance, "vkCmdSetLineStippleEXT");
#endif // defined(VK_EXT_line_rasterization)
#if defined(VK_EXT_mesh_shader)
	pfn_vkCmdDrawMeshTasksEXT = (PFN_vkCmdDrawMeshTasksEXT)vkGetInstanceProcAddr(instance, "vkCmdDrawMeshTasksEXT");
	pfn_vkCmdDrawMeshTasksIndirectEXT = (PFN_vkCmdDrawMeshTasksIndirectEXT)vkGetInstanceProcAddr(instance, "vkCmdDrawMeshTasksIndirectEXT");
	pfn_vkCmdDrawMeshTasksIndirectCountEXT = (PFN_vkCmdDrawMeshTasksIndirectCountEXT)vkGetInstanceProcAddr(instance, "vkCmdDrawMeshTasksIndirectCountEXT");
#endif // defined(VK_EXT_mesh_shader)
#if defined(VK_EXT_metal_objects)
	pfn_vkExportMetalObjectsEXT = (PFN_vkExportMetalObjectsEXT)vkGetInstanceProcAddr(instance, "vkExportMetalObjectsEXT");
#endif // defined(VK_EXT_metal_objects)
#if defined(VK_EXT_metal_surface)
	pfn_vkCreateMetalSurfaceEXT = (PFN_vkCreateMetalSurfaceEXT)vkGetInstanceProcAddr(instance, "vkCreateMetalSurfaceEXT");
#endif // defined(VK_EXT_metal_surface)
#if defined(VK_EXT_multi_draw)
	pfn_vkCmdDrawMultiEXT = (PFN_vkCmdDrawMultiEXT)vkGetInstanceProcAddr(instance, "vkCmdDrawMultiEXT");
	pfn_vkCmdDrawMultiIndexedEXT = (PFN_vkCmdDrawMultiIndexedEXT)vkGetInstanceProcAddr(instance, "vkCmdDrawMultiIndexedEXT");
#endif // defined(VK_EXT_multi_draw)
#if defined(VK_EXT_opacity_micromap)
	pfn_vkGetDeviceMicromapCompatibilityEXT = (PFN_vkGetDeviceMicromapCompatibilityEXT)vkGetInstanceProcAddr(instance, "vkGetDeviceMicromapCompatibilityEXT");
	pfn_vkGetMicromapBuildSizesEXT = (PFN_vkGetMicromapBuildSizesEXT)vkGetInstanceProcAddr(instance, "vkGetMicromapBuildSizesEXT");
	pfn_vkCopyMicromapEXT = (PFN_vkCopyMicromapEXT)vkGetInstanceProcAddr(instance, "vkCopyMicromapEXT");
	pfn_vkCopyMemoryToMicromapEXT = (PFN_vkCopyMemoryToMicromapEXT)vkGetInstanceProcAddr(instance, "vkCopyMemoryToMicromapEXT");
	pfn_vkCmdWriteMicromapsPropertiesEXT = (PFN_vkCmdWriteMicromapsPropertiesEXT)vkGetInstanceProcAddr(instance, "vkCmdWriteMicromapsPropertiesEXT");
	pfn_vkCreateMicromapEXT = (PFN_vkCreateMicromapEXT)vkGetInstanceProcAddr(instance, "vkCreateMicromapEXT");
	pfn_vkDestroyMicromapEXT = (PFN_vkDestroyMicromapEXT)vkGetInstanceProcAddr(instance, "vkDestroyMicromapEXT");
	pfn_vkBuildMicromapsEXT = (PFN_vkBuildMicromapsEXT)vkGetInstanceProcAddr(instance, "vkBuildMicromapsEXT");
	pfn_vkCmdBuildMicromapsEXT = (PFN_vkCmdBuildMicromapsEXT)vkGetInstanceProcAddr(instance, "vkCmdBuildMicromapsEXT");
	pfn_vkCopyMicromapToMemoryEXT = (PFN_vkCopyMicromapToMemoryEXT)vkGetInstanceProcAddr(instance, "vkCopyMicromapToMemoryEXT");
	pfn_vkWriteMicromapsPropertiesEXT = (PFN_vkWriteMicromapsPropertiesEXT)vkGetInstanceProcAddr(instance, "vkWriteMicromapsPropertiesEXT");
	pfn_vkCmdCopyMicromapEXT = (PFN_vkCmdCopyMicromapEXT)vkGetInstanceProcAddr(instance, "vkCmdCopyMicromapEXT");
	pfn_vkCmdCopyMicromapToMemoryEXT = (PFN_vkCmdCopyMicromapToMemoryEXT)vkGetInstanceProcAddr(instance, "vkCmdCopyMicromapToMemoryEXT");
	pfn_vkCmdCopyMemoryToMicromapEXT = (PFN_vkCmdCopyMemoryToMicromapEXT)vkGetInstanceProcAddr(instance, "vkCmdCopyMemoryToMicromapEXT");
#endif // defined(VK_EXT_opacity_micromap)
#if defined(VK_EXT_pageable_device_local_memory)
	pfn_vkSetDeviceMemoryPriorityEXT = (PFN_vkSetDeviceMemoryPriorityEXT)vkGetInstanceProcAddr(instance, "vkSetDeviceMemoryPriorityEXT");
#endif // defined(VK_EXT_pageable_device_local_memory)
#if defined(VK_EXT_pipeline_properties)
	pfn_vkGetPipelinePropertiesEXT = (PFN_vkGetPipelinePropertiesEXT)vkGetInstanceProcAddr(instance, "vkGetPipelinePropertiesEXT");
#endif // defined(VK_EXT_pipeline_properties)
#if defined(VK_EXT_private_data)
	pfn_vkDestroyPrivateDataSlotEXT = (PFN_vkDestroyPrivateDataSlotEXT)vkGetInstanceProcAddr(instance, "vkDestroyPrivateDataSlotEXT");
	pfn_vkSetPrivateDataEXT = (PFN_vkSetPrivateDataEXT)vkGetInstanceProcAddr(instance, "vkSetPrivateDataEXT");
	pfn_vkCreatePrivateDataSlotEXT = (PFN_vkCreatePrivateDataSlotEXT)vkGetInstanceProcAddr(instance, "vkCreatePrivateDataSlotEXT");
	pfn_vkGetPrivateDataEXT = (PFN_vkGetPrivateDataEXT)vkGetInstanceProcAddr(instance, "vkGetPrivateDataEXT");
#endif // defined(VK_EXT_private_data)
#if defined(VK_EXT_sample_locations)
	pfn_vkCmdSetSampleLocationsEXT = (PFN_vkCmdSetSampleLocationsEXT)vkGetInstanceProcAddr(instance, "vkCmdSetSampleLocationsEXT");
	pfn_vkGetPhysicalDeviceMultisamplePropertiesEXT = (PFN_vkGetPhysicalDeviceMultisamplePropertiesEXT)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceMultisamplePropertiesEXT");
#endif // defined(VK_EXT_sample_locations)
#if defined(VK_EXT_shader_module_identifier)
	pfn_vkGetShaderModuleCreateInfoIdentifierEXT = (PFN_vkGetShaderModuleCreateInfoIdentifierEXT)vkGetInstanceProcAddr(instance, "vkGetShaderModuleCreateInfoIdentifierEXT");
	pfn_vkGetShaderModuleIdentifierEXT = (PFN_vkGetShaderModuleIdentifierEXT)vkGetInstanceProcAddr(instance, "vkGetShaderModuleIdentifierEXT");
#endif // defined(VK_EXT_shader_module_identifier)
#if defined(VK_EXT_shader_object)
	pfn_vkDestroyShaderEXT = (PFN_vkDestroyShaderEXT)vkGetInstanceProcAddr(instance, "vkDestroyShaderEXT");
	pfn_vkGetShaderBinaryDataEXT = (PFN_vkGetShaderBinaryDataEXT)vkGetInstanceProcAddr(instance, "vkGetShaderBinaryDataEXT");
	pfn_vkCmdBindShadersEXT = (PFN_vkCmdBindShadersEXT)vkGetInstanceProcAddr(instance, "vkCmdBindShadersEXT");
	pfn_vkCreateShadersEXT = (PFN_vkCreateShadersEXT)vkGetInstanceProcAddr(instance, "vkCreateShadersEXT");
#endif // defined(VK_EXT_shader_object)
#if defined(VK_EXT_shader_object) || defined(VK_EXT_vertex_input_dynamic_state)
	pfn_vkCmdSetVertexInputEXT = (PFN_vkCmdSetVertexInputEXT)vkGetInstanceProcAddr(instance, "vkCmdSetVertexInputEXT");
#endif // defined(VK_EXT_shader_object) || defined(VK_EXT_vertex_input_dynamic_state)
#if defined(VK_EXT_swapchain_maintenance1)
	pfn_vkReleaseSwapchainImagesEXT = (PFN_vkReleaseSwapchainImagesEXT)vkGetInstanceProcAddr(instance, "vkReleaseSwapchainImagesEXT");
#endif // defined(VK_EXT_swapchain_maintenance1)
#if defined(VK_EXT_tooling_info)
	pfn_vkGetPhysicalDeviceToolPropertiesEXT = (PFN_vkGetPhysicalDeviceToolPropertiesEXT)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceToolPropertiesEXT");
#endif // defined(VK_EXT_tooling_info)
#if defined(VK_EXT_transform_feedback)
	pfn_vkCmdEndQueryIndexedEXT = (PFN_vkCmdEndQueryIndexedEXT)vkGetInstanceProcAddr(instance, "vkCmdEndQueryIndexedEXT");
	pfn_vkCmdEndTransformFeedbackEXT = (PFN_vkCmdEndTransformFeedbackEXT)vkGetInstanceProcAddr(instance, "vkCmdEndTransformFeedbackEXT");
	pfn_vkCmdDrawIndirectByteCountEXT = (PFN_vkCmdDrawIndirectByteCountEXT)vkGetInstanceProcAddr(instance, "vkCmdDrawIndirectByteCountEXT");
	pfn_vkCmdBindTransformFeedbackBuffersEXT = (PFN_vkCmdBindTransformFeedbackBuffersEXT)vkGetInstanceProcAddr(instance, "vkCmdBindTransformFeedbackBuffersEXT");
	pfn_vkCmdBeginTransformFeedbackEXT = (PFN_vkCmdBeginTransformFeedbackEXT)vkGetInstanceProcAddr(instance, "vkCmdBeginTransformFeedbackEXT");
	pfn_vkCmdBeginQueryIndexedEXT = (PFN_vkCmdBeginQueryIndexedEXT)vkGetInstanceProcAddr(instance, "vkCmdBeginQueryIndexedEXT");
#endif // defined(VK_EXT_transform_feedback)
#if defined(VK_EXT_validation_cache)
	pfn_vkGetValidationCacheDataEXT = (PFN_vkGetValidationCacheDataEXT)vkGetInstanceProcAddr(instance, "vkGetValidationCacheDataEXT");
	pfn_vkMergeValidationCachesEXT = (PFN_vkMergeValidationCachesEXT)vkGetInstanceProcAddr(instance, "vkMergeValidationCachesEXT");
	pfn_vkCreateValidationCacheEXT = (PFN_vkCreateValidationCacheEXT)vkGetInstanceProcAddr(instance, "vkCreateValidationCacheEXT");
	pfn_vkDestroyValidationCacheEXT = (PFN_vkDestroyValidationCacheEXT)vkGetInstanceProcAddr(instance, "vkDestroyValidationCacheEXT");
#endif // defined(VK_EXT_validation_cache)
#if defined(VK_FUCHSIA_buffer_collection)
	pfn_vkSetBufferCollectionImageConstraintsFUCHSIA = (PFN_vkSetBufferCollectionImageConstraintsFUCHSIA)vkGetInstanceProcAddr(instance, "vkSetBufferCollectionImageConstraintsFUCHSIA");
	pfn_vkDestroyBufferCollectionFUCHSIA = (PFN_vkDestroyBufferCollectionFUCHSIA)vkGetInstanceProcAddr(instance, "vkDestroyBufferCollectionFUCHSIA");
	pfn_vkCreateBufferCollectionFUCHSIA = (PFN_vkCreateBufferCollectionFUCHSIA)vkGetInstanceProcAddr(instance, "vkCreateBufferCollectionFUCHSIA");
	pfn_vkSetBufferCollectionBufferConstraintsFUCHSIA = (PFN_vkSetBufferCollectionBufferConstraintsFUCHSIA)vkGetInstanceProcAddr(instance, "vkSetBufferCollectionBufferConstraintsFUCHSIA");
	pfn_vkGetBufferCollectionPropertiesFUCHSIA = (PFN_vkGetBufferCollectionPropertiesFUCHSIA)vkGetInstanceProcAddr(instance, "vkGetBufferCollectionPropertiesFUCHSIA");
#endif // defined(VK_FUCHSIA_buffer_collection)
#if defined(VK_FUCHSIA_external_memory)
	pfn_vkGetMemoryZirconHandleFUCHSIA = (PFN_vkGetMemoryZirconHandleFUCHSIA)vkGetInstanceProcAddr(instance, "vkGetMemoryZirconHandleFUCHSIA");
	pfn_vkGetMemoryZirconHandlePropertiesFUCHSIA = (PFN_vkGetMemoryZirconHandlePropertiesFUCHSIA)vkGetInstanceProcAddr(instance, "vkGetMemoryZirconHandlePropertiesFUCHSIA");
#endif // defined(VK_FUCHSIA_external_memory)
#if defined(VK_FUCHSIA_external_semaphore)
	pfn_vkImportSemaphoreZirconHandleFUCHSIA = (PFN_vkImportSemaphoreZirconHandleFUCHSIA)vkGetInstanceProcAddr(instance, "vkImportSemaphoreZirconHandleFUCHSIA");
	pfn_vkGetSemaphoreZirconHandleFUCHSIA = (PFN_vkGetSemaphoreZirconHandleFUCHSIA)vkGetInstanceProcAddr(instance, "vkGetSemaphoreZirconHandleFUCHSIA");
#endif // defined(VK_FUCHSIA_external_semaphore)
#if defined(VK_FUCHSIA_imagepipe_surface)
	pfn_vkCreateImagePipeSurfaceFUCHSIA = (PFN_vkCreateImagePipeSurfaceFUCHSIA)vkGetInstanceProcAddr(instance, "vkCreateImagePipeSurfaceFUCHSIA");
#endif // defined(VK_FUCHSIA_imagepipe_surface)
#if defined(VK_GGP_stream_descriptor_surface)
	pfn_vkCreateStreamDescriptorSurfaceGGP = (PFN_vkCreateStreamDescriptorSurfaceGGP)vkGetInstanceProcAddr(instance, "vkCreateStreamDescriptorSurfaceGGP");
#endif // defined(VK_GGP_stream_descriptor_surface)
#if defined(VK_GOOGLE_display_timing)
	pfn_vkGetRefreshCycleDurationGOOGLE = (PFN_vkGetRefreshCycleDurationGOOGLE)vkGetInstanceProcAddr(instance, "vkGetRefreshCycleDurationGOOGLE");
	pfn_vkGetPastPresentationTimingGOOGLE = (PFN_vkGetPastPresentationTimingGOOGLE)vkGetInstanceProcAddr(instance, "vkGetPastPresentationTimingGOOGLE");
#endif // defined(VK_GOOGLE_display_timing)
#if defined(VK_HUAWEI_cluster_culling_shader)
	pfn_vkCmdDrawClusterHUAWEI = (PFN_vkCmdDrawClusterHUAWEI)vkGetInstanceProcAddr(instance, "vkCmdDrawClusterHUAWEI");
	pfn_vkCmdDrawClusterIndirectHUAWEI = (PFN_vkCmdDrawClusterIndirectHUAWEI)vkGetInstanceProcAddr(instance, "vkCmdDrawClusterIndirectHUAWEI");
#endif // defined(VK_HUAWEI_cluster_culling_shader)
#if defined(VK_HUAWEI_invocation_mask)
	pfn_vkCmdBindInvocationMaskHUAWEI = (PFN_vkCmdBindInvocationMaskHUAWEI)vkGetInstanceProcAddr(instance, "vkCmdBindInvocationMaskHUAWEI");
#endif // defined(VK_HUAWEI_invocation_mask)
#if defined(VK_HUAWEI_subpass_shading)
	pfn_vkCmdSubpassShadingHUAWEI = (PFN_vkCmdSubpassShadingHUAWEI)vkGetInstanceProcAddr(instance, "vkCmdSubpassShadingHUAWEI");
	pfn_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI = (PFN_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI)vkGetInstanceProcAddr(instance, "vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI");
#endif // defined(VK_HUAWEI_subpass_shading)
#if defined(VK_INTEL_performance_query)
	pfn_vkCmdSetPerformanceStreamMarkerINTEL = (PFN_vkCmdSetPerformanceStreamMarkerINTEL)vkGetInstanceProcAddr(instance, "vkCmdSetPerformanceStreamMarkerINTEL");
	pfn_vkAcquirePerformanceConfigurationINTEL = (PFN_vkAcquirePerformanceConfigurationINTEL)vkGetInstanceProcAddr(instance, "vkAcquirePerformanceConfigurationINTEL");
	pfn_vkInitializePerformanceApiINTEL = (PFN_vkInitializePerformanceApiINTEL)vkGetInstanceProcAddr(instance, "vkInitializePerformanceApiINTEL");
	pfn_vkUninitializePerformanceApiINTEL = (PFN_vkUninitializePerformanceApiINTEL)vkGetInstanceProcAddr(instance, "vkUninitializePerformanceApiINTEL");
	pfn_vkCmdSetPerformanceMarkerINTEL = (PFN_vkCmdSetPerformanceMarkerINTEL)vkGetInstanceProcAddr(instance, "vkCmdSetPerformanceMarkerINTEL");
	pfn_vkCmdSetPerformanceOverrideINTEL = (PFN_vkCmdSetPerformanceOverrideINTEL)vkGetInstanceProcAddr(instance, "vkCmdSetPerformanceOverrideINTEL");
	pfn_vkReleasePerformanceConfigurationINTEL = (PFN_vkReleasePerformanceConfigurationINTEL)vkGetInstanceProcAddr(instance, "vkReleasePerformanceConfigurationINTEL");
	pfn_vkQueueSetPerformanceConfigurationINTEL = (PFN_vkQueueSetPerformanceConfigurationINTEL)vkGetInstanceProcAddr(instance, "vkQueueSetPerformanceConfigurationINTEL");
	pfn_vkGetPerformanceParameterINTEL = (PFN_vkGetPerformanceParameterINTEL)vkGetInstanceProcAddr(instance, "vkGetPerformanceParameterINTEL");
#endif // defined(VK_INTEL_performance_query)
#if defined(VK_KHR_acceleration_structure)
	pfn_vkGetAccelerationStructureBuildSizesKHR = (PFN_vkGetAccelerationStructureBuildSizesKHR)vkGetInstanceProcAddr(instance, "vkGetAccelerationStructureBuildSizesKHR");
	pfn_vkCmdBuildAccelerationStructuresIndirectKHR = (PFN_vkCmdBuildAccelerationStructuresIndirectKHR)vkGetInstanceProcAddr(instance, "vkCmdBuildAccelerationStructuresIndirectKHR");
	pfn_vkCopyAccelerationStructureToMemoryKHR = (PFN_vkCopyAccelerationStructureToMemoryKHR)vkGetInstanceProcAddr(instance, "vkCopyAccelerationStructureToMemoryKHR");
	pfn_vkCreateAccelerationStructureKHR = (PFN_vkCreateAccelerationStructureKHR)vkGetInstanceProcAddr(instance, "vkCreateAccelerationStructureKHR");
	pfn_vkDestroyAccelerationStructureKHR = (PFN_vkDestroyAccelerationStructureKHR)vkGetInstanceProcAddr(instance, "vkDestroyAccelerationStructureKHR");
	pfn_vkCmdBuildAccelerationStructuresKHR = (PFN_vkCmdBuildAccelerationStructuresKHR)vkGetInstanceProcAddr(instance, "vkCmdBuildAccelerationStructuresKHR");
	pfn_vkBuildAccelerationStructuresKHR = (PFN_vkBuildAccelerationStructuresKHR)vkGetInstanceProcAddr(instance, "vkBuildAccelerationStructuresKHR");
	pfn_vkCopyAccelerationStructureKHR = (PFN_vkCopyAccelerationStructureKHR)vkGetInstanceProcAddr(instance, "vkCopyAccelerationStructureKHR");
	pfn_vkCopyMemoryToAccelerationStructureKHR = (PFN_vkCopyMemoryToAccelerationStructureKHR)vkGetInstanceProcAddr(instance, "vkCopyMemoryToAccelerationStructureKHR");
	pfn_vkWriteAccelerationStructuresPropertiesKHR = (PFN_vkWriteAccelerationStructuresPropertiesKHR)vkGetInstanceProcAddr(instance, "vkWriteAccelerationStructuresPropertiesKHR");
	pfn_vkCmdCopyAccelerationStructureKHR = (PFN_vkCmdCopyAccelerationStructureKHR)vkGetInstanceProcAddr(instance, "vkCmdCopyAccelerationStructureKHR");
	pfn_vkCmdCopyAccelerationStructureToMemoryKHR = (PFN_vkCmdCopyAccelerationStructureToMemoryKHR)vkGetInstanceProcAddr(instance, "vkCmdCopyAccelerationStructureToMemoryKHR");
	pfn_vkCmdCopyMemoryToAccelerationStructureKHR = (PFN_vkCmdCopyMemoryToAccelerationStructureKHR)vkGetInstanceProcAddr(instance, "vkCmdCopyMemoryToAccelerationStructureKHR");
	pfn_vkGetAccelerationStructureDeviceAddressKHR = (PFN_vkGetAccelerationStructureDeviceAddressKHR)vkGetInstanceProcAddr(instance, "vkGetAccelerationStructureDeviceAddressKHR");
	pfn_vkCmdWriteAccelerationStructuresPropertiesKHR = (PFN_vkCmdWriteAccelerationStructuresPropertiesKHR)vkGetInstanceProcAddr(instance, "vkCmdWriteAccelerationStructuresPropertiesKHR");
	pfn_vkGetDeviceAccelerationStructureCompatibilityKHR = (PFN_vkGetDeviceAccelerationStructureCompatibilityKHR)vkGetInstanceProcAddr(instance, "vkGetDeviceAccelerationStructureCompatibilityKHR");
#endif // defined(VK_KHR_acceleration_structure)
#if defined(VK_KHR_android_surface)
	pfn_vkCreateAndroidSurfaceKHR = (PFN_vkCreateAndroidSurfaceKHR)vkGetInstanceProcAddr(instance, "vkCreateAndroidSurfaceKHR");
#endif // defined(VK_KHR_android_surface)
#if defined(VK_KHR_bind_memory2)
	pfn_vkBindBufferMemory2KHR = (PFN_vkBindBufferMemory2KHR)vkGetInstanceProcAddr(instance, "vkBindBufferMemory2KHR");
	pfn_vkBindImageMemory2KHR = (PFN_vkBindImageMemory2KHR)vkGetInstanceProcAddr(instance, "vkBindImageMemory2KHR");
#endif // defined(VK_KHR_bind_memory2)
#if defined(VK_KHR_buffer_device_address)
	pfn_vkGetDeviceMemoryOpaqueCaptureAddressKHR = (PFN_vkGetDeviceMemoryOpaqueCaptureAddressKHR)vkGetInstanceProcAddr(instance, "vkGetDeviceMemoryOpaqueCaptureAddressKHR");
	pfn_vkGetBufferDeviceAddressKHR = (PFN_vkGetBufferDeviceAddressKHR)vkGetInstanceProcAddr(instance, "vkGetBufferDeviceAddressKHR");
	pfn_vkGetBufferOpaqueCaptureAddressKHR = (PFN_vkGetBufferOpaqueCaptureAddressKHR)vkGetInstanceProcAddr(instance, "vkGetBufferOpaqueCaptureAddressKHR");
#endif // defined(VK_KHR_buffer_device_address)
#if defined(VK_KHR_calibrated_timestamps)
	pfn_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR = (PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceCalibrateableTimeDomainsKHR");
	pfn_vkGetCalibratedTimestampsKHR = (PFN_vkGetCalibratedTimestampsKHR)vkGetInstanceProcAddr(instance, "vkGetCalibratedTimestampsKHR");
#endif // defined(VK_KHR_calibrated_timestamps)
#if defined(VK_KHR_cooperative_matrix)
	pfn_vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR = (PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR");
#endif // defined(VK_KHR_cooperative_matrix)
#if defined(VK_KHR_copy_commands2)
	pfn_vkCmdCopyBuffer2KHR = (PFN_vkCmdCopyBuffer2KHR)vkGetInstanceProcAddr(instance, "vkCmdCopyBuffer2KHR");
	pfn_vkCmdCopyImage2KHR = (PFN_vkCmdCopyImage2KHR)vkGetInstanceProcAddr(instance, "vkCmdCopyImage2KHR");
	pfn_vkCmdCopyBufferToImage2KHR = (PFN_vkCmdCopyBufferToImage2KHR)vkGetInstanceProcAddr(instance, "vkCmdCopyBufferToImage2KHR");
	pfn_vkCmdCopyImageToBuffer2KHR = (PFN_vkCmdCopyImageToBuffer2KHR)vkGetInstanceProcAddr(instance, "vkCmdCopyImageToBuffer2KHR");
	pfn_vkCmdBlitImage2KHR = (PFN_vkCmdBlitImage2KHR)vkGetInstanceProcAddr(instance, "vkCmdBlitImage2KHR");
	pfn_vkCmdResolveImage2KHR = (PFN_vkCmdResolveImage2KHR)vkGetInstanceProcAddr(instance, "vkCmdResolveImage2KHR");
#endif // defined(VK_KHR_copy_commands2)
#if defined(VK_KHR_create_renderpass2)
	pfn_vkCreateRenderPass2KHR = (PFN_vkCreateRenderPass2KHR)vkGetInstanceProcAddr(instance, "vkCreateRenderPass2KHR");
	pfn_vkCmdBeginRenderPass2KHR = (PFN_vkCmdBeginRenderPass2KHR)vkGetInstanceProcAddr(instance, "vkCmdBeginRenderPass2KHR");
	pfn_vkCmdNextSubpass2KHR = (PFN_vkCmdNextSubpass2KHR)vkGetInstanceProcAddr(instance, "vkCmdNextSubpass2KHR");
	pfn_vkCmdEndRenderPass2KHR = (PFN_vkCmdEndRenderPass2KHR)vkGetInstanceProcAddr(instance, "vkCmdEndRenderPass2KHR");
#endif // defined(VK_KHR_create_renderpass2)
#if defined(VK_KHR_deferred_host_operations)
	pfn_vkDeferredOperationJoinKHR = (PFN_vkDeferredOperationJoinKHR)vkGetInstanceProcAddr(instance, "vkDeferredOperationJoinKHR");
	pfn_vkCreateDeferredOperationKHR = (PFN_vkCreateDeferredOperationKHR)vkGetInstanceProcAddr(instance, "vkCreateDeferredOperationKHR");
	pfn_vkDestroyDeferredOperationKHR = (PFN_vkDestroyDeferredOperationKHR)vkGetInstanceProcAddr(instance, "vkDestroyDeferredOperationKHR");
	pfn_vkGetDeferredOperationMaxConcurrencyKHR = (PFN_vkGetDeferredOperationMaxConcurrencyKHR)vkGetInstanceProcAddr(instance, "vkGetDeferredOperationMaxConcurrencyKHR");
	pfn_vkGetDeferredOperationResultKHR = (PFN_vkGetDeferredOperationResultKHR)vkGetInstanceProcAddr(instance, "vkGetDeferredOperationResultKHR");
#endif // defined(VK_KHR_deferred_host_operations)
#if defined(VK_KHR_descriptor_update_template)
	pfn_vkCreateDescriptorUpdateTemplateKHR = (PFN_vkCreateDescriptorUpdateTemplateKHR)vkGetInstanceProcAddr(instance, "vkCreateDescriptorUpdateTemplateKHR");
	pfn_vkDestroyDescriptorUpdateTemplateKHR = (PFN_vkDestroyDescriptorUpdateTemplateKHR)vkGetInstanceProcAddr(instance, "vkDestroyDescriptorUpdateTemplateKHR");
	pfn_vkUpdateDescriptorSetWithTemplateKHR = (PFN_vkUpdateDescriptorSetWithTemplateKHR)vkGetInstanceProcAddr(instance, "vkUpdateDescriptorSetWithTemplateKHR");
#endif // defined(VK_KHR_descriptor_update_template)
#if defined(VK_KHR_descriptor_update_template) || defined(VK_KHR_push_descriptor)
	pfn_vkCmdPushDescriptorSetWithTemplateKHR = (PFN_vkCmdPushDescriptorSetWithTemplateKHR)vkGetInstanceProcAddr(instance, "vkCmdPushDescriptorSetWithTemplateKHR");
#endif // defined(VK_KHR_descriptor_update_template) || defined(VK_KHR_push_descriptor)
#if defined(VK_KHR_device_group)
	pfn_vkGetDeviceGroupPeerMemoryFeaturesKHR = (PFN_vkGetDeviceGroupPeerMemoryFeaturesKHR)vkGetInstanceProcAddr(instance, "vkGetDeviceGroupPeerMemoryFeaturesKHR");
	pfn_vkCmdSetDeviceMaskKHR = (PFN_vkCmdSetDeviceMaskKHR)vkGetInstanceProcAddr(instance, "vkCmdSetDeviceMaskKHR");
	pfn_vkCmdDispatchBaseKHR = (PFN_vkCmdDispatchBaseKHR)vkGetInstanceProcAddr(instance, "vkCmdDispatchBaseKHR");
#endif // defined(VK_KHR_device_group)
#if defined(VK_KHR_device_group) || defined(VK_KHR_swapchain)
	pfn_vkGetDeviceGroupPresentCapabilitiesKHR = (PFN_vkGetDeviceGroupPresentCapabilitiesKHR)vkGetInstanceProcAddr(instance, "vkGetDeviceGroupPresentCapabilitiesKHR");
	pfn_vkGetDeviceGroupSurfacePresentModesKHR = (PFN_vkGetDeviceGroupSurfacePresentModesKHR)vkGetInstanceProcAddr(instance, "vkGetDeviceGroupSurfacePresentModesKHR");
	pfn_vkGetPhysicalDevicePresentRectanglesKHR = (PFN_vkGetPhysicalDevicePresentRectanglesKHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDevicePresentRectanglesKHR");
	pfn_vkAcquireNextImage2KHR = (PFN_vkAcquireNextImage2KHR)vkGetInstanceProcAddr(instance, "vkAcquireNextImage2KHR");
#endif // defined(VK_KHR_device_group) || defined(VK_KHR_swapchain)
#if defined(VK_KHR_device_group_creation)
	pfn_vkEnumeratePhysicalDeviceGroupsKHR = (PFN_vkEnumeratePhysicalDeviceGroupsKHR)vkGetInstanceProcAddr(instance, "vkEnumeratePhysicalDeviceGroupsKHR");
#endif // defined(VK_KHR_device_group_creation)
#if defined(VK_KHR_display)
	pfn_vkGetPhysicalDeviceDisplayPropertiesKHR = (PFN_vkGetPhysicalDeviceDisplayPropertiesKHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceDisplayPropertiesKHR");
	pfn_vkGetPhysicalDeviceDisplayPlanePropertiesKHR = (PFN_vkGetPhysicalDeviceDisplayPlanePropertiesKHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceDisplayPlanePropertiesKHR");
	pfn_vkGetDisplayPlaneSupportedDisplaysKHR = (PFN_vkGetDisplayPlaneSupportedDisplaysKHR)vkGetInstanceProcAddr(instance, "vkGetDisplayPlaneSupportedDisplaysKHR");
	pfn_vkGetDisplayModePropertiesKHR = (PFN_vkGetDisplayModePropertiesKHR)vkGetInstanceProcAddr(instance, "vkGetDisplayModePropertiesKHR");
	pfn_vkCreateDisplayModeKHR = (PFN_vkCreateDisplayModeKHR)vkGetInstanceProcAddr(instance, "vkCreateDisplayModeKHR");
	pfn_vkGetDisplayPlaneCapabilitiesKHR = (PFN_vkGetDisplayPlaneCapabilitiesKHR)vkGetInstanceProcAddr(instance, "vkGetDisplayPlaneCapabilitiesKHR");
	pfn_vkCreateDisplayPlaneSurfaceKHR = (PFN_vkCreateDisplayPlaneSurfaceKHR)vkGetInstanceProcAddr(instance, "vkCreateDisplayPlaneSurfaceKHR");
#endif // defined(VK_KHR_display)
#if defined(VK_KHR_display_swapchain)
	pfn_vkCreateSharedSwapchainsKHR = (PFN_vkCreateSharedSwapchainsKHR)vkGetInstanceProcAddr(instance, "vkCreateSharedSwapchainsKHR");
#endif // defined(VK_KHR_display_swapchain)
#if defined(VK_KHR_draw_indirect_count)
	pfn_vkCmdDrawIndirectCountKHR = (PFN_vkCmdDrawIndirectCountKHR)vkGetInstanceProcAddr(instance, "vkCmdDrawIndirectCountKHR");
	pfn_vkCmdDrawIndexedIndirectCountKHR = (PFN_vkCmdDrawIndexedIndirectCountKHR)vkGetInstanceProcAddr(instance, "vkCmdDrawIndexedIndirectCountKHR");
#endif // defined(VK_KHR_draw_indirect_count)
#if defined(VK_KHR_dynamic_rendering)
	pfn_vkCmdBeginRenderingKHR = (PFN_vkCmdBeginRenderingKHR)vkGetInstanceProcAddr(instance, "vkCmdBeginRenderingKHR");
	pfn_vkCmdEndRenderingKHR = (PFN_vkCmdEndRenderingKHR)vkGetInstanceProcAddr(instance, "vkCmdEndRenderingKHR");
#endif // defined(VK_KHR_dynamic_rendering)
#if defined(VK_KHR_dynamic_rendering_local_read)
	pfn_vkCmdSetRenderingAttachmentLocationsKHR = (PFN_vkCmdSetRenderingAttachmentLocationsKHR)vkGetInstanceProcAddr(instance, "vkCmdSetRenderingAttachmentLocationsKHR");
	pfn_vkCmdSetRenderingInputAttachmentIndicesKHR = (PFN_vkCmdSetRenderingInputAttachmentIndicesKHR)vkGetInstanceProcAddr(instance, "vkCmdSetRenderingInputAttachmentIndicesKHR");
#endif // defined(VK_KHR_dynamic_rendering_local_read)
#if defined(VK_KHR_external_fence_capabilities)
	pfn_vkGetPhysicalDeviceExternalFencePropertiesKHR = (PFN_vkGetPhysicalDeviceExternalFencePropertiesKHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceExternalFencePropertiesKHR");
#endif // defined(VK_KHR_external_fence_capabilities)
#if defined(VK_KHR_external_fence_fd)
	pfn_vkImportFenceFdKHR = (PFN_vkImportFenceFdKHR)vkGetInstanceProcAddr(instance, "vkImportFenceFdKHR");
	pfn_vkGetFenceFdKHR = (PFN_vkGetFenceFdKHR)vkGetInstanceProcAddr(instance, "vkGetFenceFdKHR");
#endif // defined(VK_KHR_external_fence_fd)
#if defined(VK_KHR_external_fence_win32)
	pfn_vkGetFenceWin32HandleKHR = (PFN_vkGetFenceWin32HandleKHR)vkGetInstanceProcAddr(instance, "vkGetFenceWin32HandleKHR");
	pfn_vkImportFenceWin32HandleKHR = (PFN_vkImportFenceWin32HandleKHR)vkGetInstanceProcAddr(instance, "vkImportFenceWin32HandleKHR");
#endif // defined(VK_KHR_external_fence_win32)
#if defined(VK_KHR_external_memory_capabilities)
	pfn_vkGetPhysicalDeviceExternalBufferPropertiesKHR = (PFN_vkGetPhysicalDeviceExternalBufferPropertiesKHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceExternalBufferPropertiesKHR");
#endif // defined(VK_KHR_external_memory_capabilities)
#if defined(VK_KHR_external_memory_fd)
	pfn_vkGetMemoryFdPropertiesKHR = (PFN_vkGetMemoryFdPropertiesKHR)vkGetInstanceProcAddr(instance, "vkGetMemoryFdPropertiesKHR");
	pfn_vkGetMemoryFdKHR = (PFN_vkGetMemoryFdKHR)vkGetInstanceProcAddr(instance, "vkGetMemoryFdKHR");
#endif // defined(VK_KHR_external_memory_fd)
#if defined(VK_KHR_external_memory_win32)
	pfn_vkGetMemoryWin32HandleKHR = (PFN_vkGetMemoryWin32HandleKHR)vkGetInstanceProcAddr(instance, "vkGetMemoryWin32HandleKHR");
	pfn_vkGetMemoryWin32HandlePropertiesKHR = (PFN_vkGetMemoryWin32HandlePropertiesKHR)vkGetInstanceProcAddr(instance, "vkGetMemoryWin32HandlePropertiesKHR");
#endif // defined(VK_KHR_external_memory_win32)
#if defined(VK_KHR_external_semaphore_capabilities)
	pfn_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR = (PFN_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceExternalSemaphorePropertiesKHR");
#endif // defined(VK_KHR_external_semaphore_capabilities)
#if defined(VK_KHR_external_semaphore_fd)
	pfn_vkImportSemaphoreFdKHR = (PFN_vkImportSemaphoreFdKHR)vkGetInstanceProcAddr(instance, "vkImportSemaphoreFdKHR");
	pfn_vkGetSemaphoreFdKHR = (PFN_vkGetSemaphoreFdKHR)vkGetInstanceProcAddr(instance, "vkGetSemaphoreFdKHR");
#endif // defined(VK_KHR_external_semaphore_fd)
#if defined(VK_KHR_external_semaphore_win32)
	pfn_vkImportSemaphoreWin32HandleKHR = (PFN_vkImportSemaphoreWin32HandleKHR)vkGetInstanceProcAddr(instance, "vkImportSemaphoreWin32HandleKHR");
	pfn_vkGetSemaphoreWin32HandleKHR = (PFN_vkGetSemaphoreWin32HandleKHR)vkGetInstanceProcAddr(instance, "vkGetSemaphoreWin32HandleKHR");
#endif // defined(VK_KHR_external_semaphore_win32)
#if defined(VK_KHR_fragment_shading_rate)
	pfn_vkGetPhysicalDeviceFragmentShadingRatesKHR = (PFN_vkGetPhysicalDeviceFragmentShadingRatesKHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceFragmentShadingRatesKHR");
	pfn_vkCmdSetFragmentShadingRateKHR = (PFN_vkCmdSetFragmentShadingRateKHR)vkGetInstanceProcAddr(instance, "vkCmdSetFragmentShadingRateKHR");
#endif // defined(VK_KHR_fragment_shading_rate)
#if defined(VK_KHR_get_display_properties2)
	pfn_vkGetPhysicalDeviceDisplayPlaneProperties2KHR = (PFN_vkGetPhysicalDeviceDisplayPlaneProperties2KHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceDisplayPlaneProperties2KHR");
	pfn_vkGetPhysicalDeviceDisplayProperties2KHR = (PFN_vkGetPhysicalDeviceDisplayProperties2KHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceDisplayProperties2KHR");
	pfn_vkGetDisplayModeProperties2KHR = (PFN_vkGetDisplayModeProperties2KHR)vkGetInstanceProcAddr(instance, "vkGetDisplayModeProperties2KHR");
	pfn_vkGetDisplayPlaneCapabilities2KHR = (PFN_vkGetDisplayPlaneCapabilities2KHR)vkGetInstanceProcAddr(instance, "vkGetDisplayPlaneCapabilities2KHR");
#endif // defined(VK_KHR_get_display_properties2)
#if defined(VK_KHR_get_memory_requirements2)
	pfn_vkGetImageMemoryRequirements2KHR = (PFN_vkGetImageMemoryRequirements2KHR)vkGetInstanceProcAddr(instance, "vkGetImageMemoryRequirements2KHR");
	pfn_vkGetBufferMemoryRequirements2KHR = (PFN_vkGetBufferMemoryRequirements2KHR)vkGetInstanceProcAddr(instance, "vkGetBufferMemoryRequirements2KHR");
	pfn_vkGetImageSparseMemoryRequirements2KHR = (PFN_vkGetImageSparseMemoryRequirements2KHR)vkGetInstanceProcAddr(instance, "vkGetImageSparseMemoryRequirements2KHR");
#endif // defined(VK_KHR_get_memory_requirements2)
#if defined(VK_KHR_get_physical_device_properties2)
	pfn_vkGetPhysicalDeviceFeatures2KHR = (PFN_vkGetPhysicalDeviceFeatures2KHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceFeatures2KHR");
	pfn_vkGetPhysicalDeviceProperties2KHR = (PFN_vkGetPhysicalDeviceProperties2KHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceProperties2KHR");
	pfn_vkGetPhysicalDeviceFormatProperties2KHR = (PFN_vkGetPhysicalDeviceFormatProperties2KHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceFormatProperties2KHR");
	pfn_vkGetPhysicalDeviceImageFormatProperties2KHR = (PFN_vkGetPhysicalDeviceImageFormatProperties2KHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceImageFormatProperties2KHR");
	pfn_vkGetPhysicalDeviceQueueFamilyProperties2KHR = (PFN_vkGetPhysicalDeviceQueueFamilyProperties2KHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceQueueFamilyProperties2KHR");
	pfn_vkGetPhysicalDeviceMemoryProperties2KHR = (PFN_vkGetPhysicalDeviceMemoryProperties2KHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceMemoryProperties2KHR");
	pfn_vkGetPhysicalDeviceSparseImageFormatProperties2KHR = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties2KHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSparseImageFormatProperties2KHR");
#endif // defined(VK_KHR_get_physical_device_properties2)
#if defined(VK_KHR_get_surface_capabilities2)
	pfn_vkGetPhysicalDeviceSurfaceCapabilities2KHR = (PFN_vkGetPhysicalDeviceSurfaceCapabilities2KHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSurfaceCapabilities2KHR");
	pfn_vkGetPhysicalDeviceSurfaceFormats2KHR = (PFN_vkGetPhysicalDeviceSurfaceFormats2KHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSurfaceFormats2KHR");
#endif // defined(VK_KHR_get_surface_capabilities2)
#if defined(VK_KHR_line_rasterization)
	pfn_vkCmdSetLineStippleKHR = (PFN_vkCmdSetLineStippleKHR)vkGetInstanceProcAddr(instance, "vkCmdSetLineStippleKHR");
#endif // defined(VK_KHR_line_rasterization)
#if defined(VK_KHR_maintenance1)
	pfn_vkTrimCommandPoolKHR = (PFN_vkTrimCommandPoolKHR)vkGetInstanceProcAddr(instance, "vkTrimCommandPoolKHR");
#endif // defined(VK_KHR_maintenance1)
#if defined(VK_KHR_maintenance3)
	pfn_vkGetDescriptorSetLayoutSupportKHR = (PFN_vkGetDescriptorSetLayoutSupportKHR)vkGetInstanceProcAddr(instance, "vkGetDescriptorSetLayoutSupportKHR");
#endif // defined(VK_KHR_maintenance3)
#if defined(VK_KHR_maintenance4)
	pfn_vkGetDeviceImageMemoryRequirementsKHR = (PFN_vkGetDeviceImageMemoryRequirementsKHR)vkGetInstanceProcAddr(instance, "vkGetDeviceImageMemoryRequirementsKHR");
	pfn_vkGetDeviceBufferMemoryRequirementsKHR = (PFN_vkGetDeviceBufferMemoryRequirementsKHR)vkGetInstanceProcAddr(instance, "vkGetDeviceBufferMemoryRequirementsKHR");
	pfn_vkGetDeviceImageSparseMemoryRequirementsKHR = (PFN_vkGetDeviceImageSparseMemoryRequirementsKHR)vkGetInstanceProcAddr(instance, "vkGetDeviceImageSparseMemoryRequirementsKHR");
#endif // defined(VK_KHR_maintenance4)
#if defined(VK_KHR_maintenance5)
	pfn_vkCmdBindIndexBuffer2KHR = (PFN_vkCmdBindIndexBuffer2KHR)vkGetInstanceProcAddr(instance, "vkCmdBindIndexBuffer2KHR");
	pfn_vkGetDeviceImageSubresourceLayoutKHR = (PFN_vkGetDeviceImageSubresourceLayoutKHR)vkGetInstanceProcAddr(instance, "vkGetDeviceImageSubresourceLayoutKHR");
	pfn_vkGetRenderingAreaGranularityKHR = (PFN_vkGetRenderingAreaGranularityKHR)vkGetInstanceProcAddr(instance, "vkGetRenderingAreaGranularityKHR");
	pfn_vkGetImageSubresourceLayout2KHR = (PFN_vkGetImageSubresourceLayout2KHR)vkGetInstanceProcAddr(instance, "vkGetImageSubresourceLayout2KHR");
#endif // defined(VK_KHR_maintenance5)
#if defined(VK_KHR_maintenance6)
	pfn_vkCmdBindDescriptorSets2KHR = (PFN_vkCmdBindDescriptorSets2KHR)vkGetInstanceProcAddr(instance, "vkCmdBindDescriptorSets2KHR");
	pfn_vkCmdBindDescriptorBufferEmbeddedSamplers2EXT = (PFN_vkCmdBindDescriptorBufferEmbeddedSamplers2EXT)vkGetInstanceProcAddr(instance, "vkCmdBindDescriptorBufferEmbeddedSamplers2EXT");
	pfn_vkCmdPushConstants2KHR = (PFN_vkCmdPushConstants2KHR)vkGetInstanceProcAddr(instance, "vkCmdPushConstants2KHR");
	pfn_vkCmdPushDescriptorSet2KHR = (PFN_vkCmdPushDescriptorSet2KHR)vkGetInstanceProcAddr(instance, "vkCmdPushDescriptorSet2KHR");
	pfn_vkCmdPushDescriptorSetWithTemplate2KHR = (PFN_vkCmdPushDescriptorSetWithTemplate2KHR)vkGetInstanceProcAddr(instance, "vkCmdPushDescriptorSetWithTemplate2KHR");
	pfn_vkCmdSetDescriptorBufferOffsets2EXT = (PFN_vkCmdSetDescriptorBufferOffsets2EXT)vkGetInstanceProcAddr(instance, "vkCmdSetDescriptorBufferOffsets2EXT");
#endif // defined(VK_KHR_maintenance6)
#if defined(VK_KHR_map_memory2)
	pfn_vkUnmapMemory2KHR = (PFN_vkUnmapMemory2KHR)vkGetInstanceProcAddr(instance, "vkUnmapMemory2KHR");
	pfn_vkMapMemory2KHR = (PFN_vkMapMemory2KHR)vkGetInstanceProcAddr(instance, "vkMapMemory2KHR");
#endif // defined(VK_KHR_map_memory2)
#if defined(VK_KHR_object_refresh)
	pfn_vkGetPhysicalDeviceRefreshableObjectTypesKHR = (PFN_vkGetPhysicalDeviceRefreshableObjectTypesKHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceRefreshableObjectTypesKHR");
	pfn_vkCmdRefreshObjectsKHR = (PFN_vkCmdRefreshObjectsKHR)vkGetInstanceProcAddr(instance, "vkCmdRefreshObjectsKHR");
#endif // defined(VK_KHR_object_refresh)
#if defined(VK_KHR_performance_query)
	pfn_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR = (PFN_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR)vkGetInstanceProcAddr(instance, "vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR");
	pfn_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR = (PFN_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR");
	pfn_vkAcquireProfilingLockKHR = (PFN_vkAcquireProfilingLockKHR)vkGetInstanceProcAddr(instance, "vkAcquireProfilingLockKHR");
	pfn_vkReleaseProfilingLockKHR = (PFN_vkReleaseProfilingLockKHR)vkGetInstanceProcAddr(instance, "vkReleaseProfilingLockKHR");
#endif // defined(VK_KHR_performance_query)
#if defined(VK_KHR_pipeline_binary)
	pfn_vkGetPipelineBinaryDataKHR = (PFN_vkGetPipelineBinaryDataKHR)vkGetInstanceProcAddr(instance, "vkGetPipelineBinaryDataKHR");
	pfn_vkCreatePipelineBinariesKHR = (PFN_vkCreatePipelineBinariesKHR)vkGetInstanceProcAddr(instance, "vkCreatePipelineBinariesKHR");
	pfn_vkDestroyPipelineBinaryKHR = (PFN_vkDestroyPipelineBinaryKHR)vkGetInstanceProcAddr(instance, "vkDestroyPipelineBinaryKHR");
	pfn_vkGetPipelineKeyKHR = (PFN_vkGetPipelineKeyKHR)vkGetInstanceProcAddr(instance, "vkGetPipelineKeyKHR");
	pfn_vkReleaseCapturedPipelineDataKHR = (PFN_vkReleaseCapturedPipelineDataKHR)vkGetInstanceProcAddr(instance, "vkReleaseCapturedPipelineDataKHR");
#endif // defined(VK_KHR_pipeline_binary)
#if defined(VK_KHR_pipeline_executable_properties)
	pfn_vkGetPipelineExecutableInternalRepresentationsKHR = (PFN_vkGetPipelineExecutableInternalRepresentationsKHR)vkGetInstanceProcAddr(instance, "vkGetPipelineExecutableInternalRepresentationsKHR");
	pfn_vkGetPipelineExecutablePropertiesKHR = (PFN_vkGetPipelineExecutablePropertiesKHR)vkGetInstanceProcAddr(instance, "vkGetPipelineExecutablePropertiesKHR");
	pfn_vkGetPipelineExecutableStatisticsKHR = (PFN_vkGetPipelineExecutableStatisticsKHR)vkGetInstanceProcAddr(instance, "vkGetPipelineExecutableStatisticsKHR");
#endif // defined(VK_KHR_pipeline_executable_properties)
#if defined(VK_KHR_present_wait)
	pfn_vkWaitForPresentKHR = (PFN_vkWaitForPresentKHR)vkGetInstanceProcAddr(instance, "vkWaitForPresentKHR");
#endif // defined(VK_KHR_present_wait)
#if defined(VK_KHR_present_wait2)
	pfn_vkWaitForPresent2KHR = (PFN_vkWaitForPresent2KHR)vkGetInstanceProcAddr(instance, "vkWaitForPresent2KHR");
#endif // defined(VK_KHR_present_wait2)
#if defined(VK_KHR_push_descriptor)
	pfn_vkCmdPushDescriptorSetKHR = (PFN_vkCmdPushDescriptorSetKHR)vkGetInstanceProcAddr(instance, "vkCmdPushDescriptorSetKHR");
#endif // defined(VK_KHR_push_descriptor)
#if defined(VK_KHR_ray_tracing_maintenance1)
	pfn_vkCmdTraceRaysIndirect2KHR = (PFN_vkCmdTraceRaysIndirect2KHR)vkGetInstanceProcAddr(instance, "vkCmdTraceRaysIndirect2KHR");
#endif // defined(VK_KHR_ray_tracing_maintenance1)
#if defined(VK_KHR_ray_tracing_pipeline)
	pfn_vkCreateRayTracingPipelinesKHR = (PFN_vkCreateRayTracingPipelinesKHR)vkGetInstanceProcAddr(instance, "vkCreateRayTracingPipelinesKHR");
	pfn_vkGetRayTracingShaderGroupHandlesKHR = (PFN_vkGetRayTracingShaderGroupHandlesKHR)vkGetInstanceProcAddr(instance, "vkGetRayTracingShaderGroupHandlesKHR");
	pfn_vkCmdSetRayTracingPipelineStackSizeKHR = (PFN_vkCmdSetRayTracingPipelineStackSizeKHR)vkGetInstanceProcAddr(instance, "vkCmdSetRayTracingPipelineStackSizeKHR");
	pfn_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR = (PFN_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR)vkGetInstanceProcAddr(instance, "vkGetRayTracingCaptureReplayShaderGroupHandlesKHR");
	pfn_vkCmdTraceRaysKHR = (PFN_vkCmdTraceRaysKHR)vkGetInstanceProcAddr(instance, "vkCmdTraceRaysKHR");
	pfn_vkCmdTraceRaysIndirectKHR = (PFN_vkCmdTraceRaysIndirectKHR)vkGetInstanceProcAddr(instance, "vkCmdTraceRaysIndirectKHR");
	pfn_vkGetRayTracingShaderGroupStackSizeKHR = (PFN_vkGetRayTracingShaderGroupStackSizeKHR)vkGetInstanceProcAddr(instance, "vkGetRayTracingShaderGroupStackSizeKHR");
#endif // defined(VK_KHR_ray_tracing_pipeline)
#if defined(VK_KHR_sampler_ycbcr_conversion)
	pfn_vkDestroySamplerYcbcrConversionKHR = (PFN_vkDestroySamplerYcbcrConversionKHR)vkGetInstanceProcAddr(instance, "vkDestroySamplerYcbcrConversionKHR");
	pfn_vkCreateSamplerYcbcrConversionKHR = (PFN_vkCreateSamplerYcbcrConversionKHR)vkGetInstanceProcAddr(instance, "vkCreateSamplerYcbcrConversionKHR");
#endif // defined(VK_KHR_sampler_ycbcr_conversion)
#if defined(VK_KHR_shared_presentable_image)
	pfn_vkGetSwapchainStatusKHR = (PFN_vkGetSwapchainStatusKHR)vkGetInstanceProcAddr(instance, "vkGetSwapchainStatusKHR");
#endif // defined(VK_KHR_shared_presentable_image)
#if defined(VK_KHR_surface)
	pfn_vkGetPhysicalDeviceSurfaceSupportKHR = (PFN_vkGetPhysicalDeviceSurfaceSupportKHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSurfaceSupportKHR");
	pfn_vkDestroySurfaceKHR = (PFN_vkDestroySurfaceKHR)vkGetInstanceProcAddr(instance, "vkDestroySurfaceKHR");
	pfn_vkGetPhysicalDeviceSurfaceCapabilitiesKHR = (PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSurfaceCapabilitiesKHR");
	pfn_vkGetPhysicalDeviceSurfaceFormatsKHR = (PFN_vkGetPhysicalDeviceSurfaceFormatsKHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSurfaceFormatsKHR");
	pfn_vkGetPhysicalDeviceSurfacePresentModesKHR = (PFN_vkGetPhysicalDeviceSurfacePresentModesKHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSurfacePresentModesKHR");
#endif // defined(VK_KHR_surface)
#if defined(VK_KHR_swapchain)
	pfn_vkCreateSwapchainKHR = (PFN_vkCreateSwapchainKHR)vkGetInstanceProcAddr(instance, "vkCreateSwapchainKHR");
	pfn_vkGetSwapchainImagesKHR = (PFN_vkGetSwapchainImagesKHR)vkGetInstanceProcAddr(instance, "vkGetSwapchainImagesKHR");
	pfn_vkDestroySwapchainKHR = (PFN_vkDestroySwapchainKHR)vkGetInstanceProcAddr(instance, "vkDestroySwapchainKHR");
	pfn_vkAcquireNextImageKHR = (PFN_vkAcquireNextImageKHR)vkGetInstanceProcAddr(instance, "vkAcquireNextImageKHR");
	pfn_vkQueuePresentKHR = (PFN_vkQueuePresentKHR)vkGetInstanceProcAddr(instance, "vkQueuePresentKHR");
#endif // defined(VK_KHR_swapchain)
#if defined(VK_KHR_swapchain_maintenance1)
	pfn_vkReleaseSwapchainImagesKHR = (PFN_vkReleaseSwapchainImagesKHR)vkGetInstanceProcAddr(instance, "vkReleaseSwapchainImagesKHR");
#endif // defined(VK_KHR_swapchain_maintenance1)
#if defined(VK_KHR_synchronization2)
	pfn_vkCmdResetEvent2KHR = (PFN_vkCmdResetEvent2KHR)vkGetInstanceProcAddr(instance, "vkCmdResetEvent2KHR");
	pfn_vkCmdWriteTimestamp2KHR = (PFN_vkCmdWriteTimestamp2KHR)vkGetInstanceProcAddr(instance, "vkCmdWriteTimestamp2KHR");
	pfn_vkCmdWaitEvents2KHR = (PFN_vkCmdWaitEvents2KHR)vkGetInstanceProcAddr(instance, "vkCmdWaitEvents2KHR");
	pfn_vkCmdPipelineBarrier2KHR = (PFN_vkCmdPipelineBarrier2KHR)vkGetInstanceProcAddr(instance, "vkCmdPipelineBarrier2KHR");
	pfn_vkCmdSetEvent2KHR = (PFN_vkCmdSetEvent2KHR)vkGetInstanceProcAddr(instance, "vkCmdSetEvent2KHR");
	pfn_vkQueueSubmit2KHR = (PFN_vkQueueSubmit2KHR)vkGetInstanceProcAddr(instance, "vkQueueSubmit2KHR");
#endif // defined(VK_KHR_synchronization2)
#if defined(VK_KHR_timeline_semaphore)
	pfn_vkWaitSemaphoresKHR = (PFN_vkWaitSemaphoresKHR)vkGetInstanceProcAddr(instance, "vkWaitSemaphoresKHR");
	pfn_vkGetSemaphoreCounterValueKHR = (PFN_vkGetSemaphoreCounterValueKHR)vkGetInstanceProcAddr(instance, "vkGetSemaphoreCounterValueKHR");
	pfn_vkSignalSemaphoreKHR = (PFN_vkSignalSemaphoreKHR)vkGetInstanceProcAddr(instance, "vkSignalSemaphoreKHR");
#endif // defined(VK_KHR_timeline_semaphore)
#if defined(VK_KHR_video_decode_queue)
	pfn_vkCmdDecodeVideoKHR = (PFN_vkCmdDecodeVideoKHR)vkGetInstanceProcAddr(instance, "vkCmdDecodeVideoKHR");
#endif // defined(VK_KHR_video_decode_queue)
#if defined(VK_KHR_video_encode_queue)
	pfn_vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR = (PFN_vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR");
	pfn_vkGetEncodedVideoSessionParametersKHR = (PFN_vkGetEncodedVideoSessionParametersKHR)vkGetInstanceProcAddr(instance, "vkGetEncodedVideoSessionParametersKHR");
	pfn_vkCmdEncodeVideoKHR = (PFN_vkCmdEncodeVideoKHR)vkGetInstanceProcAddr(instance, "vkCmdEncodeVideoKHR");
#endif // defined(VK_KHR_video_encode_queue)
#if defined(VK_KHR_video_queue)
	pfn_vkCmdEndVideoCodingKHR = (PFN_vkCmdEndVideoCodingKHR)vkGetInstanceProcAddr(instance, "vkCmdEndVideoCodingKHR");
	pfn_vkUpdateVideoSessionParametersKHR = (PFN_vkUpdateVideoSessionParametersKHR)vkGetInstanceProcAddr(instance, "vkUpdateVideoSessionParametersKHR");
	pfn_vkCmdBeginVideoCodingKHR = (PFN_vkCmdBeginVideoCodingKHR)vkGetInstanceProcAddr(instance, "vkCmdBeginVideoCodingKHR");
	pfn_vkGetVideoSessionMemoryRequirementsKHR = (PFN_vkGetVideoSessionMemoryRequirementsKHR)vkGetInstanceProcAddr(instance, "vkGetVideoSessionMemoryRequirementsKHR");
	pfn_vkCreateVideoSessionParametersKHR = (PFN_vkCreateVideoSessionParametersKHR)vkGetInstanceProcAddr(instance, "vkCreateVideoSessionParametersKHR");
	pfn_vkCmdControlVideoCodingKHR = (PFN_vkCmdControlVideoCodingKHR)vkGetInstanceProcAddr(instance, "vkCmdControlVideoCodingKHR");
	pfn_vkDestroyVideoSessionKHR = (PFN_vkDestroyVideoSessionKHR)vkGetInstanceProcAddr(instance, "vkDestroyVideoSessionKHR");
	pfn_vkGetPhysicalDeviceVideoCapabilitiesKHR = (PFN_vkGetPhysicalDeviceVideoCapabilitiesKHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceVideoCapabilitiesKHR");
	pfn_vkGetPhysicalDeviceVideoFormatPropertiesKHR = (PFN_vkGetPhysicalDeviceVideoFormatPropertiesKHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceVideoFormatPropertiesKHR");
	pfn_vkBindVideoSessionMemoryKHR = (PFN_vkBindVideoSessionMemoryKHR)vkGetInstanceProcAddr(instance, "vkBindVideoSessionMemoryKHR");
	pfn_vkCreateVideoSessionKHR = (PFN_vkCreateVideoSessionKHR)vkGetInstanceProcAddr(instance, "vkCreateVideoSessionKHR");
	pfn_vkDestroyVideoSessionParametersKHR = (PFN_vkDestroyVideoSessionParametersKHR)vkGetInstanceProcAddr(instance, "vkDestroyVideoSessionParametersKHR");
#endif // defined(VK_KHR_video_queue)
#if defined(VK_KHR_wayland_surface)
	pfn_vkCreateWaylandSurfaceKHR = (PFN_vkCreateWaylandSurfaceKHR)vkGetInstanceProcAddr(instance, "vkCreateWaylandSurfaceKHR");
	pfn_vkGetPhysicalDeviceWaylandPresentationSupportKHR = (PFN_vkGetPhysicalDeviceWaylandPresentationSupportKHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceWaylandPresentationSupportKHR");
#endif // defined(VK_KHR_wayland_surface)
#if defined(VK_KHR_win32_surface)
	pfn_vkCreateWin32SurfaceKHR = (PFN_vkCreateWin32SurfaceKHR)vkGetInstanceProcAddr(instance, "vkCreateWin32SurfaceKHR");
	pfn_vkGetPhysicalDeviceWin32PresentationSupportKHR = (PFN_vkGetPhysicalDeviceWin32PresentationSupportKHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceWin32PresentationSupportKHR");
#endif // defined(VK_KHR_win32_surface)
#if defined(VK_KHR_xcb_surface)
	pfn_vkCreateXcbSurfaceKHR = (PFN_vkCreateXcbSurfaceKHR)vkGetInstanceProcAddr(instance, "vkCreateXcbSurfaceKHR");
	pfn_vkGetPhysicalDeviceXcbPresentationSupportKHR = (PFN_vkGetPhysicalDeviceXcbPresentationSupportKHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceXcbPresentationSupportKHR");
#endif // defined(VK_KHR_xcb_surface)
#if defined(VK_KHR_xlib_surface)
	pfn_vkGetPhysicalDeviceXlibPresentationSupportKHR = (PFN_vkGetPhysicalDeviceXlibPresentationSupportKHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceXlibPresentationSupportKHR");
	pfn_vkCreateXlibSurfaceKHR = (PFN_vkCreateXlibSurfaceKHR)vkGetInstanceProcAddr(instance, "vkCreateXlibSurfaceKHR");
#endif // defined(VK_KHR_xlib_surface)
#if defined(VK_MVK_ios_surface)
	pfn_vkCreateIOSSurfaceMVK = (PFN_vkCreateIOSSurfaceMVK)vkGetInstanceProcAddr(instance, "vkCreateIOSSurfaceMVK");
#endif // defined(VK_MVK_ios_surface)
#if defined(VK_MVK_macos_surface)
	pfn_vkCreateMacOSSurfaceMVK = (PFN_vkCreateMacOSSurfaceMVK)vkGetInstanceProcAddr(instance, "vkCreateMacOSSurfaceMVK");
#endif // defined(VK_MVK_macos_surface)
#if defined(VK_NN_vi_surface)
	pfn_vkCreateViSurfaceNN = (PFN_vkCreateViSurfaceNN)vkGetInstanceProcAddr(instance, "vkCreateViSurfaceNN");
#endif // defined(VK_NN_vi_surface)
#if defined(VK_NVX_binary_import)
	pfn_vkDestroyCuFunctionNVX = (PFN_vkDestroyCuFunctionNVX)vkGetInstanceProcAddr(instance, "vkDestroyCuFunctionNVX");
	pfn_vkCreateCuModuleNVX = (PFN_vkCreateCuModuleNVX)vkGetInstanceProcAddr(instance, "vkCreateCuModuleNVX");
	pfn_vkCreateCuFunctionNVX = (PFN_vkCreateCuFunctionNVX)vkGetInstanceProcAddr(instance, "vkCreateCuFunctionNVX");
	pfn_vkDestroyCuModuleNVX = (PFN_vkDestroyCuModuleNVX)vkGetInstanceProcAddr(instance, "vkDestroyCuModuleNVX");
	pfn_vkCmdCuLaunchKernelNVX = (PFN_vkCmdCuLaunchKernelNVX)vkGetInstanceProcAddr(instance, "vkCmdCuLaunchKernelNVX");
#endif // defined(VK_NVX_binary_import)
#if defined(VK_NVX_image_view_handle)
	pfn_vkGetImageViewHandle64NVX = (PFN_vkGetImageViewHandle64NVX)vkGetInstanceProcAddr(instance, "vkGetImageViewHandle64NVX");
	pfn_vkGetImageViewHandleNVX = (PFN_vkGetImageViewHandleNVX)vkGetInstanceProcAddr(instance, "vkGetImageViewHandleNVX");
	pfn_vkGetImageViewAddressNVX = (PFN_vkGetImageViewAddressNVX)vkGetInstanceProcAddr(instance, "vkGetImageViewAddressNVX");
#endif // defined(VK_NVX_image_view_handle)
#if defined(VK_NV_acquire_winrt_display)
	pfn_vkGetWinrtDisplayNV = (PFN_vkGetWinrtDisplayNV)vkGetInstanceProcAddr(instance, "vkGetWinrtDisplayNV");
	pfn_vkAcquireWinrtDisplayNV = (PFN_vkAcquireWinrtDisplayNV)vkGetInstanceProcAddr(instance, "vkAcquireWinrtDisplayNV");
#endif // defined(VK_NV_acquire_winrt_display)
#if defined(VK_NV_clip_space_w_scaling)
	pfn_vkCmdSetViewportWScalingNV = (PFN_vkCmdSetViewportWScalingNV)vkGetInstanceProcAddr(instance, "vkCmdSetViewportWScalingNV");
#endif // defined(VK_NV_clip_space_w_scaling)
#if defined(VK_NV_cluster_acceleration_structure)
	pfn_vkCmdBuildClusterAccelerationStructureIndirectNV = (PFN_vkCmdBuildClusterAccelerationStructureIndirectNV)vkGetInstanceProcAddr(instance, "vkCmdBuildClusterAccelerationStructureIndirectNV");
	pfn_vkGetClusterAccelerationStructureBuildSizesNV = (PFN_vkGetClusterAccelerationStructureBuildSizesNV)vkGetInstanceProcAddr(instance, "vkGetClusterAccelerationStructureBuildSizesNV");
#endif // defined(VK_NV_cluster_acceleration_structure)
#if defined(VK_NV_cooperative_matrix)
	pfn_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV = (PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceCooperativeMatrixPropertiesNV");
#endif // defined(VK_NV_cooperative_matrix)
#if defined(VK_NV_cooperative_matrix2)
	pfn_vkGetPhysicalDeviceCooperativeMatrixFlexibleDimensionsPropertiesNV = (PFN_vkGetPhysicalDeviceCooperativeMatrixFlexibleDimensionsPropertiesNV)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceCooperativeMatrixFlexibleDimensionsPropertiesNV");
#endif // defined(VK_NV_cooperative_matrix2)
#if defined(VK_NV_cooperative_vector)
	pfn_vkCmdConvertCooperativeVectorMatrixNV = (PFN_vkCmdConvertCooperativeVectorMatrixNV)vkGetInstanceProcAddr(instance, "vkCmdConvertCooperativeVectorMatrixNV");
	pfn_vkConvertCooperativeVectorMatrixNV = (PFN_vkConvertCooperativeVectorMatrixNV)vkGetInstanceProcAddr(instance, "vkConvertCooperativeVectorMatrixNV");
	pfn_vkGetPhysicalDeviceCooperativeVectorPropertiesNV = (PFN_vkGetPhysicalDeviceCooperativeVectorPropertiesNV)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceCooperativeVectorPropertiesNV");
#endif // defined(VK_NV_cooperative_vector)
#if defined(VK_NV_copy_memory_indirect)
	pfn_vkCmdCopyMemoryToImageIndirectNV = (PFN_vkCmdCopyMemoryToImageIndirectNV)vkGetInstanceProcAddr(instance, "vkCmdCopyMemoryToImageIndirectNV");
	pfn_vkCmdCopyMemoryIndirectNV = (PFN_vkCmdCopyMemoryIndirectNV)vkGetInstanceProcAddr(instance, "vkCmdCopyMemoryIndirectNV");
#endif // defined(VK_NV_copy_memory_indirect)
#if defined(VK_NV_coverage_reduction_mode)
	pfn_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV = (PFN_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV");
#endif // defined(VK_NV_coverage_reduction_mode)
#if defined(VK_NV_cuda_kernel_launch)
	pfn_vkCreateCudaFunctionNV = (PFN_vkCreateCudaFunctionNV)vkGetInstanceProcAddr(instance, "vkCreateCudaFunctionNV");
	pfn_vkCreateCudaModuleNV = (PFN_vkCreateCudaModuleNV)vkGetInstanceProcAddr(instance, "vkCreateCudaModuleNV");
	pfn_vkGetCudaModuleCacheNV = (PFN_vkGetCudaModuleCacheNV)vkGetInstanceProcAddr(instance, "vkGetCudaModuleCacheNV");
	pfn_vkDestroyCudaModuleNV = (PFN_vkDestroyCudaModuleNV)vkGetInstanceProcAddr(instance, "vkDestroyCudaModuleNV");
	pfn_vkDestroyCudaFunctionNV = (PFN_vkDestroyCudaFunctionNV)vkGetInstanceProcAddr(instance, "vkDestroyCudaFunctionNV");
	pfn_vkCmdCudaLaunchKernelNV = (PFN_vkCmdCudaLaunchKernelNV)vkGetInstanceProcAddr(instance, "vkCmdCudaLaunchKernelNV");
#endif // defined(VK_NV_cuda_kernel_launch)
#if defined(VK_NV_device_diagnostic_checkpoints)
	pfn_vkGetQueueCheckpointDataNV = (PFN_vkGetQueueCheckpointDataNV)vkGetInstanceProcAddr(instance, "vkGetQueueCheckpointDataNV");
	pfn_vkCmdSetCheckpointNV = (PFN_vkCmdSetCheckpointNV)vkGetInstanceProcAddr(instance, "vkCmdSetCheckpointNV");
	pfn_vkGetQueueCheckpointData2NV = (PFN_vkGetQueueCheckpointData2NV)vkGetInstanceProcAddr(instance, "vkGetQueueCheckpointData2NV");
#endif // defined(VK_NV_device_diagnostic_checkpoints)
#if defined(VK_NV_device_generated_commands)
	pfn_vkGetGeneratedCommandsMemoryRequirementsNV = (PFN_vkGetGeneratedCommandsMemoryRequirementsNV)vkGetInstanceProcAddr(instance, "vkGetGeneratedCommandsMemoryRequirementsNV");
	pfn_vkCreateIndirectCommandsLayoutNV = (PFN_vkCreateIndirectCommandsLayoutNV)vkGetInstanceProcAddr(instance, "vkCreateIndirectCommandsLayoutNV");
	pfn_vkCmdPreprocessGeneratedCommandsNV = (PFN_vkCmdPreprocessGeneratedCommandsNV)vkGetInstanceProcAddr(instance, "vkCmdPreprocessGeneratedCommandsNV");
	pfn_vkCmdExecuteGeneratedCommandsNV = (PFN_vkCmdExecuteGeneratedCommandsNV)vkGetInstanceProcAddr(instance, "vkCmdExecuteGeneratedCommandsNV");
	pfn_vkCmdBindPipelineShaderGroupNV = (PFN_vkCmdBindPipelineShaderGroupNV)vkGetInstanceProcAddr(instance, "vkCmdBindPipelineShaderGroupNV");
	pfn_vkDestroyIndirectCommandsLayoutNV = (PFN_vkDestroyIndirectCommandsLayoutNV)vkGetInstanceProcAddr(instance, "vkDestroyIndirectCommandsLayoutNV");
#endif // defined(VK_NV_device_generated_commands)
#if defined(VK_NV_device_generated_commands_compute)
	pfn_vkGetPipelineIndirectMemoryRequirementsNV = (PFN_vkGetPipelineIndirectMemoryRequirementsNV)vkGetInstanceProcAddr(instance, "vkGetPipelineIndirectMemoryRequirementsNV");
	pfn_vkCmdUpdatePipelineIndirectBufferNV = (PFN_vkCmdUpdatePipelineIndirectBufferNV)vkGetInstanceProcAddr(instance, "vkCmdUpdatePipelineIndirectBufferNV");
	pfn_vkGetPipelineIndirectDeviceAddressNV = (PFN_vkGetPipelineIndirectDeviceAddressNV)vkGetInstanceProcAddr(instance, "vkGetPipelineIndirectDeviceAddressNV");
#endif // defined(VK_NV_device_generated_commands_compute)
#if defined(VK_NV_external_compute_queue)
	pfn_vkDestroyExternalComputeQueueNV = (PFN_vkDestroyExternalComputeQueueNV)vkGetInstanceProcAddr(instance, "vkDestroyExternalComputeQueueNV");
	pfn_vkCreateExternalComputeQueueNV = (PFN_vkCreateExternalComputeQueueNV)vkGetInstanceProcAddr(instance, "vkCreateExternalComputeQueueNV");
	pfn_vkGetExternalComputeQueueDataNV = (PFN_vkGetExternalComputeQueueDataNV)vkGetInstanceProcAddr(instance, "vkGetExternalComputeQueueDataNV");
#endif // defined(VK_NV_external_compute_queue)
#if defined(VK_NV_external_memory_capabilities)
	pfn_vkGetPhysicalDeviceExternalImageFormatPropertiesNV = (PFN_vkGetPhysicalDeviceExternalImageFormatPropertiesNV)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceExternalImageFormatPropertiesNV");
#endif // defined(VK_NV_external_memory_capabilities)
#if defined(VK_NV_external_memory_rdma)
	pfn_vkGetMemoryRemoteAddressNV = (PFN_vkGetMemoryRemoteAddressNV)vkGetInstanceProcAddr(instance, "vkGetMemoryRemoteAddressNV");
#endif // defined(VK_NV_external_memory_rdma)
#if defined(VK_NV_external_memory_sci_buf)
	pfn_vkGetMemorySciBufNV = (PFN_vkGetMemorySciBufNV)vkGetInstanceProcAddr(instance, "vkGetMemorySciBufNV");
	pfn_vkGetPhysicalDeviceExternalMemorySciBufPropertiesNV = (PFN_vkGetPhysicalDeviceExternalMemorySciBufPropertiesNV)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceExternalMemorySciBufPropertiesNV");
	pfn_vkGetPhysicalDeviceSciBufAttributesNV = (PFN_vkGetPhysicalDeviceSciBufAttributesNV)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSciBufAttributesNV");
#endif // defined(VK_NV_external_memory_sci_buf)
#if defined(VK_NV_external_memory_win32)
	pfn_vkGetMemoryWin32HandleNV = (PFN_vkGetMemoryWin32HandleNV)vkGetInstanceProcAddr(instance, "vkGetMemoryWin32HandleNV");
#endif // defined(VK_NV_external_memory_win32)
#if defined(VK_NV_external_sci_sync)
	pfn_vkGetSemaphoreSciSyncObjNV = (PFN_vkGetSemaphoreSciSyncObjNV)vkGetInstanceProcAddr(instance, "vkGetSemaphoreSciSyncObjNV");
	pfn_vkImportSemaphoreSciSyncObjNV = (PFN_vkImportSemaphoreSciSyncObjNV)vkGetInstanceProcAddr(instance, "vkImportSemaphoreSciSyncObjNV");
#endif // defined(VK_NV_external_sci_sync)
#if defined(VK_NV_external_sci_sync) || defined(VK_NV_external_sci_sync2)
	pfn_vkImportFenceSciSyncFenceNV = (PFN_vkImportFenceSciSyncFenceNV)vkGetInstanceProcAddr(instance, "vkImportFenceSciSyncFenceNV");
	pfn_vkGetFenceSciSyncObjNV = (PFN_vkGetFenceSciSyncObjNV)vkGetInstanceProcAddr(instance, "vkGetFenceSciSyncObjNV");
	pfn_vkGetPhysicalDeviceSciSyncAttributesNV = (PFN_vkGetPhysicalDeviceSciSyncAttributesNV)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSciSyncAttributesNV");
	pfn_vkGetFenceSciSyncFenceNV = (PFN_vkGetFenceSciSyncFenceNV)vkGetInstanceProcAddr(instance, "vkGetFenceSciSyncFenceNV");
	pfn_vkImportFenceSciSyncObjNV = (PFN_vkImportFenceSciSyncObjNV)vkGetInstanceProcAddr(instance, "vkImportFenceSciSyncObjNV");
#endif // defined(VK_NV_external_sci_sync) || defined(VK_NV_external_sci_sync2)
#if defined(VK_NV_external_sci_sync2)
	pfn_vkDestroySemaphoreSciSyncPoolNV = (PFN_vkDestroySemaphoreSciSyncPoolNV)vkGetInstanceProcAddr(instance, "vkDestroySemaphoreSciSyncPoolNV");
	pfn_vkCreateSemaphoreSciSyncPoolNV = (PFN_vkCreateSemaphoreSciSyncPoolNV)vkGetInstanceProcAddr(instance, "vkCreateSemaphoreSciSyncPoolNV");
#endif // defined(VK_NV_external_sci_sync2)
#if defined(VK_NV_fragment_shading_rate_enums)
	pfn_vkCmdSetFragmentShadingRateEnumNV = (PFN_vkCmdSetFragmentShadingRateEnumNV)vkGetInstanceProcAddr(instance, "vkCmdSetFragmentShadingRateEnumNV");
#endif // defined(VK_NV_fragment_shading_rate_enums)
#if defined(VK_NV_low_latency2)
	pfn_vkLatencySleepNV = (PFN_vkLatencySleepNV)vkGetInstanceProcAddr(instance, "vkLatencySleepNV");
	pfn_vkQueueNotifyOutOfBandNV = (PFN_vkQueueNotifyOutOfBandNV)vkGetInstanceProcAddr(instance, "vkQueueNotifyOutOfBandNV");
	pfn_vkSetLatencySleepModeNV = (PFN_vkSetLatencySleepModeNV)vkGetInstanceProcAddr(instance, "vkSetLatencySleepModeNV");
	pfn_vkSetLatencyMarkerNV = (PFN_vkSetLatencyMarkerNV)vkGetInstanceProcAddr(instance, "vkSetLatencyMarkerNV");
	pfn_vkGetLatencyTimingsNV = (PFN_vkGetLatencyTimingsNV)vkGetInstanceProcAddr(instance, "vkGetLatencyTimingsNV");
#endif // defined(VK_NV_low_latency2)
#if defined(VK_NV_memory_decompression)
	pfn_vkCmdDecompressMemoryNV = (PFN_vkCmdDecompressMemoryNV)vkGetInstanceProcAddr(instance, "vkCmdDecompressMemoryNV");
	pfn_vkCmdDecompressMemoryIndirectCountNV = (PFN_vkCmdDecompressMemoryIndirectCountNV)vkGetInstanceProcAddr(instance, "vkCmdDecompressMemoryIndirectCountNV");
#endif // defined(VK_NV_memory_decompression)
#if defined(VK_NV_mesh_shader)
	pfn_vkCmdDrawMeshTasksIndirectNV = (PFN_vkCmdDrawMeshTasksIndirectNV)vkGetInstanceProcAddr(instance, "vkCmdDrawMeshTasksIndirectNV");
	pfn_vkCmdDrawMeshTasksNV = (PFN_vkCmdDrawMeshTasksNV)vkGetInstanceProcAddr(instance, "vkCmdDrawMeshTasksNV");
	pfn_vkCmdDrawMeshTasksIndirectCountNV = (PFN_vkCmdDrawMeshTasksIndirectCountNV)vkGetInstanceProcAddr(instance, "vkCmdDrawMeshTasksIndirectCountNV");
#endif // defined(VK_NV_mesh_shader)
#if defined(VK_NV_optical_flow)
	pfn_vkBindOpticalFlowSessionImageNV = (PFN_vkBindOpticalFlowSessionImageNV)vkGetInstanceProcAddr(instance, "vkBindOpticalFlowSessionImageNV");
	pfn_vkGetPhysicalDeviceOpticalFlowImageFormatsNV = (PFN_vkGetPhysicalDeviceOpticalFlowImageFormatsNV)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceOpticalFlowImageFormatsNV");
	pfn_vkCreateOpticalFlowSessionNV = (PFN_vkCreateOpticalFlowSessionNV)vkGetInstanceProcAddr(instance, "vkCreateOpticalFlowSessionNV");
	pfn_vkDestroyOpticalFlowSessionNV = (PFN_vkDestroyOpticalFlowSessionNV)vkGetInstanceProcAddr(instance, "vkDestroyOpticalFlowSessionNV");
	pfn_vkCmdOpticalFlowExecuteNV = (PFN_vkCmdOpticalFlowExecuteNV)vkGetInstanceProcAddr(instance, "vkCmdOpticalFlowExecuteNV");
#endif // defined(VK_NV_optical_flow)
#if defined(VK_NV_partitioned_acceleration_structure)
	pfn_vkCmdBuildPartitionedAccelerationStructuresNV = (PFN_vkCmdBuildPartitionedAccelerationStructuresNV)vkGetInstanceProcAddr(instance, "vkCmdBuildPartitionedAccelerationStructuresNV");
	pfn_vkGetPartitionedAccelerationStructuresBuildSizesNV = (PFN_vkGetPartitionedAccelerationStructuresBuildSizesNV)vkGetInstanceProcAddr(instance, "vkGetPartitionedAccelerationStructuresBuildSizesNV");
#endif // defined(VK_NV_partitioned_acceleration_structure)
#if defined(VK_NV_ray_tracing)
	pfn_vkCmdTraceRaysNV = (PFN_vkCmdTraceRaysNV)vkGetInstanceProcAddr(instance, "vkCmdTraceRaysNV");
	pfn_vkDestroyAccelerationStructureNV = (PFN_vkDestroyAccelerationStructureNV)vkGetInstanceProcAddr(instance, "vkDestroyAccelerationStructureNV");
	pfn_vkCmdBuildAccelerationStructureNV = (PFN_vkCmdBuildAccelerationStructureNV)vkGetInstanceProcAddr(instance, "vkCmdBuildAccelerationStructureNV");
	pfn_vkCreateAccelerationStructureNV = (PFN_vkCreateAccelerationStructureNV)vkGetInstanceProcAddr(instance, "vkCreateAccelerationStructureNV");
	pfn_vkGetAccelerationStructureMemoryRequirementsNV = (PFN_vkGetAccelerationStructureMemoryRequirementsNV)vkGetInstanceProcAddr(instance, "vkGetAccelerationStructureMemoryRequirementsNV");
	pfn_vkBindAccelerationStructureMemoryNV = (PFN_vkBindAccelerationStructureMemoryNV)vkGetInstanceProcAddr(instance, "vkBindAccelerationStructureMemoryNV");
	pfn_vkCmdCopyAccelerationStructureNV = (PFN_vkCmdCopyAccelerationStructureNV)vkGetInstanceProcAddr(instance, "vkCmdCopyAccelerationStructureNV");
	pfn_vkCreateRayTracingPipelinesNV = (PFN_vkCreateRayTracingPipelinesNV)vkGetInstanceProcAddr(instance, "vkCreateRayTracingPipelinesNV");
	pfn_vkGetRayTracingShaderGroupHandlesNV = (PFN_vkGetRayTracingShaderGroupHandlesNV)vkGetInstanceProcAddr(instance, "vkGetRayTracingShaderGroupHandlesNV");
	pfn_vkGetAccelerationStructureHandleNV = (PFN_vkGetAccelerationStructureHandleNV)vkGetInstanceProcAddr(instance, "vkGetAccelerationStructureHandleNV");
	pfn_vkCmdWriteAccelerationStructuresPropertiesNV = (PFN_vkCmdWriteAccelerationStructuresPropertiesNV)vkGetInstanceProcAddr(instance, "vkCmdWriteAccelerationStructuresPropertiesNV");
	pfn_vkCompileDeferredNV = (PFN_vkCompileDeferredNV)vkGetInstanceProcAddr(instance, "vkCompileDeferredNV");
#endif // defined(VK_NV_ray_tracing)
#if defined(VK_NV_scissor_exclusive)
	pfn_vkCmdSetExclusiveScissorEnableNV = (PFN_vkCmdSetExclusiveScissorEnableNV)vkGetInstanceProcAddr(instance, "vkCmdSetExclusiveScissorEnableNV");
	pfn_vkCmdSetExclusiveScissorNV = (PFN_vkCmdSetExclusiveScissorNV)vkGetInstanceProcAddr(instance, "vkCmdSetExclusiveScissorNV");
#endif // defined(VK_NV_scissor_exclusive)
#if defined(VK_NV_shading_rate_image)
	pfn_vkCmdSetViewportShadingRatePaletteNV = (PFN_vkCmdSetViewportShadingRatePaletteNV)vkGetInstanceProcAddr(instance, "vkCmdSetViewportShadingRatePaletteNV");
	pfn_vkCmdBindShadingRateImageNV = (PFN_vkCmdBindShadingRateImageNV)vkGetInstanceProcAddr(instance, "vkCmdBindShadingRateImageNV");
	pfn_vkCmdSetCoarseSampleOrderNV = (PFN_vkCmdSetCoarseSampleOrderNV)vkGetInstanceProcAddr(instance, "vkCmdSetCoarseSampleOrderNV");
#endif // defined(VK_NV_shading_rate_image)
#if defined(VK_OHOS_surface)
	pfn_vkCreateSurfaceOHOS = (PFN_vkCreateSurfaceOHOS)vkGetInstanceProcAddr(instance, "vkCreateSurfaceOHOS");
#endif // defined(VK_OHOS_surface)
#if defined(VK_QCOM_tile_memory_heap)
	pfn_vkCmdBindTileMemoryQCOM = (PFN_vkCmdBindTileMemoryQCOM)vkGetInstanceProcAddr(instance, "vkCmdBindTileMemoryQCOM");
#endif // defined(VK_QCOM_tile_memory_heap)
#if defined(VK_QCOM_tile_properties)
	pfn_vkGetFramebufferTilePropertiesQCOM = (PFN_vkGetFramebufferTilePropertiesQCOM)vkGetInstanceProcAddr(instance, "vkGetFramebufferTilePropertiesQCOM");
	pfn_vkGetDynamicRenderingTilePropertiesQCOM = (PFN_vkGetDynamicRenderingTilePropertiesQCOM)vkGetInstanceProcAddr(instance, "vkGetDynamicRenderingTilePropertiesQCOM");
#endif // defined(VK_QCOM_tile_properties)
#if defined(VK_QCOM_tile_shading)
	pfn_vkCmdDispatchTileQCOM = (PFN_vkCmdDispatchTileQCOM)vkGetInstanceProcAddr(instance, "vkCmdDispatchTileQCOM");
	pfn_vkCmdBeginPerTileExecutionQCOM = (PFN_vkCmdBeginPerTileExecutionQCOM)vkGetInstanceProcAddr(instance, "vkCmdBeginPerTileExecutionQCOM");
	pfn_vkCmdEndPerTileExecutionQCOM = (PFN_vkCmdEndPerTileExecutionQCOM)vkGetInstanceProcAddr(instance, "vkCmdEndPerTileExecutionQCOM");
#endif // defined(VK_QCOM_tile_shading)
#if defined(VK_QNX_external_memory_screen_buffer)
	pfn_vkGetScreenBufferPropertiesQNX = (PFN_vkGetScreenBufferPropertiesQNX)vkGetInstanceProcAddr(instance, "vkGetScreenBufferPropertiesQNX");
#endif // defined(VK_QNX_external_memory_screen_buffer)
#if defined(VK_QNX_screen_surface)
	pfn_vkGetPhysicalDeviceScreenPresentationSupportQNX = (PFN_vkGetPhysicalDeviceScreenPresentationSupportQNX)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceScreenPresentationSupportQNX");
	pfn_vkCreateScreenSurfaceQNX = (PFN_vkCreateScreenSurfaceQNX)vkGetInstanceProcAddr(instance, "vkCreateScreenSurfaceQNX");
#endif // defined(VK_QNX_screen_surface)
#if defined(VK_VALVE_descriptor_set_host_mapping)
	pfn_vkGetDescriptorSetHostMappingVALVE = (PFN_vkGetDescriptorSetHostMappingVALVE)vkGetInstanceProcAddr(instance, "vkGetDescriptorSetHostMappingVALVE");
	pfn_vkGetDescriptorSetLayoutHostMappingInfoVALVE = (PFN_vkGetDescriptorSetLayoutHostMappingInfoVALVE)vkGetInstanceProcAddr(instance, "vkGetDescriptorSetLayoutHostMappingInfoVALVE");
#endif // defined(VK_VALVE_descriptor_set_host_mapping)
}

void vgen_load_device_procs(VkDevice device)
{

#if defined(VK_VERSION_1_0)

	pfn_vkCreateInstance = (PFN_vkCreateInstance)vkGetDeviceProcAddr(device, "vkCreateInstance");
	pfn_vkGetDeviceProcAddr = (PFN_vkGetDeviceProcAddr)vkGetDeviceProcAddr(device, "vkGetDeviceProcAddr");

	pfn_vkDestroyDevice = (PFN_vkDestroyDevice)vkGetDeviceProcAddr(device, "vkDestroyDevice");

	pfn_vkEnumerateInstanceExtensionProperties = (PFN_vkEnumerateInstanceExtensionProperties)vkGetDeviceProcAddr(device, "vkEnumerateInstanceExtensionProperties");

	pfn_vkEnumerateInstanceLayerProperties = (PFN_vkEnumerateInstanceLayerProperties)vkGetDeviceProcAddr(device, "vkEnumerateInstanceLayerProperties");

	pfn_vkGetDeviceQueue = (PFN_vkGetDeviceQueue)vkGetDeviceProcAddr(device, "vkGetDeviceQueue");
	pfn_vkQueueSubmit = (PFN_vkQueueSubmit)vkGetDeviceProcAddr(device, "vkQueueSubmit");
	pfn_vkQueueWaitIdle = (PFN_vkQueueWaitIdle)vkGetDeviceProcAddr(device, "vkQueueWaitIdle");
	pfn_vkDeviceWaitIdle = (PFN_vkDeviceWaitIdle)vkGetDeviceProcAddr(device, "vkDeviceWaitIdle");

	pfn_vkAllocateMemory = (PFN_vkAllocateMemory)vkGetDeviceProcAddr(device, "vkAllocateMemory");
	pfn_vkFreeMemory = (PFN_vkFreeMemory)vkGetDeviceProcAddr(device, "vkFreeMemory");
	pfn_vkMapMemory = (PFN_vkMapMemory)vkGetDeviceProcAddr(device, "vkMapMemory");
	pfn_vkUnmapMemory = (PFN_vkUnmapMemory)vkGetDeviceProcAddr(device, "vkUnmapMemory");
	pfn_vkFlushMappedMemoryRanges = (PFN_vkFlushMappedMemoryRanges)vkGetDeviceProcAddr(device, "vkFlushMappedMemoryRanges");
	pfn_vkInvalidateMappedMemoryRanges = (PFN_vkInvalidateMappedMemoryRanges)vkGetDeviceProcAddr(device, "vkInvalidateMappedMemoryRanges");
	pfn_vkGetDeviceMemoryCommitment = (PFN_vkGetDeviceMemoryCommitment)vkGetDeviceProcAddr(device, "vkGetDeviceMemoryCommitment");

	pfn_vkBindBufferMemory = (PFN_vkBindBufferMemory)vkGetDeviceProcAddr(device, "vkBindBufferMemory");
	pfn_vkBindImageMemory = (PFN_vkBindImageMemory)vkGetDeviceProcAddr(device, "vkBindImageMemory");
	pfn_vkGetBufferMemoryRequirements = (PFN_vkGetBufferMemoryRequirements)vkGetDeviceProcAddr(device, "vkGetBufferMemoryRequirements");
	pfn_vkGetImageMemoryRequirements = (PFN_vkGetImageMemoryRequirements)vkGetDeviceProcAddr(device, "vkGetImageMemoryRequirements");

	pfn_vkGetImageSparseMemoryRequirements = (PFN_vkGetImageSparseMemoryRequirements)vkGetDeviceProcAddr(device, "vkGetImageSparseMemoryRequirements");
	pfn_vkQueueBindSparse = (PFN_vkQueueBindSparse)vkGetDeviceProcAddr(device, "vkQueueBindSparse");

	pfn_vkCreateFence = (PFN_vkCreateFence)vkGetDeviceProcAddr(device, "vkCreateFence");
	pfn_vkDestroyFence = (PFN_vkDestroyFence)vkGetDeviceProcAddr(device, "vkDestroyFence");
	pfn_vkResetFences = (PFN_vkResetFences)vkGetDeviceProcAddr(device, "vkResetFences");
	pfn_vkGetFenceStatus = (PFN_vkGetFenceStatus)vkGetDeviceProcAddr(device, "vkGetFenceStatus");
	pfn_vkWaitForFences = (PFN_vkWaitForFences)vkGetDeviceProcAddr(device, "vkWaitForFences");

	pfn_vkCreateSemaphore = (PFN_vkCreateSemaphore)vkGetDeviceProcAddr(device, "vkCreateSemaphore");
	pfn_vkDestroySemaphore = (PFN_vkDestroySemaphore)vkGetDeviceProcAddr(device, "vkDestroySemaphore");

	pfn_vkCreateEvent = (PFN_vkCreateEvent)vkGetDeviceProcAddr(device, "vkCreateEvent");
	pfn_vkDestroyEvent = (PFN_vkDestroyEvent)vkGetDeviceProcAddr(device, "vkDestroyEvent");
	pfn_vkGetEventStatus = (PFN_vkGetEventStatus)vkGetDeviceProcAddr(device, "vkGetEventStatus");
	pfn_vkSetEvent = (PFN_vkSetEvent)vkGetDeviceProcAddr(device, "vkSetEvent");
	pfn_vkResetEvent = (PFN_vkResetEvent)vkGetDeviceProcAddr(device, "vkResetEvent");

	pfn_vkCreateQueryPool = (PFN_vkCreateQueryPool)vkGetDeviceProcAddr(device, "vkCreateQueryPool");
	pfn_vkDestroyQueryPool = (PFN_vkDestroyQueryPool)vkGetDeviceProcAddr(device, "vkDestroyQueryPool");
	pfn_vkGetQueryPoolResults = (PFN_vkGetQueryPoolResults)vkGetDeviceProcAddr(device, "vkGetQueryPoolResults");

	pfn_vkCreateBuffer = (PFN_vkCreateBuffer)vkGetDeviceProcAddr(device, "vkCreateBuffer");
	pfn_vkDestroyBuffer = (PFN_vkDestroyBuffer)vkGetDeviceProcAddr(device, "vkDestroyBuffer");

	pfn_vkCreateBufferView = (PFN_vkCreateBufferView)vkGetDeviceProcAddr(device, "vkCreateBufferView");
	pfn_vkDestroyBufferView = (PFN_vkDestroyBufferView)vkGetDeviceProcAddr(device, "vkDestroyBufferView");

	pfn_vkCreateImage = (PFN_vkCreateImage)vkGetDeviceProcAddr(device, "vkCreateImage");
	pfn_vkDestroyImage = (PFN_vkDestroyImage)vkGetDeviceProcAddr(device, "vkDestroyImage");
	pfn_vkGetImageSubresourceLayout = (PFN_vkGetImageSubresourceLayout)vkGetDeviceProcAddr(device, "vkGetImageSubresourceLayout");

	pfn_vkCreateImageView = (PFN_vkCreateImageView)vkGetDeviceProcAddr(device, "vkCreateImageView");
	pfn_vkDestroyImageView = (PFN_vkDestroyImageView)vkGetDeviceProcAddr(device, "vkDestroyImageView");

	pfn_vkCreateShaderModule = (PFN_vkCreateShaderModule)vkGetDeviceProcAddr(device, "vkCreateShaderModule");
	pfn_vkDestroyShaderModule = (PFN_vkDestroyShaderModule)vkGetDeviceProcAddr(device, "vkDestroyShaderModule");

	pfn_vkCreatePipelineCache = (PFN_vkCreatePipelineCache)vkGetDeviceProcAddr(device, "vkCreatePipelineCache");
	pfn_vkDestroyPipelineCache = (PFN_vkDestroyPipelineCache)vkGetDeviceProcAddr(device, "vkDestroyPipelineCache");
	pfn_vkGetPipelineCacheData = (PFN_vkGetPipelineCacheData)vkGetDeviceProcAddr(device, "vkGetPipelineCacheData");
	pfn_vkMergePipelineCaches = (PFN_vkMergePipelineCaches)vkGetDeviceProcAddr(device, "vkMergePipelineCaches");

	pfn_vkCreateGraphicsPipelines = (PFN_vkCreateGraphicsPipelines)vkGetDeviceProcAddr(device, "vkCreateGraphicsPipelines");
	pfn_vkCreateComputePipelines = (PFN_vkCreateComputePipelines)vkGetDeviceProcAddr(device, "vkCreateComputePipelines");
	pfn_vkDestroyPipeline = (PFN_vkDestroyPipeline)vkGetDeviceProcAddr(device, "vkDestroyPipeline");

	pfn_vkCreatePipelineLayout = (PFN_vkCreatePipelineLayout)vkGetDeviceProcAddr(device, "vkCreatePipelineLayout");
	pfn_vkDestroyPipelineLayout = (PFN_vkDestroyPipelineLayout)vkGetDeviceProcAddr(device, "vkDestroyPipelineLayout");

	pfn_vkCreateSampler = (PFN_vkCreateSampler)vkGetDeviceProcAddr(device, "vkCreateSampler");
	pfn_vkDestroySampler = (PFN_vkDestroySampler)vkGetDeviceProcAddr(device, "vkDestroySampler");

	pfn_vkCreateDescriptorSetLayout = (PFN_vkCreateDescriptorSetLayout)vkGetDeviceProcAddr(device, "vkCreateDescriptorSetLayout");
	pfn_vkDestroyDescriptorSetLayout = (PFN_vkDestroyDescriptorSetLayout)vkGetDeviceProcAddr(device, "vkDestroyDescriptorSetLayout");
	pfn_vkCreateDescriptorPool = (PFN_vkCreateDescriptorPool)vkGetDeviceProcAddr(device, "vkCreateDescriptorPool");
	pfn_vkDestroyDescriptorPool = (PFN_vkDestroyDescriptorPool)vkGetDeviceProcAddr(device, "vkDestroyDescriptorPool");
	pfn_vkResetDescriptorPool = (PFN_vkResetDescriptorPool)vkGetDeviceProcAddr(device, "vkResetDescriptorPool");
	pfn_vkAllocateDescriptorSets = (PFN_vkAllocateDescriptorSets)vkGetDeviceProcAddr(device, "vkAllocateDescriptorSets");
	pfn_vkFreeDescriptorSets = (PFN_vkFreeDescriptorSets)vkGetDeviceProcAddr(device, "vkFreeDescriptorSets");
	pfn_vkUpdateDescriptorSets = (PFN_vkUpdateDescriptorSets)vkGetDeviceProcAddr(device, "vkUpdateDescriptorSets");

	pfn_vkCreateFramebuffer = (PFN_vkCreateFramebuffer)vkGetDeviceProcAddr(device, "vkCreateFramebuffer");
	pfn_vkDestroyFramebuffer = (PFN_vkDestroyFramebuffer)vkGetDeviceProcAddr(device, "vkDestroyFramebuffer");
	pfn_vkCreateRenderPass = (PFN_vkCreateRenderPass)vkGetDeviceProcAddr(device, "vkCreateRenderPass");
	pfn_vkDestroyRenderPass = (PFN_vkDestroyRenderPass)vkGetDeviceProcAddr(device, "vkDestroyRenderPass");
	pfn_vkGetRenderAreaGranularity = (PFN_vkGetRenderAreaGranularity)vkGetDeviceProcAddr(device, "vkGetRenderAreaGranularity");

	pfn_vkCreateCommandPool = (PFN_vkCreateCommandPool)vkGetDeviceProcAddr(device, "vkCreateCommandPool");
	pfn_vkDestroyCommandPool = (PFN_vkDestroyCommandPool)vkGetDeviceProcAddr(device, "vkDestroyCommandPool");
	pfn_vkResetCommandPool = (PFN_vkResetCommandPool)vkGetDeviceProcAddr(device, "vkResetCommandPool");

	pfn_vkAllocateCommandBuffers = (PFN_vkAllocateCommandBuffers)vkGetDeviceProcAddr(device, "vkAllocateCommandBuffers");
	pfn_vkFreeCommandBuffers = (PFN_vkFreeCommandBuffers)vkGetDeviceProcAddr(device, "vkFreeCommandBuffers");
	pfn_vkBeginCommandBuffer = (PFN_vkBeginCommandBuffer)vkGetDeviceProcAddr(device, "vkBeginCommandBuffer");
	pfn_vkEndCommandBuffer = (PFN_vkEndCommandBuffer)vkGetDeviceProcAddr(device, "vkEndCommandBuffer");
	pfn_vkResetCommandBuffer = (PFN_vkResetCommandBuffer)vkGetDeviceProcAddr(device, "vkResetCommandBuffer");

	pfn_vkCmdBindPipeline = (PFN_vkCmdBindPipeline)vkGetDeviceProcAddr(device, "vkCmdBindPipeline");
	pfn_vkCmdSetViewport = (PFN_vkCmdSetViewport)vkGetDeviceProcAddr(device, "vkCmdSetViewport");
	pfn_vkCmdSetScissor = (PFN_vkCmdSetScissor)vkGetDeviceProcAddr(device, "vkCmdSetScissor");
	pfn_vkCmdSetLineWidth = (PFN_vkCmdSetLineWidth)vkGetDeviceProcAddr(device, "vkCmdSetLineWidth");
	pfn_vkCmdSetDepthBias = (PFN_vkCmdSetDepthBias)vkGetDeviceProcAddr(device, "vkCmdSetDepthBias");
	pfn_vkCmdSetBlendConstants = (PFN_vkCmdSetBlendConstants)vkGetDeviceProcAddr(device, "vkCmdSetBlendConstants");
	pfn_vkCmdSetDepthBounds = (PFN_vkCmdSetDepthBounds)vkGetDeviceProcAddr(device, "vkCmdSetDepthBounds");
	pfn_vkCmdSetStencilCompareMask = (PFN_vkCmdSetStencilCompareMask)vkGetDeviceProcAddr(device, "vkCmdSetStencilCompareMask");
	pfn_vkCmdSetStencilWriteMask = (PFN_vkCmdSetStencilWriteMask)vkGetDeviceProcAddr(device, "vkCmdSetStencilWriteMask");
	pfn_vkCmdSetStencilReference = (PFN_vkCmdSetStencilReference)vkGetDeviceProcAddr(device, "vkCmdSetStencilReference");
	pfn_vkCmdBindDescriptorSets = (PFN_vkCmdBindDescriptorSets)vkGetDeviceProcAddr(device, "vkCmdBindDescriptorSets");
	pfn_vkCmdBindIndexBuffer = (PFN_vkCmdBindIndexBuffer)vkGetDeviceProcAddr(device, "vkCmdBindIndexBuffer");
	pfn_vkCmdBindVertexBuffers = (PFN_vkCmdBindVertexBuffers)vkGetDeviceProcAddr(device, "vkCmdBindVertexBuffers");
	pfn_vkCmdDraw = (PFN_vkCmdDraw)vkGetDeviceProcAddr(device, "vkCmdDraw");
	pfn_vkCmdDrawIndexed = (PFN_vkCmdDrawIndexed)vkGetDeviceProcAddr(device, "vkCmdDrawIndexed");
	pfn_vkCmdDrawIndirect = (PFN_vkCmdDrawIndirect)vkGetDeviceProcAddr(device, "vkCmdDrawIndirect");
	pfn_vkCmdDrawIndexedIndirect = (PFN_vkCmdDrawIndexedIndirect)vkGetDeviceProcAddr(device, "vkCmdDrawIndexedIndirect");
	pfn_vkCmdDispatch = (PFN_vkCmdDispatch)vkGetDeviceProcAddr(device, "vkCmdDispatch");
	pfn_vkCmdDispatchIndirect = (PFN_vkCmdDispatchIndirect)vkGetDeviceProcAddr(device, "vkCmdDispatchIndirect");
	pfn_vkCmdCopyBuffer = (PFN_vkCmdCopyBuffer)vkGetDeviceProcAddr(device, "vkCmdCopyBuffer");
	pfn_vkCmdCopyImage = (PFN_vkCmdCopyImage)vkGetDeviceProcAddr(device, "vkCmdCopyImage");
	pfn_vkCmdBlitImage = (PFN_vkCmdBlitImage)vkGetDeviceProcAddr(device, "vkCmdBlitImage");
	pfn_vkCmdCopyBufferToImage = (PFN_vkCmdCopyBufferToImage)vkGetDeviceProcAddr(device, "vkCmdCopyBufferToImage");
	pfn_vkCmdCopyImageToBuffer = (PFN_vkCmdCopyImageToBuffer)vkGetDeviceProcAddr(device, "vkCmdCopyImageToBuffer");
	pfn_vkCmdUpdateBuffer = (PFN_vkCmdUpdateBuffer)vkGetDeviceProcAddr(device, "vkCmdUpdateBuffer");
	pfn_vkCmdFillBuffer = (PFN_vkCmdFillBuffer)vkGetDeviceProcAddr(device, "vkCmdFillBuffer");
	pfn_vkCmdClearColorImage = (PFN_vkCmdClearColorImage)vkGetDeviceProcAddr(device, "vkCmdClearColorImage");
	pfn_vkCmdClearDepthStencilImage = (PFN_vkCmdClearDepthStencilImage)vkGetDeviceProcAddr(device, "vkCmdClearDepthStencilImage");
	pfn_vkCmdClearAttachments = (PFN_vkCmdClearAttachments)vkGetDeviceProcAddr(device, "vkCmdClearAttachments");
	pfn_vkCmdResolveImage = (PFN_vkCmdResolveImage)vkGetDeviceProcAddr(device, "vkCmdResolveImage");
	pfn_vkCmdSetEvent = (PFN_vkCmdSetEvent)vkGetDeviceProcAddr(device, "vkCmdSetEvent");
	pfn_vkCmdResetEvent = (PFN_vkCmdResetEvent)vkGetDeviceProcAddr(device, "vkCmdResetEvent");
	pfn_vkCmdWaitEvents = (PFN_vkCmdWaitEvents)vkGetDeviceProcAddr(device, "vkCmdWaitEvents");
	pfn_vkCmdPipelineBarrier = (PFN_vkCmdPipelineBarrier)vkGetDeviceProcAddr(device, "vkCmdPipelineBarrier");
	pfn_vkCmdBeginQuery = (PFN_vkCmdBeginQuery)vkGetDeviceProcAddr(device, "vkCmdBeginQuery");
	pfn_vkCmdEndQuery = (PFN_vkCmdEndQuery)vkGetDeviceProcAddr(device, "vkCmdEndQuery");
	pfn_vkCmdResetQueryPool = (PFN_vkCmdResetQueryPool)vkGetDeviceProcAddr(device, "vkCmdResetQueryPool");
	pfn_vkCmdWriteTimestamp = (PFN_vkCmdWriteTimestamp)vkGetDeviceProcAddr(device, "vkCmdWriteTimestamp");
	pfn_vkCmdCopyQueryPoolResults = (PFN_vkCmdCopyQueryPoolResults)vkGetDeviceProcAddr(device, "vkCmdCopyQueryPoolResults");
	pfn_vkCmdPushConstants = (PFN_vkCmdPushConstants)vkGetDeviceProcAddr(device, "vkCmdPushConstants");
	pfn_vkCmdBeginRenderPass = (PFN_vkCmdBeginRenderPass)vkGetDeviceProcAddr(device, "vkCmdBeginRenderPass");
	pfn_vkCmdNextSubpass = (PFN_vkCmdNextSubpass)vkGetDeviceProcAddr(device, "vkCmdNextSubpass");
	pfn_vkCmdEndRenderPass = (PFN_vkCmdEndRenderPass)vkGetDeviceProcAddr(device, "vkCmdEndRenderPass");
	pfn_vkCmdExecuteCommands = (PFN_vkCmdExecuteCommands)vkGetDeviceProcAddr(device, "vkCmdExecuteCommands");

#endif // defined(VK_VERSION_1_0)

#if defined(VK_VERSION_1_1)

	pfn_vkEnumerateInstanceVersion = (PFN_vkEnumerateInstanceVersion)vkGetDeviceProcAddr(device, "vkEnumerateInstanceVersion");

	pfn_vkBindBufferMemory2 = (PFN_vkBindBufferMemory2)vkGetDeviceProcAddr(device, "vkBindBufferMemory2");
	pfn_vkBindImageMemory2 = (PFN_vkBindImageMemory2)vkGetDeviceProcAddr(device, "vkBindImageMemory2");

	pfn_vkGetDeviceGroupPeerMemoryFeatures = (PFN_vkGetDeviceGroupPeerMemoryFeatures)vkGetDeviceProcAddr(device, "vkGetDeviceGroupPeerMemoryFeatures");
	pfn_vkCmdSetDeviceMask = (PFN_vkCmdSetDeviceMask)vkGetDeviceProcAddr(device, "vkCmdSetDeviceMask");
	pfn_vkCmdDispatchBase = (PFN_vkCmdDispatchBase)vkGetDeviceProcAddr(device, "vkCmdDispatchBase");

	pfn_vkGetImageMemoryRequirements2 = (PFN_vkGetImageMemoryRequirements2)vkGetDeviceProcAddr(device, "vkGetImageMemoryRequirements2");
	pfn_vkGetBufferMemoryRequirements2 = (PFN_vkGetBufferMemoryRequirements2)vkGetDeviceProcAddr(device, "vkGetBufferMemoryRequirements2");
	pfn_vkGetImageSparseMemoryRequirements2 = (PFN_vkGetImageSparseMemoryRequirements2)vkGetDeviceProcAddr(device, "vkGetImageSparseMemoryRequirements2");

	pfn_vkTrimCommandPool = (PFN_vkTrimCommandPool)vkGetDeviceProcAddr(device, "vkTrimCommandPool");

	pfn_vkGetDeviceQueue2 = (PFN_vkGetDeviceQueue2)vkGetDeviceProcAddr(device, "vkGetDeviceQueue2");

	pfn_vkCreateSamplerYcbcrConversion = (PFN_vkCreateSamplerYcbcrConversion)vkGetDeviceProcAddr(device, "vkCreateSamplerYcbcrConversion");
	pfn_vkDestroySamplerYcbcrConversion = (PFN_vkDestroySamplerYcbcrConversion)vkGetDeviceProcAddr(device, "vkDestroySamplerYcbcrConversion");

	pfn_vkCreateDescriptorUpdateTemplate = (PFN_vkCreateDescriptorUpdateTemplate)vkGetDeviceProcAddr(device, "vkCreateDescriptorUpdateTemplate");
	pfn_vkDestroyDescriptorUpdateTemplate = (PFN_vkDestroyDescriptorUpdateTemplate)vkGetDeviceProcAddr(device, "vkDestroyDescriptorUpdateTemplate");
	pfn_vkUpdateDescriptorSetWithTemplate = (PFN_vkUpdateDescriptorSetWithTemplate)vkGetDeviceProcAddr(device, "vkUpdateDescriptorSetWithTemplate");

	pfn_vkGetDescriptorSetLayoutSupport = (PFN_vkGetDescriptorSetLayoutSupport)vkGetDeviceProcAddr(device, "vkGetDescriptorSetLayoutSupport");

#endif // defined(VK_VERSION_1_1)

#if defined(VK_VERSION_1_2)

	pfn_vkCmdDrawIndirectCount = (PFN_vkCmdDrawIndirectCount)vkGetDeviceProcAddr(device, "vkCmdDrawIndirectCount");
	pfn_vkCmdDrawIndexedIndirectCount = (PFN_vkCmdDrawIndexedIndirectCount)vkGetDeviceProcAddr(device, "vkCmdDrawIndexedIndirectCount");

	pfn_vkCreateRenderPass2 = (PFN_vkCreateRenderPass2)vkGetDeviceProcAddr(device, "vkCreateRenderPass2");
	pfn_vkCmdBeginRenderPass2 = (PFN_vkCmdBeginRenderPass2)vkGetDeviceProcAddr(device, "vkCmdBeginRenderPass2");
	pfn_vkCmdNextSubpass2 = (PFN_vkCmdNextSubpass2)vkGetDeviceProcAddr(device, "vkCmdNextSubpass2");
	pfn_vkCmdEndRenderPass2 = (PFN_vkCmdEndRenderPass2)vkGetDeviceProcAddr(device, "vkCmdEndRenderPass2");

	pfn_vkResetQueryPool = (PFN_vkResetQueryPool)vkGetDeviceProcAddr(device, "vkResetQueryPool");

	pfn_vkGetSemaphoreCounterValue = (PFN_vkGetSemaphoreCounterValue)vkGetDeviceProcAddr(device, "vkGetSemaphoreCounterValue");
	pfn_vkWaitSemaphores = (PFN_vkWaitSemaphores)vkGetDeviceProcAddr(device, "vkWaitSemaphores");
	pfn_vkSignalSemaphore = (PFN_vkSignalSemaphore)vkGetDeviceProcAddr(device, "vkSignalSemaphore");

	pfn_vkGetBufferDeviceAddress = (PFN_vkGetBufferDeviceAddress)vkGetDeviceProcAddr(device, "vkGetBufferDeviceAddress");
	pfn_vkGetBufferOpaqueCaptureAddress = (PFN_vkGetBufferOpaqueCaptureAddress)vkGetDeviceProcAddr(device, "vkGetBufferOpaqueCaptureAddress");
	pfn_vkGetDeviceMemoryOpaqueCaptureAddress = (PFN_vkGetDeviceMemoryOpaqueCaptureAddress)vkGetDeviceProcAddr(device, "vkGetDeviceMemoryOpaqueCaptureAddress");

#endif // defined(VK_VERSION_1_2)

#if defined(VK_VERSION_1_3)

	pfn_vkCreatePrivateDataSlot = (PFN_vkCreatePrivateDataSlot)vkGetDeviceProcAddr(device, "vkCreatePrivateDataSlot");
	pfn_vkDestroyPrivateDataSlot = (PFN_vkDestroyPrivateDataSlot)vkGetDeviceProcAddr(device, "vkDestroyPrivateDataSlot");
	pfn_vkSetPrivateData = (PFN_vkSetPrivateData)vkGetDeviceProcAddr(device, "vkSetPrivateData");
	pfn_vkGetPrivateData = (PFN_vkGetPrivateData)vkGetDeviceProcAddr(device, "vkGetPrivateData");

	pfn_vkCmdSetEvent2 = (PFN_vkCmdSetEvent2)vkGetDeviceProcAddr(device, "vkCmdSetEvent2");
	pfn_vkCmdResetEvent2 = (PFN_vkCmdResetEvent2)vkGetDeviceProcAddr(device, "vkCmdResetEvent2");
	pfn_vkCmdWaitEvents2 = (PFN_vkCmdWaitEvents2)vkGetDeviceProcAddr(device, "vkCmdWaitEvents2");
	pfn_vkCmdPipelineBarrier2 = (PFN_vkCmdPipelineBarrier2)vkGetDeviceProcAddr(device, "vkCmdPipelineBarrier2");
	pfn_vkCmdWriteTimestamp2 = (PFN_vkCmdWriteTimestamp2)vkGetDeviceProcAddr(device, "vkCmdWriteTimestamp2");
	pfn_vkQueueSubmit2 = (PFN_vkQueueSubmit2)vkGetDeviceProcAddr(device, "vkQueueSubmit2");

	pfn_vkCmdCopyBuffer2 = (PFN_vkCmdCopyBuffer2)vkGetDeviceProcAddr(device, "vkCmdCopyBuffer2");
	pfn_vkCmdCopyImage2 = (PFN_vkCmdCopyImage2)vkGetDeviceProcAddr(device, "vkCmdCopyImage2");
	pfn_vkCmdCopyBufferToImage2 = (PFN_vkCmdCopyBufferToImage2)vkGetDeviceProcAddr(device, "vkCmdCopyBufferToImage2");
	pfn_vkCmdCopyImageToBuffer2 = (PFN_vkCmdCopyImageToBuffer2)vkGetDeviceProcAddr(device, "vkCmdCopyImageToBuffer2");
	pfn_vkCmdBlitImage2 = (PFN_vkCmdBlitImage2)vkGetDeviceProcAddr(device, "vkCmdBlitImage2");
	pfn_vkCmdResolveImage2 = (PFN_vkCmdResolveImage2)vkGetDeviceProcAddr(device, "vkCmdResolveImage2");

	pfn_vkCmdBeginRendering = (PFN_vkCmdBeginRendering)vkGetDeviceProcAddr(device, "vkCmdBeginRendering");
	pfn_vkCmdEndRendering = (PFN_vkCmdEndRendering)vkGetDeviceProcAddr(device, "vkCmdEndRendering");

	pfn_vkCmdSetCullMode = (PFN_vkCmdSetCullMode)vkGetDeviceProcAddr(device, "vkCmdSetCullMode");
	pfn_vkCmdSetFrontFace = (PFN_vkCmdSetFrontFace)vkGetDeviceProcAddr(device, "vkCmdSetFrontFace");
	pfn_vkCmdSetPrimitiveTopology = (PFN_vkCmdSetPrimitiveTopology)vkGetDeviceProcAddr(device, "vkCmdSetPrimitiveTopology");
	pfn_vkCmdSetViewportWithCount = (PFN_vkCmdSetViewportWithCount)vkGetDeviceProcAddr(device, "vkCmdSetViewportWithCount");
	pfn_vkCmdSetScissorWithCount = (PFN_vkCmdSetScissorWithCount)vkGetDeviceProcAddr(device, "vkCmdSetScissorWithCount");
	pfn_vkCmdBindVertexBuffers2 = (PFN_vkCmdBindVertexBuffers2)vkGetDeviceProcAddr(device, "vkCmdBindVertexBuffers2");
	pfn_vkCmdSetDepthTestEnable = (PFN_vkCmdSetDepthTestEnable)vkGetDeviceProcAddr(device, "vkCmdSetDepthTestEnable");
	pfn_vkCmdSetDepthWriteEnable = (PFN_vkCmdSetDepthWriteEnable)vkGetDeviceProcAddr(device, "vkCmdSetDepthWriteEnable");
	pfn_vkCmdSetDepthCompareOp = (PFN_vkCmdSetDepthCompareOp)vkGetDeviceProcAddr(device, "vkCmdSetDepthCompareOp");
	pfn_vkCmdSetDepthBoundsTestEnable = (PFN_vkCmdSetDepthBoundsTestEnable)vkGetDeviceProcAddr(device, "vkCmdSetDepthBoundsTestEnable");
	pfn_vkCmdSetStencilTestEnable = (PFN_vkCmdSetStencilTestEnable)vkGetDeviceProcAddr(device, "vkCmdSetStencilTestEnable");
	pfn_vkCmdSetStencilOp = (PFN_vkCmdSetStencilOp)vkGetDeviceProcAddr(device, "vkCmdSetStencilOp");

	pfn_vkCmdSetRasterizerDiscardEnable = (PFN_vkCmdSetRasterizerDiscardEnable)vkGetDeviceProcAddr(device, "vkCmdSetRasterizerDiscardEnable");
	pfn_vkCmdSetDepthBiasEnable = (PFN_vkCmdSetDepthBiasEnable)vkGetDeviceProcAddr(device, "vkCmdSetDepthBiasEnable");
	pfn_vkCmdSetPrimitiveRestartEnable = (PFN_vkCmdSetPrimitiveRestartEnable)vkGetDeviceProcAddr(device, "vkCmdSetPrimitiveRestartEnable");

	pfn_vkGetDeviceBufferMemoryRequirements = (PFN_vkGetDeviceBufferMemoryRequirements)vkGetDeviceProcAddr(device, "vkGetDeviceBufferMemoryRequirements");
	pfn_vkGetDeviceImageMemoryRequirements = (PFN_vkGetDeviceImageMemoryRequirements)vkGetDeviceProcAddr(device, "vkGetDeviceImageMemoryRequirements");
	pfn_vkGetDeviceImageSparseMemoryRequirements = (PFN_vkGetDeviceImageSparseMemoryRequirements)vkGetDeviceProcAddr(device, "vkGetDeviceImageSparseMemoryRequirements");

#endif // defined(VK_VERSION_1_3)

#if defined(VK_VERSION_1_4)

	pfn_vkCmdSetLineStipple = (PFN_vkCmdSetLineStipple)vkGetDeviceProcAddr(device, "vkCmdSetLineStipple");

	pfn_vkMapMemory2 = (PFN_vkMapMemory2)vkGetDeviceProcAddr(device, "vkMapMemory2");
	pfn_vkUnmapMemory2 = (PFN_vkUnmapMemory2)vkGetDeviceProcAddr(device, "vkUnmapMemory2");

	pfn_vkCmdBindIndexBuffer2 = (PFN_vkCmdBindIndexBuffer2)vkGetDeviceProcAddr(device, "vkCmdBindIndexBuffer2");
	pfn_vkGetRenderingAreaGranularity = (PFN_vkGetRenderingAreaGranularity)vkGetDeviceProcAddr(device, "vkGetRenderingAreaGranularity");
	pfn_vkGetDeviceImageSubresourceLayout = (PFN_vkGetDeviceImageSubresourceLayout)vkGetDeviceProcAddr(device, "vkGetDeviceImageSubresourceLayout");
	pfn_vkGetImageSubresourceLayout2 = (PFN_vkGetImageSubresourceLayout2)vkGetDeviceProcAddr(device, "vkGetImageSubresourceLayout2");

	pfn_vkCmdPushDescriptorSet = (PFN_vkCmdPushDescriptorSet)vkGetDeviceProcAddr(device, "vkCmdPushDescriptorSet");
	pfn_vkCmdPushDescriptorSetWithTemplate = (PFN_vkCmdPushDescriptorSetWithTemplate)vkGetDeviceProcAddr(device, "vkCmdPushDescriptorSetWithTemplate");

	pfn_vkCmdSetRenderingAttachmentLocations = (PFN_vkCmdSetRenderingAttachmentLocations)vkGetDeviceProcAddr(device, "vkCmdSetRenderingAttachmentLocations");
	pfn_vkCmdSetRenderingInputAttachmentIndices = (PFN_vkCmdSetRenderingInputAttachmentIndices)vkGetDeviceProcAddr(device, "vkCmdSetRenderingInputAttachmentIndices");

	pfn_vkCmdBindDescriptorSets2 = (PFN_vkCmdBindDescriptorSets2)vkGetDeviceProcAddr(device, "vkCmdBindDescriptorSets2");
	pfn_vkCmdPushConstants2 = (PFN_vkCmdPushConstants2)vkGetDeviceProcAddr(device, "vkCmdPushConstants2");
	pfn_vkCmdPushDescriptorSet2 = (PFN_vkCmdPushDescriptorSet2)vkGetDeviceProcAddr(device, "vkCmdPushDescriptorSet2");
	pfn_vkCmdPushDescriptorSetWithTemplate2 = (PFN_vkCmdPushDescriptorSetWithTemplate2)vkGetDeviceProcAddr(device, "vkCmdPushDescriptorSetWithTemplate2");

	pfn_vkCopyMemoryToImage = (PFN_vkCopyMemoryToImage)vkGetDeviceProcAddr(device, "vkCopyMemoryToImage");
	pfn_vkCopyImageToMemory = (PFN_vkCopyImageToMemory)vkGetDeviceProcAddr(device, "vkCopyImageToMemory");
	pfn_vkCopyImageToImage = (PFN_vkCopyImageToImage)vkGetDeviceProcAddr(device, "vkCopyImageToImage");
	pfn_vkTransitionImageLayout = (PFN_vkTransitionImageLayout)vkGetDeviceProcAddr(device, "vkTransitionImageLayout");

#endif // defined(VK_VERSION_1_4)

#if defined(VKSC_VERSION_1_0)

	pfn_vkGetCommandPoolMemoryConsumption = (PFN_vkGetCommandPoolMemoryConsumption)vkGetDeviceProcAddr(device, "vkGetCommandPoolMemoryConsumption");

	pfn_vkGetFaultData = (PFN_vkGetFaultData)vkGetDeviceProcAddr(device, "vkGetFaultData");

#endif // defined(VKSC_VERSION_1_0)
#if defined(VK_AMDX_shader_enqueue)
	pfn_vkGetExecutionGraphPipelineScratchSizeAMDX = (PFN_vkGetExecutionGraphPipelineScratchSizeAMDX)vkGetDeviceProcAddr(device, "vkGetExecutionGraphPipelineScratchSizeAMDX");
	pfn_vkCreateExecutionGraphPipelinesAMDX = (PFN_vkCreateExecutionGraphPipelinesAMDX)vkGetDeviceProcAddr(device, "vkCreateExecutionGraphPipelinesAMDX");
	pfn_vkGetExecutionGraphPipelineNodeIndexAMDX = (PFN_vkGetExecutionGraphPipelineNodeIndexAMDX)vkGetDeviceProcAddr(device, "vkGetExecutionGraphPipelineNodeIndexAMDX");
	pfn_vkCmdInitializeGraphScratchMemoryAMDX = (PFN_vkCmdInitializeGraphScratchMemoryAMDX)vkGetDeviceProcAddr(device, "vkCmdInitializeGraphScratchMemoryAMDX");
	pfn_vkCmdDispatchGraphAMDX = (PFN_vkCmdDispatchGraphAMDX)vkGetDeviceProcAddr(device, "vkCmdDispatchGraphAMDX");
	pfn_vkCmdDispatchGraphIndirectAMDX = (PFN_vkCmdDispatchGraphIndirectAMDX)vkGetDeviceProcAddr(device, "vkCmdDispatchGraphIndirectAMDX");
	pfn_vkCmdDispatchGraphIndirectCountAMDX = (PFN_vkCmdDispatchGraphIndirectCountAMDX)vkGetDeviceProcAddr(device, "vkCmdDispatchGraphIndirectCountAMDX");
#endif // defined(VK_AMDX_shader_enqueue)
#if defined(VK_AMD_anti_lag)
	pfn_vkAntiLagUpdateAMD = (PFN_vkAntiLagUpdateAMD)vkGetDeviceProcAddr(device, "vkAntiLagUpdateAMD");
#endif // defined(VK_AMD_anti_lag)
#if defined(VK_AMD_buffer_marker)
	pfn_vkCmdWriteBufferMarkerAMD = (PFN_vkCmdWriteBufferMarkerAMD)vkGetDeviceProcAddr(device, "vkCmdWriteBufferMarkerAMD");
	pfn_vkCmdWriteBufferMarker2AMD = (PFN_vkCmdWriteBufferMarker2AMD)vkGetDeviceProcAddr(device, "vkCmdWriteBufferMarker2AMD");
#endif // defined(VK_AMD_buffer_marker)
#if defined(VK_AMD_display_native_hdr)
	pfn_vkSetLocalDimmingAMD = (PFN_vkSetLocalDimmingAMD)vkGetDeviceProcAddr(device, "vkSetLocalDimmingAMD");
#endif // defined(VK_AMD_display_native_hdr)
#if defined(VK_AMD_draw_indirect_count)
	pfn_vkCmdDrawIndirectCountAMD = (PFN_vkCmdDrawIndirectCountAMD)vkGetDeviceProcAddr(device, "vkCmdDrawIndirectCountAMD");
	pfn_vkCmdDrawIndexedIndirectCountAMD = (PFN_vkCmdDrawIndexedIndirectCountAMD)vkGetDeviceProcAddr(device, "vkCmdDrawIndexedIndirectCountAMD");
#endif // defined(VK_AMD_draw_indirect_count)
#if defined(VK_AMD_shader_info)
	pfn_vkGetShaderInfoAMD = (PFN_vkGetShaderInfoAMD)vkGetDeviceProcAddr(device, "vkGetShaderInfoAMD");
#endif // defined(VK_AMD_shader_info)
#if defined(VK_ANDROID_external_memory_android_hardware_buffer)
	pfn_vkGetAndroidHardwareBufferPropertiesANDROID = (PFN_vkGetAndroidHardwareBufferPropertiesANDROID)vkGetDeviceProcAddr(device, "vkGetAndroidHardwareBufferPropertiesANDROID");
	pfn_vkGetMemoryAndroidHardwareBufferANDROID = (PFN_vkGetMemoryAndroidHardwareBufferANDROID)vkGetDeviceProcAddr(device, "vkGetMemoryAndroidHardwareBufferANDROID");
#endif // defined(VK_ANDROID_external_memory_android_hardware_buffer)
#if defined(VK_ARM_data_graph)
	pfn_vkCreateDataGraphPipelinesARM = (PFN_vkCreateDataGraphPipelinesARM)vkGetDeviceProcAddr(device, "vkCreateDataGraphPipelinesARM");
	pfn_vkGetDataGraphPipelinePropertiesARM = (PFN_vkGetDataGraphPipelinePropertiesARM)vkGetDeviceProcAddr(device, "vkGetDataGraphPipelinePropertiesARM");
	pfn_vkGetDataGraphPipelineSessionBindPointRequirementsARM = (PFN_vkGetDataGraphPipelineSessionBindPointRequirementsARM)vkGetDeviceProcAddr(device, "vkGetDataGraphPipelineSessionBindPointRequirementsARM");
	pfn_vkCreateDataGraphPipelineSessionARM = (PFN_vkCreateDataGraphPipelineSessionARM)vkGetDeviceProcAddr(device, "vkCreateDataGraphPipelineSessionARM");
	pfn_vkGetDataGraphPipelineSessionMemoryRequirementsARM = (PFN_vkGetDataGraphPipelineSessionMemoryRequirementsARM)vkGetDeviceProcAddr(device, "vkGetDataGraphPipelineSessionMemoryRequirementsARM");
	pfn_vkBindDataGraphPipelineSessionMemoryARM = (PFN_vkBindDataGraphPipelineSessionMemoryARM)vkGetDeviceProcAddr(device, "vkBindDataGraphPipelineSessionMemoryARM");
	pfn_vkDestroyDataGraphPipelineSessionARM = (PFN_vkDestroyDataGraphPipelineSessionARM)vkGetDeviceProcAddr(device, "vkDestroyDataGraphPipelineSessionARM");
	pfn_vkCmdDispatchDataGraphARM = (PFN_vkCmdDispatchDataGraphARM)vkGetDeviceProcAddr(device, "vkCmdDispatchDataGraphARM");
	pfn_vkGetDataGraphPipelineAvailablePropertiesARM = (PFN_vkGetDataGraphPipelineAvailablePropertiesARM)vkGetDeviceProcAddr(device, "vkGetDataGraphPipelineAvailablePropertiesARM");
#endif // defined(VK_ARM_data_graph)
#if defined(VK_ARM_tensors)
	pfn_vkCreateTensorARM = (PFN_vkCreateTensorARM)vkGetDeviceProcAddr(device, "vkCreateTensorARM");
	pfn_vkGetTensorViewOpaqueCaptureDescriptorDataARM = (PFN_vkGetTensorViewOpaqueCaptureDescriptorDataARM)vkGetDeviceProcAddr(device, "vkGetTensorViewOpaqueCaptureDescriptorDataARM");
	pfn_vkDestroyTensorARM = (PFN_vkDestroyTensorARM)vkGetDeviceProcAddr(device, "vkDestroyTensorARM");
	pfn_vkBindTensorMemoryARM = (PFN_vkBindTensorMemoryARM)vkGetDeviceProcAddr(device, "vkBindTensorMemoryARM");
	pfn_vkGetTensorMemoryRequirementsARM = (PFN_vkGetTensorMemoryRequirementsARM)vkGetDeviceProcAddr(device, "vkGetTensorMemoryRequirementsARM");
	pfn_vkGetDeviceTensorMemoryRequirementsARM = (PFN_vkGetDeviceTensorMemoryRequirementsARM)vkGetDeviceProcAddr(device, "vkGetDeviceTensorMemoryRequirementsARM");
	pfn_vkCreateTensorViewARM = (PFN_vkCreateTensorViewARM)vkGetDeviceProcAddr(device, "vkCreateTensorViewARM");
	pfn_vkDestroyTensorViewARM = (PFN_vkDestroyTensorViewARM)vkGetDeviceProcAddr(device, "vkDestroyTensorViewARM");
	pfn_vkCmdCopyTensorARM = (PFN_vkCmdCopyTensorARM)vkGetDeviceProcAddr(device, "vkCmdCopyTensorARM");
	pfn_vkGetTensorOpaqueCaptureDescriptorDataARM = (PFN_vkGetTensorOpaqueCaptureDescriptorDataARM)vkGetDeviceProcAddr(device, "vkGetTensorOpaqueCaptureDescriptorDataARM");
#endif // defined(VK_ARM_tensors)
#if defined(VK_EXT_attachment_feedback_loop_dynamic_state)
	pfn_vkCmdSetAttachmentFeedbackLoopEnableEXT = (PFN_vkCmdSetAttachmentFeedbackLoopEnableEXT)vkGetDeviceProcAddr(device, "vkCmdSetAttachmentFeedbackLoopEnableEXT");
#endif // defined(VK_EXT_attachment_feedback_loop_dynamic_state)
#if defined(VK_EXT_buffer_device_address)
	pfn_vkGetBufferDeviceAddressEXT = (PFN_vkGetBufferDeviceAddressEXT)vkGetDeviceProcAddr(device, "vkGetBufferDeviceAddressEXT");
#endif // defined(VK_EXT_buffer_device_address)
#if defined(VK_EXT_calibrated_timestamps)
	pfn_vkGetCalibratedTimestampsEXT = (PFN_vkGetCalibratedTimestampsEXT)vkGetDeviceProcAddr(device, "vkGetCalibratedTimestampsEXT");
#endif // defined(VK_EXT_calibrated_timestamps)
#if defined(VK_EXT_color_write_enable)
	pfn_vkCmdSetColorWriteEnableEXT = (PFN_vkCmdSetColorWriteEnableEXT)vkGetDeviceProcAddr(device, "vkCmdSetColorWriteEnableEXT");
#endif // defined(VK_EXT_color_write_enable)
#if defined(VK_EXT_conditional_rendering)
	pfn_vkCmdBeginConditionalRenderingEXT = (PFN_vkCmdBeginConditionalRenderingEXT)vkGetDeviceProcAddr(device, "vkCmdBeginConditionalRenderingEXT");
	pfn_vkCmdEndConditionalRenderingEXT = (PFN_vkCmdEndConditionalRenderingEXT)vkGetDeviceProcAddr(device, "vkCmdEndConditionalRenderingEXT");
#endif // defined(VK_EXT_conditional_rendering)
#if defined(VK_EXT_debug_marker)
	pfn_vkCmdDebugMarkerEndEXT = (PFN_vkCmdDebugMarkerEndEXT)vkGetDeviceProcAddr(device, "vkCmdDebugMarkerEndEXT");
	pfn_vkCmdDebugMarkerBeginEXT = (PFN_vkCmdDebugMarkerBeginEXT)vkGetDeviceProcAddr(device, "vkCmdDebugMarkerBeginEXT");
	pfn_vkDebugMarkerSetObjectTagEXT = (PFN_vkDebugMarkerSetObjectTagEXT)vkGetDeviceProcAddr(device, "vkDebugMarkerSetObjectTagEXT");
	pfn_vkDebugMarkerSetObjectNameEXT = (PFN_vkDebugMarkerSetObjectNameEXT)vkGetDeviceProcAddr(device, "vkDebugMarkerSetObjectNameEXT");
	pfn_vkCmdDebugMarkerInsertEXT = (PFN_vkCmdDebugMarkerInsertEXT)vkGetDeviceProcAddr(device, "vkCmdDebugMarkerInsertEXT");
#endif // defined(VK_EXT_debug_marker)
#if defined(VK_EXT_debug_utils)
	pfn_vkCmdInsertDebugUtilsLabelEXT = (PFN_vkCmdInsertDebugUtilsLabelEXT)vkGetDeviceProcAddr(device, "vkCmdInsertDebugUtilsLabelEXT");
	pfn_vkCmdEndDebugUtilsLabelEXT = (PFN_vkCmdEndDebugUtilsLabelEXT)vkGetDeviceProcAddr(device, "vkCmdEndDebugUtilsLabelEXT");
	pfn_vkSetDebugUtilsObjectTagEXT = (PFN_vkSetDebugUtilsObjectTagEXT)vkGetDeviceProcAddr(device, "vkSetDebugUtilsObjectTagEXT");
	pfn_vkSetDebugUtilsObjectNameEXT = (PFN_vkSetDebugUtilsObjectNameEXT)vkGetDeviceProcAddr(device, "vkSetDebugUtilsObjectNameEXT");
	pfn_vkQueueInsertDebugUtilsLabelEXT = (PFN_vkQueueInsertDebugUtilsLabelEXT)vkGetDeviceProcAddr(device, "vkQueueInsertDebugUtilsLabelEXT");
	pfn_vkQueueBeginDebugUtilsLabelEXT = (PFN_vkQueueBeginDebugUtilsLabelEXT)vkGetDeviceProcAddr(device, "vkQueueBeginDebugUtilsLabelEXT");
	pfn_vkQueueEndDebugUtilsLabelEXT = (PFN_vkQueueEndDebugUtilsLabelEXT)vkGetDeviceProcAddr(device, "vkQueueEndDebugUtilsLabelEXT");
	pfn_vkCmdBeginDebugUtilsLabelEXT = (PFN_vkCmdBeginDebugUtilsLabelEXT)vkGetDeviceProcAddr(device, "vkCmdBeginDebugUtilsLabelEXT");
#endif // defined(VK_EXT_debug_utils)
#if defined(VK_EXT_depth_bias_control)
	pfn_vkCmdSetDepthBias2EXT = (PFN_vkCmdSetDepthBias2EXT)vkGetDeviceProcAddr(device, "vkCmdSetDepthBias2EXT");
#endif // defined(VK_EXT_depth_bias_control)
#if defined(VK_EXT_depth_clamp_control) || defined(VK_EXT_shader_object)
	pfn_vkCmdSetDepthClampRangeEXT = (PFN_vkCmdSetDepthClampRangeEXT)vkGetDeviceProcAddr(device, "vkCmdSetDepthClampRangeEXT");
#endif // defined(VK_EXT_depth_clamp_control) || defined(VK_EXT_shader_object)
#if defined(VK_EXT_descriptor_buffer)
	pfn_vkGetImageOpaqueCaptureDescriptorDataEXT = (PFN_vkGetImageOpaqueCaptureDescriptorDataEXT)vkGetDeviceProcAddr(device, "vkGetImageOpaqueCaptureDescriptorDataEXT");
	pfn_vkCmdBindDescriptorBuffersEXT = (PFN_vkCmdBindDescriptorBuffersEXT)vkGetDeviceProcAddr(device, "vkCmdBindDescriptorBuffersEXT");
	pfn_vkCmdSetDescriptorBufferOffsetsEXT = (PFN_vkCmdSetDescriptorBufferOffsetsEXT)vkGetDeviceProcAddr(device, "vkCmdSetDescriptorBufferOffsetsEXT");
	pfn_vkGetSamplerOpaqueCaptureDescriptorDataEXT = (PFN_vkGetSamplerOpaqueCaptureDescriptorDataEXT)vkGetDeviceProcAddr(device, "vkGetSamplerOpaqueCaptureDescriptorDataEXT");
	pfn_vkGetDescriptorSetLayoutSizeEXT = (PFN_vkGetDescriptorSetLayoutSizeEXT)vkGetDeviceProcAddr(device, "vkGetDescriptorSetLayoutSizeEXT");
	pfn_vkGetDescriptorSetLayoutBindingOffsetEXT = (PFN_vkGetDescriptorSetLayoutBindingOffsetEXT)vkGetDeviceProcAddr(device, "vkGetDescriptorSetLayoutBindingOffsetEXT");
	pfn_vkGetDescriptorEXT = (PFN_vkGetDescriptorEXT)vkGetDeviceProcAddr(device, "vkGetDescriptorEXT");
	pfn_vkCmdBindDescriptorBufferEmbeddedSamplersEXT = (PFN_vkCmdBindDescriptorBufferEmbeddedSamplersEXT)vkGetDeviceProcAddr(device, "vkCmdBindDescriptorBufferEmbeddedSamplersEXT");
	pfn_vkGetBufferOpaqueCaptureDescriptorDataEXT = (PFN_vkGetBufferOpaqueCaptureDescriptorDataEXT)vkGetDeviceProcAddr(device, "vkGetBufferOpaqueCaptureDescriptorDataEXT");
	pfn_vkGetImageViewOpaqueCaptureDescriptorDataEXT = (PFN_vkGetImageViewOpaqueCaptureDescriptorDataEXT)vkGetDeviceProcAddr(device, "vkGetImageViewOpaqueCaptureDescriptorDataEXT");
	pfn_vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT = (PFN_vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT)vkGetDeviceProcAddr(device, "vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT");
#endif // defined(VK_EXT_descriptor_buffer)
#if defined(VK_EXT_device_fault)
	pfn_vkGetDeviceFaultInfoEXT = (PFN_vkGetDeviceFaultInfoEXT)vkGetDeviceProcAddr(device, "vkGetDeviceFaultInfoEXT");
#endif // defined(VK_EXT_device_fault)
#if defined(VK_EXT_device_generated_commands)
	pfn_vkCreateIndirectCommandsLayoutEXT = (PFN_vkCreateIndirectCommandsLayoutEXT)vkGetDeviceProcAddr(device, "vkCreateIndirectCommandsLayoutEXT");
	pfn_vkDestroyIndirectCommandsLayoutEXT = (PFN_vkDestroyIndirectCommandsLayoutEXT)vkGetDeviceProcAddr(device, "vkDestroyIndirectCommandsLayoutEXT");
	pfn_vkUpdateIndirectExecutionSetShaderEXT = (PFN_vkUpdateIndirectExecutionSetShaderEXT)vkGetDeviceProcAddr(device, "vkUpdateIndirectExecutionSetShaderEXT");
	pfn_vkCmdPreprocessGeneratedCommandsEXT = (PFN_vkCmdPreprocessGeneratedCommandsEXT)vkGetDeviceProcAddr(device, "vkCmdPreprocessGeneratedCommandsEXT");
	pfn_vkUpdateIndirectExecutionSetPipelineEXT = (PFN_vkUpdateIndirectExecutionSetPipelineEXT)vkGetDeviceProcAddr(device, "vkUpdateIndirectExecutionSetPipelineEXT");
	pfn_vkGetGeneratedCommandsMemoryRequirementsEXT = (PFN_vkGetGeneratedCommandsMemoryRequirementsEXT)vkGetDeviceProcAddr(device, "vkGetGeneratedCommandsMemoryRequirementsEXT");
	pfn_vkCmdExecuteGeneratedCommandsEXT = (PFN_vkCmdExecuteGeneratedCommandsEXT)vkGetDeviceProcAddr(device, "vkCmdExecuteGeneratedCommandsEXT");
	pfn_vkCreateIndirectExecutionSetEXT = (PFN_vkCreateIndirectExecutionSetEXT)vkGetDeviceProcAddr(device, "vkCreateIndirectExecutionSetEXT");
	pfn_vkDestroyIndirectExecutionSetEXT = (PFN_vkDestroyIndirectExecutionSetEXT)vkGetDeviceProcAddr(device, "vkDestroyIndirectExecutionSetEXT");
#endif // defined(VK_EXT_device_generated_commands)
#if defined(VK_EXT_discard_rectangles)
	pfn_vkCmdSetDiscardRectangleEXT = (PFN_vkCmdSetDiscardRectangleEXT)vkGetDeviceProcAddr(device, "vkCmdSetDiscardRectangleEXT");
	pfn_vkCmdSetDiscardRectangleEnableEXT = (PFN_vkCmdSetDiscardRectangleEnableEXT)vkGetDeviceProcAddr(device, "vkCmdSetDiscardRectangleEnableEXT");
	pfn_vkCmdSetDiscardRectangleModeEXT = (PFN_vkCmdSetDiscardRectangleModeEXT)vkGetDeviceProcAddr(device, "vkCmdSetDiscardRectangleModeEXT");
#endif // defined(VK_EXT_discard_rectangles)
#if defined(VK_EXT_display_control)
	pfn_vkDisplayPowerControlEXT = (PFN_vkDisplayPowerControlEXT)vkGetDeviceProcAddr(device, "vkDisplayPowerControlEXT");
	pfn_vkGetSwapchainCounterEXT = (PFN_vkGetSwapchainCounterEXT)vkGetDeviceProcAddr(device, "vkGetSwapchainCounterEXT");
	pfn_vkRegisterDeviceEventEXT = (PFN_vkRegisterDeviceEventEXT)vkGetDeviceProcAddr(device, "vkRegisterDeviceEventEXT");
	pfn_vkRegisterDisplayEventEXT = (PFN_vkRegisterDisplayEventEXT)vkGetDeviceProcAddr(device, "vkRegisterDisplayEventEXT");
#endif // defined(VK_EXT_display_control)
#if defined(VK_EXT_extended_dynamic_state) || defined(VK_EXT_shader_object)
	pfn_vkCmdBindVertexBuffers2EXT = (PFN_vkCmdBindVertexBuffers2EXT)vkGetDeviceProcAddr(device, "vkCmdBindVertexBuffers2EXT");
	pfn_vkCmdSetCullModeEXT = (PFN_vkCmdSetCullModeEXT)vkGetDeviceProcAddr(device, "vkCmdSetCullModeEXT");
	pfn_vkCmdSetDepthTestEnableEXT = (PFN_vkCmdSetDepthTestEnableEXT)vkGetDeviceProcAddr(device, "vkCmdSetDepthTestEnableEXT");
	pfn_vkCmdSetFrontFaceEXT = (PFN_vkCmdSetFrontFaceEXT)vkGetDeviceProcAddr(device, "vkCmdSetFrontFaceEXT");
	pfn_vkCmdSetPrimitiveTopologyEXT = (PFN_vkCmdSetPrimitiveTopologyEXT)vkGetDeviceProcAddr(device, "vkCmdSetPrimitiveTopologyEXT");
	pfn_vkCmdSetViewportWithCountEXT = (PFN_vkCmdSetViewportWithCountEXT)vkGetDeviceProcAddr(device, "vkCmdSetViewportWithCountEXT");
	pfn_vkCmdSetScissorWithCountEXT = (PFN_vkCmdSetScissorWithCountEXT)vkGetDeviceProcAddr(device, "vkCmdSetScissorWithCountEXT");
	pfn_vkCmdSetDepthWriteEnableEXT = (PFN_vkCmdSetDepthWriteEnableEXT)vkGetDeviceProcAddr(device, "vkCmdSetDepthWriteEnableEXT");
	pfn_vkCmdSetDepthCompareOpEXT = (PFN_vkCmdSetDepthCompareOpEXT)vkGetDeviceProcAddr(device, "vkCmdSetDepthCompareOpEXT");
	pfn_vkCmdSetDepthBoundsTestEnableEXT = (PFN_vkCmdSetDepthBoundsTestEnableEXT)vkGetDeviceProcAddr(device, "vkCmdSetDepthBoundsTestEnableEXT");
	pfn_vkCmdSetStencilTestEnableEXT = (PFN_vkCmdSetStencilTestEnableEXT)vkGetDeviceProcAddr(device, "vkCmdSetStencilTestEnableEXT");
	pfn_vkCmdSetStencilOpEXT = (PFN_vkCmdSetStencilOpEXT)vkGetDeviceProcAddr(device, "vkCmdSetStencilOpEXT");
#endif // defined(VK_EXT_extended_dynamic_state) || defined(VK_EXT_shader_object)
#if defined(VK_EXT_extended_dynamic_state2) || defined(VK_EXT_shader_object)
	pfn_vkCmdSetDepthBiasEnableEXT = (PFN_vkCmdSetDepthBiasEnableEXT)vkGetDeviceProcAddr(device, "vkCmdSetDepthBiasEnableEXT");
	pfn_vkCmdSetPrimitiveRestartEnableEXT = (PFN_vkCmdSetPrimitiveRestartEnableEXT)vkGetDeviceProcAddr(device, "vkCmdSetPrimitiveRestartEnableEXT");
	pfn_vkCmdSetLogicOpEXT = (PFN_vkCmdSetLogicOpEXT)vkGetDeviceProcAddr(device, "vkCmdSetLogicOpEXT");
	pfn_vkCmdSetPatchControlPointsEXT = (PFN_vkCmdSetPatchControlPointsEXT)vkGetDeviceProcAddr(device, "vkCmdSetPatchControlPointsEXT");
	pfn_vkCmdSetRasterizerDiscardEnableEXT = (PFN_vkCmdSetRasterizerDiscardEnableEXT)vkGetDeviceProcAddr(device, "vkCmdSetRasterizerDiscardEnableEXT");
#endif // defined(VK_EXT_extended_dynamic_state2) || defined(VK_EXT_shader_object)
#if defined(VK_EXT_extended_dynamic_state3) || defined(VK_EXT_shader_object)
	pfn_vkCmdSetLineStippleEnableEXT = (PFN_vkCmdSetLineStippleEnableEXT)vkGetDeviceProcAddr(device, "vkCmdSetLineStippleEnableEXT");
	pfn_vkCmdSetRasterizationSamplesEXT = (PFN_vkCmdSetRasterizationSamplesEXT)vkGetDeviceProcAddr(device, "vkCmdSetRasterizationSamplesEXT");
	pfn_vkCmdSetRepresentativeFragmentTestEnableNV = (PFN_vkCmdSetRepresentativeFragmentTestEnableNV)vkGetDeviceProcAddr(device, "vkCmdSetRepresentativeFragmentTestEnableNV");
	pfn_vkCmdSetPolygonModeEXT = (PFN_vkCmdSetPolygonModeEXT)vkGetDeviceProcAddr(device, "vkCmdSetPolygonModeEXT");
	pfn_vkCmdSetDepthClipNegativeOneToOneEXT = (PFN_vkCmdSetDepthClipNegativeOneToOneEXT)vkGetDeviceProcAddr(device, "vkCmdSetDepthClipNegativeOneToOneEXT");
	pfn_vkCmdSetCoverageModulationTableEnableNV = (PFN_vkCmdSetCoverageModulationTableEnableNV)vkGetDeviceProcAddr(device, "vkCmdSetCoverageModulationTableEnableNV");
	pfn_vkCmdSetProvokingVertexModeEXT = (PFN_vkCmdSetProvokingVertexModeEXT)vkGetDeviceProcAddr(device, "vkCmdSetProvokingVertexModeEXT");
	pfn_vkCmdSetDepthClipEnableEXT = (PFN_vkCmdSetDepthClipEnableEXT)vkGetDeviceProcAddr(device, "vkCmdSetDepthClipEnableEXT");
	pfn_vkCmdSetShadingRateImageEnableNV = (PFN_vkCmdSetShadingRateImageEnableNV)vkGetDeviceProcAddr(device, "vkCmdSetShadingRateImageEnableNV");
	pfn_vkCmdSetCoverageToColorLocationNV = (PFN_vkCmdSetCoverageToColorLocationNV)vkGetDeviceProcAddr(device, "vkCmdSetCoverageToColorLocationNV");
	pfn_vkCmdSetSampleLocationsEnableEXT = (PFN_vkCmdSetSampleLocationsEnableEXT)vkGetDeviceProcAddr(device, "vkCmdSetSampleLocationsEnableEXT");
	pfn_vkCmdSetLineRasterizationModeEXT = (PFN_vkCmdSetLineRasterizationModeEXT)vkGetDeviceProcAddr(device, "vkCmdSetLineRasterizationModeEXT");
	pfn_vkCmdSetConservativeRasterizationModeEXT = (PFN_vkCmdSetConservativeRasterizationModeEXT)vkGetDeviceProcAddr(device, "vkCmdSetConservativeRasterizationModeEXT");
	pfn_vkCmdSetDepthClampEnableEXT = (PFN_vkCmdSetDepthClampEnableEXT)vkGetDeviceProcAddr(device, "vkCmdSetDepthClampEnableEXT");
	pfn_vkCmdSetColorWriteMaskEXT = (PFN_vkCmdSetColorWriteMaskEXT)vkGetDeviceProcAddr(device, "vkCmdSetColorWriteMaskEXT");
	pfn_vkCmdSetColorBlendAdvancedEXT = (PFN_vkCmdSetColorBlendAdvancedEXT)vkGetDeviceProcAddr(device, "vkCmdSetColorBlendAdvancedEXT");
	pfn_vkCmdSetLogicOpEnableEXT = (PFN_vkCmdSetLogicOpEnableEXT)vkGetDeviceProcAddr(device, "vkCmdSetLogicOpEnableEXT");
	pfn_vkCmdSetAlphaToOneEnableEXT = (PFN_vkCmdSetAlphaToOneEnableEXT)vkGetDeviceProcAddr(device, "vkCmdSetAlphaToOneEnableEXT");
	pfn_vkCmdSetViewportWScalingEnableNV = (PFN_vkCmdSetViewportWScalingEnableNV)vkGetDeviceProcAddr(device, "vkCmdSetViewportWScalingEnableNV");
	pfn_vkCmdSetRasterizationStreamEXT = (PFN_vkCmdSetRasterizationStreamEXT)vkGetDeviceProcAddr(device, "vkCmdSetRasterizationStreamEXT");
	pfn_vkCmdSetColorBlendEquationEXT = (PFN_vkCmdSetColorBlendEquationEXT)vkGetDeviceProcAddr(device, "vkCmdSetColorBlendEquationEXT");
	pfn_vkCmdSetSampleMaskEXT = (PFN_vkCmdSetSampleMaskEXT)vkGetDeviceProcAddr(device, "vkCmdSetSampleMaskEXT");
	pfn_vkCmdSetAlphaToCoverageEnableEXT = (PFN_vkCmdSetAlphaToCoverageEnableEXT)vkGetDeviceProcAddr(device, "vkCmdSetAlphaToCoverageEnableEXT");
	pfn_vkCmdSetColorBlendEnableEXT = (PFN_vkCmdSetColorBlendEnableEXT)vkGetDeviceProcAddr(device, "vkCmdSetColorBlendEnableEXT");
	pfn_vkCmdSetTessellationDomainOriginEXT = (PFN_vkCmdSetTessellationDomainOriginEXT)vkGetDeviceProcAddr(device, "vkCmdSetTessellationDomainOriginEXT");
	pfn_vkCmdSetExtraPrimitiveOverestimationSizeEXT = (PFN_vkCmdSetExtraPrimitiveOverestimationSizeEXT)vkGetDeviceProcAddr(device, "vkCmdSetExtraPrimitiveOverestimationSizeEXT");
	pfn_vkCmdSetViewportSwizzleNV = (PFN_vkCmdSetViewportSwizzleNV)vkGetDeviceProcAddr(device, "vkCmdSetViewportSwizzleNV");
	pfn_vkCmdSetCoverageToColorEnableNV = (PFN_vkCmdSetCoverageToColorEnableNV)vkGetDeviceProcAddr(device, "vkCmdSetCoverageToColorEnableNV");
	pfn_vkCmdSetCoverageModulationModeNV = (PFN_vkCmdSetCoverageModulationModeNV)vkGetDeviceProcAddr(device, "vkCmdSetCoverageModulationModeNV");
	pfn_vkCmdSetCoverageModulationTableNV = (PFN_vkCmdSetCoverageModulationTableNV)vkGetDeviceProcAddr(device, "vkCmdSetCoverageModulationTableNV");
	pfn_vkCmdSetCoverageReductionModeNV = (PFN_vkCmdSetCoverageReductionModeNV)vkGetDeviceProcAddr(device, "vkCmdSetCoverageReductionModeNV");
#endif // defined(VK_EXT_extended_dynamic_state3) || defined(VK_EXT_shader_object)
#if defined(VK_EXT_external_memory_host)
	pfn_vkGetMemoryHostPointerPropertiesEXT = (PFN_vkGetMemoryHostPointerPropertiesEXT)vkGetDeviceProcAddr(device, "vkGetMemoryHostPointerPropertiesEXT");
#endif // defined(VK_EXT_external_memory_host)
#if defined(VK_EXT_external_memory_metal)
	pfn_vkGetMemoryMetalHandleEXT = (PFN_vkGetMemoryMetalHandleEXT)vkGetDeviceProcAddr(device, "vkGetMemoryMetalHandleEXT");
	pfn_vkGetMemoryMetalHandlePropertiesEXT = (PFN_vkGetMemoryMetalHandlePropertiesEXT)vkGetDeviceProcAddr(device, "vkGetMemoryMetalHandlePropertiesEXT");
#endif // defined(VK_EXT_external_memory_metal)
#if defined(VK_EXT_fragment_density_map_offset)
	pfn_vkCmdEndRendering2EXT = (PFN_vkCmdEndRendering2EXT)vkGetDeviceProcAddr(device, "vkCmdEndRendering2EXT");
#endif // defined(VK_EXT_fragment_density_map_offset)
#if defined(VK_EXT_full_screen_exclusive)
	pfn_vkGetDeviceGroupSurfacePresentModes2EXT = (PFN_vkGetDeviceGroupSurfacePresentModes2EXT)vkGetDeviceProcAddr(device, "vkGetDeviceGroupSurfacePresentModes2EXT");
	pfn_vkAcquireFullScreenExclusiveModeEXT = (PFN_vkAcquireFullScreenExclusiveModeEXT)vkGetDeviceProcAddr(device, "vkAcquireFullScreenExclusiveModeEXT");
	pfn_vkReleaseFullScreenExclusiveModeEXT = (PFN_vkReleaseFullScreenExclusiveModeEXT)vkGetDeviceProcAddr(device, "vkReleaseFullScreenExclusiveModeEXT");
#endif // defined(VK_EXT_full_screen_exclusive)
#if defined(VK_EXT_hdr_metadata)
	pfn_vkSetHdrMetadataEXT = (PFN_vkSetHdrMetadataEXT)vkGetDeviceProcAddr(device, "vkSetHdrMetadataEXT");
#endif // defined(VK_EXT_hdr_metadata)
#if defined(VK_EXT_host_image_copy)
	pfn_vkCopyImageToImageEXT = (PFN_vkCopyImageToImageEXT)vkGetDeviceProcAddr(device, "vkCopyImageToImageEXT");
	pfn_vkCopyMemoryToImageEXT = (PFN_vkCopyMemoryToImageEXT)vkGetDeviceProcAddr(device, "vkCopyMemoryToImageEXT");
	pfn_vkCopyImageToMemoryEXT = (PFN_vkCopyImageToMemoryEXT)vkGetDeviceProcAddr(device, "vkCopyImageToMemoryEXT");
	pfn_vkTransitionImageLayoutEXT = (PFN_vkTransitionImageLayoutEXT)vkGetDeviceProcAddr(device, "vkTransitionImageLayoutEXT");
#endif // defined(VK_EXT_host_image_copy)
#if defined(VK_EXT_host_image_copy) || defined(VK_EXT_image_compression_control)
	pfn_vkGetImageSubresourceLayout2EXT = (PFN_vkGetImageSubresourceLayout2EXT)vkGetDeviceProcAddr(device, "vkGetImageSubresourceLayout2EXT");
#endif // defined(VK_EXT_host_image_copy) || defined(VK_EXT_image_compression_control)
#if defined(VK_EXT_host_query_reset)
	pfn_vkResetQueryPoolEXT = (PFN_vkResetQueryPoolEXT)vkGetDeviceProcAddr(device, "vkResetQueryPoolEXT");
#endif // defined(VK_EXT_host_query_reset)
#if defined(VK_EXT_image_drm_format_modifier)
	pfn_vkGetImageDrmFormatModifierPropertiesEXT = (PFN_vkGetImageDrmFormatModifierPropertiesEXT)vkGetDeviceProcAddr(device, "vkGetImageDrmFormatModifierPropertiesEXT");
#endif // defined(VK_EXT_image_drm_format_modifier)
#if defined(VK_EXT_line_rasterization)
	pfn_vkCmdSetLineStippleEXT = (PFN_vkCmdSetLineStippleEXT)vkGetDeviceProcAddr(device, "vkCmdSetLineStippleEXT");
#endif // defined(VK_EXT_line_rasterization)
#if defined(VK_EXT_mesh_shader)
	pfn_vkCmdDrawMeshTasksEXT = (PFN_vkCmdDrawMeshTasksEXT)vkGetDeviceProcAddr(device, "vkCmdDrawMeshTasksEXT");
	pfn_vkCmdDrawMeshTasksIndirectEXT = (PFN_vkCmdDrawMeshTasksIndirectEXT)vkGetDeviceProcAddr(device, "vkCmdDrawMeshTasksIndirectEXT");
	pfn_vkCmdDrawMeshTasksIndirectCountEXT = (PFN_vkCmdDrawMeshTasksIndirectCountEXT)vkGetDeviceProcAddr(device, "vkCmdDrawMeshTasksIndirectCountEXT");
#endif // defined(VK_EXT_mesh_shader)
#if defined(VK_EXT_metal_objects)
	pfn_vkExportMetalObjectsEXT = (PFN_vkExportMetalObjectsEXT)vkGetDeviceProcAddr(device, "vkExportMetalObjectsEXT");
#endif // defined(VK_EXT_metal_objects)
#if defined(VK_EXT_multi_draw)
	pfn_vkCmdDrawMultiEXT = (PFN_vkCmdDrawMultiEXT)vkGetDeviceProcAddr(device, "vkCmdDrawMultiEXT");
	pfn_vkCmdDrawMultiIndexedEXT = (PFN_vkCmdDrawMultiIndexedEXT)vkGetDeviceProcAddr(device, "vkCmdDrawMultiIndexedEXT");
#endif // defined(VK_EXT_multi_draw)
#if defined(VK_EXT_opacity_micromap)
	pfn_vkGetDeviceMicromapCompatibilityEXT = (PFN_vkGetDeviceMicromapCompatibilityEXT)vkGetDeviceProcAddr(device, "vkGetDeviceMicromapCompatibilityEXT");
	pfn_vkGetMicromapBuildSizesEXT = (PFN_vkGetMicromapBuildSizesEXT)vkGetDeviceProcAddr(device, "vkGetMicromapBuildSizesEXT");
	pfn_vkCopyMicromapEXT = (PFN_vkCopyMicromapEXT)vkGetDeviceProcAddr(device, "vkCopyMicromapEXT");
	pfn_vkCopyMemoryToMicromapEXT = (PFN_vkCopyMemoryToMicromapEXT)vkGetDeviceProcAddr(device, "vkCopyMemoryToMicromapEXT");
	pfn_vkCmdWriteMicromapsPropertiesEXT = (PFN_vkCmdWriteMicromapsPropertiesEXT)vkGetDeviceProcAddr(device, "vkCmdWriteMicromapsPropertiesEXT");
	pfn_vkCreateMicromapEXT = (PFN_vkCreateMicromapEXT)vkGetDeviceProcAddr(device, "vkCreateMicromapEXT");
	pfn_vkDestroyMicromapEXT = (PFN_vkDestroyMicromapEXT)vkGetDeviceProcAddr(device, "vkDestroyMicromapEXT");
	pfn_vkBuildMicromapsEXT = (PFN_vkBuildMicromapsEXT)vkGetDeviceProcAddr(device, "vkBuildMicromapsEXT");
	pfn_vkCmdBuildMicromapsEXT = (PFN_vkCmdBuildMicromapsEXT)vkGetDeviceProcAddr(device, "vkCmdBuildMicromapsEXT");
	pfn_vkCopyMicromapToMemoryEXT = (PFN_vkCopyMicromapToMemoryEXT)vkGetDeviceProcAddr(device, "vkCopyMicromapToMemoryEXT");
	pfn_vkWriteMicromapsPropertiesEXT = (PFN_vkWriteMicromapsPropertiesEXT)vkGetDeviceProcAddr(device, "vkWriteMicromapsPropertiesEXT");
	pfn_vkCmdCopyMicromapEXT = (PFN_vkCmdCopyMicromapEXT)vkGetDeviceProcAddr(device, "vkCmdCopyMicromapEXT");
	pfn_vkCmdCopyMicromapToMemoryEXT = (PFN_vkCmdCopyMicromapToMemoryEXT)vkGetDeviceProcAddr(device, "vkCmdCopyMicromapToMemoryEXT");
	pfn_vkCmdCopyMemoryToMicromapEXT = (PFN_vkCmdCopyMemoryToMicromapEXT)vkGetDeviceProcAddr(device, "vkCmdCopyMemoryToMicromapEXT");
#endif // defined(VK_EXT_opacity_micromap)
#if defined(VK_EXT_pageable_device_local_memory)
	pfn_vkSetDeviceMemoryPriorityEXT = (PFN_vkSetDeviceMemoryPriorityEXT)vkGetDeviceProcAddr(device, "vkSetDeviceMemoryPriorityEXT");
#endif // defined(VK_EXT_pageable_device_local_memory)
#if defined(VK_EXT_pipeline_properties)
	pfn_vkGetPipelinePropertiesEXT = (PFN_vkGetPipelinePropertiesEXT)vkGetDeviceProcAddr(device, "vkGetPipelinePropertiesEXT");
#endif // defined(VK_EXT_pipeline_properties)
#if defined(VK_EXT_private_data)
	pfn_vkDestroyPrivateDataSlotEXT = (PFN_vkDestroyPrivateDataSlotEXT)vkGetDeviceProcAddr(device, "vkDestroyPrivateDataSlotEXT");
	pfn_vkSetPrivateDataEXT = (PFN_vkSetPrivateDataEXT)vkGetDeviceProcAddr(device, "vkSetPrivateDataEXT");
	pfn_vkCreatePrivateDataSlotEXT = (PFN_vkCreatePrivateDataSlotEXT)vkGetDeviceProcAddr(device, "vkCreatePrivateDataSlotEXT");
	pfn_vkGetPrivateDataEXT = (PFN_vkGetPrivateDataEXT)vkGetDeviceProcAddr(device, "vkGetPrivateDataEXT");
#endif // defined(VK_EXT_private_data)
#if defined(VK_EXT_sample_locations)
	pfn_vkCmdSetSampleLocationsEXT = (PFN_vkCmdSetSampleLocationsEXT)vkGetDeviceProcAddr(device, "vkCmdSetSampleLocationsEXT");
#endif // defined(VK_EXT_sample_locations)
#if defined(VK_EXT_shader_module_identifier)
	pfn_vkGetShaderModuleCreateInfoIdentifierEXT = (PFN_vkGetShaderModuleCreateInfoIdentifierEXT)vkGetDeviceProcAddr(device, "vkGetShaderModuleCreateInfoIdentifierEXT");
	pfn_vkGetShaderModuleIdentifierEXT = (PFN_vkGetShaderModuleIdentifierEXT)vkGetDeviceProcAddr(device, "vkGetShaderModuleIdentifierEXT");
#endif // defined(VK_EXT_shader_module_identifier)
#if defined(VK_EXT_shader_object)
	pfn_vkDestroyShaderEXT = (PFN_vkDestroyShaderEXT)vkGetDeviceProcAddr(device, "vkDestroyShaderEXT");
	pfn_vkGetShaderBinaryDataEXT = (PFN_vkGetShaderBinaryDataEXT)vkGetDeviceProcAddr(device, "vkGetShaderBinaryDataEXT");
	pfn_vkCmdBindShadersEXT = (PFN_vkCmdBindShadersEXT)vkGetDeviceProcAddr(device, "vkCmdBindShadersEXT");
	pfn_vkCreateShadersEXT = (PFN_vkCreateShadersEXT)vkGetDeviceProcAddr(device, "vkCreateShadersEXT");
#endif // defined(VK_EXT_shader_object)
#if defined(VK_EXT_shader_object) || defined(VK_EXT_vertex_input_dynamic_state)
	pfn_vkCmdSetVertexInputEXT = (PFN_vkCmdSetVertexInputEXT)vkGetDeviceProcAddr(device, "vkCmdSetVertexInputEXT");
#endif // defined(VK_EXT_shader_object) || defined(VK_EXT_vertex_input_dynamic_state)
#if defined(VK_EXT_swapchain_maintenance1)
	pfn_vkReleaseSwapchainImagesEXT = (PFN_vkReleaseSwapchainImagesEXT)vkGetDeviceProcAddr(device, "vkReleaseSwapchainImagesEXT");
#endif // defined(VK_EXT_swapchain_maintenance1)
#if defined(VK_EXT_transform_feedback)
	pfn_vkCmdEndQueryIndexedEXT = (PFN_vkCmdEndQueryIndexedEXT)vkGetDeviceProcAddr(device, "vkCmdEndQueryIndexedEXT");
	pfn_vkCmdEndTransformFeedbackEXT = (PFN_vkCmdEndTransformFeedbackEXT)vkGetDeviceProcAddr(device, "vkCmdEndTransformFeedbackEXT");
	pfn_vkCmdDrawIndirectByteCountEXT = (PFN_vkCmdDrawIndirectByteCountEXT)vkGetDeviceProcAddr(device, "vkCmdDrawIndirectByteCountEXT");
	pfn_vkCmdBindTransformFeedbackBuffersEXT = (PFN_vkCmdBindTransformFeedbackBuffersEXT)vkGetDeviceProcAddr(device, "vkCmdBindTransformFeedbackBuffersEXT");
	pfn_vkCmdBeginTransformFeedbackEXT = (PFN_vkCmdBeginTransformFeedbackEXT)vkGetDeviceProcAddr(device, "vkCmdBeginTransformFeedbackEXT");
	pfn_vkCmdBeginQueryIndexedEXT = (PFN_vkCmdBeginQueryIndexedEXT)vkGetDeviceProcAddr(device, "vkCmdBeginQueryIndexedEXT");
#endif // defined(VK_EXT_transform_feedback)
#if defined(VK_EXT_validation_cache)
	pfn_vkGetValidationCacheDataEXT = (PFN_vkGetValidationCacheDataEXT)vkGetDeviceProcAddr(device, "vkGetValidationCacheDataEXT");
	pfn_vkMergeValidationCachesEXT = (PFN_vkMergeValidationCachesEXT)vkGetDeviceProcAddr(device, "vkMergeValidationCachesEXT");
	pfn_vkCreateValidationCacheEXT = (PFN_vkCreateValidationCacheEXT)vkGetDeviceProcAddr(device, "vkCreateValidationCacheEXT");
	pfn_vkDestroyValidationCacheEXT = (PFN_vkDestroyValidationCacheEXT)vkGetDeviceProcAddr(device, "vkDestroyValidationCacheEXT");
#endif // defined(VK_EXT_validation_cache)
#if defined(VK_FUCHSIA_buffer_collection)
	pfn_vkSetBufferCollectionImageConstraintsFUCHSIA = (PFN_vkSetBufferCollectionImageConstraintsFUCHSIA)vkGetDeviceProcAddr(device, "vkSetBufferCollectionImageConstraintsFUCHSIA");
	pfn_vkDestroyBufferCollectionFUCHSIA = (PFN_vkDestroyBufferCollectionFUCHSIA)vkGetDeviceProcAddr(device, "vkDestroyBufferCollectionFUCHSIA");
	pfn_vkCreateBufferCollectionFUCHSIA = (PFN_vkCreateBufferCollectionFUCHSIA)vkGetDeviceProcAddr(device, "vkCreateBufferCollectionFUCHSIA");
	pfn_vkSetBufferCollectionBufferConstraintsFUCHSIA = (PFN_vkSetBufferCollectionBufferConstraintsFUCHSIA)vkGetDeviceProcAddr(device, "vkSetBufferCollectionBufferConstraintsFUCHSIA");
	pfn_vkGetBufferCollectionPropertiesFUCHSIA = (PFN_vkGetBufferCollectionPropertiesFUCHSIA)vkGetDeviceProcAddr(device, "vkGetBufferCollectionPropertiesFUCHSIA");
#endif // defined(VK_FUCHSIA_buffer_collection)
#if defined(VK_FUCHSIA_external_memory)
	pfn_vkGetMemoryZirconHandleFUCHSIA = (PFN_vkGetMemoryZirconHandleFUCHSIA)vkGetDeviceProcAddr(device, "vkGetMemoryZirconHandleFUCHSIA");
	pfn_vkGetMemoryZirconHandlePropertiesFUCHSIA = (PFN_vkGetMemoryZirconHandlePropertiesFUCHSIA)vkGetDeviceProcAddr(device, "vkGetMemoryZirconHandlePropertiesFUCHSIA");
#endif // defined(VK_FUCHSIA_external_memory)
#if defined(VK_FUCHSIA_external_semaphore)
	pfn_vkImportSemaphoreZirconHandleFUCHSIA = (PFN_vkImportSemaphoreZirconHandleFUCHSIA)vkGetDeviceProcAddr(device, "vkImportSemaphoreZirconHandleFUCHSIA");
	pfn_vkGetSemaphoreZirconHandleFUCHSIA = (PFN_vkGetSemaphoreZirconHandleFUCHSIA)vkGetDeviceProcAddr(device, "vkGetSemaphoreZirconHandleFUCHSIA");
#endif // defined(VK_FUCHSIA_external_semaphore)
#if defined(VK_GOOGLE_display_timing)
	pfn_vkGetRefreshCycleDurationGOOGLE = (PFN_vkGetRefreshCycleDurationGOOGLE)vkGetDeviceProcAddr(device, "vkGetRefreshCycleDurationGOOGLE");
	pfn_vkGetPastPresentationTimingGOOGLE = (PFN_vkGetPastPresentationTimingGOOGLE)vkGetDeviceProcAddr(device, "vkGetPastPresentationTimingGOOGLE");
#endif // defined(VK_GOOGLE_display_timing)
#if defined(VK_HUAWEI_cluster_culling_shader)
	pfn_vkCmdDrawClusterHUAWEI = (PFN_vkCmdDrawClusterHUAWEI)vkGetDeviceProcAddr(device, "vkCmdDrawClusterHUAWEI");
	pfn_vkCmdDrawClusterIndirectHUAWEI = (PFN_vkCmdDrawClusterIndirectHUAWEI)vkGetDeviceProcAddr(device, "vkCmdDrawClusterIndirectHUAWEI");
#endif // defined(VK_HUAWEI_cluster_culling_shader)
#if defined(VK_HUAWEI_invocation_mask)
	pfn_vkCmdBindInvocationMaskHUAWEI = (PFN_vkCmdBindInvocationMaskHUAWEI)vkGetDeviceProcAddr(device, "vkCmdBindInvocationMaskHUAWEI");
#endif // defined(VK_HUAWEI_invocation_mask)
#if defined(VK_HUAWEI_subpass_shading)
	pfn_vkCmdSubpassShadingHUAWEI = (PFN_vkCmdSubpassShadingHUAWEI)vkGetDeviceProcAddr(device, "vkCmdSubpassShadingHUAWEI");
	pfn_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI = (PFN_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI)vkGetDeviceProcAddr(device, "vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI");
#endif // defined(VK_HUAWEI_subpass_shading)
#if defined(VK_INTEL_performance_query)
	pfn_vkCmdSetPerformanceStreamMarkerINTEL = (PFN_vkCmdSetPerformanceStreamMarkerINTEL)vkGetDeviceProcAddr(device, "vkCmdSetPerformanceStreamMarkerINTEL");
	pfn_vkAcquirePerformanceConfigurationINTEL = (PFN_vkAcquirePerformanceConfigurationINTEL)vkGetDeviceProcAddr(device, "vkAcquirePerformanceConfigurationINTEL");
	pfn_vkInitializePerformanceApiINTEL = (PFN_vkInitializePerformanceApiINTEL)vkGetDeviceProcAddr(device, "vkInitializePerformanceApiINTEL");
	pfn_vkUninitializePerformanceApiINTEL = (PFN_vkUninitializePerformanceApiINTEL)vkGetDeviceProcAddr(device, "vkUninitializePerformanceApiINTEL");
	pfn_vkCmdSetPerformanceMarkerINTEL = (PFN_vkCmdSetPerformanceMarkerINTEL)vkGetDeviceProcAddr(device, "vkCmdSetPerformanceMarkerINTEL");
	pfn_vkCmdSetPerformanceOverrideINTEL = (PFN_vkCmdSetPerformanceOverrideINTEL)vkGetDeviceProcAddr(device, "vkCmdSetPerformanceOverrideINTEL");
	pfn_vkReleasePerformanceConfigurationINTEL = (PFN_vkReleasePerformanceConfigurationINTEL)vkGetDeviceProcAddr(device, "vkReleasePerformanceConfigurationINTEL");
	pfn_vkQueueSetPerformanceConfigurationINTEL = (PFN_vkQueueSetPerformanceConfigurationINTEL)vkGetDeviceProcAddr(device, "vkQueueSetPerformanceConfigurationINTEL");
	pfn_vkGetPerformanceParameterINTEL = (PFN_vkGetPerformanceParameterINTEL)vkGetDeviceProcAddr(device, "vkGetPerformanceParameterINTEL");
#endif // defined(VK_INTEL_performance_query)
#if defined(VK_KHR_acceleration_structure)
	pfn_vkGetAccelerationStructureBuildSizesKHR = (PFN_vkGetAccelerationStructureBuildSizesKHR)vkGetDeviceProcAddr(device, "vkGetAccelerationStructureBuildSizesKHR");
	pfn_vkCmdBuildAccelerationStructuresIndirectKHR = (PFN_vkCmdBuildAccelerationStructuresIndirectKHR)vkGetDeviceProcAddr(device, "vkCmdBuildAccelerationStructuresIndirectKHR");
	pfn_vkCopyAccelerationStructureToMemoryKHR = (PFN_vkCopyAccelerationStructureToMemoryKHR)vkGetDeviceProcAddr(device, "vkCopyAccelerationStructureToMemoryKHR");
	pfn_vkCreateAccelerationStructureKHR = (PFN_vkCreateAccelerationStructureKHR)vkGetDeviceProcAddr(device, "vkCreateAccelerationStructureKHR");
	pfn_vkDestroyAccelerationStructureKHR = (PFN_vkDestroyAccelerationStructureKHR)vkGetDeviceProcAddr(device, "vkDestroyAccelerationStructureKHR");
	pfn_vkCmdBuildAccelerationStructuresKHR = (PFN_vkCmdBuildAccelerationStructuresKHR)vkGetDeviceProcAddr(device, "vkCmdBuildAccelerationStructuresKHR");
	pfn_vkBuildAccelerationStructuresKHR = (PFN_vkBuildAccelerationStructuresKHR)vkGetDeviceProcAddr(device, "vkBuildAccelerationStructuresKHR");
	pfn_vkCopyAccelerationStructureKHR = (PFN_vkCopyAccelerationStructureKHR)vkGetDeviceProcAddr(device, "vkCopyAccelerationStructureKHR");
	pfn_vkCopyMemoryToAccelerationStructureKHR = (PFN_vkCopyMemoryToAccelerationStructureKHR)vkGetDeviceProcAddr(device, "vkCopyMemoryToAccelerationStructureKHR");
	pfn_vkWriteAccelerationStructuresPropertiesKHR = (PFN_vkWriteAccelerationStructuresPropertiesKHR)vkGetDeviceProcAddr(device, "vkWriteAccelerationStructuresPropertiesKHR");
	pfn_vkCmdCopyAccelerationStructureKHR = (PFN_vkCmdCopyAccelerationStructureKHR)vkGetDeviceProcAddr(device, "vkCmdCopyAccelerationStructureKHR");
	pfn_vkCmdCopyAccelerationStructureToMemoryKHR = (PFN_vkCmdCopyAccelerationStructureToMemoryKHR)vkGetDeviceProcAddr(device, "vkCmdCopyAccelerationStructureToMemoryKHR");
	pfn_vkCmdCopyMemoryToAccelerationStructureKHR = (PFN_vkCmdCopyMemoryToAccelerationStructureKHR)vkGetDeviceProcAddr(device, "vkCmdCopyMemoryToAccelerationStructureKHR");
	pfn_vkGetAccelerationStructureDeviceAddressKHR = (PFN_vkGetAccelerationStructureDeviceAddressKHR)vkGetDeviceProcAddr(device, "vkGetAccelerationStructureDeviceAddressKHR");
	pfn_vkCmdWriteAccelerationStructuresPropertiesKHR = (PFN_vkCmdWriteAccelerationStructuresPropertiesKHR)vkGetDeviceProcAddr(device, "vkCmdWriteAccelerationStructuresPropertiesKHR");
	pfn_vkGetDeviceAccelerationStructureCompatibilityKHR = (PFN_vkGetDeviceAccelerationStructureCompatibilityKHR)vkGetDeviceProcAddr(device, "vkGetDeviceAccelerationStructureCompatibilityKHR");
#endif // defined(VK_KHR_acceleration_structure)
#if defined(VK_KHR_bind_memory2)
	pfn_vkBindBufferMemory2KHR = (PFN_vkBindBufferMemory2KHR)vkGetDeviceProcAddr(device, "vkBindBufferMemory2KHR");
	pfn_vkBindImageMemory2KHR = (PFN_vkBindImageMemory2KHR)vkGetDeviceProcAddr(device, "vkBindImageMemory2KHR");
#endif // defined(VK_KHR_bind_memory2)
#if defined(VK_KHR_buffer_device_address)
	pfn_vkGetDeviceMemoryOpaqueCaptureAddressKHR = (PFN_vkGetDeviceMemoryOpaqueCaptureAddressKHR)vkGetDeviceProcAddr(device, "vkGetDeviceMemoryOpaqueCaptureAddressKHR");
	pfn_vkGetBufferDeviceAddressKHR = (PFN_vkGetBufferDeviceAddressKHR)vkGetDeviceProcAddr(device, "vkGetBufferDeviceAddressKHR");
	pfn_vkGetBufferOpaqueCaptureAddressKHR = (PFN_vkGetBufferOpaqueCaptureAddressKHR)vkGetDeviceProcAddr(device, "vkGetBufferOpaqueCaptureAddressKHR");
#endif // defined(VK_KHR_buffer_device_address)
#if defined(VK_KHR_calibrated_timestamps)
	pfn_vkGetCalibratedTimestampsKHR = (PFN_vkGetCalibratedTimestampsKHR)vkGetDeviceProcAddr(device, "vkGetCalibratedTimestampsKHR");
#endif // defined(VK_KHR_calibrated_timestamps)
#if defined(VK_KHR_copy_commands2)
	pfn_vkCmdCopyBuffer2KHR = (PFN_vkCmdCopyBuffer2KHR)vkGetDeviceProcAddr(device, "vkCmdCopyBuffer2KHR");
	pfn_vkCmdCopyImage2KHR = (PFN_vkCmdCopyImage2KHR)vkGetDeviceProcAddr(device, "vkCmdCopyImage2KHR");
	pfn_vkCmdCopyBufferToImage2KHR = (PFN_vkCmdCopyBufferToImage2KHR)vkGetDeviceProcAddr(device, "vkCmdCopyBufferToImage2KHR");
	pfn_vkCmdCopyImageToBuffer2KHR = (PFN_vkCmdCopyImageToBuffer2KHR)vkGetDeviceProcAddr(device, "vkCmdCopyImageToBuffer2KHR");
	pfn_vkCmdBlitImage2KHR = (PFN_vkCmdBlitImage2KHR)vkGetDeviceProcAddr(device, "vkCmdBlitImage2KHR");
	pfn_vkCmdResolveImage2KHR = (PFN_vkCmdResolveImage2KHR)vkGetDeviceProcAddr(device, "vkCmdResolveImage2KHR");
#endif // defined(VK_KHR_copy_commands2)
#if defined(VK_KHR_create_renderpass2)
	pfn_vkCreateRenderPass2KHR = (PFN_vkCreateRenderPass2KHR)vkGetDeviceProcAddr(device, "vkCreateRenderPass2KHR");
	pfn_vkCmdBeginRenderPass2KHR = (PFN_vkCmdBeginRenderPass2KHR)vkGetDeviceProcAddr(device, "vkCmdBeginRenderPass2KHR");
	pfn_vkCmdNextSubpass2KHR = (PFN_vkCmdNextSubpass2KHR)vkGetDeviceProcAddr(device, "vkCmdNextSubpass2KHR");
	pfn_vkCmdEndRenderPass2KHR = (PFN_vkCmdEndRenderPass2KHR)vkGetDeviceProcAddr(device, "vkCmdEndRenderPass2KHR");
#endif // defined(VK_KHR_create_renderpass2)
#if defined(VK_KHR_deferred_host_operations)
	pfn_vkDeferredOperationJoinKHR = (PFN_vkDeferredOperationJoinKHR)vkGetDeviceProcAddr(device, "vkDeferredOperationJoinKHR");
	pfn_vkCreateDeferredOperationKHR = (PFN_vkCreateDeferredOperationKHR)vkGetDeviceProcAddr(device, "vkCreateDeferredOperationKHR");
	pfn_vkDestroyDeferredOperationKHR = (PFN_vkDestroyDeferredOperationKHR)vkGetDeviceProcAddr(device, "vkDestroyDeferredOperationKHR");
	pfn_vkGetDeferredOperationMaxConcurrencyKHR = (PFN_vkGetDeferredOperationMaxConcurrencyKHR)vkGetDeviceProcAddr(device, "vkGetDeferredOperationMaxConcurrencyKHR");
	pfn_vkGetDeferredOperationResultKHR = (PFN_vkGetDeferredOperationResultKHR)vkGetDeviceProcAddr(device, "vkGetDeferredOperationResultKHR");
#endif // defined(VK_KHR_deferred_host_operations)
#if defined(VK_KHR_descriptor_update_template)
	pfn_vkCreateDescriptorUpdateTemplateKHR = (PFN_vkCreateDescriptorUpdateTemplateKHR)vkGetDeviceProcAddr(device, "vkCreateDescriptorUpdateTemplateKHR");
	pfn_vkDestroyDescriptorUpdateTemplateKHR = (PFN_vkDestroyDescriptorUpdateTemplateKHR)vkGetDeviceProcAddr(device, "vkDestroyDescriptorUpdateTemplateKHR");
	pfn_vkUpdateDescriptorSetWithTemplateKHR = (PFN_vkUpdateDescriptorSetWithTemplateKHR)vkGetDeviceProcAddr(device, "vkUpdateDescriptorSetWithTemplateKHR");
#endif // defined(VK_KHR_descriptor_update_template)
#if defined(VK_KHR_descriptor_update_template) || defined(VK_KHR_push_descriptor)
	pfn_vkCmdPushDescriptorSetWithTemplateKHR = (PFN_vkCmdPushDescriptorSetWithTemplateKHR)vkGetDeviceProcAddr(device, "vkCmdPushDescriptorSetWithTemplateKHR");
#endif // defined(VK_KHR_descriptor_update_template) || defined(VK_KHR_push_descriptor)
#if defined(VK_KHR_device_group)
	pfn_vkGetDeviceGroupPeerMemoryFeaturesKHR = (PFN_vkGetDeviceGroupPeerMemoryFeaturesKHR)vkGetDeviceProcAddr(device, "vkGetDeviceGroupPeerMemoryFeaturesKHR");
	pfn_vkCmdSetDeviceMaskKHR = (PFN_vkCmdSetDeviceMaskKHR)vkGetDeviceProcAddr(device, "vkCmdSetDeviceMaskKHR");
	pfn_vkCmdDispatchBaseKHR = (PFN_vkCmdDispatchBaseKHR)vkGetDeviceProcAddr(device, "vkCmdDispatchBaseKHR");
#endif // defined(VK_KHR_device_group)
#if defined(VK_KHR_device_group) || defined(VK_KHR_swapchain)
	pfn_vkGetDeviceGroupPresentCapabilitiesKHR = (PFN_vkGetDeviceGroupPresentCapabilitiesKHR)vkGetDeviceProcAddr(device, "vkGetDeviceGroupPresentCapabilitiesKHR");
	pfn_vkGetDeviceGroupSurfacePresentModesKHR = (PFN_vkGetDeviceGroupSurfacePresentModesKHR)vkGetDeviceProcAddr(device, "vkGetDeviceGroupSurfacePresentModesKHR");
	pfn_vkAcquireNextImage2KHR = (PFN_vkAcquireNextImage2KHR)vkGetDeviceProcAddr(device, "vkAcquireNextImage2KHR");
#endif // defined(VK_KHR_device_group) || defined(VK_KHR_swapchain)
#if defined(VK_KHR_display_swapchain)
	pfn_vkCreateSharedSwapchainsKHR = (PFN_vkCreateSharedSwapchainsKHR)vkGetDeviceProcAddr(device, "vkCreateSharedSwapchainsKHR");
#endif // defined(VK_KHR_display_swapchain)
#if defined(VK_KHR_draw_indirect_count)
	pfn_vkCmdDrawIndirectCountKHR = (PFN_vkCmdDrawIndirectCountKHR)vkGetDeviceProcAddr(device, "vkCmdDrawIndirectCountKHR");
	pfn_vkCmdDrawIndexedIndirectCountKHR = (PFN_vkCmdDrawIndexedIndirectCountKHR)vkGetDeviceProcAddr(device, "vkCmdDrawIndexedIndirectCountKHR");
#endif // defined(VK_KHR_draw_indirect_count)
#if defined(VK_KHR_dynamic_rendering)
	pfn_vkCmdBeginRenderingKHR = (PFN_vkCmdBeginRenderingKHR)vkGetDeviceProcAddr(device, "vkCmdBeginRenderingKHR");
	pfn_vkCmdEndRenderingKHR = (PFN_vkCmdEndRenderingKHR)vkGetDeviceProcAddr(device, "vkCmdEndRenderingKHR");
#endif // defined(VK_KHR_dynamic_rendering)
#if defined(VK_KHR_dynamic_rendering_local_read)
	pfn_vkCmdSetRenderingAttachmentLocationsKHR = (PFN_vkCmdSetRenderingAttachmentLocationsKHR)vkGetDeviceProcAddr(device, "vkCmdSetRenderingAttachmentLocationsKHR");
	pfn_vkCmdSetRenderingInputAttachmentIndicesKHR = (PFN_vkCmdSetRenderingInputAttachmentIndicesKHR)vkGetDeviceProcAddr(device, "vkCmdSetRenderingInputAttachmentIndicesKHR");
#endif // defined(VK_KHR_dynamic_rendering_local_read)
#if defined(VK_KHR_external_fence_fd)
	pfn_vkImportFenceFdKHR = (PFN_vkImportFenceFdKHR)vkGetDeviceProcAddr(device, "vkImportFenceFdKHR");
	pfn_vkGetFenceFdKHR = (PFN_vkGetFenceFdKHR)vkGetDeviceProcAddr(device, "vkGetFenceFdKHR");
#endif // defined(VK_KHR_external_fence_fd)
#if defined(VK_KHR_external_fence_win32)
	pfn_vkGetFenceWin32HandleKHR = (PFN_vkGetFenceWin32HandleKHR)vkGetDeviceProcAddr(device, "vkGetFenceWin32HandleKHR");
	pfn_vkImportFenceWin32HandleKHR = (PFN_vkImportFenceWin32HandleKHR)vkGetDeviceProcAddr(device, "vkImportFenceWin32HandleKHR");
#endif // defined(VK_KHR_external_fence_win32)
#if defined(VK_KHR_external_memory_fd)
	pfn_vkGetMemoryFdPropertiesKHR = (PFN_vkGetMemoryFdPropertiesKHR)vkGetDeviceProcAddr(device, "vkGetMemoryFdPropertiesKHR");
	pfn_vkGetMemoryFdKHR = (PFN_vkGetMemoryFdKHR)vkGetDeviceProcAddr(device, "vkGetMemoryFdKHR");
#endif // defined(VK_KHR_external_memory_fd)
#if defined(VK_KHR_external_memory_win32)
	pfn_vkGetMemoryWin32HandleKHR = (PFN_vkGetMemoryWin32HandleKHR)vkGetDeviceProcAddr(device, "vkGetMemoryWin32HandleKHR");
	pfn_vkGetMemoryWin32HandlePropertiesKHR = (PFN_vkGetMemoryWin32HandlePropertiesKHR)vkGetDeviceProcAddr(device, "vkGetMemoryWin32HandlePropertiesKHR");
#endif // defined(VK_KHR_external_memory_win32)
#if defined(VK_KHR_external_semaphore_fd)
	pfn_vkImportSemaphoreFdKHR = (PFN_vkImportSemaphoreFdKHR)vkGetDeviceProcAddr(device, "vkImportSemaphoreFdKHR");
	pfn_vkGetSemaphoreFdKHR = (PFN_vkGetSemaphoreFdKHR)vkGetDeviceProcAddr(device, "vkGetSemaphoreFdKHR");
#endif // defined(VK_KHR_external_semaphore_fd)
#if defined(VK_KHR_external_semaphore_win32)
	pfn_vkImportSemaphoreWin32HandleKHR = (PFN_vkImportSemaphoreWin32HandleKHR)vkGetDeviceProcAddr(device, "vkImportSemaphoreWin32HandleKHR");
	pfn_vkGetSemaphoreWin32HandleKHR = (PFN_vkGetSemaphoreWin32HandleKHR)vkGetDeviceProcAddr(device, "vkGetSemaphoreWin32HandleKHR");
#endif // defined(VK_KHR_external_semaphore_win32)
#if defined(VK_KHR_fragment_shading_rate)
	pfn_vkCmdSetFragmentShadingRateKHR = (PFN_vkCmdSetFragmentShadingRateKHR)vkGetDeviceProcAddr(device, "vkCmdSetFragmentShadingRateKHR");
#endif // defined(VK_KHR_fragment_shading_rate)
#if defined(VK_KHR_get_memory_requirements2)
	pfn_vkGetImageMemoryRequirements2KHR = (PFN_vkGetImageMemoryRequirements2KHR)vkGetDeviceProcAddr(device, "vkGetImageMemoryRequirements2KHR");
	pfn_vkGetBufferMemoryRequirements2KHR = (PFN_vkGetBufferMemoryRequirements2KHR)vkGetDeviceProcAddr(device, "vkGetBufferMemoryRequirements2KHR");
	pfn_vkGetImageSparseMemoryRequirements2KHR = (PFN_vkGetImageSparseMemoryRequirements2KHR)vkGetDeviceProcAddr(device, "vkGetImageSparseMemoryRequirements2KHR");
#endif // defined(VK_KHR_get_memory_requirements2)
#if defined(VK_KHR_line_rasterization)
	pfn_vkCmdSetLineStippleKHR = (PFN_vkCmdSetLineStippleKHR)vkGetDeviceProcAddr(device, "vkCmdSetLineStippleKHR");
#endif // defined(VK_KHR_line_rasterization)
#if defined(VK_KHR_maintenance1)
	pfn_vkTrimCommandPoolKHR = (PFN_vkTrimCommandPoolKHR)vkGetDeviceProcAddr(device, "vkTrimCommandPoolKHR");
#endif // defined(VK_KHR_maintenance1)
#if defined(VK_KHR_maintenance3)
	pfn_vkGetDescriptorSetLayoutSupportKHR = (PFN_vkGetDescriptorSetLayoutSupportKHR)vkGetDeviceProcAddr(device, "vkGetDescriptorSetLayoutSupportKHR");
#endif // defined(VK_KHR_maintenance3)
#if defined(VK_KHR_maintenance4)
	pfn_vkGetDeviceImageMemoryRequirementsKHR = (PFN_vkGetDeviceImageMemoryRequirementsKHR)vkGetDeviceProcAddr(device, "vkGetDeviceImageMemoryRequirementsKHR");
	pfn_vkGetDeviceBufferMemoryRequirementsKHR = (PFN_vkGetDeviceBufferMemoryRequirementsKHR)vkGetDeviceProcAddr(device, "vkGetDeviceBufferMemoryRequirementsKHR");
	pfn_vkGetDeviceImageSparseMemoryRequirementsKHR = (PFN_vkGetDeviceImageSparseMemoryRequirementsKHR)vkGetDeviceProcAddr(device, "vkGetDeviceImageSparseMemoryRequirementsKHR");
#endif // defined(VK_KHR_maintenance4)
#if defined(VK_KHR_maintenance5)
	pfn_vkCmdBindIndexBuffer2KHR = (PFN_vkCmdBindIndexBuffer2KHR)vkGetDeviceProcAddr(device, "vkCmdBindIndexBuffer2KHR");
	pfn_vkGetDeviceImageSubresourceLayoutKHR = (PFN_vkGetDeviceImageSubresourceLayoutKHR)vkGetDeviceProcAddr(device, "vkGetDeviceImageSubresourceLayoutKHR");
	pfn_vkGetRenderingAreaGranularityKHR = (PFN_vkGetRenderingAreaGranularityKHR)vkGetDeviceProcAddr(device, "vkGetRenderingAreaGranularityKHR");
	pfn_vkGetImageSubresourceLayout2KHR = (PFN_vkGetImageSubresourceLayout2KHR)vkGetDeviceProcAddr(device, "vkGetImageSubresourceLayout2KHR");
#endif // defined(VK_KHR_maintenance5)
#if defined(VK_KHR_maintenance6)
	pfn_vkCmdBindDescriptorSets2KHR = (PFN_vkCmdBindDescriptorSets2KHR)vkGetDeviceProcAddr(device, "vkCmdBindDescriptorSets2KHR");
	pfn_vkCmdBindDescriptorBufferEmbeddedSamplers2EXT = (PFN_vkCmdBindDescriptorBufferEmbeddedSamplers2EXT)vkGetDeviceProcAddr(device, "vkCmdBindDescriptorBufferEmbeddedSamplers2EXT");
	pfn_vkCmdPushConstants2KHR = (PFN_vkCmdPushConstants2KHR)vkGetDeviceProcAddr(device, "vkCmdPushConstants2KHR");
	pfn_vkCmdPushDescriptorSet2KHR = (PFN_vkCmdPushDescriptorSet2KHR)vkGetDeviceProcAddr(device, "vkCmdPushDescriptorSet2KHR");
	pfn_vkCmdPushDescriptorSetWithTemplate2KHR = (PFN_vkCmdPushDescriptorSetWithTemplate2KHR)vkGetDeviceProcAddr(device, "vkCmdPushDescriptorSetWithTemplate2KHR");
	pfn_vkCmdSetDescriptorBufferOffsets2EXT = (PFN_vkCmdSetDescriptorBufferOffsets2EXT)vkGetDeviceProcAddr(device, "vkCmdSetDescriptorBufferOffsets2EXT");
#endif // defined(VK_KHR_maintenance6)
#if defined(VK_KHR_map_memory2)
	pfn_vkUnmapMemory2KHR = (PFN_vkUnmapMemory2KHR)vkGetDeviceProcAddr(device, "vkUnmapMemory2KHR");
	pfn_vkMapMemory2KHR = (PFN_vkMapMemory2KHR)vkGetDeviceProcAddr(device, "vkMapMemory2KHR");
#endif // defined(VK_KHR_map_memory2)
#if defined(VK_KHR_object_refresh)
	pfn_vkCmdRefreshObjectsKHR = (PFN_vkCmdRefreshObjectsKHR)vkGetDeviceProcAddr(device, "vkCmdRefreshObjectsKHR");
#endif // defined(VK_KHR_object_refresh)
#if defined(VK_KHR_performance_query)
	pfn_vkAcquireProfilingLockKHR = (PFN_vkAcquireProfilingLockKHR)vkGetDeviceProcAddr(device, "vkAcquireProfilingLockKHR");
	pfn_vkReleaseProfilingLockKHR = (PFN_vkReleaseProfilingLockKHR)vkGetDeviceProcAddr(device, "vkReleaseProfilingLockKHR");
#endif // defined(VK_KHR_performance_query)
#if defined(VK_KHR_pipeline_binary)
	pfn_vkGetPipelineBinaryDataKHR = (PFN_vkGetPipelineBinaryDataKHR)vkGetDeviceProcAddr(device, "vkGetPipelineBinaryDataKHR");
	pfn_vkCreatePipelineBinariesKHR = (PFN_vkCreatePipelineBinariesKHR)vkGetDeviceProcAddr(device, "vkCreatePipelineBinariesKHR");
	pfn_vkDestroyPipelineBinaryKHR = (PFN_vkDestroyPipelineBinaryKHR)vkGetDeviceProcAddr(device, "vkDestroyPipelineBinaryKHR");
	pfn_vkGetPipelineKeyKHR = (PFN_vkGetPipelineKeyKHR)vkGetDeviceProcAddr(device, "vkGetPipelineKeyKHR");
	pfn_vkReleaseCapturedPipelineDataKHR = (PFN_vkReleaseCapturedPipelineDataKHR)vkGetDeviceProcAddr(device, "vkReleaseCapturedPipelineDataKHR");
#endif // defined(VK_KHR_pipeline_binary)
#if defined(VK_KHR_pipeline_executable_properties)
	pfn_vkGetPipelineExecutableInternalRepresentationsKHR = (PFN_vkGetPipelineExecutableInternalRepresentationsKHR)vkGetDeviceProcAddr(device, "vkGetPipelineExecutableInternalRepresentationsKHR");
	pfn_vkGetPipelineExecutablePropertiesKHR = (PFN_vkGetPipelineExecutablePropertiesKHR)vkGetDeviceProcAddr(device, "vkGetPipelineExecutablePropertiesKHR");
	pfn_vkGetPipelineExecutableStatisticsKHR = (PFN_vkGetPipelineExecutableStatisticsKHR)vkGetDeviceProcAddr(device, "vkGetPipelineExecutableStatisticsKHR");
#endif // defined(VK_KHR_pipeline_executable_properties)
#if defined(VK_KHR_present_wait)
	pfn_vkWaitForPresentKHR = (PFN_vkWaitForPresentKHR)vkGetDeviceProcAddr(device, "vkWaitForPresentKHR");
#endif // defined(VK_KHR_present_wait)
#if defined(VK_KHR_present_wait2)
	pfn_vkWaitForPresent2KHR = (PFN_vkWaitForPresent2KHR)vkGetDeviceProcAddr(device, "vkWaitForPresent2KHR");
#endif // defined(VK_KHR_present_wait2)
#if defined(VK_KHR_push_descriptor)
	pfn_vkCmdPushDescriptorSetKHR = (PFN_vkCmdPushDescriptorSetKHR)vkGetDeviceProcAddr(device, "vkCmdPushDescriptorSetKHR");
#endif // defined(VK_KHR_push_descriptor)
#if defined(VK_KHR_ray_tracing_maintenance1)
	pfn_vkCmdTraceRaysIndirect2KHR = (PFN_vkCmdTraceRaysIndirect2KHR)vkGetDeviceProcAddr(device, "vkCmdTraceRaysIndirect2KHR");
#endif // defined(VK_KHR_ray_tracing_maintenance1)
#if defined(VK_KHR_ray_tracing_pipeline)
	pfn_vkCreateRayTracingPipelinesKHR = (PFN_vkCreateRayTracingPipelinesKHR)vkGetDeviceProcAddr(device, "vkCreateRayTracingPipelinesKHR");
	pfn_vkGetRayTracingShaderGroupHandlesKHR = (PFN_vkGetRayTracingShaderGroupHandlesKHR)vkGetDeviceProcAddr(device, "vkGetRayTracingShaderGroupHandlesKHR");
	pfn_vkCmdSetRayTracingPipelineStackSizeKHR = (PFN_vkCmdSetRayTracingPipelineStackSizeKHR)vkGetDeviceProcAddr(device, "vkCmdSetRayTracingPipelineStackSizeKHR");
	pfn_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR = (PFN_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR)vkGetDeviceProcAddr(device, "vkGetRayTracingCaptureReplayShaderGroupHandlesKHR");
	pfn_vkCmdTraceRaysKHR = (PFN_vkCmdTraceRaysKHR)vkGetDeviceProcAddr(device, "vkCmdTraceRaysKHR");
	pfn_vkCmdTraceRaysIndirectKHR = (PFN_vkCmdTraceRaysIndirectKHR)vkGetDeviceProcAddr(device, "vkCmdTraceRaysIndirectKHR");
	pfn_vkGetRayTracingShaderGroupStackSizeKHR = (PFN_vkGetRayTracingShaderGroupStackSizeKHR)vkGetDeviceProcAddr(device, "vkGetRayTracingShaderGroupStackSizeKHR");
#endif // defined(VK_KHR_ray_tracing_pipeline)
#if defined(VK_KHR_sampler_ycbcr_conversion)
	pfn_vkDestroySamplerYcbcrConversionKHR = (PFN_vkDestroySamplerYcbcrConversionKHR)vkGetDeviceProcAddr(device, "vkDestroySamplerYcbcrConversionKHR");
	pfn_vkCreateSamplerYcbcrConversionKHR = (PFN_vkCreateSamplerYcbcrConversionKHR)vkGetDeviceProcAddr(device, "vkCreateSamplerYcbcrConversionKHR");
#endif // defined(VK_KHR_sampler_ycbcr_conversion)
#if defined(VK_KHR_shared_presentable_image)
	pfn_vkGetSwapchainStatusKHR = (PFN_vkGetSwapchainStatusKHR)vkGetDeviceProcAddr(device, "vkGetSwapchainStatusKHR");
#endif // defined(VK_KHR_shared_presentable_image)
#if defined(VK_KHR_swapchain)
	pfn_vkCreateSwapchainKHR = (PFN_vkCreateSwapchainKHR)vkGetDeviceProcAddr(device, "vkCreateSwapchainKHR");
	pfn_vkGetSwapchainImagesKHR = (PFN_vkGetSwapchainImagesKHR)vkGetDeviceProcAddr(device, "vkGetSwapchainImagesKHR");
	pfn_vkDestroySwapchainKHR = (PFN_vkDestroySwapchainKHR)vkGetDeviceProcAddr(device, "vkDestroySwapchainKHR");
	pfn_vkAcquireNextImageKHR = (PFN_vkAcquireNextImageKHR)vkGetDeviceProcAddr(device, "vkAcquireNextImageKHR");
	pfn_vkQueuePresentKHR = (PFN_vkQueuePresentKHR)vkGetDeviceProcAddr(device, "vkQueuePresentKHR");
#endif // defined(VK_KHR_swapchain)
#if defined(VK_KHR_swapchain_maintenance1)
	pfn_vkReleaseSwapchainImagesKHR = (PFN_vkReleaseSwapchainImagesKHR)vkGetDeviceProcAddr(device, "vkReleaseSwapchainImagesKHR");
#endif // defined(VK_KHR_swapchain_maintenance1)
#if defined(VK_KHR_synchronization2)
	pfn_vkCmdResetEvent2KHR = (PFN_vkCmdResetEvent2KHR)vkGetDeviceProcAddr(device, "vkCmdResetEvent2KHR");
	pfn_vkCmdWriteTimestamp2KHR = (PFN_vkCmdWriteTimestamp2KHR)vkGetDeviceProcAddr(device, "vkCmdWriteTimestamp2KHR");
	pfn_vkCmdWaitEvents2KHR = (PFN_vkCmdWaitEvents2KHR)vkGetDeviceProcAddr(device, "vkCmdWaitEvents2KHR");
	pfn_vkCmdPipelineBarrier2KHR = (PFN_vkCmdPipelineBarrier2KHR)vkGetDeviceProcAddr(device, "vkCmdPipelineBarrier2KHR");
	pfn_vkCmdSetEvent2KHR = (PFN_vkCmdSetEvent2KHR)vkGetDeviceProcAddr(device, "vkCmdSetEvent2KHR");
	pfn_vkQueueSubmit2KHR = (PFN_vkQueueSubmit2KHR)vkGetDeviceProcAddr(device, "vkQueueSubmit2KHR");
#endif // defined(VK_KHR_synchronization2)
#if defined(VK_KHR_timeline_semaphore)
	pfn_vkWaitSemaphoresKHR = (PFN_vkWaitSemaphoresKHR)vkGetDeviceProcAddr(device, "vkWaitSemaphoresKHR");
	pfn_vkGetSemaphoreCounterValueKHR = (PFN_vkGetSemaphoreCounterValueKHR)vkGetDeviceProcAddr(device, "vkGetSemaphoreCounterValueKHR");
	pfn_vkSignalSemaphoreKHR = (PFN_vkSignalSemaphoreKHR)vkGetDeviceProcAddr(device, "vkSignalSemaphoreKHR");
#endif // defined(VK_KHR_timeline_semaphore)
#if defined(VK_KHR_video_decode_queue)
	pfn_vkCmdDecodeVideoKHR = (PFN_vkCmdDecodeVideoKHR)vkGetDeviceProcAddr(device, "vkCmdDecodeVideoKHR");
#endif // defined(VK_KHR_video_decode_queue)
#if defined(VK_KHR_video_encode_queue)
	pfn_vkGetEncodedVideoSessionParametersKHR = (PFN_vkGetEncodedVideoSessionParametersKHR)vkGetDeviceProcAddr(device, "vkGetEncodedVideoSessionParametersKHR");
	pfn_vkCmdEncodeVideoKHR = (PFN_vkCmdEncodeVideoKHR)vkGetDeviceProcAddr(device, "vkCmdEncodeVideoKHR");
#endif // defined(VK_KHR_video_encode_queue)
#if defined(VK_KHR_video_queue)
	pfn_vkCmdEndVideoCodingKHR = (PFN_vkCmdEndVideoCodingKHR)vkGetDeviceProcAddr(device, "vkCmdEndVideoCodingKHR");
	pfn_vkUpdateVideoSessionParametersKHR = (PFN_vkUpdateVideoSessionParametersKHR)vkGetDeviceProcAddr(device, "vkUpdateVideoSessionParametersKHR");
	pfn_vkCmdBeginVideoCodingKHR = (PFN_vkCmdBeginVideoCodingKHR)vkGetDeviceProcAddr(device, "vkCmdBeginVideoCodingKHR");
	pfn_vkGetVideoSessionMemoryRequirementsKHR = (PFN_vkGetVideoSessionMemoryRequirementsKHR)vkGetDeviceProcAddr(device, "vkGetVideoSessionMemoryRequirementsKHR");
	pfn_vkCreateVideoSessionParametersKHR = (PFN_vkCreateVideoSessionParametersKHR)vkGetDeviceProcAddr(device, "vkCreateVideoSessionParametersKHR");
	pfn_vkCmdControlVideoCodingKHR = (PFN_vkCmdControlVideoCodingKHR)vkGetDeviceProcAddr(device, "vkCmdControlVideoCodingKHR");
	pfn_vkDestroyVideoSessionKHR = (PFN_vkDestroyVideoSessionKHR)vkGetDeviceProcAddr(device, "vkDestroyVideoSessionKHR");
	pfn_vkBindVideoSessionMemoryKHR = (PFN_vkBindVideoSessionMemoryKHR)vkGetDeviceProcAddr(device, "vkBindVideoSessionMemoryKHR");
	pfn_vkCreateVideoSessionKHR = (PFN_vkCreateVideoSessionKHR)vkGetDeviceProcAddr(device, "vkCreateVideoSessionKHR");
	pfn_vkDestroyVideoSessionParametersKHR = (PFN_vkDestroyVideoSessionParametersKHR)vkGetDeviceProcAddr(device, "vkDestroyVideoSessionParametersKHR");
#endif // defined(VK_KHR_video_queue)
#if defined(VK_NVX_binary_import)
	pfn_vkDestroyCuFunctionNVX = (PFN_vkDestroyCuFunctionNVX)vkGetDeviceProcAddr(device, "vkDestroyCuFunctionNVX");
	pfn_vkCreateCuModuleNVX = (PFN_vkCreateCuModuleNVX)vkGetDeviceProcAddr(device, "vkCreateCuModuleNVX");
	pfn_vkCreateCuFunctionNVX = (PFN_vkCreateCuFunctionNVX)vkGetDeviceProcAddr(device, "vkCreateCuFunctionNVX");
	pfn_vkDestroyCuModuleNVX = (PFN_vkDestroyCuModuleNVX)vkGetDeviceProcAddr(device, "vkDestroyCuModuleNVX");
	pfn_vkCmdCuLaunchKernelNVX = (PFN_vkCmdCuLaunchKernelNVX)vkGetDeviceProcAddr(device, "vkCmdCuLaunchKernelNVX");
#endif // defined(VK_NVX_binary_import)
#if defined(VK_NVX_image_view_handle)
	pfn_vkGetImageViewHandle64NVX = (PFN_vkGetImageViewHandle64NVX)vkGetDeviceProcAddr(device, "vkGetImageViewHandle64NVX");
	pfn_vkGetImageViewHandleNVX = (PFN_vkGetImageViewHandleNVX)vkGetDeviceProcAddr(device, "vkGetImageViewHandleNVX");
	pfn_vkGetImageViewAddressNVX = (PFN_vkGetImageViewAddressNVX)vkGetDeviceProcAddr(device, "vkGetImageViewAddressNVX");
#endif // defined(VK_NVX_image_view_handle)
#if defined(VK_NV_clip_space_w_scaling)
	pfn_vkCmdSetViewportWScalingNV = (PFN_vkCmdSetViewportWScalingNV)vkGetDeviceProcAddr(device, "vkCmdSetViewportWScalingNV");
#endif // defined(VK_NV_clip_space_w_scaling)
#if defined(VK_NV_cluster_acceleration_structure)
	pfn_vkCmdBuildClusterAccelerationStructureIndirectNV = (PFN_vkCmdBuildClusterAccelerationStructureIndirectNV)vkGetDeviceProcAddr(device, "vkCmdBuildClusterAccelerationStructureIndirectNV");
	pfn_vkGetClusterAccelerationStructureBuildSizesNV = (PFN_vkGetClusterAccelerationStructureBuildSizesNV)vkGetDeviceProcAddr(device, "vkGetClusterAccelerationStructureBuildSizesNV");
#endif // defined(VK_NV_cluster_acceleration_structure)
#if defined(VK_NV_cooperative_vector)
	pfn_vkCmdConvertCooperativeVectorMatrixNV = (PFN_vkCmdConvertCooperativeVectorMatrixNV)vkGetDeviceProcAddr(device, "vkCmdConvertCooperativeVectorMatrixNV");
	pfn_vkConvertCooperativeVectorMatrixNV = (PFN_vkConvertCooperativeVectorMatrixNV)vkGetDeviceProcAddr(device, "vkConvertCooperativeVectorMatrixNV");
#endif // defined(VK_NV_cooperative_vector)
#if defined(VK_NV_copy_memory_indirect)
	pfn_vkCmdCopyMemoryToImageIndirectNV = (PFN_vkCmdCopyMemoryToImageIndirectNV)vkGetDeviceProcAddr(device, "vkCmdCopyMemoryToImageIndirectNV");
	pfn_vkCmdCopyMemoryIndirectNV = (PFN_vkCmdCopyMemoryIndirectNV)vkGetDeviceProcAddr(device, "vkCmdCopyMemoryIndirectNV");
#endif // defined(VK_NV_copy_memory_indirect)
#if defined(VK_NV_cuda_kernel_launch)
	pfn_vkCreateCudaFunctionNV = (PFN_vkCreateCudaFunctionNV)vkGetDeviceProcAddr(device, "vkCreateCudaFunctionNV");
	pfn_vkCreateCudaModuleNV = (PFN_vkCreateCudaModuleNV)vkGetDeviceProcAddr(device, "vkCreateCudaModuleNV");
	pfn_vkGetCudaModuleCacheNV = (PFN_vkGetCudaModuleCacheNV)vkGetDeviceProcAddr(device, "vkGetCudaModuleCacheNV");
	pfn_vkDestroyCudaModuleNV = (PFN_vkDestroyCudaModuleNV)vkGetDeviceProcAddr(device, "vkDestroyCudaModuleNV");
	pfn_vkDestroyCudaFunctionNV = (PFN_vkDestroyCudaFunctionNV)vkGetDeviceProcAddr(device, "vkDestroyCudaFunctionNV");
	pfn_vkCmdCudaLaunchKernelNV = (PFN_vkCmdCudaLaunchKernelNV)vkGetDeviceProcAddr(device, "vkCmdCudaLaunchKernelNV");
#endif // defined(VK_NV_cuda_kernel_launch)
#if defined(VK_NV_device_diagnostic_checkpoints)
	pfn_vkGetQueueCheckpointDataNV = (PFN_vkGetQueueCheckpointDataNV)vkGetDeviceProcAddr(device, "vkGetQueueCheckpointDataNV");
	pfn_vkCmdSetCheckpointNV = (PFN_vkCmdSetCheckpointNV)vkGetDeviceProcAddr(device, "vkCmdSetCheckpointNV");
	pfn_vkGetQueueCheckpointData2NV = (PFN_vkGetQueueCheckpointData2NV)vkGetDeviceProcAddr(device, "vkGetQueueCheckpointData2NV");
#endif // defined(VK_NV_device_diagnostic_checkpoints)
#if defined(VK_NV_device_generated_commands)
	pfn_vkGetGeneratedCommandsMemoryRequirementsNV = (PFN_vkGetGeneratedCommandsMemoryRequirementsNV)vkGetDeviceProcAddr(device, "vkGetGeneratedCommandsMemoryRequirementsNV");
	pfn_vkCreateIndirectCommandsLayoutNV = (PFN_vkCreateIndirectCommandsLayoutNV)vkGetDeviceProcAddr(device, "vkCreateIndirectCommandsLayoutNV");
	pfn_vkCmdPreprocessGeneratedCommandsNV = (PFN_vkCmdPreprocessGeneratedCommandsNV)vkGetDeviceProcAddr(device, "vkCmdPreprocessGeneratedCommandsNV");
	pfn_vkCmdExecuteGeneratedCommandsNV = (PFN_vkCmdExecuteGeneratedCommandsNV)vkGetDeviceProcAddr(device, "vkCmdExecuteGeneratedCommandsNV");
	pfn_vkCmdBindPipelineShaderGroupNV = (PFN_vkCmdBindPipelineShaderGroupNV)vkGetDeviceProcAddr(device, "vkCmdBindPipelineShaderGroupNV");
	pfn_vkDestroyIndirectCommandsLayoutNV = (PFN_vkDestroyIndirectCommandsLayoutNV)vkGetDeviceProcAddr(device, "vkDestroyIndirectCommandsLayoutNV");
#endif // defined(VK_NV_device_generated_commands)
#if defined(VK_NV_device_generated_commands_compute)
	pfn_vkGetPipelineIndirectMemoryRequirementsNV = (PFN_vkGetPipelineIndirectMemoryRequirementsNV)vkGetDeviceProcAddr(device, "vkGetPipelineIndirectMemoryRequirementsNV");
	pfn_vkCmdUpdatePipelineIndirectBufferNV = (PFN_vkCmdUpdatePipelineIndirectBufferNV)vkGetDeviceProcAddr(device, "vkCmdUpdatePipelineIndirectBufferNV");
	pfn_vkGetPipelineIndirectDeviceAddressNV = (PFN_vkGetPipelineIndirectDeviceAddressNV)vkGetDeviceProcAddr(device, "vkGetPipelineIndirectDeviceAddressNV");
#endif // defined(VK_NV_device_generated_commands_compute)
#if defined(VK_NV_external_compute_queue)
	pfn_vkDestroyExternalComputeQueueNV = (PFN_vkDestroyExternalComputeQueueNV)vkGetDeviceProcAddr(device, "vkDestroyExternalComputeQueueNV");
	pfn_vkCreateExternalComputeQueueNV = (PFN_vkCreateExternalComputeQueueNV)vkGetDeviceProcAddr(device, "vkCreateExternalComputeQueueNV");
	pfn_vkGetExternalComputeQueueDataNV = (PFN_vkGetExternalComputeQueueDataNV)vkGetDeviceProcAddr(device, "vkGetExternalComputeQueueDataNV");
#endif // defined(VK_NV_external_compute_queue)
#if defined(VK_NV_external_memory_rdma)
	pfn_vkGetMemoryRemoteAddressNV = (PFN_vkGetMemoryRemoteAddressNV)vkGetDeviceProcAddr(device, "vkGetMemoryRemoteAddressNV");
#endif // defined(VK_NV_external_memory_rdma)
#if defined(VK_NV_external_memory_sci_buf)
	pfn_vkGetMemorySciBufNV = (PFN_vkGetMemorySciBufNV)vkGetDeviceProcAddr(device, "vkGetMemorySciBufNV");
#endif // defined(VK_NV_external_memory_sci_buf)
#if defined(VK_NV_external_memory_win32)
	pfn_vkGetMemoryWin32HandleNV = (PFN_vkGetMemoryWin32HandleNV)vkGetDeviceProcAddr(device, "vkGetMemoryWin32HandleNV");
#endif // defined(VK_NV_external_memory_win32)
#if defined(VK_NV_external_sci_sync)
	pfn_vkGetSemaphoreSciSyncObjNV = (PFN_vkGetSemaphoreSciSyncObjNV)vkGetDeviceProcAddr(device, "vkGetSemaphoreSciSyncObjNV");
	pfn_vkImportSemaphoreSciSyncObjNV = (PFN_vkImportSemaphoreSciSyncObjNV)vkGetDeviceProcAddr(device, "vkImportSemaphoreSciSyncObjNV");
#endif // defined(VK_NV_external_sci_sync)
#if defined(VK_NV_external_sci_sync) || defined(VK_NV_external_sci_sync2)
	pfn_vkImportFenceSciSyncFenceNV = (PFN_vkImportFenceSciSyncFenceNV)vkGetDeviceProcAddr(device, "vkImportFenceSciSyncFenceNV");
	pfn_vkGetFenceSciSyncObjNV = (PFN_vkGetFenceSciSyncObjNV)vkGetDeviceProcAddr(device, "vkGetFenceSciSyncObjNV");
	pfn_vkGetFenceSciSyncFenceNV = (PFN_vkGetFenceSciSyncFenceNV)vkGetDeviceProcAddr(device, "vkGetFenceSciSyncFenceNV");
	pfn_vkImportFenceSciSyncObjNV = (PFN_vkImportFenceSciSyncObjNV)vkGetDeviceProcAddr(device, "vkImportFenceSciSyncObjNV");
#endif // defined(VK_NV_external_sci_sync) || defined(VK_NV_external_sci_sync2)
#if defined(VK_NV_external_sci_sync2)
	pfn_vkDestroySemaphoreSciSyncPoolNV = (PFN_vkDestroySemaphoreSciSyncPoolNV)vkGetDeviceProcAddr(device, "vkDestroySemaphoreSciSyncPoolNV");
	pfn_vkCreateSemaphoreSciSyncPoolNV = (PFN_vkCreateSemaphoreSciSyncPoolNV)vkGetDeviceProcAddr(device, "vkCreateSemaphoreSciSyncPoolNV");
#endif // defined(VK_NV_external_sci_sync2)
#if defined(VK_NV_fragment_shading_rate_enums)
	pfn_vkCmdSetFragmentShadingRateEnumNV = (PFN_vkCmdSetFragmentShadingRateEnumNV)vkGetDeviceProcAddr(device, "vkCmdSetFragmentShadingRateEnumNV");
#endif // defined(VK_NV_fragment_shading_rate_enums)
#if defined(VK_NV_low_latency2)
	pfn_vkLatencySleepNV = (PFN_vkLatencySleepNV)vkGetDeviceProcAddr(device, "vkLatencySleepNV");
	pfn_vkQueueNotifyOutOfBandNV = (PFN_vkQueueNotifyOutOfBandNV)vkGetDeviceProcAddr(device, "vkQueueNotifyOutOfBandNV");
	pfn_vkSetLatencySleepModeNV = (PFN_vkSetLatencySleepModeNV)vkGetDeviceProcAddr(device, "vkSetLatencySleepModeNV");
	pfn_vkSetLatencyMarkerNV = (PFN_vkSetLatencyMarkerNV)vkGetDeviceProcAddr(device, "vkSetLatencyMarkerNV");
	pfn_vkGetLatencyTimingsNV = (PFN_vkGetLatencyTimingsNV)vkGetDeviceProcAddr(device, "vkGetLatencyTimingsNV");
#endif // defined(VK_NV_low_latency2)
#if defined(VK_NV_memory_decompression)
	pfn_vkCmdDecompressMemoryNV = (PFN_vkCmdDecompressMemoryNV)vkGetDeviceProcAddr(device, "vkCmdDecompressMemoryNV");
	pfn_vkCmdDecompressMemoryIndirectCountNV = (PFN_vkCmdDecompressMemoryIndirectCountNV)vkGetDeviceProcAddr(device, "vkCmdDecompressMemoryIndirectCountNV");
#endif // defined(VK_NV_memory_decompression)
#if defined(VK_NV_mesh_shader)
	pfn_vkCmdDrawMeshTasksIndirectNV = (PFN_vkCmdDrawMeshTasksIndirectNV)vkGetDeviceProcAddr(device, "vkCmdDrawMeshTasksIndirectNV");
	pfn_vkCmdDrawMeshTasksNV = (PFN_vkCmdDrawMeshTasksNV)vkGetDeviceProcAddr(device, "vkCmdDrawMeshTasksNV");
	pfn_vkCmdDrawMeshTasksIndirectCountNV = (PFN_vkCmdDrawMeshTasksIndirectCountNV)vkGetDeviceProcAddr(device, "vkCmdDrawMeshTasksIndirectCountNV");
#endif // defined(VK_NV_mesh_shader)
#if defined(VK_NV_optical_flow)
	pfn_vkBindOpticalFlowSessionImageNV = (PFN_vkBindOpticalFlowSessionImageNV)vkGetDeviceProcAddr(device, "vkBindOpticalFlowSessionImageNV");
	pfn_vkCreateOpticalFlowSessionNV = (PFN_vkCreateOpticalFlowSessionNV)vkGetDeviceProcAddr(device, "vkCreateOpticalFlowSessionNV");
	pfn_vkDestroyOpticalFlowSessionNV = (PFN_vkDestroyOpticalFlowSessionNV)vkGetDeviceProcAddr(device, "vkDestroyOpticalFlowSessionNV");
	pfn_vkCmdOpticalFlowExecuteNV = (PFN_vkCmdOpticalFlowExecuteNV)vkGetDeviceProcAddr(device, "vkCmdOpticalFlowExecuteNV");
#endif // defined(VK_NV_optical_flow)
#if defined(VK_NV_partitioned_acceleration_structure)
	pfn_vkCmdBuildPartitionedAccelerationStructuresNV = (PFN_vkCmdBuildPartitionedAccelerationStructuresNV)vkGetDeviceProcAddr(device, "vkCmdBuildPartitionedAccelerationStructuresNV");
	pfn_vkGetPartitionedAccelerationStructuresBuildSizesNV = (PFN_vkGetPartitionedAccelerationStructuresBuildSizesNV)vkGetDeviceProcAddr(device, "vkGetPartitionedAccelerationStructuresBuildSizesNV");
#endif // defined(VK_NV_partitioned_acceleration_structure)
#if defined(VK_NV_ray_tracing)
	pfn_vkCmdTraceRaysNV = (PFN_vkCmdTraceRaysNV)vkGetDeviceProcAddr(device, "vkCmdTraceRaysNV");
	pfn_vkDestroyAccelerationStructureNV = (PFN_vkDestroyAccelerationStructureNV)vkGetDeviceProcAddr(device, "vkDestroyAccelerationStructureNV");
	pfn_vkCmdBuildAccelerationStructureNV = (PFN_vkCmdBuildAccelerationStructureNV)vkGetDeviceProcAddr(device, "vkCmdBuildAccelerationStructureNV");
	pfn_vkCreateAccelerationStructureNV = (PFN_vkCreateAccelerationStructureNV)vkGetDeviceProcAddr(device, "vkCreateAccelerationStructureNV");
	pfn_vkGetAccelerationStructureMemoryRequirementsNV = (PFN_vkGetAccelerationStructureMemoryRequirementsNV)vkGetDeviceProcAddr(device, "vkGetAccelerationStructureMemoryRequirementsNV");
	pfn_vkBindAccelerationStructureMemoryNV = (PFN_vkBindAccelerationStructureMemoryNV)vkGetDeviceProcAddr(device, "vkBindAccelerationStructureMemoryNV");
	pfn_vkCmdCopyAccelerationStructureNV = (PFN_vkCmdCopyAccelerationStructureNV)vkGetDeviceProcAddr(device, "vkCmdCopyAccelerationStructureNV");
	pfn_vkCreateRayTracingPipelinesNV = (PFN_vkCreateRayTracingPipelinesNV)vkGetDeviceProcAddr(device, "vkCreateRayTracingPipelinesNV");
	pfn_vkGetRayTracingShaderGroupHandlesNV = (PFN_vkGetRayTracingShaderGroupHandlesNV)vkGetDeviceProcAddr(device, "vkGetRayTracingShaderGroupHandlesNV");
	pfn_vkGetAccelerationStructureHandleNV = (PFN_vkGetAccelerationStructureHandleNV)vkGetDeviceProcAddr(device, "vkGetAccelerationStructureHandleNV");
	pfn_vkCmdWriteAccelerationStructuresPropertiesNV = (PFN_vkCmdWriteAccelerationStructuresPropertiesNV)vkGetDeviceProcAddr(device, "vkCmdWriteAccelerationStructuresPropertiesNV");
	pfn_vkCompileDeferredNV = (PFN_vkCompileDeferredNV)vkGetDeviceProcAddr(device, "vkCompileDeferredNV");
#endif // defined(VK_NV_ray_tracing)
#if defined(VK_NV_scissor_exclusive)
	pfn_vkCmdSetExclusiveScissorEnableNV = (PFN_vkCmdSetExclusiveScissorEnableNV)vkGetDeviceProcAddr(device, "vkCmdSetExclusiveScissorEnableNV");
	pfn_vkCmdSetExclusiveScissorNV = (PFN_vkCmdSetExclusiveScissorNV)vkGetDeviceProcAddr(device, "vkCmdSetExclusiveScissorNV");
#endif // defined(VK_NV_scissor_exclusive)
#if defined(VK_NV_shading_rate_image)
	pfn_vkCmdSetViewportShadingRatePaletteNV = (PFN_vkCmdSetViewportShadingRatePaletteNV)vkGetDeviceProcAddr(device, "vkCmdSetViewportShadingRatePaletteNV");
	pfn_vkCmdBindShadingRateImageNV = (PFN_vkCmdBindShadingRateImageNV)vkGetDeviceProcAddr(device, "vkCmdBindShadingRateImageNV");
	pfn_vkCmdSetCoarseSampleOrderNV = (PFN_vkCmdSetCoarseSampleOrderNV)vkGetDeviceProcAddr(device, "vkCmdSetCoarseSampleOrderNV");
#endif // defined(VK_NV_shading_rate_image)
#if defined(VK_QCOM_tile_memory_heap)
	pfn_vkCmdBindTileMemoryQCOM = (PFN_vkCmdBindTileMemoryQCOM)vkGetDeviceProcAddr(device, "vkCmdBindTileMemoryQCOM");
#endif // defined(VK_QCOM_tile_memory_heap)
#if defined(VK_QCOM_tile_properties)
	pfn_vkGetFramebufferTilePropertiesQCOM = (PFN_vkGetFramebufferTilePropertiesQCOM)vkGetDeviceProcAddr(device, "vkGetFramebufferTilePropertiesQCOM");
	pfn_vkGetDynamicRenderingTilePropertiesQCOM = (PFN_vkGetDynamicRenderingTilePropertiesQCOM)vkGetDeviceProcAddr(device, "vkGetDynamicRenderingTilePropertiesQCOM");
#endif // defined(VK_QCOM_tile_properties)
#if defined(VK_QCOM_tile_shading)
	pfn_vkCmdDispatchTileQCOM = (PFN_vkCmdDispatchTileQCOM)vkGetDeviceProcAddr(device, "vkCmdDispatchTileQCOM");
	pfn_vkCmdBeginPerTileExecutionQCOM = (PFN_vkCmdBeginPerTileExecutionQCOM)vkGetDeviceProcAddr(device, "vkCmdBeginPerTileExecutionQCOM");
	pfn_vkCmdEndPerTileExecutionQCOM = (PFN_vkCmdEndPerTileExecutionQCOM)vkGetDeviceProcAddr(device, "vkCmdEndPerTileExecutionQCOM");
#endif // defined(VK_QCOM_tile_shading)
#if defined(VK_QNX_external_memory_screen_buffer)
	pfn_vkGetScreenBufferPropertiesQNX = (PFN_vkGetScreenBufferPropertiesQNX)vkGetDeviceProcAddr(device, "vkGetScreenBufferPropertiesQNX");
#endif // defined(VK_QNX_external_memory_screen_buffer)
#if defined(VK_VALVE_descriptor_set_host_mapping)
	pfn_vkGetDescriptorSetHostMappingVALVE = (PFN_vkGetDescriptorSetHostMappingVALVE)vkGetDeviceProcAddr(device, "vkGetDescriptorSetHostMappingVALVE");
	pfn_vkGetDescriptorSetLayoutHostMappingInfoVALVE = (PFN_vkGetDescriptorSetLayoutHostMappingInfoVALVE)vkGetDeviceProcAddr(device, "vkGetDescriptorSetLayoutHostMappingInfoVALVE");
#endif // defined(VK_VALVE_descriptor_set_host_mapping)
}

#endif // defined(VK_NO_PROTOTYPES)
