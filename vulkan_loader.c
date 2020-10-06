#include <vulkan_loader.h>

#if !defined(VKLG_ASSERT_MACRO)
	#include <assert.h>
	#define VKLG_ASSERT_MACRO assert;
#endif

#if VK_HEADER_VERSION > 156 && !defined(VK_NO_PROTOTYPES) && !defined(VGEN_VULKAN_LOADER_DISABLE_VERSION_CHECK)
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
#if defined(VK_AMD_buffer_marker)
	vk->vkCmdWriteBufferMarkerAMD = (PFN_vkCmdWriteBufferMarkerAMD)vk->vkGetInstanceProcAddr(instance, "vkCmdWriteBufferMarkerAMD");
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
#if defined(VK_ANDROID_native_buffer)
	vk->vkGetSwapchainGrallocUsage2ANDROID = (PFN_vkGetSwapchainGrallocUsage2ANDROID)vk->vkGetInstanceProcAddr(instance, "vkGetSwapchainGrallocUsage2ANDROID");
	vk->vkGetSwapchainGrallocUsageANDROID = (PFN_vkGetSwapchainGrallocUsageANDROID)vk->vkGetInstanceProcAddr(instance, "vkGetSwapchainGrallocUsageANDROID");
	vk->vkAcquireImageANDROID = (PFN_vkAcquireImageANDROID)vk->vkGetInstanceProcAddr(instance, "vkAcquireImageANDROID");
	vk->vkQueueSignalReleaseImageANDROID = (PFN_vkQueueSignalReleaseImageANDROID)vk->vkGetInstanceProcAddr(instance, "vkQueueSignalReleaseImageANDROID");
#endif // defined(VK_ANDROID_native_buffer)
#if defined(VK_EXT_acquire_xlib_display)
	vk->vkAcquireXlibDisplayEXT = (PFN_vkAcquireXlibDisplayEXT)vk->vkGetInstanceProcAddr(instance, "vkAcquireXlibDisplayEXT");
	vk->vkGetRandROutputDisplayEXT = (PFN_vkGetRandROutputDisplayEXT)vk->vkGetInstanceProcAddr(instance, "vkGetRandROutputDisplayEXT");
#endif // defined(VK_EXT_acquire_xlib_display)
#if defined(VK_EXT_buffer_device_address)
	vk->vkGetBufferDeviceAddressEXT = (PFN_vkGetBufferDeviceAddressEXT)vk->vkGetInstanceProcAddr(instance, "vkGetBufferDeviceAddressEXT");
#endif // defined(VK_EXT_buffer_device_address)
#if defined(VK_EXT_calibrated_timestamps)
	vk->vkGetPhysicalDeviceCalibrateableTimeDomainsEXT = (PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceCalibrateableTimeDomainsEXT");
	vk->vkGetCalibratedTimestampsEXT = (PFN_vkGetCalibratedTimestampsEXT)vk->vkGetInstanceProcAddr(instance, "vkGetCalibratedTimestampsEXT");
#endif // defined(VK_EXT_calibrated_timestamps)
#if defined(VK_EXT_conditional_rendering)
	vk->vkCmdEndConditionalRenderingEXT = (PFN_vkCmdEndConditionalRenderingEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdEndConditionalRenderingEXT");
	vk->vkCmdBeginConditionalRenderingEXT = (PFN_vkCmdBeginConditionalRenderingEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdBeginConditionalRenderingEXT");
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
	vk->vkSetDebugUtilsObjectTagEXT = (PFN_vkSetDebugUtilsObjectTagEXT)vk->vkGetInstanceProcAddr(instance, "vkSetDebugUtilsObjectTagEXT");
	vk->vkSubmitDebugUtilsMessageEXT = (PFN_vkSubmitDebugUtilsMessageEXT)vk->vkGetInstanceProcAddr(instance, "vkSubmitDebugUtilsMessageEXT");
	vk->vkQueueInsertDebugUtilsLabelEXT = (PFN_vkQueueInsertDebugUtilsLabelEXT)vk->vkGetInstanceProcAddr(instance, "vkQueueInsertDebugUtilsLabelEXT");
	vk->vkSetDebugUtilsObjectNameEXT = (PFN_vkSetDebugUtilsObjectNameEXT)vk->vkGetInstanceProcAddr(instance, "vkSetDebugUtilsObjectNameEXT");
	vk->vkQueueBeginDebugUtilsLabelEXT = (PFN_vkQueueBeginDebugUtilsLabelEXT)vk->vkGetInstanceProcAddr(instance, "vkQueueBeginDebugUtilsLabelEXT");
	vk->vkQueueEndDebugUtilsLabelEXT = (PFN_vkQueueEndDebugUtilsLabelEXT)vk->vkGetInstanceProcAddr(instance, "vkQueueEndDebugUtilsLabelEXT");
	vk->vkCmdBeginDebugUtilsLabelEXT = (PFN_vkCmdBeginDebugUtilsLabelEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdBeginDebugUtilsLabelEXT");
	vk->vkCreateDebugUtilsMessengerEXT = (PFN_vkCreateDebugUtilsMessengerEXT)vk->vkGetInstanceProcAddr(instance, "vkCreateDebugUtilsMessengerEXT");
	vk->vkDestroyDebugUtilsMessengerEXT = (PFN_vkDestroyDebugUtilsMessengerEXT)vk->vkGetInstanceProcAddr(instance, "vkDestroyDebugUtilsMessengerEXT");
#endif // defined(VK_EXT_debug_utils)
#if defined(VK_EXT_direct_mode_display)
	vk->vkReleaseDisplayEXT = (PFN_vkReleaseDisplayEXT)vk->vkGetInstanceProcAddr(instance, "vkReleaseDisplayEXT");
#endif // defined(VK_EXT_direct_mode_display)
#if defined(VK_EXT_directfb_surface)
	vk->vkGetPhysicalDeviceDirectFBPresentationSupportEXT = (PFN_vkGetPhysicalDeviceDirectFBPresentationSupportEXT)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceDirectFBPresentationSupportEXT");
	vk->vkCreateDirectFBSurfaceEXT = (PFN_vkCreateDirectFBSurfaceEXT)vk->vkGetInstanceProcAddr(instance, "vkCreateDirectFBSurfaceEXT");
#endif // defined(VK_EXT_directfb_surface)
#if defined(VK_EXT_discard_rectangles)
	vk->vkCmdSetDiscardRectangleEXT = (PFN_vkCmdSetDiscardRectangleEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetDiscardRectangleEXT");
#endif // defined(VK_EXT_discard_rectangles)
#if defined(VK_EXT_display_control)
	vk->vkGetSwapchainCounterEXT = (PFN_vkGetSwapchainCounterEXT)vk->vkGetInstanceProcAddr(instance, "vkGetSwapchainCounterEXT");
	vk->vkDisplayPowerControlEXT = (PFN_vkDisplayPowerControlEXT)vk->vkGetInstanceProcAddr(instance, "vkDisplayPowerControlEXT");
	vk->vkRegisterDeviceEventEXT = (PFN_vkRegisterDeviceEventEXT)vk->vkGetInstanceProcAddr(instance, "vkRegisterDeviceEventEXT");
	vk->vkRegisterDisplayEventEXT = (PFN_vkRegisterDisplayEventEXT)vk->vkGetInstanceProcAddr(instance, "vkRegisterDisplayEventEXT");
#endif // defined(VK_EXT_display_control)
#if defined(VK_EXT_display_surface_counter)
	vk->vkGetPhysicalDeviceSurfaceCapabilities2EXT = (PFN_vkGetPhysicalDeviceSurfaceCapabilities2EXT)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSurfaceCapabilities2EXT");
#endif // defined(VK_EXT_display_surface_counter)
#if defined(VK_EXT_extended_dynamic_state)
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
#endif // defined(VK_EXT_extended_dynamic_state)
#if defined(VK_EXT_external_memory_host)
	vk->vkGetMemoryHostPointerPropertiesEXT = (PFN_vkGetMemoryHostPointerPropertiesEXT)vk->vkGetInstanceProcAddr(instance, "vkGetMemoryHostPointerPropertiesEXT");
#endif // defined(VK_EXT_external_memory_host)
#if defined(VK_EXT_full_screen_exclusive)
	vk->vkGetPhysicalDeviceSurfacePresentModes2EXT = (PFN_vkGetPhysicalDeviceSurfacePresentModes2EXT)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSurfacePresentModes2EXT");
	vk->vkAcquireFullScreenExclusiveModeEXT = (PFN_vkAcquireFullScreenExclusiveModeEXT)vk->vkGetInstanceProcAddr(instance, "vkAcquireFullScreenExclusiveModeEXT");
	vk->vkReleaseFullScreenExclusiveModeEXT = (PFN_vkReleaseFullScreenExclusiveModeEXT)vk->vkGetInstanceProcAddr(instance, "vkReleaseFullScreenExclusiveModeEXT");
#endif // defined(VK_EXT_full_screen_exclusive)
#if defined(VK_EXT_full_screen_exclusive) && defined(VK_KHR_device_group) || defined(VK_EXT_full_screen_exclusive) && defined(VK_VERSION_1_1)
	vk->vkGetDeviceGroupSurfacePresentModes2EXT = (PFN_vkGetDeviceGroupSurfacePresentModes2EXT)vk->vkGetInstanceProcAddr(instance, "vkGetDeviceGroupSurfacePresentModes2EXT");
#endif // defined(VK_EXT_full_screen_exclusive) && defined(VK_KHR_device_group) || defined(VK_EXT_full_screen_exclusive) && defined(VK_VERSION_1_1)
#if defined(VK_EXT_hdr_metadata)
	vk->vkSetHdrMetadataEXT = (PFN_vkSetHdrMetadataEXT)vk->vkGetInstanceProcAddr(instance, "vkSetHdrMetadataEXT");
#endif // defined(VK_EXT_hdr_metadata)
#if defined(VK_EXT_headless_surface)
	vk->vkCreateHeadlessSurfaceEXT = (PFN_vkCreateHeadlessSurfaceEXT)vk->vkGetInstanceProcAddr(instance, "vkCreateHeadlessSurfaceEXT");
#endif // defined(VK_EXT_headless_surface)
#if defined(VK_EXT_host_query_reset)
	vk->vkResetQueryPoolEXT = (PFN_vkResetQueryPoolEXT)vk->vkGetInstanceProcAddr(instance, "vkResetQueryPoolEXT");
#endif // defined(VK_EXT_host_query_reset)
#if defined(VK_EXT_image_drm_format_modifier)
	vk->vkGetImageDrmFormatModifierPropertiesEXT = (PFN_vkGetImageDrmFormatModifierPropertiesEXT)vk->vkGetInstanceProcAddr(instance, "vkGetImageDrmFormatModifierPropertiesEXT");
#endif // defined(VK_EXT_image_drm_format_modifier)
#if defined(VK_EXT_line_rasterization)
	vk->vkCmdSetLineStippleEXT = (PFN_vkCmdSetLineStippleEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdSetLineStippleEXT");
#endif // defined(VK_EXT_line_rasterization)
#if defined(VK_EXT_metal_surface)
	vk->vkCreateMetalSurfaceEXT = (PFN_vkCreateMetalSurfaceEXT)vk->vkGetInstanceProcAddr(instance, "vkCreateMetalSurfaceEXT");
#endif // defined(VK_EXT_metal_surface)
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
#if defined(VK_EXT_tooling_info)
	vk->vkGetPhysicalDeviceToolPropertiesEXT = (PFN_vkGetPhysicalDeviceToolPropertiesEXT)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceToolPropertiesEXT");
#endif // defined(VK_EXT_tooling_info)
#if defined(VK_EXT_transform_feedback)
	vk->vkCmdEndQueryIndexedEXT = (PFN_vkCmdEndQueryIndexedEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdEndQueryIndexedEXT");
	vk->vkCmdEndTransformFeedbackEXT = (PFN_vkCmdEndTransformFeedbackEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdEndTransformFeedbackEXT");
	vk->vkCmdBindTransformFeedbackBuffersEXT = (PFN_vkCmdBindTransformFeedbackBuffersEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdBindTransformFeedbackBuffersEXT");
	vk->vkCmdBeginTransformFeedbackEXT = (PFN_vkCmdBeginTransformFeedbackEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdBeginTransformFeedbackEXT");
	vk->vkCmdBeginQueryIndexedEXT = (PFN_vkCmdBeginQueryIndexedEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdBeginQueryIndexedEXT");
	vk->vkCmdDrawIndirectByteCountEXT = (PFN_vkCmdDrawIndirectByteCountEXT)vk->vkGetInstanceProcAddr(instance, "vkCmdDrawIndirectByteCountEXT");
#endif // defined(VK_EXT_transform_feedback)
#if defined(VK_EXT_validation_cache)
	vk->vkMergeValidationCachesEXT = (PFN_vkMergeValidationCachesEXT)vk->vkGetInstanceProcAddr(instance, "vkMergeValidationCachesEXT");
	vk->vkDestroyValidationCacheEXT = (PFN_vkDestroyValidationCacheEXT)vk->vkGetInstanceProcAddr(instance, "vkDestroyValidationCacheEXT");
	vk->vkCreateValidationCacheEXT = (PFN_vkCreateValidationCacheEXT)vk->vkGetInstanceProcAddr(instance, "vkCreateValidationCacheEXT");
	vk->vkGetValidationCacheDataEXT = (PFN_vkGetValidationCacheDataEXT)vk->vkGetInstanceProcAddr(instance, "vkGetValidationCacheDataEXT");
#endif // defined(VK_EXT_validation_cache)
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
#if defined(VK_KHR_copy_commands2)
	vk->vkCmdCopyImageToBuffer2KHR = (PFN_vkCmdCopyImageToBuffer2KHR)vk->vkGetInstanceProcAddr(instance, "vkCmdCopyImageToBuffer2KHR");
	vk->vkCmdCopyBuffer2KHR = (PFN_vkCmdCopyBuffer2KHR)vk->vkGetInstanceProcAddr(instance, "vkCmdCopyBuffer2KHR");
	vk->vkCmdCopyImage2KHR = (PFN_vkCmdCopyImage2KHR)vk->vkGetInstanceProcAddr(instance, "vkCmdCopyImage2KHR");
	vk->vkCmdCopyBufferToImage2KHR = (PFN_vkCmdCopyBufferToImage2KHR)vk->vkGetInstanceProcAddr(instance, "vkCmdCopyBufferToImage2KHR");
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
#if defined(VK_KHR_descriptor_update_template) && defined(VK_KHR_push_descriptor) || defined(VK_KHR_push_descriptor) && defined(VK_VERSION_1_1)
	vk->vkCmdPushDescriptorSetWithTemplateKHR = (PFN_vkCmdPushDescriptorSetWithTemplateKHR)vk->vkGetInstanceProcAddr(instance, "vkCmdPushDescriptorSetWithTemplateKHR");
#endif // defined(VK_KHR_descriptor_update_template) && defined(VK_KHR_push_descriptor) || defined(VK_KHR_push_descriptor) && defined(VK_VERSION_1_1)
#if defined(VK_KHR_device_group)
	vk->vkGetDeviceGroupPeerMemoryFeaturesKHR = (PFN_vkGetDeviceGroupPeerMemoryFeaturesKHR)vk->vkGetInstanceProcAddr(instance, "vkGetDeviceGroupPeerMemoryFeaturesKHR");
	vk->vkCmdSetDeviceMaskKHR = (PFN_vkCmdSetDeviceMaskKHR)vk->vkGetInstanceProcAddr(instance, "vkCmdSetDeviceMaskKHR");
	vk->vkCmdDispatchBaseKHR = (PFN_vkCmdDispatchBaseKHR)vk->vkGetInstanceProcAddr(instance, "vkCmdDispatchBaseKHR");
#endif // defined(VK_KHR_device_group)
#if defined(VK_KHR_device_group) && defined(VK_KHR_surface) || defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1)
	vk->vkGetDeviceGroupPresentCapabilitiesKHR = (PFN_vkGetDeviceGroupPresentCapabilitiesKHR)vk->vkGetInstanceProcAddr(instance, "vkGetDeviceGroupPresentCapabilitiesKHR");
	vk->vkGetDeviceGroupSurfacePresentModesKHR = (PFN_vkGetDeviceGroupSurfacePresentModesKHR)vk->vkGetInstanceProcAddr(instance, "vkGetDeviceGroupSurfacePresentModesKHR");
	vk->vkGetPhysicalDevicePresentRectanglesKHR = (PFN_vkGetPhysicalDevicePresentRectanglesKHR)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDevicePresentRectanglesKHR");
#endif // defined(VK_KHR_device_group) && defined(VK_KHR_surface) || defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1)
#if defined(VK_KHR_device_group) && defined(VK_KHR_swapchain) || defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1)
	vk->vkAcquireNextImage2KHR = (PFN_vkAcquireNextImage2KHR)vk->vkGetInstanceProcAddr(instance, "vkAcquireNextImage2KHR");
#endif // defined(VK_KHR_device_group) && defined(VK_KHR_swapchain) || defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1)
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
	vk->vkGetMemoryFdKHR = (PFN_vkGetMemoryFdKHR)vk->vkGetInstanceProcAddr(instance, "vkGetMemoryFdKHR");
	vk->vkGetMemoryFdPropertiesKHR = (PFN_vkGetMemoryFdPropertiesKHR)vk->vkGetInstanceProcAddr(instance, "vkGetMemoryFdPropertiesKHR");
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
	vk->vkGetPhysicalDeviceFormatProperties2KHR = (PFN_vkGetPhysicalDeviceFormatProperties2KHR)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceFormatProperties2KHR");
	vk->vkGetPhysicalDeviceSparseImageFormatProperties2KHR = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties2KHR)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSparseImageFormatProperties2KHR");
	vk->vkGetPhysicalDeviceProperties2KHR = (PFN_vkGetPhysicalDeviceProperties2KHR)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceProperties2KHR");
	vk->vkGetPhysicalDeviceMemoryProperties2KHR = (PFN_vkGetPhysicalDeviceMemoryProperties2KHR)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceMemoryProperties2KHR");
	vk->vkGetPhysicalDeviceQueueFamilyProperties2KHR = (PFN_vkGetPhysicalDeviceQueueFamilyProperties2KHR)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceQueueFamilyProperties2KHR");
	vk->vkGetPhysicalDeviceImageFormatProperties2KHR = (PFN_vkGetPhysicalDeviceImageFormatProperties2KHR)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceImageFormatProperties2KHR");
	vk->vkGetPhysicalDeviceFeatures2KHR = (PFN_vkGetPhysicalDeviceFeatures2KHR)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceFeatures2KHR");
#endif // defined(VK_KHR_get_physical_device_properties2)
#if defined(VK_KHR_get_surface_capabilities2)
	vk->vkGetPhysicalDeviceSurfaceCapabilities2KHR = (PFN_vkGetPhysicalDeviceSurfaceCapabilities2KHR)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSurfaceCapabilities2KHR");
	vk->vkGetPhysicalDeviceSurfaceFormats2KHR = (PFN_vkGetPhysicalDeviceSurfaceFormats2KHR)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSurfaceFormats2KHR");
#endif // defined(VK_KHR_get_surface_capabilities2)
#if defined(VK_KHR_maintenance1)
	vk->vkTrimCommandPoolKHR = (PFN_vkTrimCommandPoolKHR)vk->vkGetInstanceProcAddr(instance, "vkTrimCommandPoolKHR");
#endif // defined(VK_KHR_maintenance1)
#if defined(VK_KHR_maintenance3)
	vk->vkGetDescriptorSetLayoutSupportKHR = (PFN_vkGetDescriptorSetLayoutSupportKHR)vk->vkGetInstanceProcAddr(instance, "vkGetDescriptorSetLayoutSupportKHR");
#endif // defined(VK_KHR_maintenance3)
#if defined(VK_KHR_performance_query)
	vk->vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR = (PFN_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR)vk->vkGetInstanceProcAddr(instance, "vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR");
	vk->vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR = (PFN_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR");
	vk->vkAcquireProfilingLockKHR = (PFN_vkAcquireProfilingLockKHR)vk->vkGetInstanceProcAddr(instance, "vkAcquireProfilingLockKHR");
	vk->vkReleaseProfilingLockKHR = (PFN_vkReleaseProfilingLockKHR)vk->vkGetInstanceProcAddr(instance, "vkReleaseProfilingLockKHR");
#endif // defined(VK_KHR_performance_query)
#if defined(VK_KHR_pipeline_executable_properties)
	vk->vkGetPipelineExecutableInternalRepresentationsKHR = (PFN_vkGetPipelineExecutableInternalRepresentationsKHR)vk->vkGetInstanceProcAddr(instance, "vkGetPipelineExecutableInternalRepresentationsKHR");
	vk->vkGetPipelineExecutablePropertiesKHR = (PFN_vkGetPipelineExecutablePropertiesKHR)vk->vkGetInstanceProcAddr(instance, "vkGetPipelineExecutablePropertiesKHR");
	vk->vkGetPipelineExecutableStatisticsKHR = (PFN_vkGetPipelineExecutableStatisticsKHR)vk->vkGetInstanceProcAddr(instance, "vkGetPipelineExecutableStatisticsKHR");
#endif // defined(VK_KHR_pipeline_executable_properties)
#if defined(VK_KHR_push_descriptor)
	vk->vkCmdPushDescriptorSetKHR = (PFN_vkCmdPushDescriptorSetKHR)vk->vkGetInstanceProcAddr(instance, "vkCmdPushDescriptorSetKHR");
#endif // defined(VK_KHR_push_descriptor)
#if defined(VK_KHR_ray_tracing)
	vk->vkCreateRayTracingPipelinesKHR = (PFN_vkCreateRayTracingPipelinesKHR)vk->vkGetInstanceProcAddr(instance, "vkCreateRayTracingPipelinesKHR");
	vk->vkGetRayTracingShaderGroupHandlesKHR = (PFN_vkGetRayTracingShaderGroupHandlesKHR)vk->vkGetInstanceProcAddr(instance, "vkGetRayTracingShaderGroupHandlesKHR");
	vk->vkGetRayTracingCaptureReplayShaderGroupHandlesKHR = (PFN_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR)vk->vkGetInstanceProcAddr(instance, "vkGetRayTracingCaptureReplayShaderGroupHandlesKHR");
	vk->vkCreateAccelerationStructureKHR = (PFN_vkCreateAccelerationStructureKHR)vk->vkGetInstanceProcAddr(instance, "vkCreateAccelerationStructureKHR");
	vk->vkDestroyAccelerationStructureKHR = (PFN_vkDestroyAccelerationStructureKHR)vk->vkGetInstanceProcAddr(instance, "vkDestroyAccelerationStructureKHR");
	vk->vkGetAccelerationStructureMemoryRequirementsKHR = (PFN_vkGetAccelerationStructureMemoryRequirementsKHR)vk->vkGetInstanceProcAddr(instance, "vkGetAccelerationStructureMemoryRequirementsKHR");
	vk->vkBindAccelerationStructureMemoryKHR = (PFN_vkBindAccelerationStructureMemoryKHR)vk->vkGetInstanceProcAddr(instance, "vkBindAccelerationStructureMemoryKHR");
	vk->vkCmdBuildAccelerationStructureKHR = (PFN_vkCmdBuildAccelerationStructureKHR)vk->vkGetInstanceProcAddr(instance, "vkCmdBuildAccelerationStructureKHR");
	vk->vkCmdBuildAccelerationStructureIndirectKHR = (PFN_vkCmdBuildAccelerationStructureIndirectKHR)vk->vkGetInstanceProcAddr(instance, "vkCmdBuildAccelerationStructureIndirectKHR");
	vk->vkBuildAccelerationStructureKHR = (PFN_vkBuildAccelerationStructureKHR)vk->vkGetInstanceProcAddr(instance, "vkBuildAccelerationStructureKHR");
	vk->vkCopyAccelerationStructureKHR = (PFN_vkCopyAccelerationStructureKHR)vk->vkGetInstanceProcAddr(instance, "vkCopyAccelerationStructureKHR");
	vk->vkCopyAccelerationStructureToMemoryKHR = (PFN_vkCopyAccelerationStructureToMemoryKHR)vk->vkGetInstanceProcAddr(instance, "vkCopyAccelerationStructureToMemoryKHR");
	vk->vkCopyMemoryToAccelerationStructureKHR = (PFN_vkCopyMemoryToAccelerationStructureKHR)vk->vkGetInstanceProcAddr(instance, "vkCopyMemoryToAccelerationStructureKHR");
	vk->vkCmdTraceRaysKHR = (PFN_vkCmdTraceRaysKHR)vk->vkGetInstanceProcAddr(instance, "vkCmdTraceRaysKHR");
	vk->vkWriteAccelerationStructuresPropertiesKHR = (PFN_vkWriteAccelerationStructuresPropertiesKHR)vk->vkGetInstanceProcAddr(instance, "vkWriteAccelerationStructuresPropertiesKHR");
	vk->vkCmdCopyAccelerationStructureKHR = (PFN_vkCmdCopyAccelerationStructureKHR)vk->vkGetInstanceProcAddr(instance, "vkCmdCopyAccelerationStructureKHR");
	vk->vkCmdCopyAccelerationStructureToMemoryKHR = (PFN_vkCmdCopyAccelerationStructureToMemoryKHR)vk->vkGetInstanceProcAddr(instance, "vkCmdCopyAccelerationStructureToMemoryKHR");
	vk->vkCmdCopyMemoryToAccelerationStructureKHR = (PFN_vkCmdCopyMemoryToAccelerationStructureKHR)vk->vkGetInstanceProcAddr(instance, "vkCmdCopyMemoryToAccelerationStructureKHR");
	vk->vkGetAccelerationStructureDeviceAddressKHR = (PFN_vkGetAccelerationStructureDeviceAddressKHR)vk->vkGetInstanceProcAddr(instance, "vkGetAccelerationStructureDeviceAddressKHR");
	vk->vkCmdWriteAccelerationStructuresPropertiesKHR = (PFN_vkCmdWriteAccelerationStructuresPropertiesKHR)vk->vkGetInstanceProcAddr(instance, "vkCmdWriteAccelerationStructuresPropertiesKHR");
	vk->vkCmdTraceRaysIndirectKHR = (PFN_vkCmdTraceRaysIndirectKHR)vk->vkGetInstanceProcAddr(instance, "vkCmdTraceRaysIndirectKHR");
	vk->vkGetDeviceAccelerationStructureCompatibilityKHR = (PFN_vkGetDeviceAccelerationStructureCompatibilityKHR)vk->vkGetInstanceProcAddr(instance, "vkGetDeviceAccelerationStructureCompatibilityKHR");
#endif // defined(VK_KHR_ray_tracing)
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
#if defined(VK_KHR_timeline_semaphore)
	vk->vkWaitSemaphoresKHR = (PFN_vkWaitSemaphoresKHR)vk->vkGetInstanceProcAddr(instance, "vkWaitSemaphoresKHR");
	vk->vkGetSemaphoreCounterValueKHR = (PFN_vkGetSemaphoreCounterValueKHR)vk->vkGetInstanceProcAddr(instance, "vkGetSemaphoreCounterValueKHR");
	vk->vkSignalSemaphoreKHR = (PFN_vkSignalSemaphoreKHR)vk->vkGetInstanceProcAddr(instance, "vkSignalSemaphoreKHR");
#endif // defined(VK_KHR_timeline_semaphore)
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
#if defined(VK_NVX_image_view_handle)
	vk->vkGetImageViewHandleNVX = (PFN_vkGetImageViewHandleNVX)vk->vkGetInstanceProcAddr(instance, "vkGetImageViewHandleNVX");
	vk->vkGetImageViewAddressNVX = (PFN_vkGetImageViewAddressNVX)vk->vkGetInstanceProcAddr(instance, "vkGetImageViewAddressNVX");
#endif // defined(VK_NVX_image_view_handle)
#if defined(VK_NV_clip_space_w_scaling)
	vk->vkCmdSetViewportWScalingNV = (PFN_vkCmdSetViewportWScalingNV)vk->vkGetInstanceProcAddr(instance, "vkCmdSetViewportWScalingNV");
#endif // defined(VK_NV_clip_space_w_scaling)
#if defined(VK_NV_cooperative_matrix)
	vk->vkGetPhysicalDeviceCooperativeMatrixPropertiesNV = (PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceCooperativeMatrixPropertiesNV");
#endif // defined(VK_NV_cooperative_matrix)
#if defined(VK_NV_coverage_reduction_mode)
	vk->vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV = (PFN_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV");
#endif // defined(VK_NV_coverage_reduction_mode)
#if defined(VK_NV_device_diagnostic_checkpoints)
	vk->vkGetQueueCheckpointDataNV = (PFN_vkGetQueueCheckpointDataNV)vk->vkGetInstanceProcAddr(instance, "vkGetQueueCheckpointDataNV");
	vk->vkCmdSetCheckpointNV = (PFN_vkCmdSetCheckpointNV)vk->vkGetInstanceProcAddr(instance, "vkCmdSetCheckpointNV");
#endif // defined(VK_NV_device_diagnostic_checkpoints)
#if defined(VK_NV_device_generated_commands)
	vk->vkGetGeneratedCommandsMemoryRequirementsNV = (PFN_vkGetGeneratedCommandsMemoryRequirementsNV)vk->vkGetInstanceProcAddr(instance, "vkGetGeneratedCommandsMemoryRequirementsNV");
	vk->vkCreateIndirectCommandsLayoutNV = (PFN_vkCreateIndirectCommandsLayoutNV)vk->vkGetInstanceProcAddr(instance, "vkCreateIndirectCommandsLayoutNV");
	vk->vkCmdPreprocessGeneratedCommandsNV = (PFN_vkCmdPreprocessGeneratedCommandsNV)vk->vkGetInstanceProcAddr(instance, "vkCmdPreprocessGeneratedCommandsNV");
	vk->vkCmdExecuteGeneratedCommandsNV = (PFN_vkCmdExecuteGeneratedCommandsNV)vk->vkGetInstanceProcAddr(instance, "vkCmdExecuteGeneratedCommandsNV");
	vk->vkCmdBindPipelineShaderGroupNV = (PFN_vkCmdBindPipelineShaderGroupNV)vk->vkGetInstanceProcAddr(instance, "vkCmdBindPipelineShaderGroupNV");
	vk->vkDestroyIndirectCommandsLayoutNV = (PFN_vkDestroyIndirectCommandsLayoutNV)vk->vkGetInstanceProcAddr(instance, "vkDestroyIndirectCommandsLayoutNV");
#endif // defined(VK_NV_device_generated_commands)
#if defined(VK_NV_external_memory_capabilities)
	vk->vkGetPhysicalDeviceExternalImageFormatPropertiesNV = (PFN_vkGetPhysicalDeviceExternalImageFormatPropertiesNV)vk->vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceExternalImageFormatPropertiesNV");
#endif // defined(VK_NV_external_memory_capabilities)
#if defined(VK_NV_external_memory_win32)
	vk->vkGetMemoryWin32HandleNV = (PFN_vkGetMemoryWin32HandleNV)vk->vkGetInstanceProcAddr(instance, "vkGetMemoryWin32HandleNV");
#endif // defined(VK_NV_external_memory_win32)
#if defined(VK_NV_mesh_shader)
	vk->vkCmdDrawMeshTasksNV = (PFN_vkCmdDrawMeshTasksNV)vk->vkGetInstanceProcAddr(instance, "vkCmdDrawMeshTasksNV");
	vk->vkCmdDrawMeshTasksIndirectNV = (PFN_vkCmdDrawMeshTasksIndirectNV)vk->vkGetInstanceProcAddr(instance, "vkCmdDrawMeshTasksIndirectNV");
	vk->vkCmdDrawMeshTasksIndirectCountNV = (PFN_vkCmdDrawMeshTasksIndirectCountNV)vk->vkGetInstanceProcAddr(instance, "vkCmdDrawMeshTasksIndirectCountNV");
#endif // defined(VK_NV_mesh_shader)
#if defined(VK_NV_ray_tracing)
	vk->vkDestroyAccelerationStructureNV = (PFN_vkDestroyAccelerationStructureNV)vk->vkGetInstanceProcAddr(instance, "vkDestroyAccelerationStructureNV");
	vk->vkCmdBuildAccelerationStructureNV = (PFN_vkCmdBuildAccelerationStructureNV)vk->vkGetInstanceProcAddr(instance, "vkCmdBuildAccelerationStructureNV");
	vk->vkCreateAccelerationStructureNV = (PFN_vkCreateAccelerationStructureNV)vk->vkGetInstanceProcAddr(instance, "vkCreateAccelerationStructureNV");
	vk->vkGetAccelerationStructureMemoryRequirementsNV = (PFN_vkGetAccelerationStructureMemoryRequirementsNV)vk->vkGetInstanceProcAddr(instance, "vkGetAccelerationStructureMemoryRequirementsNV");
	vk->vkBindAccelerationStructureMemoryNV = (PFN_vkBindAccelerationStructureMemoryNV)vk->vkGetInstanceProcAddr(instance, "vkBindAccelerationStructureMemoryNV");
	vk->vkCmdCopyAccelerationStructureNV = (PFN_vkCmdCopyAccelerationStructureNV)vk->vkGetInstanceProcAddr(instance, "vkCmdCopyAccelerationStructureNV");
	vk->vkCmdTraceRaysNV = (PFN_vkCmdTraceRaysNV)vk->vkGetInstanceProcAddr(instance, "vkCmdTraceRaysNV");
	vk->vkCreateRayTracingPipelinesNV = (PFN_vkCreateRayTracingPipelinesNV)vk->vkGetInstanceProcAddr(instance, "vkCreateRayTracingPipelinesNV");
	vk->vkGetRayTracingShaderGroupHandlesNV = (PFN_vkGetRayTracingShaderGroupHandlesNV)vk->vkGetInstanceProcAddr(instance, "vkGetRayTracingShaderGroupHandlesNV");
	vk->vkGetAccelerationStructureHandleNV = (PFN_vkGetAccelerationStructureHandleNV)vk->vkGetInstanceProcAddr(instance, "vkGetAccelerationStructureHandleNV");
	vk->vkCmdWriteAccelerationStructuresPropertiesNV = (PFN_vkCmdWriteAccelerationStructuresPropertiesNV)vk->vkGetInstanceProcAddr(instance, "vkCmdWriteAccelerationStructuresPropertiesNV");
	vk->vkCompileDeferredNV = (PFN_vkCompileDeferredNV)vk->vkGetInstanceProcAddr(instance, "vkCompileDeferredNV");
#endif // defined(VK_NV_ray_tracing)
#if defined(VK_NV_scissor_exclusive)
	vk->vkCmdSetExclusiveScissorNV = (PFN_vkCmdSetExclusiveScissorNV)vk->vkGetInstanceProcAddr(instance, "vkCmdSetExclusiveScissorNV");
#endif // defined(VK_NV_scissor_exclusive)
#if defined(VK_NV_shading_rate_image)
	vk->vkCmdSetCoarseSampleOrderNV = (PFN_vkCmdSetCoarseSampleOrderNV)vk->vkGetInstanceProcAddr(instance, "vkCmdSetCoarseSampleOrderNV");
	vk->vkCmdSetViewportShadingRatePaletteNV = (PFN_vkCmdSetViewportShadingRatePaletteNV)vk->vkGetInstanceProcAddr(instance, "vkCmdSetViewportShadingRatePaletteNV");
	vk->vkCmdBindShadingRateImageNV = (PFN_vkCmdBindShadingRateImageNV)vk->vkGetInstanceProcAddr(instance, "vkCmdBindShadingRateImageNV");
#endif // defined(VK_NV_shading_rate_image)
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
#if defined(VK_AMD_buffer_marker)
	vk->vkCmdWriteBufferMarkerAMD = (PFN_vkCmdWriteBufferMarkerAMD)vk->vkGetDeviceProcAddr(device, "vkCmdWriteBufferMarkerAMD");
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
#if defined(VK_ANDROID_native_buffer)
	vk->vkGetSwapchainGrallocUsage2ANDROID = (PFN_vkGetSwapchainGrallocUsage2ANDROID)vk->vkGetDeviceProcAddr(device, "vkGetSwapchainGrallocUsage2ANDROID");
	vk->vkGetSwapchainGrallocUsageANDROID = (PFN_vkGetSwapchainGrallocUsageANDROID)vk->vkGetDeviceProcAddr(device, "vkGetSwapchainGrallocUsageANDROID");
	vk->vkAcquireImageANDROID = (PFN_vkAcquireImageANDROID)vk->vkGetDeviceProcAddr(device, "vkAcquireImageANDROID");
	vk->vkQueueSignalReleaseImageANDROID = (PFN_vkQueueSignalReleaseImageANDROID)vk->vkGetDeviceProcAddr(device, "vkQueueSignalReleaseImageANDROID");
#endif // defined(VK_ANDROID_native_buffer)
#if defined(VK_EXT_buffer_device_address)
	vk->vkGetBufferDeviceAddressEXT = (PFN_vkGetBufferDeviceAddressEXT)vk->vkGetDeviceProcAddr(device, "vkGetBufferDeviceAddressEXT");
#endif // defined(VK_EXT_buffer_device_address)
#if defined(VK_EXT_calibrated_timestamps)
	vk->vkGetCalibratedTimestampsEXT = (PFN_vkGetCalibratedTimestampsEXT)vk->vkGetDeviceProcAddr(device, "vkGetCalibratedTimestampsEXT");
#endif // defined(VK_EXT_calibrated_timestamps)
#if defined(VK_EXT_conditional_rendering)
	vk->vkCmdEndConditionalRenderingEXT = (PFN_vkCmdEndConditionalRenderingEXT)vk->vkGetDeviceProcAddr(device, "vkCmdEndConditionalRenderingEXT");
	vk->vkCmdBeginConditionalRenderingEXT = (PFN_vkCmdBeginConditionalRenderingEXT)vk->vkGetDeviceProcAddr(device, "vkCmdBeginConditionalRenderingEXT");
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
	vk->vkQueueInsertDebugUtilsLabelEXT = (PFN_vkQueueInsertDebugUtilsLabelEXT)vk->vkGetDeviceProcAddr(device, "vkQueueInsertDebugUtilsLabelEXT");
	vk->vkSetDebugUtilsObjectNameEXT = (PFN_vkSetDebugUtilsObjectNameEXT)vk->vkGetDeviceProcAddr(device, "vkSetDebugUtilsObjectNameEXT");
	vk->vkQueueBeginDebugUtilsLabelEXT = (PFN_vkQueueBeginDebugUtilsLabelEXT)vk->vkGetDeviceProcAddr(device, "vkQueueBeginDebugUtilsLabelEXT");
	vk->vkQueueEndDebugUtilsLabelEXT = (PFN_vkQueueEndDebugUtilsLabelEXT)vk->vkGetDeviceProcAddr(device, "vkQueueEndDebugUtilsLabelEXT");
	vk->vkCmdBeginDebugUtilsLabelEXT = (PFN_vkCmdBeginDebugUtilsLabelEXT)vk->vkGetDeviceProcAddr(device, "vkCmdBeginDebugUtilsLabelEXT");
#endif // defined(VK_EXT_debug_utils)
#if defined(VK_EXT_discard_rectangles)
	vk->vkCmdSetDiscardRectangleEXT = (PFN_vkCmdSetDiscardRectangleEXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetDiscardRectangleEXT");
#endif // defined(VK_EXT_discard_rectangles)
#if defined(VK_EXT_display_control)
	vk->vkGetSwapchainCounterEXT = (PFN_vkGetSwapchainCounterEXT)vk->vkGetDeviceProcAddr(device, "vkGetSwapchainCounterEXT");
	vk->vkDisplayPowerControlEXT = (PFN_vkDisplayPowerControlEXT)vk->vkGetDeviceProcAddr(device, "vkDisplayPowerControlEXT");
	vk->vkRegisterDeviceEventEXT = (PFN_vkRegisterDeviceEventEXT)vk->vkGetDeviceProcAddr(device, "vkRegisterDeviceEventEXT");
	vk->vkRegisterDisplayEventEXT = (PFN_vkRegisterDisplayEventEXT)vk->vkGetDeviceProcAddr(device, "vkRegisterDisplayEventEXT");
#endif // defined(VK_EXT_display_control)
#if defined(VK_EXT_extended_dynamic_state)
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
#endif // defined(VK_EXT_extended_dynamic_state)
#if defined(VK_EXT_external_memory_host)
	vk->vkGetMemoryHostPointerPropertiesEXT = (PFN_vkGetMemoryHostPointerPropertiesEXT)vk->vkGetDeviceProcAddr(device, "vkGetMemoryHostPointerPropertiesEXT");
#endif // defined(VK_EXT_external_memory_host)
#if defined(VK_EXT_full_screen_exclusive)
	vk->vkAcquireFullScreenExclusiveModeEXT = (PFN_vkAcquireFullScreenExclusiveModeEXT)vk->vkGetDeviceProcAddr(device, "vkAcquireFullScreenExclusiveModeEXT");
	vk->vkReleaseFullScreenExclusiveModeEXT = (PFN_vkReleaseFullScreenExclusiveModeEXT)vk->vkGetDeviceProcAddr(device, "vkReleaseFullScreenExclusiveModeEXT");
#endif // defined(VK_EXT_full_screen_exclusive)
#if defined(VK_EXT_full_screen_exclusive) && defined(VK_KHR_device_group) || defined(VK_EXT_full_screen_exclusive) && defined(VK_VERSION_1_1)
	vk->vkGetDeviceGroupSurfacePresentModes2EXT = (PFN_vkGetDeviceGroupSurfacePresentModes2EXT)vk->vkGetDeviceProcAddr(device, "vkGetDeviceGroupSurfacePresentModes2EXT");
#endif // defined(VK_EXT_full_screen_exclusive) && defined(VK_KHR_device_group) || defined(VK_EXT_full_screen_exclusive) && defined(VK_VERSION_1_1)
#if defined(VK_EXT_hdr_metadata)
	vk->vkSetHdrMetadataEXT = (PFN_vkSetHdrMetadataEXT)vk->vkGetDeviceProcAddr(device, "vkSetHdrMetadataEXT");
#endif // defined(VK_EXT_hdr_metadata)
#if defined(VK_EXT_host_query_reset)
	vk->vkResetQueryPoolEXT = (PFN_vkResetQueryPoolEXT)vk->vkGetDeviceProcAddr(device, "vkResetQueryPoolEXT");
#endif // defined(VK_EXT_host_query_reset)
#if defined(VK_EXT_image_drm_format_modifier)
	vk->vkGetImageDrmFormatModifierPropertiesEXT = (PFN_vkGetImageDrmFormatModifierPropertiesEXT)vk->vkGetDeviceProcAddr(device, "vkGetImageDrmFormatModifierPropertiesEXT");
#endif // defined(VK_EXT_image_drm_format_modifier)
#if defined(VK_EXT_line_rasterization)
	vk->vkCmdSetLineStippleEXT = (PFN_vkCmdSetLineStippleEXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetLineStippleEXT");
#endif // defined(VK_EXT_line_rasterization)
#if defined(VK_EXT_private_data)
	vk->vkDestroyPrivateDataSlotEXT = (PFN_vkDestroyPrivateDataSlotEXT)vk->vkGetDeviceProcAddr(device, "vkDestroyPrivateDataSlotEXT");
	vk->vkSetPrivateDataEXT = (PFN_vkSetPrivateDataEXT)vk->vkGetDeviceProcAddr(device, "vkSetPrivateDataEXT");
	vk->vkCreatePrivateDataSlotEXT = (PFN_vkCreatePrivateDataSlotEXT)vk->vkGetDeviceProcAddr(device, "vkCreatePrivateDataSlotEXT");
	vk->vkGetPrivateDataEXT = (PFN_vkGetPrivateDataEXT)vk->vkGetDeviceProcAddr(device, "vkGetPrivateDataEXT");
#endif // defined(VK_EXT_private_data)
#if defined(VK_EXT_sample_locations)
	vk->vkCmdSetSampleLocationsEXT = (PFN_vkCmdSetSampleLocationsEXT)vk->vkGetDeviceProcAddr(device, "vkCmdSetSampleLocationsEXT");
#endif // defined(VK_EXT_sample_locations)
#if defined(VK_EXT_transform_feedback)
	vk->vkCmdEndQueryIndexedEXT = (PFN_vkCmdEndQueryIndexedEXT)vk->vkGetDeviceProcAddr(device, "vkCmdEndQueryIndexedEXT");
	vk->vkCmdEndTransformFeedbackEXT = (PFN_vkCmdEndTransformFeedbackEXT)vk->vkGetDeviceProcAddr(device, "vkCmdEndTransformFeedbackEXT");
	vk->vkCmdBindTransformFeedbackBuffersEXT = (PFN_vkCmdBindTransformFeedbackBuffersEXT)vk->vkGetDeviceProcAddr(device, "vkCmdBindTransformFeedbackBuffersEXT");
	vk->vkCmdBeginTransformFeedbackEXT = (PFN_vkCmdBeginTransformFeedbackEXT)vk->vkGetDeviceProcAddr(device, "vkCmdBeginTransformFeedbackEXT");
	vk->vkCmdBeginQueryIndexedEXT = (PFN_vkCmdBeginQueryIndexedEXT)vk->vkGetDeviceProcAddr(device, "vkCmdBeginQueryIndexedEXT");
	vk->vkCmdDrawIndirectByteCountEXT = (PFN_vkCmdDrawIndirectByteCountEXT)vk->vkGetDeviceProcAddr(device, "vkCmdDrawIndirectByteCountEXT");
#endif // defined(VK_EXT_transform_feedback)
#if defined(VK_EXT_validation_cache)
	vk->vkMergeValidationCachesEXT = (PFN_vkMergeValidationCachesEXT)vk->vkGetDeviceProcAddr(device, "vkMergeValidationCachesEXT");
	vk->vkDestroyValidationCacheEXT = (PFN_vkDestroyValidationCacheEXT)vk->vkGetDeviceProcAddr(device, "vkDestroyValidationCacheEXT");
	vk->vkCreateValidationCacheEXT = (PFN_vkCreateValidationCacheEXT)vk->vkGetDeviceProcAddr(device, "vkCreateValidationCacheEXT");
	vk->vkGetValidationCacheDataEXT = (PFN_vkGetValidationCacheDataEXT)vk->vkGetDeviceProcAddr(device, "vkGetValidationCacheDataEXT");
#endif // defined(VK_EXT_validation_cache)
#if defined(VK_GOOGLE_display_timing)
	vk->vkGetRefreshCycleDurationGOOGLE = (PFN_vkGetRefreshCycleDurationGOOGLE)vk->vkGetDeviceProcAddr(device, "vkGetRefreshCycleDurationGOOGLE");
	vk->vkGetPastPresentationTimingGOOGLE = (PFN_vkGetPastPresentationTimingGOOGLE)vk->vkGetDeviceProcAddr(device, "vkGetPastPresentationTimingGOOGLE");
#endif // defined(VK_GOOGLE_display_timing)
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
#if defined(VK_KHR_bind_memory2)
	vk->vkBindBufferMemory2KHR = (PFN_vkBindBufferMemory2KHR)vk->vkGetDeviceProcAddr(device, "vkBindBufferMemory2KHR");
	vk->vkBindImageMemory2KHR = (PFN_vkBindImageMemory2KHR)vk->vkGetDeviceProcAddr(device, "vkBindImageMemory2KHR");
#endif // defined(VK_KHR_bind_memory2)
#if defined(VK_KHR_buffer_device_address)
	vk->vkGetDeviceMemoryOpaqueCaptureAddressKHR = (PFN_vkGetDeviceMemoryOpaqueCaptureAddressKHR)vk->vkGetDeviceProcAddr(device, "vkGetDeviceMemoryOpaqueCaptureAddressKHR");
	vk->vkGetBufferDeviceAddressKHR = (PFN_vkGetBufferDeviceAddressKHR)vk->vkGetDeviceProcAddr(device, "vkGetBufferDeviceAddressKHR");
	vk->vkGetBufferOpaqueCaptureAddressKHR = (PFN_vkGetBufferOpaqueCaptureAddressKHR)vk->vkGetDeviceProcAddr(device, "vkGetBufferOpaqueCaptureAddressKHR");
#endif // defined(VK_KHR_buffer_device_address)
#if defined(VK_KHR_copy_commands2)
	vk->vkCmdCopyImageToBuffer2KHR = (PFN_vkCmdCopyImageToBuffer2KHR)vk->vkGetDeviceProcAddr(device, "vkCmdCopyImageToBuffer2KHR");
	vk->vkCmdCopyBuffer2KHR = (PFN_vkCmdCopyBuffer2KHR)vk->vkGetDeviceProcAddr(device, "vkCmdCopyBuffer2KHR");
	vk->vkCmdCopyImage2KHR = (PFN_vkCmdCopyImage2KHR)vk->vkGetDeviceProcAddr(device, "vkCmdCopyImage2KHR");
	vk->vkCmdCopyBufferToImage2KHR = (PFN_vkCmdCopyBufferToImage2KHR)vk->vkGetDeviceProcAddr(device, "vkCmdCopyBufferToImage2KHR");
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
#if defined(VK_KHR_descriptor_update_template) && defined(VK_KHR_push_descriptor) || defined(VK_KHR_push_descriptor) && defined(VK_VERSION_1_1)
	vk->vkCmdPushDescriptorSetWithTemplateKHR = (PFN_vkCmdPushDescriptorSetWithTemplateKHR)vk->vkGetDeviceProcAddr(device, "vkCmdPushDescriptorSetWithTemplateKHR");
#endif // defined(VK_KHR_descriptor_update_template) && defined(VK_KHR_push_descriptor) || defined(VK_KHR_push_descriptor) && defined(VK_VERSION_1_1)
#if defined(VK_KHR_device_group)
	vk->vkGetDeviceGroupPeerMemoryFeaturesKHR = (PFN_vkGetDeviceGroupPeerMemoryFeaturesKHR)vk->vkGetDeviceProcAddr(device, "vkGetDeviceGroupPeerMemoryFeaturesKHR");
	vk->vkCmdSetDeviceMaskKHR = (PFN_vkCmdSetDeviceMaskKHR)vk->vkGetDeviceProcAddr(device, "vkCmdSetDeviceMaskKHR");
	vk->vkCmdDispatchBaseKHR = (PFN_vkCmdDispatchBaseKHR)vk->vkGetDeviceProcAddr(device, "vkCmdDispatchBaseKHR");
#endif // defined(VK_KHR_device_group)
#if defined(VK_KHR_device_group) && defined(VK_KHR_surface) || defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1)
	vk->vkGetDeviceGroupPresentCapabilitiesKHR = (PFN_vkGetDeviceGroupPresentCapabilitiesKHR)vk->vkGetDeviceProcAddr(device, "vkGetDeviceGroupPresentCapabilitiesKHR");
	vk->vkGetDeviceGroupSurfacePresentModesKHR = (PFN_vkGetDeviceGroupSurfacePresentModesKHR)vk->vkGetDeviceProcAddr(device, "vkGetDeviceGroupSurfacePresentModesKHR");
#endif // defined(VK_KHR_device_group) && defined(VK_KHR_surface) || defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1)
#if defined(VK_KHR_device_group) && defined(VK_KHR_swapchain) || defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1)
	vk->vkAcquireNextImage2KHR = (PFN_vkAcquireNextImage2KHR)vk->vkGetDeviceProcAddr(device, "vkAcquireNextImage2KHR");
#endif // defined(VK_KHR_device_group) && defined(VK_KHR_swapchain) || defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1)
#if defined(VK_KHR_display_swapchain)
	vk->vkCreateSharedSwapchainsKHR = (PFN_vkCreateSharedSwapchainsKHR)vk->vkGetDeviceProcAddr(device, "vkCreateSharedSwapchainsKHR");
#endif // defined(VK_KHR_display_swapchain)
#if defined(VK_KHR_draw_indirect_count)
	vk->vkCmdDrawIndirectCountKHR = (PFN_vkCmdDrawIndirectCountKHR)vk->vkGetDeviceProcAddr(device, "vkCmdDrawIndirectCountKHR");
	vk->vkCmdDrawIndexedIndirectCountKHR = (PFN_vkCmdDrawIndexedIndirectCountKHR)vk->vkGetDeviceProcAddr(device, "vkCmdDrawIndexedIndirectCountKHR");
#endif // defined(VK_KHR_draw_indirect_count)
#if defined(VK_KHR_external_fence_fd)
	vk->vkImportFenceFdKHR = (PFN_vkImportFenceFdKHR)vk->vkGetDeviceProcAddr(device, "vkImportFenceFdKHR");
	vk->vkGetFenceFdKHR = (PFN_vkGetFenceFdKHR)vk->vkGetDeviceProcAddr(device, "vkGetFenceFdKHR");
#endif // defined(VK_KHR_external_fence_fd)
#if defined(VK_KHR_external_fence_win32)
	vk->vkGetFenceWin32HandleKHR = (PFN_vkGetFenceWin32HandleKHR)vk->vkGetDeviceProcAddr(device, "vkGetFenceWin32HandleKHR");
	vk->vkImportFenceWin32HandleKHR = (PFN_vkImportFenceWin32HandleKHR)vk->vkGetDeviceProcAddr(device, "vkImportFenceWin32HandleKHR");
#endif // defined(VK_KHR_external_fence_win32)
#if defined(VK_KHR_external_memory_fd)
	vk->vkGetMemoryFdKHR = (PFN_vkGetMemoryFdKHR)vk->vkGetDeviceProcAddr(device, "vkGetMemoryFdKHR");
	vk->vkGetMemoryFdPropertiesKHR = (PFN_vkGetMemoryFdPropertiesKHR)vk->vkGetDeviceProcAddr(device, "vkGetMemoryFdPropertiesKHR");
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
#if defined(VK_KHR_get_memory_requirements2)
	vk->vkGetImageMemoryRequirements2KHR = (PFN_vkGetImageMemoryRequirements2KHR)vk->vkGetDeviceProcAddr(device, "vkGetImageMemoryRequirements2KHR");
	vk->vkGetBufferMemoryRequirements2KHR = (PFN_vkGetBufferMemoryRequirements2KHR)vk->vkGetDeviceProcAddr(device, "vkGetBufferMemoryRequirements2KHR");
	vk->vkGetImageSparseMemoryRequirements2KHR = (PFN_vkGetImageSparseMemoryRequirements2KHR)vk->vkGetDeviceProcAddr(device, "vkGetImageSparseMemoryRequirements2KHR");
#endif // defined(VK_KHR_get_memory_requirements2)
#if defined(VK_KHR_maintenance1)
	vk->vkTrimCommandPoolKHR = (PFN_vkTrimCommandPoolKHR)vk->vkGetDeviceProcAddr(device, "vkTrimCommandPoolKHR");
#endif // defined(VK_KHR_maintenance1)
#if defined(VK_KHR_maintenance3)
	vk->vkGetDescriptorSetLayoutSupportKHR = (PFN_vkGetDescriptorSetLayoutSupportKHR)vk->vkGetDeviceProcAddr(device, "vkGetDescriptorSetLayoutSupportKHR");
#endif // defined(VK_KHR_maintenance3)
#if defined(VK_KHR_performance_query)
	vk->vkAcquireProfilingLockKHR = (PFN_vkAcquireProfilingLockKHR)vk->vkGetDeviceProcAddr(device, "vkAcquireProfilingLockKHR");
	vk->vkReleaseProfilingLockKHR = (PFN_vkReleaseProfilingLockKHR)vk->vkGetDeviceProcAddr(device, "vkReleaseProfilingLockKHR");
#endif // defined(VK_KHR_performance_query)
#if defined(VK_KHR_pipeline_executable_properties)
	vk->vkGetPipelineExecutableInternalRepresentationsKHR = (PFN_vkGetPipelineExecutableInternalRepresentationsKHR)vk->vkGetDeviceProcAddr(device, "vkGetPipelineExecutableInternalRepresentationsKHR");
	vk->vkGetPipelineExecutablePropertiesKHR = (PFN_vkGetPipelineExecutablePropertiesKHR)vk->vkGetDeviceProcAddr(device, "vkGetPipelineExecutablePropertiesKHR");
	vk->vkGetPipelineExecutableStatisticsKHR = (PFN_vkGetPipelineExecutableStatisticsKHR)vk->vkGetDeviceProcAddr(device, "vkGetPipelineExecutableStatisticsKHR");
#endif // defined(VK_KHR_pipeline_executable_properties)
#if defined(VK_KHR_push_descriptor)
	vk->vkCmdPushDescriptorSetKHR = (PFN_vkCmdPushDescriptorSetKHR)vk->vkGetDeviceProcAddr(device, "vkCmdPushDescriptorSetKHR");
#endif // defined(VK_KHR_push_descriptor)
#if defined(VK_KHR_ray_tracing)
	vk->vkCreateRayTracingPipelinesKHR = (PFN_vkCreateRayTracingPipelinesKHR)vk->vkGetDeviceProcAddr(device, "vkCreateRayTracingPipelinesKHR");
	vk->vkGetRayTracingShaderGroupHandlesKHR = (PFN_vkGetRayTracingShaderGroupHandlesKHR)vk->vkGetDeviceProcAddr(device, "vkGetRayTracingShaderGroupHandlesKHR");
	vk->vkGetRayTracingCaptureReplayShaderGroupHandlesKHR = (PFN_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR)vk->vkGetDeviceProcAddr(device, "vkGetRayTracingCaptureReplayShaderGroupHandlesKHR");
	vk->vkCreateAccelerationStructureKHR = (PFN_vkCreateAccelerationStructureKHR)vk->vkGetDeviceProcAddr(device, "vkCreateAccelerationStructureKHR");
	vk->vkDestroyAccelerationStructureKHR = (PFN_vkDestroyAccelerationStructureKHR)vk->vkGetDeviceProcAddr(device, "vkDestroyAccelerationStructureKHR");
	vk->vkGetAccelerationStructureMemoryRequirementsKHR = (PFN_vkGetAccelerationStructureMemoryRequirementsKHR)vk->vkGetDeviceProcAddr(device, "vkGetAccelerationStructureMemoryRequirementsKHR");
	vk->vkBindAccelerationStructureMemoryKHR = (PFN_vkBindAccelerationStructureMemoryKHR)vk->vkGetDeviceProcAddr(device, "vkBindAccelerationStructureMemoryKHR");
	vk->vkCmdBuildAccelerationStructureKHR = (PFN_vkCmdBuildAccelerationStructureKHR)vk->vkGetDeviceProcAddr(device, "vkCmdBuildAccelerationStructureKHR");
	vk->vkCmdBuildAccelerationStructureIndirectKHR = (PFN_vkCmdBuildAccelerationStructureIndirectKHR)vk->vkGetDeviceProcAddr(device, "vkCmdBuildAccelerationStructureIndirectKHR");
	vk->vkBuildAccelerationStructureKHR = (PFN_vkBuildAccelerationStructureKHR)vk->vkGetDeviceProcAddr(device, "vkBuildAccelerationStructureKHR");
	vk->vkCopyAccelerationStructureKHR = (PFN_vkCopyAccelerationStructureKHR)vk->vkGetDeviceProcAddr(device, "vkCopyAccelerationStructureKHR");
	vk->vkCopyAccelerationStructureToMemoryKHR = (PFN_vkCopyAccelerationStructureToMemoryKHR)vk->vkGetDeviceProcAddr(device, "vkCopyAccelerationStructureToMemoryKHR");
	vk->vkCopyMemoryToAccelerationStructureKHR = (PFN_vkCopyMemoryToAccelerationStructureKHR)vk->vkGetDeviceProcAddr(device, "vkCopyMemoryToAccelerationStructureKHR");
	vk->vkCmdTraceRaysKHR = (PFN_vkCmdTraceRaysKHR)vk->vkGetDeviceProcAddr(device, "vkCmdTraceRaysKHR");
	vk->vkWriteAccelerationStructuresPropertiesKHR = (PFN_vkWriteAccelerationStructuresPropertiesKHR)vk->vkGetDeviceProcAddr(device, "vkWriteAccelerationStructuresPropertiesKHR");
	vk->vkCmdCopyAccelerationStructureKHR = (PFN_vkCmdCopyAccelerationStructureKHR)vk->vkGetDeviceProcAddr(device, "vkCmdCopyAccelerationStructureKHR");
	vk->vkCmdCopyAccelerationStructureToMemoryKHR = (PFN_vkCmdCopyAccelerationStructureToMemoryKHR)vk->vkGetDeviceProcAddr(device, "vkCmdCopyAccelerationStructureToMemoryKHR");
	vk->vkCmdCopyMemoryToAccelerationStructureKHR = (PFN_vkCmdCopyMemoryToAccelerationStructureKHR)vk->vkGetDeviceProcAddr(device, "vkCmdCopyMemoryToAccelerationStructureKHR");
	vk->vkGetAccelerationStructureDeviceAddressKHR = (PFN_vkGetAccelerationStructureDeviceAddressKHR)vk->vkGetDeviceProcAddr(device, "vkGetAccelerationStructureDeviceAddressKHR");
	vk->vkCmdWriteAccelerationStructuresPropertiesKHR = (PFN_vkCmdWriteAccelerationStructuresPropertiesKHR)vk->vkGetDeviceProcAddr(device, "vkCmdWriteAccelerationStructuresPropertiesKHR");
	vk->vkCmdTraceRaysIndirectKHR = (PFN_vkCmdTraceRaysIndirectKHR)vk->vkGetDeviceProcAddr(device, "vkCmdTraceRaysIndirectKHR");
	vk->vkGetDeviceAccelerationStructureCompatibilityKHR = (PFN_vkGetDeviceAccelerationStructureCompatibilityKHR)vk->vkGetDeviceProcAddr(device, "vkGetDeviceAccelerationStructureCompatibilityKHR");
#endif // defined(VK_KHR_ray_tracing)
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
#if defined(VK_KHR_timeline_semaphore)
	vk->vkWaitSemaphoresKHR = (PFN_vkWaitSemaphoresKHR)vk->vkGetDeviceProcAddr(device, "vkWaitSemaphoresKHR");
	vk->vkGetSemaphoreCounterValueKHR = (PFN_vkGetSemaphoreCounterValueKHR)vk->vkGetDeviceProcAddr(device, "vkGetSemaphoreCounterValueKHR");
	vk->vkSignalSemaphoreKHR = (PFN_vkSignalSemaphoreKHR)vk->vkGetDeviceProcAddr(device, "vkSignalSemaphoreKHR");
#endif // defined(VK_KHR_timeline_semaphore)
#if defined(VK_NVX_image_view_handle)
	vk->vkGetImageViewHandleNVX = (PFN_vkGetImageViewHandleNVX)vk->vkGetDeviceProcAddr(device, "vkGetImageViewHandleNVX");
	vk->vkGetImageViewAddressNVX = (PFN_vkGetImageViewAddressNVX)vk->vkGetDeviceProcAddr(device, "vkGetImageViewAddressNVX");
#endif // defined(VK_NVX_image_view_handle)
#if defined(VK_NV_clip_space_w_scaling)
	vk->vkCmdSetViewportWScalingNV = (PFN_vkCmdSetViewportWScalingNV)vk->vkGetDeviceProcAddr(device, "vkCmdSetViewportWScalingNV");
#endif // defined(VK_NV_clip_space_w_scaling)
#if defined(VK_NV_device_diagnostic_checkpoints)
	vk->vkGetQueueCheckpointDataNV = (PFN_vkGetQueueCheckpointDataNV)vk->vkGetDeviceProcAddr(device, "vkGetQueueCheckpointDataNV");
	vk->vkCmdSetCheckpointNV = (PFN_vkCmdSetCheckpointNV)vk->vkGetDeviceProcAddr(device, "vkCmdSetCheckpointNV");
#endif // defined(VK_NV_device_diagnostic_checkpoints)
#if defined(VK_NV_device_generated_commands)
	vk->vkGetGeneratedCommandsMemoryRequirementsNV = (PFN_vkGetGeneratedCommandsMemoryRequirementsNV)vk->vkGetDeviceProcAddr(device, "vkGetGeneratedCommandsMemoryRequirementsNV");
	vk->vkCreateIndirectCommandsLayoutNV = (PFN_vkCreateIndirectCommandsLayoutNV)vk->vkGetDeviceProcAddr(device, "vkCreateIndirectCommandsLayoutNV");
	vk->vkCmdPreprocessGeneratedCommandsNV = (PFN_vkCmdPreprocessGeneratedCommandsNV)vk->vkGetDeviceProcAddr(device, "vkCmdPreprocessGeneratedCommandsNV");
	vk->vkCmdExecuteGeneratedCommandsNV = (PFN_vkCmdExecuteGeneratedCommandsNV)vk->vkGetDeviceProcAddr(device, "vkCmdExecuteGeneratedCommandsNV");
	vk->vkCmdBindPipelineShaderGroupNV = (PFN_vkCmdBindPipelineShaderGroupNV)vk->vkGetDeviceProcAddr(device, "vkCmdBindPipelineShaderGroupNV");
	vk->vkDestroyIndirectCommandsLayoutNV = (PFN_vkDestroyIndirectCommandsLayoutNV)vk->vkGetDeviceProcAddr(device, "vkDestroyIndirectCommandsLayoutNV");
#endif // defined(VK_NV_device_generated_commands)
#if defined(VK_NV_external_memory_win32)
	vk->vkGetMemoryWin32HandleNV = (PFN_vkGetMemoryWin32HandleNV)vk->vkGetDeviceProcAddr(device, "vkGetMemoryWin32HandleNV");
#endif // defined(VK_NV_external_memory_win32)
#if defined(VK_NV_mesh_shader)
	vk->vkCmdDrawMeshTasksNV = (PFN_vkCmdDrawMeshTasksNV)vk->vkGetDeviceProcAddr(device, "vkCmdDrawMeshTasksNV");
	vk->vkCmdDrawMeshTasksIndirectNV = (PFN_vkCmdDrawMeshTasksIndirectNV)vk->vkGetDeviceProcAddr(device, "vkCmdDrawMeshTasksIndirectNV");
	vk->vkCmdDrawMeshTasksIndirectCountNV = (PFN_vkCmdDrawMeshTasksIndirectCountNV)vk->vkGetDeviceProcAddr(device, "vkCmdDrawMeshTasksIndirectCountNV");
#endif // defined(VK_NV_mesh_shader)
#if defined(VK_NV_ray_tracing)
	vk->vkDestroyAccelerationStructureNV = (PFN_vkDestroyAccelerationStructureNV)vk->vkGetDeviceProcAddr(device, "vkDestroyAccelerationStructureNV");
	vk->vkCmdBuildAccelerationStructureNV = (PFN_vkCmdBuildAccelerationStructureNV)vk->vkGetDeviceProcAddr(device, "vkCmdBuildAccelerationStructureNV");
	vk->vkCreateAccelerationStructureNV = (PFN_vkCreateAccelerationStructureNV)vk->vkGetDeviceProcAddr(device, "vkCreateAccelerationStructureNV");
	vk->vkGetAccelerationStructureMemoryRequirementsNV = (PFN_vkGetAccelerationStructureMemoryRequirementsNV)vk->vkGetDeviceProcAddr(device, "vkGetAccelerationStructureMemoryRequirementsNV");
	vk->vkBindAccelerationStructureMemoryNV = (PFN_vkBindAccelerationStructureMemoryNV)vk->vkGetDeviceProcAddr(device, "vkBindAccelerationStructureMemoryNV");
	vk->vkCmdCopyAccelerationStructureNV = (PFN_vkCmdCopyAccelerationStructureNV)vk->vkGetDeviceProcAddr(device, "vkCmdCopyAccelerationStructureNV");
	vk->vkCmdTraceRaysNV = (PFN_vkCmdTraceRaysNV)vk->vkGetDeviceProcAddr(device, "vkCmdTraceRaysNV");
	vk->vkCreateRayTracingPipelinesNV = (PFN_vkCreateRayTracingPipelinesNV)vk->vkGetDeviceProcAddr(device, "vkCreateRayTracingPipelinesNV");
	vk->vkGetRayTracingShaderGroupHandlesNV = (PFN_vkGetRayTracingShaderGroupHandlesNV)vk->vkGetDeviceProcAddr(device, "vkGetRayTracingShaderGroupHandlesNV");
	vk->vkGetAccelerationStructureHandleNV = (PFN_vkGetAccelerationStructureHandleNV)vk->vkGetDeviceProcAddr(device, "vkGetAccelerationStructureHandleNV");
	vk->vkCmdWriteAccelerationStructuresPropertiesNV = (PFN_vkCmdWriteAccelerationStructuresPropertiesNV)vk->vkGetDeviceProcAddr(device, "vkCmdWriteAccelerationStructuresPropertiesNV");
	vk->vkCompileDeferredNV = (PFN_vkCompileDeferredNV)vk->vkGetDeviceProcAddr(device, "vkCompileDeferredNV");
#endif // defined(VK_NV_ray_tracing)
#if defined(VK_NV_scissor_exclusive)
	vk->vkCmdSetExclusiveScissorNV = (PFN_vkCmdSetExclusiveScissorNV)vk->vkGetDeviceProcAddr(device, "vkCmdSetExclusiveScissorNV");
#endif // defined(VK_NV_scissor_exclusive)
#if defined(VK_NV_shading_rate_image)
	vk->vkCmdSetCoarseSampleOrderNV = (PFN_vkCmdSetCoarseSampleOrderNV)vk->vkGetDeviceProcAddr(device, "vkCmdSetCoarseSampleOrderNV");
	vk->vkCmdSetViewportShadingRatePaletteNV = (PFN_vkCmdSetViewportShadingRatePaletteNV)vk->vkGetDeviceProcAddr(device, "vkCmdSetViewportShadingRatePaletteNV");
	vk->vkCmdBindShadingRateImageNV = (PFN_vkCmdBindShadingRateImageNV)vk->vkGetDeviceProcAddr(device, "vkCmdBindShadingRateImageNV");
#endif // defined(VK_NV_shading_rate_image)
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

// Originally based on VK_KHR_protected_memory (extension 146), which was never published; thus the mystifying large value= numbers below. These are not aliased since they weren't actually promoted from an extension.

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
#if defined(VK_AMD_buffer_marker)

static PFN_vkCmdWriteBufferMarkerAMD pfn_vkCmdWriteBufferMarkerAMD;
VKAPI_ATTR void vkCmdWriteBufferMarkerAMD(VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkBuffer dstBuffer, VkDeviceSize dstOffset, uint32_t marker)
{
	assert(pfn_vkCmdWriteBufferMarkerAMD);
	pfn_vkCmdWriteBufferMarkerAMD(commandBuffer, pipelineStage, dstBuffer, dstOffset, marker);
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
#if defined(VK_ANDROID_native_buffer)

static PFN_vkGetSwapchainGrallocUsage2ANDROID pfn_vkGetSwapchainGrallocUsage2ANDROID;
VKAPI_ATTR VkResult vkGetSwapchainGrallocUsage2ANDROID(VkDevice device, VkFormat format, VkImageUsageFlags imageUsage, VkSwapchainImageUsageFlagsANDROID swapchainImageUsage, uint64_t * grallocConsumerUsage, uint64_t * grallocProducerUsage)
{
	assert(pfn_vkGetSwapchainGrallocUsage2ANDROID);
	return pfn_vkGetSwapchainGrallocUsage2ANDROID(device, format, imageUsage, swapchainImageUsage, grallocConsumerUsage, grallocProducerUsage);
}

static PFN_vkGetSwapchainGrallocUsageANDROID pfn_vkGetSwapchainGrallocUsageANDROID;
VKAPI_ATTR VkResult vkGetSwapchainGrallocUsageANDROID(VkDevice device, VkFormat format, VkImageUsageFlags imageUsage, int * grallocUsage)
{
	assert(pfn_vkGetSwapchainGrallocUsageANDROID);
	return pfn_vkGetSwapchainGrallocUsageANDROID(device, format, imageUsage, grallocUsage);
}

static PFN_vkAcquireImageANDROID pfn_vkAcquireImageANDROID;
VKAPI_ATTR VkResult vkAcquireImageANDROID(VkDevice device, VkImage image, int nativeFenceFd, VkSemaphore semaphore, VkFence fence)
{
	assert(pfn_vkAcquireImageANDROID);
	return pfn_vkAcquireImageANDROID(device, image, nativeFenceFd, semaphore, fence);
}

static PFN_vkQueueSignalReleaseImageANDROID pfn_vkQueueSignalReleaseImageANDROID;
VKAPI_ATTR VkResult vkQueueSignalReleaseImageANDROID(VkQueue queue, uint32_t waitSemaphoreCount, const VkSemaphore * pWaitSemaphores, VkImage image, int * pNativeFenceFd)
{
	assert(pfn_vkQueueSignalReleaseImageANDROID);
	return pfn_vkQueueSignalReleaseImageANDROID(queue, waitSemaphoreCount, pWaitSemaphores, image, pNativeFenceFd);
}
#endif // defined(VK_ANDROID_native_buffer)
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
VKAPI_ATTR VkResult vkGetPhysicalDeviceCalibrateableTimeDomainsEXT(VkPhysicalDevice physicalDevice, uint32_t * pTimeDomainCount, VkTimeDomainEXT * pTimeDomains)
{
	assert(pfn_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT);
	return pfn_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT(physicalDevice, pTimeDomainCount, pTimeDomains);
}

static PFN_vkGetCalibratedTimestampsEXT pfn_vkGetCalibratedTimestampsEXT;
VKAPI_ATTR VkResult vkGetCalibratedTimestampsEXT(VkDevice device, uint32_t timestampCount, const VkCalibratedTimestampInfoEXT * pTimestampInfos, uint64_t * pTimestamps, uint64_t * pMaxDeviation)
{
	assert(pfn_vkGetCalibratedTimestampsEXT);
	return pfn_vkGetCalibratedTimestampsEXT(device, timestampCount, pTimestampInfos, pTimestamps, pMaxDeviation);
}
#endif // defined(VK_EXT_calibrated_timestamps)
#if defined(VK_EXT_conditional_rendering)

static PFN_vkCmdEndConditionalRenderingEXT pfn_vkCmdEndConditionalRenderingEXT;
VKAPI_ATTR void vkCmdEndConditionalRenderingEXT(VkCommandBuffer commandBuffer)
{
	assert(pfn_vkCmdEndConditionalRenderingEXT);
	pfn_vkCmdEndConditionalRenderingEXT(commandBuffer);
}

static PFN_vkCmdBeginConditionalRenderingEXT pfn_vkCmdBeginConditionalRenderingEXT;
VKAPI_ATTR void vkCmdBeginConditionalRenderingEXT(VkCommandBuffer commandBuffer, const VkConditionalRenderingBeginInfoEXT * pConditionalRenderingBegin)
{
	assert(pfn_vkCmdBeginConditionalRenderingEXT);
	pfn_vkCmdBeginConditionalRenderingEXT(commandBuffer, pConditionalRenderingBegin);
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

static PFN_vkSetDebugUtilsObjectTagEXT pfn_vkSetDebugUtilsObjectTagEXT;
VKAPI_ATTR VkResult vkSetDebugUtilsObjectTagEXT(VkDevice device, const VkDebugUtilsObjectTagInfoEXT * pTagInfo)
{
	assert(pfn_vkSetDebugUtilsObjectTagEXT);
	return pfn_vkSetDebugUtilsObjectTagEXT(device, pTagInfo);
}

static PFN_vkSubmitDebugUtilsMessageEXT pfn_vkSubmitDebugUtilsMessageEXT;
VKAPI_ATTR void vkSubmitDebugUtilsMessageEXT(VkInstance instance, VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity, VkDebugUtilsMessageTypeFlagsEXT messageTypes, const VkDebugUtilsMessengerCallbackDataEXT * pCallbackData)
{
	assert(pfn_vkSubmitDebugUtilsMessageEXT);
	pfn_vkSubmitDebugUtilsMessageEXT(instance, messageSeverity, messageTypes, pCallbackData);
}

static PFN_vkQueueInsertDebugUtilsLabelEXT pfn_vkQueueInsertDebugUtilsLabelEXT;
VKAPI_ATTR void vkQueueInsertDebugUtilsLabelEXT(VkQueue queue, const VkDebugUtilsLabelEXT * pLabelInfo)
{
	assert(pfn_vkQueueInsertDebugUtilsLabelEXT);
	pfn_vkQueueInsertDebugUtilsLabelEXT(queue, pLabelInfo);
}

static PFN_vkSetDebugUtilsObjectNameEXT pfn_vkSetDebugUtilsObjectNameEXT;
VKAPI_ATTR VkResult vkSetDebugUtilsObjectNameEXT(VkDevice device, const VkDebugUtilsObjectNameInfoEXT * pNameInfo)
{
	assert(pfn_vkSetDebugUtilsObjectNameEXT);
	return pfn_vkSetDebugUtilsObjectNameEXT(device, pNameInfo);
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
#endif // defined(VK_EXT_discard_rectangles)
#if defined(VK_EXT_display_control)

static PFN_vkGetSwapchainCounterEXT pfn_vkGetSwapchainCounterEXT;
VKAPI_ATTR VkResult vkGetSwapchainCounterEXT(VkDevice device, VkSwapchainKHR swapchain, VkSurfaceCounterFlagBitsEXT counter, uint64_t * pCounterValue)
{
	assert(pfn_vkGetSwapchainCounterEXT);
	return pfn_vkGetSwapchainCounterEXT(device, swapchain, counter, pCounterValue);
}

static PFN_vkDisplayPowerControlEXT pfn_vkDisplayPowerControlEXT;
VKAPI_ATTR VkResult vkDisplayPowerControlEXT(VkDevice device, VkDisplayKHR display, const VkDisplayPowerInfoEXT * pDisplayPowerInfo)
{
	assert(pfn_vkDisplayPowerControlEXT);
	return pfn_vkDisplayPowerControlEXT(device, display, pDisplayPowerInfo);
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
#if defined(VK_EXT_extended_dynamic_state)

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
#endif // defined(VK_EXT_extended_dynamic_state)
#if defined(VK_EXT_external_memory_host)

static PFN_vkGetMemoryHostPointerPropertiesEXT pfn_vkGetMemoryHostPointerPropertiesEXT;
VKAPI_ATTR VkResult vkGetMemoryHostPointerPropertiesEXT(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, const void * pHostPointer, VkMemoryHostPointerPropertiesEXT * pMemoryHostPointerProperties)
{
	assert(pfn_vkGetMemoryHostPointerPropertiesEXT);
	return pfn_vkGetMemoryHostPointerPropertiesEXT(device, handleType, pHostPointer, pMemoryHostPointerProperties);
}
#endif // defined(VK_EXT_external_memory_host)
#if defined(VK_EXT_full_screen_exclusive)

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
#if defined(VK_EXT_full_screen_exclusive) && defined(VK_KHR_device_group) || defined(VK_EXT_full_screen_exclusive) && defined(VK_VERSION_1_1)

static PFN_vkGetDeviceGroupSurfacePresentModes2EXT pfn_vkGetDeviceGroupSurfacePresentModes2EXT;
VKAPI_ATTR VkResult vkGetDeviceGroupSurfacePresentModes2EXT(VkDevice device, const VkPhysicalDeviceSurfaceInfo2KHR * pSurfaceInfo, VkDeviceGroupPresentModeFlagsKHR * pModes)
{
	assert(pfn_vkGetDeviceGroupSurfacePresentModes2EXT);
	return pfn_vkGetDeviceGroupSurfacePresentModes2EXT(device, pSurfaceInfo, pModes);
}
#endif // defined(VK_EXT_full_screen_exclusive) && defined(VK_KHR_device_group) || defined(VK_EXT_full_screen_exclusive) && defined(VK_VERSION_1_1)
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
#if defined(VK_EXT_metal_surface)

static PFN_vkCreateMetalSurfaceEXT pfn_vkCreateMetalSurfaceEXT;
VKAPI_ATTR VkResult vkCreateMetalSurfaceEXT(VkInstance instance, const VkMetalSurfaceCreateInfoEXT * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface)
{
	assert(pfn_vkCreateMetalSurfaceEXT);
	return pfn_vkCreateMetalSurfaceEXT(instance, pCreateInfo, pAllocator, pSurface);
}
#endif // defined(VK_EXT_metal_surface)
#if defined(VK_EXT_private_data)

static PFN_vkDestroyPrivateDataSlotEXT pfn_vkDestroyPrivateDataSlotEXT;
VKAPI_ATTR void vkDestroyPrivateDataSlotEXT(VkDevice device, VkPrivateDataSlotEXT privateDataSlot, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroyPrivateDataSlotEXT);
	pfn_vkDestroyPrivateDataSlotEXT(device, privateDataSlot, pAllocator);
}

static PFN_vkSetPrivateDataEXT pfn_vkSetPrivateDataEXT;
VKAPI_ATTR VkResult vkSetPrivateDataEXT(VkDevice device, VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlotEXT privateDataSlot, uint64_t data)
{
	assert(pfn_vkSetPrivateDataEXT);
	return pfn_vkSetPrivateDataEXT(device, objectType, objectHandle, privateDataSlot, data);
}

static PFN_vkCreatePrivateDataSlotEXT pfn_vkCreatePrivateDataSlotEXT;
VKAPI_ATTR VkResult vkCreatePrivateDataSlotEXT(VkDevice device, const VkPrivateDataSlotCreateInfoEXT * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkPrivateDataSlotEXT * pPrivateDataSlot)
{
	assert(pfn_vkCreatePrivateDataSlotEXT);
	return pfn_vkCreatePrivateDataSlotEXT(device, pCreateInfo, pAllocator, pPrivateDataSlot);
}

static PFN_vkGetPrivateDataEXT pfn_vkGetPrivateDataEXT;
VKAPI_ATTR void vkGetPrivateDataEXT(VkDevice device, VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlotEXT privateDataSlot, uint64_t * pData)
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
#if defined(VK_EXT_tooling_info)

static PFN_vkGetPhysicalDeviceToolPropertiesEXT pfn_vkGetPhysicalDeviceToolPropertiesEXT;
VKAPI_ATTR VkResult vkGetPhysicalDeviceToolPropertiesEXT(VkPhysicalDevice physicalDevice, uint32_t * pToolCount, VkPhysicalDeviceToolPropertiesEXT * pToolProperties)
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

static PFN_vkCmdDrawIndirectByteCountEXT pfn_vkCmdDrawIndirectByteCountEXT;
VKAPI_ATTR void vkCmdDrawIndirectByteCountEXT(VkCommandBuffer commandBuffer, uint32_t instanceCount, uint32_t firstInstance, VkBuffer counterBuffer, VkDeviceSize counterBufferOffset, uint32_t counterOffset, uint32_t vertexStride)
{
	assert(pfn_vkCmdDrawIndirectByteCountEXT);
	pfn_vkCmdDrawIndirectByteCountEXT(commandBuffer, instanceCount, firstInstance, counterBuffer, counterBufferOffset, counterOffset, vertexStride);
}
#endif // defined(VK_EXT_transform_feedback)
#if defined(VK_EXT_validation_cache)

static PFN_vkMergeValidationCachesEXT pfn_vkMergeValidationCachesEXT;
VKAPI_ATTR VkResult vkMergeValidationCachesEXT(VkDevice device, VkValidationCacheEXT dstCache, uint32_t srcCacheCount, const VkValidationCacheEXT * pSrcCaches)
{
	assert(pfn_vkMergeValidationCachesEXT);
	return pfn_vkMergeValidationCachesEXT(device, dstCache, srcCacheCount, pSrcCaches);
}

static PFN_vkDestroyValidationCacheEXT pfn_vkDestroyValidationCacheEXT;
VKAPI_ATTR void vkDestroyValidationCacheEXT(VkDevice device, VkValidationCacheEXT validationCache, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroyValidationCacheEXT);
	pfn_vkDestroyValidationCacheEXT(device, validationCache, pAllocator);
}

static PFN_vkCreateValidationCacheEXT pfn_vkCreateValidationCacheEXT;
VKAPI_ATTR VkResult vkCreateValidationCacheEXT(VkDevice device, const VkValidationCacheCreateInfoEXT * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkValidationCacheEXT * pValidationCache)
{
	assert(pfn_vkCreateValidationCacheEXT);
	return pfn_vkCreateValidationCacheEXT(device, pCreateInfo, pAllocator, pValidationCache);
}

static PFN_vkGetValidationCacheDataEXT pfn_vkGetValidationCacheDataEXT;
VKAPI_ATTR VkResult vkGetValidationCacheDataEXT(VkDevice device, VkValidationCacheEXT validationCache, size_t * pDataSize, void * pData)
{
	assert(pfn_vkGetValidationCacheDataEXT);
	return pfn_vkGetValidationCacheDataEXT(device, validationCache, pDataSize, pData);
}
#endif // defined(VK_EXT_validation_cache)
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
#if defined(VK_KHR_copy_commands2)

static PFN_vkCmdCopyImageToBuffer2KHR pfn_vkCmdCopyImageToBuffer2KHR;
VKAPI_ATTR void vkCmdCopyImageToBuffer2KHR(VkCommandBuffer commandBuffer, const VkCopyImageToBufferInfo2KHR * pCopyImageToBufferInfo)
{
	assert(pfn_vkCmdCopyImageToBuffer2KHR);
	pfn_vkCmdCopyImageToBuffer2KHR(commandBuffer, pCopyImageToBufferInfo);
}

static PFN_vkCmdCopyBuffer2KHR pfn_vkCmdCopyBuffer2KHR;
VKAPI_ATTR void vkCmdCopyBuffer2KHR(VkCommandBuffer commandBuffer, const VkCopyBufferInfo2KHR * pCopyBufferInfo)
{
	assert(pfn_vkCmdCopyBuffer2KHR);
	pfn_vkCmdCopyBuffer2KHR(commandBuffer, pCopyBufferInfo);
}

static PFN_vkCmdCopyImage2KHR pfn_vkCmdCopyImage2KHR;
VKAPI_ATTR void vkCmdCopyImage2KHR(VkCommandBuffer commandBuffer, const VkCopyImageInfo2KHR * pCopyImageInfo)
{
	assert(pfn_vkCmdCopyImage2KHR);
	pfn_vkCmdCopyImage2KHR(commandBuffer, pCopyImageInfo);
}

static PFN_vkCmdCopyBufferToImage2KHR pfn_vkCmdCopyBufferToImage2KHR;
VKAPI_ATTR void vkCmdCopyBufferToImage2KHR(VkCommandBuffer commandBuffer, const VkCopyBufferToImageInfo2KHR * pCopyBufferToImageInfo)
{
	assert(pfn_vkCmdCopyBufferToImage2KHR);
	pfn_vkCmdCopyBufferToImage2KHR(commandBuffer, pCopyBufferToImageInfo);
}

static PFN_vkCmdBlitImage2KHR pfn_vkCmdBlitImage2KHR;
VKAPI_ATTR void vkCmdBlitImage2KHR(VkCommandBuffer commandBuffer, const VkBlitImageInfo2KHR * pBlitImageInfo)
{
	assert(pfn_vkCmdBlitImage2KHR);
	pfn_vkCmdBlitImage2KHR(commandBuffer, pBlitImageInfo);
}

static PFN_vkCmdResolveImage2KHR pfn_vkCmdResolveImage2KHR;
VKAPI_ATTR void vkCmdResolveImage2KHR(VkCommandBuffer commandBuffer, const VkResolveImageInfo2KHR * pResolveImageInfo)
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
#if defined(VK_KHR_descriptor_update_template) && defined(VK_KHR_push_descriptor) || defined(VK_KHR_push_descriptor) && defined(VK_VERSION_1_1)

static PFN_vkCmdPushDescriptorSetWithTemplateKHR pfn_vkCmdPushDescriptorSetWithTemplateKHR;
VKAPI_ATTR void vkCmdPushDescriptorSetWithTemplateKHR(VkCommandBuffer commandBuffer, VkDescriptorUpdateTemplate descriptorUpdateTemplate, VkPipelineLayout layout, uint32_t set, const void * pData)
{
	assert(pfn_vkCmdPushDescriptorSetWithTemplateKHR);
	pfn_vkCmdPushDescriptorSetWithTemplateKHR(commandBuffer, descriptorUpdateTemplate, layout, set, pData);
}
#endif // defined(VK_KHR_descriptor_update_template) && defined(VK_KHR_push_descriptor) || defined(VK_KHR_push_descriptor) && defined(VK_VERSION_1_1)
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
#if defined(VK_KHR_device_group) && defined(VK_KHR_surface) || defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1)

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
#endif // defined(VK_KHR_device_group) && defined(VK_KHR_surface) || defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1)
#if defined(VK_KHR_device_group) && defined(VK_KHR_swapchain) || defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1)

static PFN_vkAcquireNextImage2KHR pfn_vkAcquireNextImage2KHR;
VKAPI_ATTR VkResult vkAcquireNextImage2KHR(VkDevice device, const VkAcquireNextImageInfoKHR * pAcquireInfo, uint32_t * pImageIndex)
{
	assert(pfn_vkAcquireNextImage2KHR);
	return pfn_vkAcquireNextImage2KHR(device, pAcquireInfo, pImageIndex);
}
#endif // defined(VK_KHR_device_group) && defined(VK_KHR_swapchain) || defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1)
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
VKAPI_ATTR VkResult vkCreateSharedSwapchainsKHR(VkDevice device, uint32_t swapchainCount, const VkSwapchainCreateInfoKHR * pCreateInfos, const VkAllocationCallbacks * pAllocator, VkSwapchainKHR * pSwapchains)
{
	assert(pfn_vkCreateSharedSwapchainsKHR);
	return pfn_vkCreateSharedSwapchainsKHR(device, swapchainCount, pCreateInfos, pAllocator, pSwapchains);
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

static PFN_vkGetMemoryFdKHR pfn_vkGetMemoryFdKHR;
VKAPI_ATTR VkResult vkGetMemoryFdKHR(VkDevice device, const VkMemoryGetFdInfoKHR * pGetFdInfo, int * pFd)
{
	assert(pfn_vkGetMemoryFdKHR);
	return pfn_vkGetMemoryFdKHR(device, pGetFdInfo, pFd);
}

static PFN_vkGetMemoryFdPropertiesKHR pfn_vkGetMemoryFdPropertiesKHR;
VKAPI_ATTR VkResult vkGetMemoryFdPropertiesKHR(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, int fd, VkMemoryFdPropertiesKHR * pMemoryFdProperties)
{
	assert(pfn_vkGetMemoryFdPropertiesKHR);
	return pfn_vkGetMemoryFdPropertiesKHR(device, handleType, fd, pMemoryFdProperties);
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

static PFN_vkGetPhysicalDeviceFormatProperties2KHR pfn_vkGetPhysicalDeviceFormatProperties2KHR;
VKAPI_ATTR void vkGetPhysicalDeviceFormatProperties2KHR(VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties2 * pFormatProperties)
{
	assert(pfn_vkGetPhysicalDeviceFormatProperties2KHR);
	pfn_vkGetPhysicalDeviceFormatProperties2KHR(physicalDevice, format, pFormatProperties);
}

static PFN_vkGetPhysicalDeviceSparseImageFormatProperties2KHR pfn_vkGetPhysicalDeviceSparseImageFormatProperties2KHR;
VKAPI_ATTR void vkGetPhysicalDeviceSparseImageFormatProperties2KHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSparseImageFormatInfo2 * pFormatInfo, uint32_t * pPropertyCount, VkSparseImageFormatProperties2 * pProperties)
{
	assert(pfn_vkGetPhysicalDeviceSparseImageFormatProperties2KHR);
	pfn_vkGetPhysicalDeviceSparseImageFormatProperties2KHR(physicalDevice, pFormatInfo, pPropertyCount, pProperties);
}

static PFN_vkGetPhysicalDeviceProperties2KHR pfn_vkGetPhysicalDeviceProperties2KHR;
VKAPI_ATTR void vkGetPhysicalDeviceProperties2KHR(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties2 * pProperties)
{
	assert(pfn_vkGetPhysicalDeviceProperties2KHR);
	pfn_vkGetPhysicalDeviceProperties2KHR(physicalDevice, pProperties);
}

static PFN_vkGetPhysicalDeviceMemoryProperties2KHR pfn_vkGetPhysicalDeviceMemoryProperties2KHR;
VKAPI_ATTR void vkGetPhysicalDeviceMemoryProperties2KHR(VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties2 * pMemoryProperties)
{
	assert(pfn_vkGetPhysicalDeviceMemoryProperties2KHR);
	pfn_vkGetPhysicalDeviceMemoryProperties2KHR(physicalDevice, pMemoryProperties);
}

static PFN_vkGetPhysicalDeviceQueueFamilyProperties2KHR pfn_vkGetPhysicalDeviceQueueFamilyProperties2KHR;
VKAPI_ATTR void vkGetPhysicalDeviceQueueFamilyProperties2KHR(VkPhysicalDevice physicalDevice, uint32_t * pQueueFamilyPropertyCount, VkQueueFamilyProperties2 * pQueueFamilyProperties)
{
	assert(pfn_vkGetPhysicalDeviceQueueFamilyProperties2KHR);
	pfn_vkGetPhysicalDeviceQueueFamilyProperties2KHR(physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties);
}

static PFN_vkGetPhysicalDeviceImageFormatProperties2KHR pfn_vkGetPhysicalDeviceImageFormatProperties2KHR;
VKAPI_ATTR VkResult vkGetPhysicalDeviceImageFormatProperties2KHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceImageFormatInfo2 * pImageFormatInfo, VkImageFormatProperties2 * pImageFormatProperties)
{
	assert(pfn_vkGetPhysicalDeviceImageFormatProperties2KHR);
	return pfn_vkGetPhysicalDeviceImageFormatProperties2KHR(physicalDevice, pImageFormatInfo, pImageFormatProperties);
}

static PFN_vkGetPhysicalDeviceFeatures2KHR pfn_vkGetPhysicalDeviceFeatures2KHR;
VKAPI_ATTR void vkGetPhysicalDeviceFeatures2KHR(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures2 * pFeatures)
{
	assert(pfn_vkGetPhysicalDeviceFeatures2KHR);
	pfn_vkGetPhysicalDeviceFeatures2KHR(physicalDevice, pFeatures);
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
#if defined(VK_KHR_push_descriptor)

static PFN_vkCmdPushDescriptorSetKHR pfn_vkCmdPushDescriptorSetKHR;
VKAPI_ATTR void vkCmdPushDescriptorSetKHR(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t set, uint32_t descriptorWriteCount, const VkWriteDescriptorSet * pDescriptorWrites)
{
	assert(pfn_vkCmdPushDescriptorSetKHR);
	pfn_vkCmdPushDescriptorSetKHR(commandBuffer, pipelineBindPoint, layout, set, descriptorWriteCount, pDescriptorWrites);
}
#endif // defined(VK_KHR_push_descriptor)
#if defined(VK_KHR_ray_tracing)

static PFN_vkCreateRayTracingPipelinesKHR pfn_vkCreateRayTracingPipelinesKHR;
VKAPI_ATTR VkResult vkCreateRayTracingPipelinesKHR(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkRayTracingPipelineCreateInfoKHR * pCreateInfos, const VkAllocationCallbacks * pAllocator, VkPipeline * pPipelines)
{
	assert(pfn_vkCreateRayTracingPipelinesKHR);
	return pfn_vkCreateRayTracingPipelinesKHR(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
}

static PFN_vkGetRayTracingShaderGroupHandlesKHR pfn_vkGetRayTracingShaderGroupHandlesKHR;
VKAPI_ATTR VkResult vkGetRayTracingShaderGroupHandlesKHR(VkDevice device, VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount, size_t dataSize, void * pData)
{
	assert(pfn_vkGetRayTracingShaderGroupHandlesKHR);
	return pfn_vkGetRayTracingShaderGroupHandlesKHR(device, pipeline, firstGroup, groupCount, dataSize, pData);
}

static PFN_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR pfn_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR;
VKAPI_ATTR VkResult vkGetRayTracingCaptureReplayShaderGroupHandlesKHR(VkDevice device, VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount, size_t dataSize, void * pData)
{
	assert(pfn_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR);
	return pfn_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR(device, pipeline, firstGroup, groupCount, dataSize, pData);
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

static PFN_vkGetAccelerationStructureMemoryRequirementsKHR pfn_vkGetAccelerationStructureMemoryRequirementsKHR;
VKAPI_ATTR void vkGetAccelerationStructureMemoryRequirementsKHR(VkDevice device, const VkAccelerationStructureMemoryRequirementsInfoKHR * pInfo, VkMemoryRequirements2 * pMemoryRequirements)
{
	assert(pfn_vkGetAccelerationStructureMemoryRequirementsKHR);
	pfn_vkGetAccelerationStructureMemoryRequirementsKHR(device, pInfo, pMemoryRequirements);
}

static PFN_vkBindAccelerationStructureMemoryKHR pfn_vkBindAccelerationStructureMemoryKHR;
VKAPI_ATTR VkResult vkBindAccelerationStructureMemoryKHR(VkDevice device, uint32_t bindInfoCount, const VkBindAccelerationStructureMemoryInfoKHR * pBindInfos)
{
	assert(pfn_vkBindAccelerationStructureMemoryKHR);
	return pfn_vkBindAccelerationStructureMemoryKHR(device, bindInfoCount, pBindInfos);
}

static PFN_vkCmdBuildAccelerationStructureKHR pfn_vkCmdBuildAccelerationStructureKHR;
VKAPI_ATTR void vkCmdBuildAccelerationStructureKHR(VkCommandBuffer commandBuffer, uint32_t infoCount, const VkAccelerationStructureBuildGeometryInfoKHR * pInfos, const VkAccelerationStructureBuildOffsetInfoKHR * const* ppOffsetInfos)
{
	assert(pfn_vkCmdBuildAccelerationStructureKHR);
	pfn_vkCmdBuildAccelerationStructureKHR(commandBuffer, infoCount, pInfos, ppOffsetInfos);
}

static PFN_vkCmdBuildAccelerationStructureIndirectKHR pfn_vkCmdBuildAccelerationStructureIndirectKHR;
VKAPI_ATTR void vkCmdBuildAccelerationStructureIndirectKHR(VkCommandBuffer commandBuffer, const VkAccelerationStructureBuildGeometryInfoKHR * pInfo, VkBuffer indirectBuffer, VkDeviceSize indirectOffset, uint32_t indirectStride)
{
	assert(pfn_vkCmdBuildAccelerationStructureIndirectKHR);
	pfn_vkCmdBuildAccelerationStructureIndirectKHR(commandBuffer, pInfo, indirectBuffer, indirectOffset, indirectStride);
}

static PFN_vkBuildAccelerationStructureKHR pfn_vkBuildAccelerationStructureKHR;
VKAPI_ATTR VkResult vkBuildAccelerationStructureKHR(VkDevice device, uint32_t infoCount, const VkAccelerationStructureBuildGeometryInfoKHR * pInfos, const VkAccelerationStructureBuildOffsetInfoKHR * const* ppOffsetInfos)
{
	assert(pfn_vkBuildAccelerationStructureKHR);
	return pfn_vkBuildAccelerationStructureKHR(device, infoCount, pInfos, ppOffsetInfos);
}

static PFN_vkCopyAccelerationStructureKHR pfn_vkCopyAccelerationStructureKHR;
VKAPI_ATTR VkResult vkCopyAccelerationStructureKHR(VkDevice device, const VkCopyAccelerationStructureInfoKHR * pInfo)
{
	assert(pfn_vkCopyAccelerationStructureKHR);
	return pfn_vkCopyAccelerationStructureKHR(device, pInfo);
}

static PFN_vkCopyAccelerationStructureToMemoryKHR pfn_vkCopyAccelerationStructureToMemoryKHR;
VKAPI_ATTR VkResult vkCopyAccelerationStructureToMemoryKHR(VkDevice device, const VkCopyAccelerationStructureToMemoryInfoKHR * pInfo)
{
	assert(pfn_vkCopyAccelerationStructureToMemoryKHR);
	return pfn_vkCopyAccelerationStructureToMemoryKHR(device, pInfo);
}

static PFN_vkCopyMemoryToAccelerationStructureKHR pfn_vkCopyMemoryToAccelerationStructureKHR;
VKAPI_ATTR VkResult vkCopyMemoryToAccelerationStructureKHR(VkDevice device, const VkCopyMemoryToAccelerationStructureInfoKHR * pInfo)
{
	assert(pfn_vkCopyMemoryToAccelerationStructureKHR);
	return pfn_vkCopyMemoryToAccelerationStructureKHR(device, pInfo);
}

static PFN_vkCmdTraceRaysKHR pfn_vkCmdTraceRaysKHR;
VKAPI_ATTR void vkCmdTraceRaysKHR(VkCommandBuffer commandBuffer, const VkStridedBufferRegionKHR * pRaygenShaderBindingTable, const VkStridedBufferRegionKHR * pMissShaderBindingTable, const VkStridedBufferRegionKHR * pHitShaderBindingTable, const VkStridedBufferRegionKHR * pCallableShaderBindingTable, uint32_t width, uint32_t height, uint32_t depth)
{
	assert(pfn_vkCmdTraceRaysKHR);
	pfn_vkCmdTraceRaysKHR(commandBuffer, pRaygenShaderBindingTable, pMissShaderBindingTable, pHitShaderBindingTable, pCallableShaderBindingTable, width, height, depth);
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

static PFN_vkCmdTraceRaysIndirectKHR pfn_vkCmdTraceRaysIndirectKHR;
VKAPI_ATTR void vkCmdTraceRaysIndirectKHR(VkCommandBuffer commandBuffer, const VkStridedBufferRegionKHR * pRaygenShaderBindingTable, const VkStridedBufferRegionKHR * pMissShaderBindingTable, const VkStridedBufferRegionKHR * pHitShaderBindingTable, const VkStridedBufferRegionKHR * pCallableShaderBindingTable, VkBuffer buffer, VkDeviceSize offset)
{
	assert(pfn_vkCmdTraceRaysIndirectKHR);
	pfn_vkCmdTraceRaysIndirectKHR(commandBuffer, pRaygenShaderBindingTable, pMissShaderBindingTable, pHitShaderBindingTable, pCallableShaderBindingTable, buffer, offset);
}

static PFN_vkGetDeviceAccelerationStructureCompatibilityKHR pfn_vkGetDeviceAccelerationStructureCompatibilityKHR;
VKAPI_ATTR VkResult vkGetDeviceAccelerationStructureCompatibilityKHR(VkDevice device, const VkAccelerationStructureVersionKHR * version)
{
	assert(pfn_vkGetDeviceAccelerationStructureCompatibilityKHR);
	return pfn_vkGetDeviceAccelerationStructureCompatibilityKHR(device, version);
}
#endif // defined(VK_KHR_ray_tracing)
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
VKAPI_ATTR VkResult vkCreateSwapchainKHR(VkDevice device, const VkSwapchainCreateInfoKHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSwapchainKHR * pSwapchain)
{
	assert(pfn_vkCreateSwapchainKHR);
	return pfn_vkCreateSwapchainKHR(device, pCreateInfo, pAllocator, pSwapchain);
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
#if defined(VK_NVX_image_view_handle)

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
#if defined(VK_NV_clip_space_w_scaling)

static PFN_vkCmdSetViewportWScalingNV pfn_vkCmdSetViewportWScalingNV;
VKAPI_ATTR void vkCmdSetViewportWScalingNV(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkViewportWScalingNV * pViewportWScalings)
{
	assert(pfn_vkCmdSetViewportWScalingNV);
	pfn_vkCmdSetViewportWScalingNV(commandBuffer, firstViewport, viewportCount, pViewportWScalings);
}
#endif // defined(VK_NV_clip_space_w_scaling)
#if defined(VK_NV_cooperative_matrix)

static PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV pfn_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV;
VKAPI_ATTR VkResult vkGetPhysicalDeviceCooperativeMatrixPropertiesNV(VkPhysicalDevice physicalDevice, uint32_t * pPropertyCount, VkCooperativeMatrixPropertiesNV * pProperties)
{
	assert(pfn_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV);
	return pfn_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV(physicalDevice, pPropertyCount, pProperties);
}
#endif // defined(VK_NV_cooperative_matrix)
#if defined(VK_NV_coverage_reduction_mode)

static PFN_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV pfn_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV;
VKAPI_ATTR VkResult vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(VkPhysicalDevice physicalDevice, uint32_t * pCombinationCount, VkFramebufferMixedSamplesCombinationNV * pCombinations)
{
	assert(pfn_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV);
	return pfn_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(physicalDevice, pCombinationCount, pCombinations);
}
#endif // defined(VK_NV_coverage_reduction_mode)
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
#if defined(VK_NV_external_memory_capabilities)

static PFN_vkGetPhysicalDeviceExternalImageFormatPropertiesNV pfn_vkGetPhysicalDeviceExternalImageFormatPropertiesNV;
VKAPI_ATTR VkResult vkGetPhysicalDeviceExternalImageFormatPropertiesNV(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkImageTiling tiling, VkImageUsageFlags usage, VkImageCreateFlags flags, VkExternalMemoryHandleTypeFlagsNV externalHandleType, VkExternalImageFormatPropertiesNV * pExternalImageFormatProperties)
{
	assert(pfn_vkGetPhysicalDeviceExternalImageFormatPropertiesNV);
	return pfn_vkGetPhysicalDeviceExternalImageFormatPropertiesNV(physicalDevice, format, type, tiling, usage, flags, externalHandleType, pExternalImageFormatProperties);
}
#endif // defined(VK_NV_external_memory_capabilities)
#if defined(VK_NV_external_memory_win32)

static PFN_vkGetMemoryWin32HandleNV pfn_vkGetMemoryWin32HandleNV;
VKAPI_ATTR VkResult vkGetMemoryWin32HandleNV(VkDevice device, VkDeviceMemory memory, VkExternalMemoryHandleTypeFlagsNV handleType, HANDLE * pHandle)
{
	assert(pfn_vkGetMemoryWin32HandleNV);
	return pfn_vkGetMemoryWin32HandleNV(device, memory, handleType, pHandle);
}
#endif // defined(VK_NV_external_memory_win32)
#if defined(VK_NV_mesh_shader)

static PFN_vkCmdDrawMeshTasksNV pfn_vkCmdDrawMeshTasksNV;
VKAPI_ATTR void vkCmdDrawMeshTasksNV(VkCommandBuffer commandBuffer, uint32_t taskCount, uint32_t firstTask)
{
	assert(pfn_vkCmdDrawMeshTasksNV);
	pfn_vkCmdDrawMeshTasksNV(commandBuffer, taskCount, firstTask);
}

static PFN_vkCmdDrawMeshTasksIndirectNV pfn_vkCmdDrawMeshTasksIndirectNV;
VKAPI_ATTR void vkCmdDrawMeshTasksIndirectNV(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride)
{
	assert(pfn_vkCmdDrawMeshTasksIndirectNV);
	pfn_vkCmdDrawMeshTasksIndirectNV(commandBuffer, buffer, offset, drawCount, stride);
}

static PFN_vkCmdDrawMeshTasksIndirectCountNV pfn_vkCmdDrawMeshTasksIndirectCountNV;
VKAPI_ATTR void vkCmdDrawMeshTasksIndirectCountNV(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride)
{
	assert(pfn_vkCmdDrawMeshTasksIndirectCountNV);
	pfn_vkCmdDrawMeshTasksIndirectCountNV(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
}
#endif // defined(VK_NV_mesh_shader)
#if defined(VK_NV_ray_tracing)

static PFN_vkDestroyAccelerationStructureNV pfn_vkDestroyAccelerationStructureNV;
VKAPI_ATTR void vkDestroyAccelerationStructureNV(VkDevice device, VkAccelerationStructureKHR accelerationStructure, const VkAllocationCallbacks * pAllocator)
{
	assert(pfn_vkDestroyAccelerationStructureNV);
	pfn_vkDestroyAccelerationStructureNV(device, accelerationStructure, pAllocator);
}

static PFN_vkCmdBuildAccelerationStructureNV pfn_vkCmdBuildAccelerationStructureNV;
VKAPI_ATTR void vkCmdBuildAccelerationStructureNV(VkCommandBuffer commandBuffer, const VkAccelerationStructureInfoNV * pInfo, VkBuffer instanceData, VkDeviceSize instanceOffset, VkBool32 update, VkAccelerationStructureKHR dst, VkAccelerationStructureKHR src, VkBuffer scratch, VkDeviceSize scratchOffset)
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
VKAPI_ATTR VkResult vkBindAccelerationStructureMemoryNV(VkDevice device, uint32_t bindInfoCount, const VkBindAccelerationStructureMemoryInfoKHR * pBindInfos)
{
	assert(pfn_vkBindAccelerationStructureMemoryNV);
	return pfn_vkBindAccelerationStructureMemoryNV(device, bindInfoCount, pBindInfos);
}

static PFN_vkCmdCopyAccelerationStructureNV pfn_vkCmdCopyAccelerationStructureNV;
VKAPI_ATTR void vkCmdCopyAccelerationStructureNV(VkCommandBuffer commandBuffer, VkAccelerationStructureKHR dst, VkAccelerationStructureKHR src, VkCopyAccelerationStructureModeKHR mode)
{
	assert(pfn_vkCmdCopyAccelerationStructureNV);
	pfn_vkCmdCopyAccelerationStructureNV(commandBuffer, dst, src, mode);
}

static PFN_vkCmdTraceRaysNV pfn_vkCmdTraceRaysNV;
VKAPI_ATTR void vkCmdTraceRaysNV(VkCommandBuffer commandBuffer, VkBuffer raygenShaderBindingTableBuffer, VkDeviceSize raygenShaderBindingOffset, VkBuffer missShaderBindingTableBuffer, VkDeviceSize missShaderBindingOffset, VkDeviceSize missShaderBindingStride, VkBuffer hitShaderBindingTableBuffer, VkDeviceSize hitShaderBindingOffset, VkDeviceSize hitShaderBindingStride, VkBuffer callableShaderBindingTableBuffer, VkDeviceSize callableShaderBindingOffset, VkDeviceSize callableShaderBindingStride, uint32_t width, uint32_t height, uint32_t depth)
{
	assert(pfn_vkCmdTraceRaysNV);
	pfn_vkCmdTraceRaysNV(commandBuffer, raygenShaderBindingTableBuffer, raygenShaderBindingOffset, missShaderBindingTableBuffer, missShaderBindingOffset, missShaderBindingStride, hitShaderBindingTableBuffer, hitShaderBindingOffset, hitShaderBindingStride, callableShaderBindingTableBuffer, callableShaderBindingOffset, callableShaderBindingStride, width, height, depth);
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
VKAPI_ATTR VkResult vkGetAccelerationStructureHandleNV(VkDevice device, VkAccelerationStructureKHR accelerationStructure, size_t dataSize, void * pData)
{
	assert(pfn_vkGetAccelerationStructureHandleNV);
	return pfn_vkGetAccelerationStructureHandleNV(device, accelerationStructure, dataSize, pData);
}

static PFN_vkCmdWriteAccelerationStructuresPropertiesNV pfn_vkCmdWriteAccelerationStructuresPropertiesNV;
VKAPI_ATTR void vkCmdWriteAccelerationStructuresPropertiesNV(VkCommandBuffer commandBuffer, uint32_t accelerationStructureCount, const VkAccelerationStructureKHR * pAccelerationStructures, VkQueryType queryType, VkQueryPool queryPool, uint32_t firstQuery)
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

static PFN_vkCmdSetExclusiveScissorNV pfn_vkCmdSetExclusiveScissorNV;
VKAPI_ATTR void vkCmdSetExclusiveScissorNV(VkCommandBuffer commandBuffer, uint32_t firstExclusiveScissor, uint32_t exclusiveScissorCount, const VkRect2D * pExclusiveScissors)
{
	assert(pfn_vkCmdSetExclusiveScissorNV);
	pfn_vkCmdSetExclusiveScissorNV(commandBuffer, firstExclusiveScissor, exclusiveScissorCount, pExclusiveScissors);
}
#endif // defined(VK_NV_scissor_exclusive)
#if defined(VK_NV_shading_rate_image)

static PFN_vkCmdSetCoarseSampleOrderNV pfn_vkCmdSetCoarseSampleOrderNV;
VKAPI_ATTR void vkCmdSetCoarseSampleOrderNV(VkCommandBuffer commandBuffer, VkCoarseSampleOrderTypeNV sampleOrderType, uint32_t customSampleOrderCount, const VkCoarseSampleOrderCustomNV * pCustomSampleOrders)
{
	assert(pfn_vkCmdSetCoarseSampleOrderNV);
	pfn_vkCmdSetCoarseSampleOrderNV(commandBuffer, sampleOrderType, customSampleOrderCount, pCustomSampleOrders);
}

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
#endif // defined(VK_NV_shading_rate_image)

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
#if defined(VK_AMD_buffer_marker)
	pfn_vkCmdWriteBufferMarkerAMD = (PFN_vkCmdWriteBufferMarkerAMD)vkGetInstanceProcAddr(instance, "vkCmdWriteBufferMarkerAMD");
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
#if defined(VK_ANDROID_native_buffer)
	pfn_vkGetSwapchainGrallocUsage2ANDROID = (PFN_vkGetSwapchainGrallocUsage2ANDROID)vkGetInstanceProcAddr(instance, "vkGetSwapchainGrallocUsage2ANDROID");
	pfn_vkGetSwapchainGrallocUsageANDROID = (PFN_vkGetSwapchainGrallocUsageANDROID)vkGetInstanceProcAddr(instance, "vkGetSwapchainGrallocUsageANDROID");
	pfn_vkAcquireImageANDROID = (PFN_vkAcquireImageANDROID)vkGetInstanceProcAddr(instance, "vkAcquireImageANDROID");
	pfn_vkQueueSignalReleaseImageANDROID = (PFN_vkQueueSignalReleaseImageANDROID)vkGetInstanceProcAddr(instance, "vkQueueSignalReleaseImageANDROID");
#endif // defined(VK_ANDROID_native_buffer)
#if defined(VK_EXT_acquire_xlib_display)
	pfn_vkAcquireXlibDisplayEXT = (PFN_vkAcquireXlibDisplayEXT)vkGetInstanceProcAddr(instance, "vkAcquireXlibDisplayEXT");
	pfn_vkGetRandROutputDisplayEXT = (PFN_vkGetRandROutputDisplayEXT)vkGetInstanceProcAddr(instance, "vkGetRandROutputDisplayEXT");
#endif // defined(VK_EXT_acquire_xlib_display)
#if defined(VK_EXT_buffer_device_address)
	pfn_vkGetBufferDeviceAddressEXT = (PFN_vkGetBufferDeviceAddressEXT)vkGetInstanceProcAddr(instance, "vkGetBufferDeviceAddressEXT");
#endif // defined(VK_EXT_buffer_device_address)
#if defined(VK_EXT_calibrated_timestamps)
	pfn_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT = (PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceCalibrateableTimeDomainsEXT");
	pfn_vkGetCalibratedTimestampsEXT = (PFN_vkGetCalibratedTimestampsEXT)vkGetInstanceProcAddr(instance, "vkGetCalibratedTimestampsEXT");
#endif // defined(VK_EXT_calibrated_timestamps)
#if defined(VK_EXT_conditional_rendering)
	pfn_vkCmdEndConditionalRenderingEXT = (PFN_vkCmdEndConditionalRenderingEXT)vkGetInstanceProcAddr(instance, "vkCmdEndConditionalRenderingEXT");
	pfn_vkCmdBeginConditionalRenderingEXT = (PFN_vkCmdBeginConditionalRenderingEXT)vkGetInstanceProcAddr(instance, "vkCmdBeginConditionalRenderingEXT");
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
	pfn_vkSetDebugUtilsObjectTagEXT = (PFN_vkSetDebugUtilsObjectTagEXT)vkGetInstanceProcAddr(instance, "vkSetDebugUtilsObjectTagEXT");
	pfn_vkSubmitDebugUtilsMessageEXT = (PFN_vkSubmitDebugUtilsMessageEXT)vkGetInstanceProcAddr(instance, "vkSubmitDebugUtilsMessageEXT");
	pfn_vkQueueInsertDebugUtilsLabelEXT = (PFN_vkQueueInsertDebugUtilsLabelEXT)vkGetInstanceProcAddr(instance, "vkQueueInsertDebugUtilsLabelEXT");
	pfn_vkSetDebugUtilsObjectNameEXT = (PFN_vkSetDebugUtilsObjectNameEXT)vkGetInstanceProcAddr(instance, "vkSetDebugUtilsObjectNameEXT");
	pfn_vkQueueBeginDebugUtilsLabelEXT = (PFN_vkQueueBeginDebugUtilsLabelEXT)vkGetInstanceProcAddr(instance, "vkQueueBeginDebugUtilsLabelEXT");
	pfn_vkQueueEndDebugUtilsLabelEXT = (PFN_vkQueueEndDebugUtilsLabelEXT)vkGetInstanceProcAddr(instance, "vkQueueEndDebugUtilsLabelEXT");
	pfn_vkCmdBeginDebugUtilsLabelEXT = (PFN_vkCmdBeginDebugUtilsLabelEXT)vkGetInstanceProcAddr(instance, "vkCmdBeginDebugUtilsLabelEXT");
	pfn_vkCreateDebugUtilsMessengerEXT = (PFN_vkCreateDebugUtilsMessengerEXT)vkGetInstanceProcAddr(instance, "vkCreateDebugUtilsMessengerEXT");
	pfn_vkDestroyDebugUtilsMessengerEXT = (PFN_vkDestroyDebugUtilsMessengerEXT)vkGetInstanceProcAddr(instance, "vkDestroyDebugUtilsMessengerEXT");
#endif // defined(VK_EXT_debug_utils)
#if defined(VK_EXT_direct_mode_display)
	pfn_vkReleaseDisplayEXT = (PFN_vkReleaseDisplayEXT)vkGetInstanceProcAddr(instance, "vkReleaseDisplayEXT");
#endif // defined(VK_EXT_direct_mode_display)
#if defined(VK_EXT_directfb_surface)
	pfn_vkGetPhysicalDeviceDirectFBPresentationSupportEXT = (PFN_vkGetPhysicalDeviceDirectFBPresentationSupportEXT)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceDirectFBPresentationSupportEXT");
	pfn_vkCreateDirectFBSurfaceEXT = (PFN_vkCreateDirectFBSurfaceEXT)vkGetInstanceProcAddr(instance, "vkCreateDirectFBSurfaceEXT");
#endif // defined(VK_EXT_directfb_surface)
#if defined(VK_EXT_discard_rectangles)
	pfn_vkCmdSetDiscardRectangleEXT = (PFN_vkCmdSetDiscardRectangleEXT)vkGetInstanceProcAddr(instance, "vkCmdSetDiscardRectangleEXT");
#endif // defined(VK_EXT_discard_rectangles)
#if defined(VK_EXT_display_control)
	pfn_vkGetSwapchainCounterEXT = (PFN_vkGetSwapchainCounterEXT)vkGetInstanceProcAddr(instance, "vkGetSwapchainCounterEXT");
	pfn_vkDisplayPowerControlEXT = (PFN_vkDisplayPowerControlEXT)vkGetInstanceProcAddr(instance, "vkDisplayPowerControlEXT");
	pfn_vkRegisterDeviceEventEXT = (PFN_vkRegisterDeviceEventEXT)vkGetInstanceProcAddr(instance, "vkRegisterDeviceEventEXT");
	pfn_vkRegisterDisplayEventEXT = (PFN_vkRegisterDisplayEventEXT)vkGetInstanceProcAddr(instance, "vkRegisterDisplayEventEXT");
#endif // defined(VK_EXT_display_control)
#if defined(VK_EXT_display_surface_counter)
	pfn_vkGetPhysicalDeviceSurfaceCapabilities2EXT = (PFN_vkGetPhysicalDeviceSurfaceCapabilities2EXT)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSurfaceCapabilities2EXT");
#endif // defined(VK_EXT_display_surface_counter)
#if defined(VK_EXT_extended_dynamic_state)
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
#endif // defined(VK_EXT_extended_dynamic_state)
#if defined(VK_EXT_external_memory_host)
	pfn_vkGetMemoryHostPointerPropertiesEXT = (PFN_vkGetMemoryHostPointerPropertiesEXT)vkGetInstanceProcAddr(instance, "vkGetMemoryHostPointerPropertiesEXT");
#endif // defined(VK_EXT_external_memory_host)
#if defined(VK_EXT_full_screen_exclusive)
	pfn_vkGetPhysicalDeviceSurfacePresentModes2EXT = (PFN_vkGetPhysicalDeviceSurfacePresentModes2EXT)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSurfacePresentModes2EXT");
	pfn_vkAcquireFullScreenExclusiveModeEXT = (PFN_vkAcquireFullScreenExclusiveModeEXT)vkGetInstanceProcAddr(instance, "vkAcquireFullScreenExclusiveModeEXT");
	pfn_vkReleaseFullScreenExclusiveModeEXT = (PFN_vkReleaseFullScreenExclusiveModeEXT)vkGetInstanceProcAddr(instance, "vkReleaseFullScreenExclusiveModeEXT");
#endif // defined(VK_EXT_full_screen_exclusive)
#if defined(VK_EXT_full_screen_exclusive) && defined(VK_KHR_device_group) || defined(VK_EXT_full_screen_exclusive) && defined(VK_VERSION_1_1)
	pfn_vkGetDeviceGroupSurfacePresentModes2EXT = (PFN_vkGetDeviceGroupSurfacePresentModes2EXT)vkGetInstanceProcAddr(instance, "vkGetDeviceGroupSurfacePresentModes2EXT");
#endif // defined(VK_EXT_full_screen_exclusive) && defined(VK_KHR_device_group) || defined(VK_EXT_full_screen_exclusive) && defined(VK_VERSION_1_1)
#if defined(VK_EXT_hdr_metadata)
	pfn_vkSetHdrMetadataEXT = (PFN_vkSetHdrMetadataEXT)vkGetInstanceProcAddr(instance, "vkSetHdrMetadataEXT");
#endif // defined(VK_EXT_hdr_metadata)
#if defined(VK_EXT_headless_surface)
	pfn_vkCreateHeadlessSurfaceEXT = (PFN_vkCreateHeadlessSurfaceEXT)vkGetInstanceProcAddr(instance, "vkCreateHeadlessSurfaceEXT");
#endif // defined(VK_EXT_headless_surface)
#if defined(VK_EXT_host_query_reset)
	pfn_vkResetQueryPoolEXT = (PFN_vkResetQueryPoolEXT)vkGetInstanceProcAddr(instance, "vkResetQueryPoolEXT");
#endif // defined(VK_EXT_host_query_reset)
#if defined(VK_EXT_image_drm_format_modifier)
	pfn_vkGetImageDrmFormatModifierPropertiesEXT = (PFN_vkGetImageDrmFormatModifierPropertiesEXT)vkGetInstanceProcAddr(instance, "vkGetImageDrmFormatModifierPropertiesEXT");
#endif // defined(VK_EXT_image_drm_format_modifier)
#if defined(VK_EXT_line_rasterization)
	pfn_vkCmdSetLineStippleEXT = (PFN_vkCmdSetLineStippleEXT)vkGetInstanceProcAddr(instance, "vkCmdSetLineStippleEXT");
#endif // defined(VK_EXT_line_rasterization)
#if defined(VK_EXT_metal_surface)
	pfn_vkCreateMetalSurfaceEXT = (PFN_vkCreateMetalSurfaceEXT)vkGetInstanceProcAddr(instance, "vkCreateMetalSurfaceEXT");
#endif // defined(VK_EXT_metal_surface)
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
#if defined(VK_EXT_tooling_info)
	pfn_vkGetPhysicalDeviceToolPropertiesEXT = (PFN_vkGetPhysicalDeviceToolPropertiesEXT)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceToolPropertiesEXT");
#endif // defined(VK_EXT_tooling_info)
#if defined(VK_EXT_transform_feedback)
	pfn_vkCmdEndQueryIndexedEXT = (PFN_vkCmdEndQueryIndexedEXT)vkGetInstanceProcAddr(instance, "vkCmdEndQueryIndexedEXT");
	pfn_vkCmdEndTransformFeedbackEXT = (PFN_vkCmdEndTransformFeedbackEXT)vkGetInstanceProcAddr(instance, "vkCmdEndTransformFeedbackEXT");
	pfn_vkCmdBindTransformFeedbackBuffersEXT = (PFN_vkCmdBindTransformFeedbackBuffersEXT)vkGetInstanceProcAddr(instance, "vkCmdBindTransformFeedbackBuffersEXT");
	pfn_vkCmdBeginTransformFeedbackEXT = (PFN_vkCmdBeginTransformFeedbackEXT)vkGetInstanceProcAddr(instance, "vkCmdBeginTransformFeedbackEXT");
	pfn_vkCmdBeginQueryIndexedEXT = (PFN_vkCmdBeginQueryIndexedEXT)vkGetInstanceProcAddr(instance, "vkCmdBeginQueryIndexedEXT");
	pfn_vkCmdDrawIndirectByteCountEXT = (PFN_vkCmdDrawIndirectByteCountEXT)vkGetInstanceProcAddr(instance, "vkCmdDrawIndirectByteCountEXT");
#endif // defined(VK_EXT_transform_feedback)
#if defined(VK_EXT_validation_cache)
	pfn_vkMergeValidationCachesEXT = (PFN_vkMergeValidationCachesEXT)vkGetInstanceProcAddr(instance, "vkMergeValidationCachesEXT");
	pfn_vkDestroyValidationCacheEXT = (PFN_vkDestroyValidationCacheEXT)vkGetInstanceProcAddr(instance, "vkDestroyValidationCacheEXT");
	pfn_vkCreateValidationCacheEXT = (PFN_vkCreateValidationCacheEXT)vkGetInstanceProcAddr(instance, "vkCreateValidationCacheEXT");
	pfn_vkGetValidationCacheDataEXT = (PFN_vkGetValidationCacheDataEXT)vkGetInstanceProcAddr(instance, "vkGetValidationCacheDataEXT");
#endif // defined(VK_EXT_validation_cache)
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
#if defined(VK_KHR_copy_commands2)
	pfn_vkCmdCopyImageToBuffer2KHR = (PFN_vkCmdCopyImageToBuffer2KHR)vkGetInstanceProcAddr(instance, "vkCmdCopyImageToBuffer2KHR");
	pfn_vkCmdCopyBuffer2KHR = (PFN_vkCmdCopyBuffer2KHR)vkGetInstanceProcAddr(instance, "vkCmdCopyBuffer2KHR");
	pfn_vkCmdCopyImage2KHR = (PFN_vkCmdCopyImage2KHR)vkGetInstanceProcAddr(instance, "vkCmdCopyImage2KHR");
	pfn_vkCmdCopyBufferToImage2KHR = (PFN_vkCmdCopyBufferToImage2KHR)vkGetInstanceProcAddr(instance, "vkCmdCopyBufferToImage2KHR");
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
#if defined(VK_KHR_descriptor_update_template) && defined(VK_KHR_push_descriptor) || defined(VK_KHR_push_descriptor) && defined(VK_VERSION_1_1)
	pfn_vkCmdPushDescriptorSetWithTemplateKHR = (PFN_vkCmdPushDescriptorSetWithTemplateKHR)vkGetInstanceProcAddr(instance, "vkCmdPushDescriptorSetWithTemplateKHR");
#endif // defined(VK_KHR_descriptor_update_template) && defined(VK_KHR_push_descriptor) || defined(VK_KHR_push_descriptor) && defined(VK_VERSION_1_1)
#if defined(VK_KHR_device_group)
	pfn_vkGetDeviceGroupPeerMemoryFeaturesKHR = (PFN_vkGetDeviceGroupPeerMemoryFeaturesKHR)vkGetInstanceProcAddr(instance, "vkGetDeviceGroupPeerMemoryFeaturesKHR");
	pfn_vkCmdSetDeviceMaskKHR = (PFN_vkCmdSetDeviceMaskKHR)vkGetInstanceProcAddr(instance, "vkCmdSetDeviceMaskKHR");
	pfn_vkCmdDispatchBaseKHR = (PFN_vkCmdDispatchBaseKHR)vkGetInstanceProcAddr(instance, "vkCmdDispatchBaseKHR");
#endif // defined(VK_KHR_device_group)
#if defined(VK_KHR_device_group) && defined(VK_KHR_surface) || defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1)
	pfn_vkGetDeviceGroupPresentCapabilitiesKHR = (PFN_vkGetDeviceGroupPresentCapabilitiesKHR)vkGetInstanceProcAddr(instance, "vkGetDeviceGroupPresentCapabilitiesKHR");
	pfn_vkGetDeviceGroupSurfacePresentModesKHR = (PFN_vkGetDeviceGroupSurfacePresentModesKHR)vkGetInstanceProcAddr(instance, "vkGetDeviceGroupSurfacePresentModesKHR");
	pfn_vkGetPhysicalDevicePresentRectanglesKHR = (PFN_vkGetPhysicalDevicePresentRectanglesKHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDevicePresentRectanglesKHR");
#endif // defined(VK_KHR_device_group) && defined(VK_KHR_surface) || defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1)
#if defined(VK_KHR_device_group) && defined(VK_KHR_swapchain) || defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1)
	pfn_vkAcquireNextImage2KHR = (PFN_vkAcquireNextImage2KHR)vkGetInstanceProcAddr(instance, "vkAcquireNextImage2KHR");
#endif // defined(VK_KHR_device_group) && defined(VK_KHR_swapchain) || defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1)
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
	pfn_vkGetMemoryFdKHR = (PFN_vkGetMemoryFdKHR)vkGetInstanceProcAddr(instance, "vkGetMemoryFdKHR");
	pfn_vkGetMemoryFdPropertiesKHR = (PFN_vkGetMemoryFdPropertiesKHR)vkGetInstanceProcAddr(instance, "vkGetMemoryFdPropertiesKHR");
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
	pfn_vkGetPhysicalDeviceFormatProperties2KHR = (PFN_vkGetPhysicalDeviceFormatProperties2KHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceFormatProperties2KHR");
	pfn_vkGetPhysicalDeviceSparseImageFormatProperties2KHR = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties2KHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSparseImageFormatProperties2KHR");
	pfn_vkGetPhysicalDeviceProperties2KHR = (PFN_vkGetPhysicalDeviceProperties2KHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceProperties2KHR");
	pfn_vkGetPhysicalDeviceMemoryProperties2KHR = (PFN_vkGetPhysicalDeviceMemoryProperties2KHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceMemoryProperties2KHR");
	pfn_vkGetPhysicalDeviceQueueFamilyProperties2KHR = (PFN_vkGetPhysicalDeviceQueueFamilyProperties2KHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceQueueFamilyProperties2KHR");
	pfn_vkGetPhysicalDeviceImageFormatProperties2KHR = (PFN_vkGetPhysicalDeviceImageFormatProperties2KHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceImageFormatProperties2KHR");
	pfn_vkGetPhysicalDeviceFeatures2KHR = (PFN_vkGetPhysicalDeviceFeatures2KHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceFeatures2KHR");
#endif // defined(VK_KHR_get_physical_device_properties2)
#if defined(VK_KHR_get_surface_capabilities2)
	pfn_vkGetPhysicalDeviceSurfaceCapabilities2KHR = (PFN_vkGetPhysicalDeviceSurfaceCapabilities2KHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSurfaceCapabilities2KHR");
	pfn_vkGetPhysicalDeviceSurfaceFormats2KHR = (PFN_vkGetPhysicalDeviceSurfaceFormats2KHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSurfaceFormats2KHR");
#endif // defined(VK_KHR_get_surface_capabilities2)
#if defined(VK_KHR_maintenance1)
	pfn_vkTrimCommandPoolKHR = (PFN_vkTrimCommandPoolKHR)vkGetInstanceProcAddr(instance, "vkTrimCommandPoolKHR");
#endif // defined(VK_KHR_maintenance1)
#if defined(VK_KHR_maintenance3)
	pfn_vkGetDescriptorSetLayoutSupportKHR = (PFN_vkGetDescriptorSetLayoutSupportKHR)vkGetInstanceProcAddr(instance, "vkGetDescriptorSetLayoutSupportKHR");
#endif // defined(VK_KHR_maintenance3)
#if defined(VK_KHR_performance_query)
	pfn_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR = (PFN_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR)vkGetInstanceProcAddr(instance, "vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR");
	pfn_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR = (PFN_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR");
	pfn_vkAcquireProfilingLockKHR = (PFN_vkAcquireProfilingLockKHR)vkGetInstanceProcAddr(instance, "vkAcquireProfilingLockKHR");
	pfn_vkReleaseProfilingLockKHR = (PFN_vkReleaseProfilingLockKHR)vkGetInstanceProcAddr(instance, "vkReleaseProfilingLockKHR");
#endif // defined(VK_KHR_performance_query)
#if defined(VK_KHR_pipeline_executable_properties)
	pfn_vkGetPipelineExecutableInternalRepresentationsKHR = (PFN_vkGetPipelineExecutableInternalRepresentationsKHR)vkGetInstanceProcAddr(instance, "vkGetPipelineExecutableInternalRepresentationsKHR");
	pfn_vkGetPipelineExecutablePropertiesKHR = (PFN_vkGetPipelineExecutablePropertiesKHR)vkGetInstanceProcAddr(instance, "vkGetPipelineExecutablePropertiesKHR");
	pfn_vkGetPipelineExecutableStatisticsKHR = (PFN_vkGetPipelineExecutableStatisticsKHR)vkGetInstanceProcAddr(instance, "vkGetPipelineExecutableStatisticsKHR");
#endif // defined(VK_KHR_pipeline_executable_properties)
#if defined(VK_KHR_push_descriptor)
	pfn_vkCmdPushDescriptorSetKHR = (PFN_vkCmdPushDescriptorSetKHR)vkGetInstanceProcAddr(instance, "vkCmdPushDescriptorSetKHR");
#endif // defined(VK_KHR_push_descriptor)
#if defined(VK_KHR_ray_tracing)
	pfn_vkCreateRayTracingPipelinesKHR = (PFN_vkCreateRayTracingPipelinesKHR)vkGetInstanceProcAddr(instance, "vkCreateRayTracingPipelinesKHR");
	pfn_vkGetRayTracingShaderGroupHandlesKHR = (PFN_vkGetRayTracingShaderGroupHandlesKHR)vkGetInstanceProcAddr(instance, "vkGetRayTracingShaderGroupHandlesKHR");
	pfn_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR = (PFN_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR)vkGetInstanceProcAddr(instance, "vkGetRayTracingCaptureReplayShaderGroupHandlesKHR");
	pfn_vkCreateAccelerationStructureKHR = (PFN_vkCreateAccelerationStructureKHR)vkGetInstanceProcAddr(instance, "vkCreateAccelerationStructureKHR");
	pfn_vkDestroyAccelerationStructureKHR = (PFN_vkDestroyAccelerationStructureKHR)vkGetInstanceProcAddr(instance, "vkDestroyAccelerationStructureKHR");
	pfn_vkGetAccelerationStructureMemoryRequirementsKHR = (PFN_vkGetAccelerationStructureMemoryRequirementsKHR)vkGetInstanceProcAddr(instance, "vkGetAccelerationStructureMemoryRequirementsKHR");
	pfn_vkBindAccelerationStructureMemoryKHR = (PFN_vkBindAccelerationStructureMemoryKHR)vkGetInstanceProcAddr(instance, "vkBindAccelerationStructureMemoryKHR");
	pfn_vkCmdBuildAccelerationStructureKHR = (PFN_vkCmdBuildAccelerationStructureKHR)vkGetInstanceProcAddr(instance, "vkCmdBuildAccelerationStructureKHR");
	pfn_vkCmdBuildAccelerationStructureIndirectKHR = (PFN_vkCmdBuildAccelerationStructureIndirectKHR)vkGetInstanceProcAddr(instance, "vkCmdBuildAccelerationStructureIndirectKHR");
	pfn_vkBuildAccelerationStructureKHR = (PFN_vkBuildAccelerationStructureKHR)vkGetInstanceProcAddr(instance, "vkBuildAccelerationStructureKHR");
	pfn_vkCopyAccelerationStructureKHR = (PFN_vkCopyAccelerationStructureKHR)vkGetInstanceProcAddr(instance, "vkCopyAccelerationStructureKHR");
	pfn_vkCopyAccelerationStructureToMemoryKHR = (PFN_vkCopyAccelerationStructureToMemoryKHR)vkGetInstanceProcAddr(instance, "vkCopyAccelerationStructureToMemoryKHR");
	pfn_vkCopyMemoryToAccelerationStructureKHR = (PFN_vkCopyMemoryToAccelerationStructureKHR)vkGetInstanceProcAddr(instance, "vkCopyMemoryToAccelerationStructureKHR");
	pfn_vkCmdTraceRaysKHR = (PFN_vkCmdTraceRaysKHR)vkGetInstanceProcAddr(instance, "vkCmdTraceRaysKHR");
	pfn_vkWriteAccelerationStructuresPropertiesKHR = (PFN_vkWriteAccelerationStructuresPropertiesKHR)vkGetInstanceProcAddr(instance, "vkWriteAccelerationStructuresPropertiesKHR");
	pfn_vkCmdCopyAccelerationStructureKHR = (PFN_vkCmdCopyAccelerationStructureKHR)vkGetInstanceProcAddr(instance, "vkCmdCopyAccelerationStructureKHR");
	pfn_vkCmdCopyAccelerationStructureToMemoryKHR = (PFN_vkCmdCopyAccelerationStructureToMemoryKHR)vkGetInstanceProcAddr(instance, "vkCmdCopyAccelerationStructureToMemoryKHR");
	pfn_vkCmdCopyMemoryToAccelerationStructureKHR = (PFN_vkCmdCopyMemoryToAccelerationStructureKHR)vkGetInstanceProcAddr(instance, "vkCmdCopyMemoryToAccelerationStructureKHR");
	pfn_vkGetAccelerationStructureDeviceAddressKHR = (PFN_vkGetAccelerationStructureDeviceAddressKHR)vkGetInstanceProcAddr(instance, "vkGetAccelerationStructureDeviceAddressKHR");
	pfn_vkCmdWriteAccelerationStructuresPropertiesKHR = (PFN_vkCmdWriteAccelerationStructuresPropertiesKHR)vkGetInstanceProcAddr(instance, "vkCmdWriteAccelerationStructuresPropertiesKHR");
	pfn_vkCmdTraceRaysIndirectKHR = (PFN_vkCmdTraceRaysIndirectKHR)vkGetInstanceProcAddr(instance, "vkCmdTraceRaysIndirectKHR");
	pfn_vkGetDeviceAccelerationStructureCompatibilityKHR = (PFN_vkGetDeviceAccelerationStructureCompatibilityKHR)vkGetInstanceProcAddr(instance, "vkGetDeviceAccelerationStructureCompatibilityKHR");
#endif // defined(VK_KHR_ray_tracing)
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
#if defined(VK_KHR_timeline_semaphore)
	pfn_vkWaitSemaphoresKHR = (PFN_vkWaitSemaphoresKHR)vkGetInstanceProcAddr(instance, "vkWaitSemaphoresKHR");
	pfn_vkGetSemaphoreCounterValueKHR = (PFN_vkGetSemaphoreCounterValueKHR)vkGetInstanceProcAddr(instance, "vkGetSemaphoreCounterValueKHR");
	pfn_vkSignalSemaphoreKHR = (PFN_vkSignalSemaphoreKHR)vkGetInstanceProcAddr(instance, "vkSignalSemaphoreKHR");
#endif // defined(VK_KHR_timeline_semaphore)
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
#if defined(VK_NVX_image_view_handle)
	pfn_vkGetImageViewHandleNVX = (PFN_vkGetImageViewHandleNVX)vkGetInstanceProcAddr(instance, "vkGetImageViewHandleNVX");
	pfn_vkGetImageViewAddressNVX = (PFN_vkGetImageViewAddressNVX)vkGetInstanceProcAddr(instance, "vkGetImageViewAddressNVX");
#endif // defined(VK_NVX_image_view_handle)
#if defined(VK_NV_clip_space_w_scaling)
	pfn_vkCmdSetViewportWScalingNV = (PFN_vkCmdSetViewportWScalingNV)vkGetInstanceProcAddr(instance, "vkCmdSetViewportWScalingNV");
#endif // defined(VK_NV_clip_space_w_scaling)
#if defined(VK_NV_cooperative_matrix)
	pfn_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV = (PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceCooperativeMatrixPropertiesNV");
#endif // defined(VK_NV_cooperative_matrix)
#if defined(VK_NV_coverage_reduction_mode)
	pfn_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV = (PFN_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV");
#endif // defined(VK_NV_coverage_reduction_mode)
#if defined(VK_NV_device_diagnostic_checkpoints)
	pfn_vkGetQueueCheckpointDataNV = (PFN_vkGetQueueCheckpointDataNV)vkGetInstanceProcAddr(instance, "vkGetQueueCheckpointDataNV");
	pfn_vkCmdSetCheckpointNV = (PFN_vkCmdSetCheckpointNV)vkGetInstanceProcAddr(instance, "vkCmdSetCheckpointNV");
#endif // defined(VK_NV_device_diagnostic_checkpoints)
#if defined(VK_NV_device_generated_commands)
	pfn_vkGetGeneratedCommandsMemoryRequirementsNV = (PFN_vkGetGeneratedCommandsMemoryRequirementsNV)vkGetInstanceProcAddr(instance, "vkGetGeneratedCommandsMemoryRequirementsNV");
	pfn_vkCreateIndirectCommandsLayoutNV = (PFN_vkCreateIndirectCommandsLayoutNV)vkGetInstanceProcAddr(instance, "vkCreateIndirectCommandsLayoutNV");
	pfn_vkCmdPreprocessGeneratedCommandsNV = (PFN_vkCmdPreprocessGeneratedCommandsNV)vkGetInstanceProcAddr(instance, "vkCmdPreprocessGeneratedCommandsNV");
	pfn_vkCmdExecuteGeneratedCommandsNV = (PFN_vkCmdExecuteGeneratedCommandsNV)vkGetInstanceProcAddr(instance, "vkCmdExecuteGeneratedCommandsNV");
	pfn_vkCmdBindPipelineShaderGroupNV = (PFN_vkCmdBindPipelineShaderGroupNV)vkGetInstanceProcAddr(instance, "vkCmdBindPipelineShaderGroupNV");
	pfn_vkDestroyIndirectCommandsLayoutNV = (PFN_vkDestroyIndirectCommandsLayoutNV)vkGetInstanceProcAddr(instance, "vkDestroyIndirectCommandsLayoutNV");
#endif // defined(VK_NV_device_generated_commands)
#if defined(VK_NV_external_memory_capabilities)
	pfn_vkGetPhysicalDeviceExternalImageFormatPropertiesNV = (PFN_vkGetPhysicalDeviceExternalImageFormatPropertiesNV)vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceExternalImageFormatPropertiesNV");
#endif // defined(VK_NV_external_memory_capabilities)
#if defined(VK_NV_external_memory_win32)
	pfn_vkGetMemoryWin32HandleNV = (PFN_vkGetMemoryWin32HandleNV)vkGetInstanceProcAddr(instance, "vkGetMemoryWin32HandleNV");
#endif // defined(VK_NV_external_memory_win32)
#if defined(VK_NV_mesh_shader)
	pfn_vkCmdDrawMeshTasksNV = (PFN_vkCmdDrawMeshTasksNV)vkGetInstanceProcAddr(instance, "vkCmdDrawMeshTasksNV");
	pfn_vkCmdDrawMeshTasksIndirectNV = (PFN_vkCmdDrawMeshTasksIndirectNV)vkGetInstanceProcAddr(instance, "vkCmdDrawMeshTasksIndirectNV");
	pfn_vkCmdDrawMeshTasksIndirectCountNV = (PFN_vkCmdDrawMeshTasksIndirectCountNV)vkGetInstanceProcAddr(instance, "vkCmdDrawMeshTasksIndirectCountNV");
#endif // defined(VK_NV_mesh_shader)
#if defined(VK_NV_ray_tracing)
	pfn_vkDestroyAccelerationStructureNV = (PFN_vkDestroyAccelerationStructureNV)vkGetInstanceProcAddr(instance, "vkDestroyAccelerationStructureNV");
	pfn_vkCmdBuildAccelerationStructureNV = (PFN_vkCmdBuildAccelerationStructureNV)vkGetInstanceProcAddr(instance, "vkCmdBuildAccelerationStructureNV");
	pfn_vkCreateAccelerationStructureNV = (PFN_vkCreateAccelerationStructureNV)vkGetInstanceProcAddr(instance, "vkCreateAccelerationStructureNV");
	pfn_vkGetAccelerationStructureMemoryRequirementsNV = (PFN_vkGetAccelerationStructureMemoryRequirementsNV)vkGetInstanceProcAddr(instance, "vkGetAccelerationStructureMemoryRequirementsNV");
	pfn_vkBindAccelerationStructureMemoryNV = (PFN_vkBindAccelerationStructureMemoryNV)vkGetInstanceProcAddr(instance, "vkBindAccelerationStructureMemoryNV");
	pfn_vkCmdCopyAccelerationStructureNV = (PFN_vkCmdCopyAccelerationStructureNV)vkGetInstanceProcAddr(instance, "vkCmdCopyAccelerationStructureNV");
	pfn_vkCmdTraceRaysNV = (PFN_vkCmdTraceRaysNV)vkGetInstanceProcAddr(instance, "vkCmdTraceRaysNV");
	pfn_vkCreateRayTracingPipelinesNV = (PFN_vkCreateRayTracingPipelinesNV)vkGetInstanceProcAddr(instance, "vkCreateRayTracingPipelinesNV");
	pfn_vkGetRayTracingShaderGroupHandlesNV = (PFN_vkGetRayTracingShaderGroupHandlesNV)vkGetInstanceProcAddr(instance, "vkGetRayTracingShaderGroupHandlesNV");
	pfn_vkGetAccelerationStructureHandleNV = (PFN_vkGetAccelerationStructureHandleNV)vkGetInstanceProcAddr(instance, "vkGetAccelerationStructureHandleNV");
	pfn_vkCmdWriteAccelerationStructuresPropertiesNV = (PFN_vkCmdWriteAccelerationStructuresPropertiesNV)vkGetInstanceProcAddr(instance, "vkCmdWriteAccelerationStructuresPropertiesNV");
	pfn_vkCompileDeferredNV = (PFN_vkCompileDeferredNV)vkGetInstanceProcAddr(instance, "vkCompileDeferredNV");
#endif // defined(VK_NV_ray_tracing)
#if defined(VK_NV_scissor_exclusive)
	pfn_vkCmdSetExclusiveScissorNV = (PFN_vkCmdSetExclusiveScissorNV)vkGetInstanceProcAddr(instance, "vkCmdSetExclusiveScissorNV");
#endif // defined(VK_NV_scissor_exclusive)
#if defined(VK_NV_shading_rate_image)
	pfn_vkCmdSetCoarseSampleOrderNV = (PFN_vkCmdSetCoarseSampleOrderNV)vkGetInstanceProcAddr(instance, "vkCmdSetCoarseSampleOrderNV");
	pfn_vkCmdSetViewportShadingRatePaletteNV = (PFN_vkCmdSetViewportShadingRatePaletteNV)vkGetInstanceProcAddr(instance, "vkCmdSetViewportShadingRatePaletteNV");
	pfn_vkCmdBindShadingRateImageNV = (PFN_vkCmdBindShadingRateImageNV)vkGetInstanceProcAddr(instance, "vkCmdBindShadingRateImageNV");
#endif // defined(VK_NV_shading_rate_image)
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
#if defined(VK_AMD_buffer_marker)
	pfn_vkCmdWriteBufferMarkerAMD = (PFN_vkCmdWriteBufferMarkerAMD)vkGetDeviceProcAddr(device, "vkCmdWriteBufferMarkerAMD");
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
#if defined(VK_ANDROID_native_buffer)
	pfn_vkGetSwapchainGrallocUsage2ANDROID = (PFN_vkGetSwapchainGrallocUsage2ANDROID)vkGetDeviceProcAddr(device, "vkGetSwapchainGrallocUsage2ANDROID");
	pfn_vkGetSwapchainGrallocUsageANDROID = (PFN_vkGetSwapchainGrallocUsageANDROID)vkGetDeviceProcAddr(device, "vkGetSwapchainGrallocUsageANDROID");
	pfn_vkAcquireImageANDROID = (PFN_vkAcquireImageANDROID)vkGetDeviceProcAddr(device, "vkAcquireImageANDROID");
	pfn_vkQueueSignalReleaseImageANDROID = (PFN_vkQueueSignalReleaseImageANDROID)vkGetDeviceProcAddr(device, "vkQueueSignalReleaseImageANDROID");
#endif // defined(VK_ANDROID_native_buffer)
#if defined(VK_EXT_buffer_device_address)
	pfn_vkGetBufferDeviceAddressEXT = (PFN_vkGetBufferDeviceAddressEXT)vkGetDeviceProcAddr(device, "vkGetBufferDeviceAddressEXT");
#endif // defined(VK_EXT_buffer_device_address)
#if defined(VK_EXT_calibrated_timestamps)
	pfn_vkGetCalibratedTimestampsEXT = (PFN_vkGetCalibratedTimestampsEXT)vkGetDeviceProcAddr(device, "vkGetCalibratedTimestampsEXT");
#endif // defined(VK_EXT_calibrated_timestamps)
#if defined(VK_EXT_conditional_rendering)
	pfn_vkCmdEndConditionalRenderingEXT = (PFN_vkCmdEndConditionalRenderingEXT)vkGetDeviceProcAddr(device, "vkCmdEndConditionalRenderingEXT");
	pfn_vkCmdBeginConditionalRenderingEXT = (PFN_vkCmdBeginConditionalRenderingEXT)vkGetDeviceProcAddr(device, "vkCmdBeginConditionalRenderingEXT");
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
	pfn_vkQueueInsertDebugUtilsLabelEXT = (PFN_vkQueueInsertDebugUtilsLabelEXT)vkGetDeviceProcAddr(device, "vkQueueInsertDebugUtilsLabelEXT");
	pfn_vkSetDebugUtilsObjectNameEXT = (PFN_vkSetDebugUtilsObjectNameEXT)vkGetDeviceProcAddr(device, "vkSetDebugUtilsObjectNameEXT");
	pfn_vkQueueBeginDebugUtilsLabelEXT = (PFN_vkQueueBeginDebugUtilsLabelEXT)vkGetDeviceProcAddr(device, "vkQueueBeginDebugUtilsLabelEXT");
	pfn_vkQueueEndDebugUtilsLabelEXT = (PFN_vkQueueEndDebugUtilsLabelEXT)vkGetDeviceProcAddr(device, "vkQueueEndDebugUtilsLabelEXT");
	pfn_vkCmdBeginDebugUtilsLabelEXT = (PFN_vkCmdBeginDebugUtilsLabelEXT)vkGetDeviceProcAddr(device, "vkCmdBeginDebugUtilsLabelEXT");
#endif // defined(VK_EXT_debug_utils)
#if defined(VK_EXT_discard_rectangles)
	pfn_vkCmdSetDiscardRectangleEXT = (PFN_vkCmdSetDiscardRectangleEXT)vkGetDeviceProcAddr(device, "vkCmdSetDiscardRectangleEXT");
#endif // defined(VK_EXT_discard_rectangles)
#if defined(VK_EXT_display_control)
	pfn_vkGetSwapchainCounterEXT = (PFN_vkGetSwapchainCounterEXT)vkGetDeviceProcAddr(device, "vkGetSwapchainCounterEXT");
	pfn_vkDisplayPowerControlEXT = (PFN_vkDisplayPowerControlEXT)vkGetDeviceProcAddr(device, "vkDisplayPowerControlEXT");
	pfn_vkRegisterDeviceEventEXT = (PFN_vkRegisterDeviceEventEXT)vkGetDeviceProcAddr(device, "vkRegisterDeviceEventEXT");
	pfn_vkRegisterDisplayEventEXT = (PFN_vkRegisterDisplayEventEXT)vkGetDeviceProcAddr(device, "vkRegisterDisplayEventEXT");
#endif // defined(VK_EXT_display_control)
#if defined(VK_EXT_extended_dynamic_state)
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
#endif // defined(VK_EXT_extended_dynamic_state)
#if defined(VK_EXT_external_memory_host)
	pfn_vkGetMemoryHostPointerPropertiesEXT = (PFN_vkGetMemoryHostPointerPropertiesEXT)vkGetDeviceProcAddr(device, "vkGetMemoryHostPointerPropertiesEXT");
#endif // defined(VK_EXT_external_memory_host)
#if defined(VK_EXT_full_screen_exclusive)
	pfn_vkAcquireFullScreenExclusiveModeEXT = (PFN_vkAcquireFullScreenExclusiveModeEXT)vkGetDeviceProcAddr(device, "vkAcquireFullScreenExclusiveModeEXT");
	pfn_vkReleaseFullScreenExclusiveModeEXT = (PFN_vkReleaseFullScreenExclusiveModeEXT)vkGetDeviceProcAddr(device, "vkReleaseFullScreenExclusiveModeEXT");
#endif // defined(VK_EXT_full_screen_exclusive)
#if defined(VK_EXT_full_screen_exclusive) && defined(VK_KHR_device_group) || defined(VK_EXT_full_screen_exclusive) && defined(VK_VERSION_1_1)
	pfn_vkGetDeviceGroupSurfacePresentModes2EXT = (PFN_vkGetDeviceGroupSurfacePresentModes2EXT)vkGetDeviceProcAddr(device, "vkGetDeviceGroupSurfacePresentModes2EXT");
#endif // defined(VK_EXT_full_screen_exclusive) && defined(VK_KHR_device_group) || defined(VK_EXT_full_screen_exclusive) && defined(VK_VERSION_1_1)
#if defined(VK_EXT_hdr_metadata)
	pfn_vkSetHdrMetadataEXT = (PFN_vkSetHdrMetadataEXT)vkGetDeviceProcAddr(device, "vkSetHdrMetadataEXT");
#endif // defined(VK_EXT_hdr_metadata)
#if defined(VK_EXT_host_query_reset)
	pfn_vkResetQueryPoolEXT = (PFN_vkResetQueryPoolEXT)vkGetDeviceProcAddr(device, "vkResetQueryPoolEXT");
#endif // defined(VK_EXT_host_query_reset)
#if defined(VK_EXT_image_drm_format_modifier)
	pfn_vkGetImageDrmFormatModifierPropertiesEXT = (PFN_vkGetImageDrmFormatModifierPropertiesEXT)vkGetDeviceProcAddr(device, "vkGetImageDrmFormatModifierPropertiesEXT");
#endif // defined(VK_EXT_image_drm_format_modifier)
#if defined(VK_EXT_line_rasterization)
	pfn_vkCmdSetLineStippleEXT = (PFN_vkCmdSetLineStippleEXT)vkGetDeviceProcAddr(device, "vkCmdSetLineStippleEXT");
#endif // defined(VK_EXT_line_rasterization)
#if defined(VK_EXT_private_data)
	pfn_vkDestroyPrivateDataSlotEXT = (PFN_vkDestroyPrivateDataSlotEXT)vkGetDeviceProcAddr(device, "vkDestroyPrivateDataSlotEXT");
	pfn_vkSetPrivateDataEXT = (PFN_vkSetPrivateDataEXT)vkGetDeviceProcAddr(device, "vkSetPrivateDataEXT");
	pfn_vkCreatePrivateDataSlotEXT = (PFN_vkCreatePrivateDataSlotEXT)vkGetDeviceProcAddr(device, "vkCreatePrivateDataSlotEXT");
	pfn_vkGetPrivateDataEXT = (PFN_vkGetPrivateDataEXT)vkGetDeviceProcAddr(device, "vkGetPrivateDataEXT");
#endif // defined(VK_EXT_private_data)
#if defined(VK_EXT_sample_locations)
	pfn_vkCmdSetSampleLocationsEXT = (PFN_vkCmdSetSampleLocationsEXT)vkGetDeviceProcAddr(device, "vkCmdSetSampleLocationsEXT");
#endif // defined(VK_EXT_sample_locations)
#if defined(VK_EXT_transform_feedback)
	pfn_vkCmdEndQueryIndexedEXT = (PFN_vkCmdEndQueryIndexedEXT)vkGetDeviceProcAddr(device, "vkCmdEndQueryIndexedEXT");
	pfn_vkCmdEndTransformFeedbackEXT = (PFN_vkCmdEndTransformFeedbackEXT)vkGetDeviceProcAddr(device, "vkCmdEndTransformFeedbackEXT");
	pfn_vkCmdBindTransformFeedbackBuffersEXT = (PFN_vkCmdBindTransformFeedbackBuffersEXT)vkGetDeviceProcAddr(device, "vkCmdBindTransformFeedbackBuffersEXT");
	pfn_vkCmdBeginTransformFeedbackEXT = (PFN_vkCmdBeginTransformFeedbackEXT)vkGetDeviceProcAddr(device, "vkCmdBeginTransformFeedbackEXT");
	pfn_vkCmdBeginQueryIndexedEXT = (PFN_vkCmdBeginQueryIndexedEXT)vkGetDeviceProcAddr(device, "vkCmdBeginQueryIndexedEXT");
	pfn_vkCmdDrawIndirectByteCountEXT = (PFN_vkCmdDrawIndirectByteCountEXT)vkGetDeviceProcAddr(device, "vkCmdDrawIndirectByteCountEXT");
#endif // defined(VK_EXT_transform_feedback)
#if defined(VK_EXT_validation_cache)
	pfn_vkMergeValidationCachesEXT = (PFN_vkMergeValidationCachesEXT)vkGetDeviceProcAddr(device, "vkMergeValidationCachesEXT");
	pfn_vkDestroyValidationCacheEXT = (PFN_vkDestroyValidationCacheEXT)vkGetDeviceProcAddr(device, "vkDestroyValidationCacheEXT");
	pfn_vkCreateValidationCacheEXT = (PFN_vkCreateValidationCacheEXT)vkGetDeviceProcAddr(device, "vkCreateValidationCacheEXT");
	pfn_vkGetValidationCacheDataEXT = (PFN_vkGetValidationCacheDataEXT)vkGetDeviceProcAddr(device, "vkGetValidationCacheDataEXT");
#endif // defined(VK_EXT_validation_cache)
#if defined(VK_GOOGLE_display_timing)
	pfn_vkGetRefreshCycleDurationGOOGLE = (PFN_vkGetRefreshCycleDurationGOOGLE)vkGetDeviceProcAddr(device, "vkGetRefreshCycleDurationGOOGLE");
	pfn_vkGetPastPresentationTimingGOOGLE = (PFN_vkGetPastPresentationTimingGOOGLE)vkGetDeviceProcAddr(device, "vkGetPastPresentationTimingGOOGLE");
#endif // defined(VK_GOOGLE_display_timing)
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
#if defined(VK_KHR_bind_memory2)
	pfn_vkBindBufferMemory2KHR = (PFN_vkBindBufferMemory2KHR)vkGetDeviceProcAddr(device, "vkBindBufferMemory2KHR");
	pfn_vkBindImageMemory2KHR = (PFN_vkBindImageMemory2KHR)vkGetDeviceProcAddr(device, "vkBindImageMemory2KHR");
#endif // defined(VK_KHR_bind_memory2)
#if defined(VK_KHR_buffer_device_address)
	pfn_vkGetDeviceMemoryOpaqueCaptureAddressKHR = (PFN_vkGetDeviceMemoryOpaqueCaptureAddressKHR)vkGetDeviceProcAddr(device, "vkGetDeviceMemoryOpaqueCaptureAddressKHR");
	pfn_vkGetBufferDeviceAddressKHR = (PFN_vkGetBufferDeviceAddressKHR)vkGetDeviceProcAddr(device, "vkGetBufferDeviceAddressKHR");
	pfn_vkGetBufferOpaqueCaptureAddressKHR = (PFN_vkGetBufferOpaqueCaptureAddressKHR)vkGetDeviceProcAddr(device, "vkGetBufferOpaqueCaptureAddressKHR");
#endif // defined(VK_KHR_buffer_device_address)
#if defined(VK_KHR_copy_commands2)
	pfn_vkCmdCopyImageToBuffer2KHR = (PFN_vkCmdCopyImageToBuffer2KHR)vkGetDeviceProcAddr(device, "vkCmdCopyImageToBuffer2KHR");
	pfn_vkCmdCopyBuffer2KHR = (PFN_vkCmdCopyBuffer2KHR)vkGetDeviceProcAddr(device, "vkCmdCopyBuffer2KHR");
	pfn_vkCmdCopyImage2KHR = (PFN_vkCmdCopyImage2KHR)vkGetDeviceProcAddr(device, "vkCmdCopyImage2KHR");
	pfn_vkCmdCopyBufferToImage2KHR = (PFN_vkCmdCopyBufferToImage2KHR)vkGetDeviceProcAddr(device, "vkCmdCopyBufferToImage2KHR");
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
#if defined(VK_KHR_descriptor_update_template) && defined(VK_KHR_push_descriptor) || defined(VK_KHR_push_descriptor) && defined(VK_VERSION_1_1)
	pfn_vkCmdPushDescriptorSetWithTemplateKHR = (PFN_vkCmdPushDescriptorSetWithTemplateKHR)vkGetDeviceProcAddr(device, "vkCmdPushDescriptorSetWithTemplateKHR");
#endif // defined(VK_KHR_descriptor_update_template) && defined(VK_KHR_push_descriptor) || defined(VK_KHR_push_descriptor) && defined(VK_VERSION_1_1)
#if defined(VK_KHR_device_group)
	pfn_vkGetDeviceGroupPeerMemoryFeaturesKHR = (PFN_vkGetDeviceGroupPeerMemoryFeaturesKHR)vkGetDeviceProcAddr(device, "vkGetDeviceGroupPeerMemoryFeaturesKHR");
	pfn_vkCmdSetDeviceMaskKHR = (PFN_vkCmdSetDeviceMaskKHR)vkGetDeviceProcAddr(device, "vkCmdSetDeviceMaskKHR");
	pfn_vkCmdDispatchBaseKHR = (PFN_vkCmdDispatchBaseKHR)vkGetDeviceProcAddr(device, "vkCmdDispatchBaseKHR");
#endif // defined(VK_KHR_device_group)
#if defined(VK_KHR_device_group) && defined(VK_KHR_surface) || defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1)
	pfn_vkGetDeviceGroupPresentCapabilitiesKHR = (PFN_vkGetDeviceGroupPresentCapabilitiesKHR)vkGetDeviceProcAddr(device, "vkGetDeviceGroupPresentCapabilitiesKHR");
	pfn_vkGetDeviceGroupSurfacePresentModesKHR = (PFN_vkGetDeviceGroupSurfacePresentModesKHR)vkGetDeviceProcAddr(device, "vkGetDeviceGroupSurfacePresentModesKHR");
#endif // defined(VK_KHR_device_group) && defined(VK_KHR_surface) || defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1)
#if defined(VK_KHR_device_group) && defined(VK_KHR_swapchain) || defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1)
	pfn_vkAcquireNextImage2KHR = (PFN_vkAcquireNextImage2KHR)vkGetDeviceProcAddr(device, "vkAcquireNextImage2KHR");
#endif // defined(VK_KHR_device_group) && defined(VK_KHR_swapchain) || defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1)
#if defined(VK_KHR_display_swapchain)
	pfn_vkCreateSharedSwapchainsKHR = (PFN_vkCreateSharedSwapchainsKHR)vkGetDeviceProcAddr(device, "vkCreateSharedSwapchainsKHR");
#endif // defined(VK_KHR_display_swapchain)
#if defined(VK_KHR_draw_indirect_count)
	pfn_vkCmdDrawIndirectCountKHR = (PFN_vkCmdDrawIndirectCountKHR)vkGetDeviceProcAddr(device, "vkCmdDrawIndirectCountKHR");
	pfn_vkCmdDrawIndexedIndirectCountKHR = (PFN_vkCmdDrawIndexedIndirectCountKHR)vkGetDeviceProcAddr(device, "vkCmdDrawIndexedIndirectCountKHR");
#endif // defined(VK_KHR_draw_indirect_count)
#if defined(VK_KHR_external_fence_fd)
	pfn_vkImportFenceFdKHR = (PFN_vkImportFenceFdKHR)vkGetDeviceProcAddr(device, "vkImportFenceFdKHR");
	pfn_vkGetFenceFdKHR = (PFN_vkGetFenceFdKHR)vkGetDeviceProcAddr(device, "vkGetFenceFdKHR");
#endif // defined(VK_KHR_external_fence_fd)
#if defined(VK_KHR_external_fence_win32)
	pfn_vkGetFenceWin32HandleKHR = (PFN_vkGetFenceWin32HandleKHR)vkGetDeviceProcAddr(device, "vkGetFenceWin32HandleKHR");
	pfn_vkImportFenceWin32HandleKHR = (PFN_vkImportFenceWin32HandleKHR)vkGetDeviceProcAddr(device, "vkImportFenceWin32HandleKHR");
#endif // defined(VK_KHR_external_fence_win32)
#if defined(VK_KHR_external_memory_fd)
	pfn_vkGetMemoryFdKHR = (PFN_vkGetMemoryFdKHR)vkGetDeviceProcAddr(device, "vkGetMemoryFdKHR");
	pfn_vkGetMemoryFdPropertiesKHR = (PFN_vkGetMemoryFdPropertiesKHR)vkGetDeviceProcAddr(device, "vkGetMemoryFdPropertiesKHR");
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
#if defined(VK_KHR_get_memory_requirements2)
	pfn_vkGetImageMemoryRequirements2KHR = (PFN_vkGetImageMemoryRequirements2KHR)vkGetDeviceProcAddr(device, "vkGetImageMemoryRequirements2KHR");
	pfn_vkGetBufferMemoryRequirements2KHR = (PFN_vkGetBufferMemoryRequirements2KHR)vkGetDeviceProcAddr(device, "vkGetBufferMemoryRequirements2KHR");
	pfn_vkGetImageSparseMemoryRequirements2KHR = (PFN_vkGetImageSparseMemoryRequirements2KHR)vkGetDeviceProcAddr(device, "vkGetImageSparseMemoryRequirements2KHR");
#endif // defined(VK_KHR_get_memory_requirements2)
#if defined(VK_KHR_maintenance1)
	pfn_vkTrimCommandPoolKHR = (PFN_vkTrimCommandPoolKHR)vkGetDeviceProcAddr(device, "vkTrimCommandPoolKHR");
#endif // defined(VK_KHR_maintenance1)
#if defined(VK_KHR_maintenance3)
	pfn_vkGetDescriptorSetLayoutSupportKHR = (PFN_vkGetDescriptorSetLayoutSupportKHR)vkGetDeviceProcAddr(device, "vkGetDescriptorSetLayoutSupportKHR");
#endif // defined(VK_KHR_maintenance3)
#if defined(VK_KHR_performance_query)
	pfn_vkAcquireProfilingLockKHR = (PFN_vkAcquireProfilingLockKHR)vkGetDeviceProcAddr(device, "vkAcquireProfilingLockKHR");
	pfn_vkReleaseProfilingLockKHR = (PFN_vkReleaseProfilingLockKHR)vkGetDeviceProcAddr(device, "vkReleaseProfilingLockKHR");
#endif // defined(VK_KHR_performance_query)
#if defined(VK_KHR_pipeline_executable_properties)
	pfn_vkGetPipelineExecutableInternalRepresentationsKHR = (PFN_vkGetPipelineExecutableInternalRepresentationsKHR)vkGetDeviceProcAddr(device, "vkGetPipelineExecutableInternalRepresentationsKHR");
	pfn_vkGetPipelineExecutablePropertiesKHR = (PFN_vkGetPipelineExecutablePropertiesKHR)vkGetDeviceProcAddr(device, "vkGetPipelineExecutablePropertiesKHR");
	pfn_vkGetPipelineExecutableStatisticsKHR = (PFN_vkGetPipelineExecutableStatisticsKHR)vkGetDeviceProcAddr(device, "vkGetPipelineExecutableStatisticsKHR");
#endif // defined(VK_KHR_pipeline_executable_properties)
#if defined(VK_KHR_push_descriptor)
	pfn_vkCmdPushDescriptorSetKHR = (PFN_vkCmdPushDescriptorSetKHR)vkGetDeviceProcAddr(device, "vkCmdPushDescriptorSetKHR");
#endif // defined(VK_KHR_push_descriptor)
#if defined(VK_KHR_ray_tracing)
	pfn_vkCreateRayTracingPipelinesKHR = (PFN_vkCreateRayTracingPipelinesKHR)vkGetDeviceProcAddr(device, "vkCreateRayTracingPipelinesKHR");
	pfn_vkGetRayTracingShaderGroupHandlesKHR = (PFN_vkGetRayTracingShaderGroupHandlesKHR)vkGetDeviceProcAddr(device, "vkGetRayTracingShaderGroupHandlesKHR");
	pfn_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR = (PFN_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR)vkGetDeviceProcAddr(device, "vkGetRayTracingCaptureReplayShaderGroupHandlesKHR");
	pfn_vkCreateAccelerationStructureKHR = (PFN_vkCreateAccelerationStructureKHR)vkGetDeviceProcAddr(device, "vkCreateAccelerationStructureKHR");
	pfn_vkDestroyAccelerationStructureKHR = (PFN_vkDestroyAccelerationStructureKHR)vkGetDeviceProcAddr(device, "vkDestroyAccelerationStructureKHR");
	pfn_vkGetAccelerationStructureMemoryRequirementsKHR = (PFN_vkGetAccelerationStructureMemoryRequirementsKHR)vkGetDeviceProcAddr(device, "vkGetAccelerationStructureMemoryRequirementsKHR");
	pfn_vkBindAccelerationStructureMemoryKHR = (PFN_vkBindAccelerationStructureMemoryKHR)vkGetDeviceProcAddr(device, "vkBindAccelerationStructureMemoryKHR");
	pfn_vkCmdBuildAccelerationStructureKHR = (PFN_vkCmdBuildAccelerationStructureKHR)vkGetDeviceProcAddr(device, "vkCmdBuildAccelerationStructureKHR");
	pfn_vkCmdBuildAccelerationStructureIndirectKHR = (PFN_vkCmdBuildAccelerationStructureIndirectKHR)vkGetDeviceProcAddr(device, "vkCmdBuildAccelerationStructureIndirectKHR");
	pfn_vkBuildAccelerationStructureKHR = (PFN_vkBuildAccelerationStructureKHR)vkGetDeviceProcAddr(device, "vkBuildAccelerationStructureKHR");
	pfn_vkCopyAccelerationStructureKHR = (PFN_vkCopyAccelerationStructureKHR)vkGetDeviceProcAddr(device, "vkCopyAccelerationStructureKHR");
	pfn_vkCopyAccelerationStructureToMemoryKHR = (PFN_vkCopyAccelerationStructureToMemoryKHR)vkGetDeviceProcAddr(device, "vkCopyAccelerationStructureToMemoryKHR");
	pfn_vkCopyMemoryToAccelerationStructureKHR = (PFN_vkCopyMemoryToAccelerationStructureKHR)vkGetDeviceProcAddr(device, "vkCopyMemoryToAccelerationStructureKHR");
	pfn_vkCmdTraceRaysKHR = (PFN_vkCmdTraceRaysKHR)vkGetDeviceProcAddr(device, "vkCmdTraceRaysKHR");
	pfn_vkWriteAccelerationStructuresPropertiesKHR = (PFN_vkWriteAccelerationStructuresPropertiesKHR)vkGetDeviceProcAddr(device, "vkWriteAccelerationStructuresPropertiesKHR");
	pfn_vkCmdCopyAccelerationStructureKHR = (PFN_vkCmdCopyAccelerationStructureKHR)vkGetDeviceProcAddr(device, "vkCmdCopyAccelerationStructureKHR");
	pfn_vkCmdCopyAccelerationStructureToMemoryKHR = (PFN_vkCmdCopyAccelerationStructureToMemoryKHR)vkGetDeviceProcAddr(device, "vkCmdCopyAccelerationStructureToMemoryKHR");
	pfn_vkCmdCopyMemoryToAccelerationStructureKHR = (PFN_vkCmdCopyMemoryToAccelerationStructureKHR)vkGetDeviceProcAddr(device, "vkCmdCopyMemoryToAccelerationStructureKHR");
	pfn_vkGetAccelerationStructureDeviceAddressKHR = (PFN_vkGetAccelerationStructureDeviceAddressKHR)vkGetDeviceProcAddr(device, "vkGetAccelerationStructureDeviceAddressKHR");
	pfn_vkCmdWriteAccelerationStructuresPropertiesKHR = (PFN_vkCmdWriteAccelerationStructuresPropertiesKHR)vkGetDeviceProcAddr(device, "vkCmdWriteAccelerationStructuresPropertiesKHR");
	pfn_vkCmdTraceRaysIndirectKHR = (PFN_vkCmdTraceRaysIndirectKHR)vkGetDeviceProcAddr(device, "vkCmdTraceRaysIndirectKHR");
	pfn_vkGetDeviceAccelerationStructureCompatibilityKHR = (PFN_vkGetDeviceAccelerationStructureCompatibilityKHR)vkGetDeviceProcAddr(device, "vkGetDeviceAccelerationStructureCompatibilityKHR");
#endif // defined(VK_KHR_ray_tracing)
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
#if defined(VK_KHR_timeline_semaphore)
	pfn_vkWaitSemaphoresKHR = (PFN_vkWaitSemaphoresKHR)vkGetDeviceProcAddr(device, "vkWaitSemaphoresKHR");
	pfn_vkGetSemaphoreCounterValueKHR = (PFN_vkGetSemaphoreCounterValueKHR)vkGetDeviceProcAddr(device, "vkGetSemaphoreCounterValueKHR");
	pfn_vkSignalSemaphoreKHR = (PFN_vkSignalSemaphoreKHR)vkGetDeviceProcAddr(device, "vkSignalSemaphoreKHR");
#endif // defined(VK_KHR_timeline_semaphore)
#if defined(VK_NVX_image_view_handle)
	pfn_vkGetImageViewHandleNVX = (PFN_vkGetImageViewHandleNVX)vkGetDeviceProcAddr(device, "vkGetImageViewHandleNVX");
	pfn_vkGetImageViewAddressNVX = (PFN_vkGetImageViewAddressNVX)vkGetDeviceProcAddr(device, "vkGetImageViewAddressNVX");
#endif // defined(VK_NVX_image_view_handle)
#if defined(VK_NV_clip_space_w_scaling)
	pfn_vkCmdSetViewportWScalingNV = (PFN_vkCmdSetViewportWScalingNV)vkGetDeviceProcAddr(device, "vkCmdSetViewportWScalingNV");
#endif // defined(VK_NV_clip_space_w_scaling)
#if defined(VK_NV_device_diagnostic_checkpoints)
	pfn_vkGetQueueCheckpointDataNV = (PFN_vkGetQueueCheckpointDataNV)vkGetDeviceProcAddr(device, "vkGetQueueCheckpointDataNV");
	pfn_vkCmdSetCheckpointNV = (PFN_vkCmdSetCheckpointNV)vkGetDeviceProcAddr(device, "vkCmdSetCheckpointNV");
#endif // defined(VK_NV_device_diagnostic_checkpoints)
#if defined(VK_NV_device_generated_commands)
	pfn_vkGetGeneratedCommandsMemoryRequirementsNV = (PFN_vkGetGeneratedCommandsMemoryRequirementsNV)vkGetDeviceProcAddr(device, "vkGetGeneratedCommandsMemoryRequirementsNV");
	pfn_vkCreateIndirectCommandsLayoutNV = (PFN_vkCreateIndirectCommandsLayoutNV)vkGetDeviceProcAddr(device, "vkCreateIndirectCommandsLayoutNV");
	pfn_vkCmdPreprocessGeneratedCommandsNV = (PFN_vkCmdPreprocessGeneratedCommandsNV)vkGetDeviceProcAddr(device, "vkCmdPreprocessGeneratedCommandsNV");
	pfn_vkCmdExecuteGeneratedCommandsNV = (PFN_vkCmdExecuteGeneratedCommandsNV)vkGetDeviceProcAddr(device, "vkCmdExecuteGeneratedCommandsNV");
	pfn_vkCmdBindPipelineShaderGroupNV = (PFN_vkCmdBindPipelineShaderGroupNV)vkGetDeviceProcAddr(device, "vkCmdBindPipelineShaderGroupNV");
	pfn_vkDestroyIndirectCommandsLayoutNV = (PFN_vkDestroyIndirectCommandsLayoutNV)vkGetDeviceProcAddr(device, "vkDestroyIndirectCommandsLayoutNV");
#endif // defined(VK_NV_device_generated_commands)
#if defined(VK_NV_external_memory_win32)
	pfn_vkGetMemoryWin32HandleNV = (PFN_vkGetMemoryWin32HandleNV)vkGetDeviceProcAddr(device, "vkGetMemoryWin32HandleNV");
#endif // defined(VK_NV_external_memory_win32)
#if defined(VK_NV_mesh_shader)
	pfn_vkCmdDrawMeshTasksNV = (PFN_vkCmdDrawMeshTasksNV)vkGetDeviceProcAddr(device, "vkCmdDrawMeshTasksNV");
	pfn_vkCmdDrawMeshTasksIndirectNV = (PFN_vkCmdDrawMeshTasksIndirectNV)vkGetDeviceProcAddr(device, "vkCmdDrawMeshTasksIndirectNV");
	pfn_vkCmdDrawMeshTasksIndirectCountNV = (PFN_vkCmdDrawMeshTasksIndirectCountNV)vkGetDeviceProcAddr(device, "vkCmdDrawMeshTasksIndirectCountNV");
#endif // defined(VK_NV_mesh_shader)
#if defined(VK_NV_ray_tracing)
	pfn_vkDestroyAccelerationStructureNV = (PFN_vkDestroyAccelerationStructureNV)vkGetDeviceProcAddr(device, "vkDestroyAccelerationStructureNV");
	pfn_vkCmdBuildAccelerationStructureNV = (PFN_vkCmdBuildAccelerationStructureNV)vkGetDeviceProcAddr(device, "vkCmdBuildAccelerationStructureNV");
	pfn_vkCreateAccelerationStructureNV = (PFN_vkCreateAccelerationStructureNV)vkGetDeviceProcAddr(device, "vkCreateAccelerationStructureNV");
	pfn_vkGetAccelerationStructureMemoryRequirementsNV = (PFN_vkGetAccelerationStructureMemoryRequirementsNV)vkGetDeviceProcAddr(device, "vkGetAccelerationStructureMemoryRequirementsNV");
	pfn_vkBindAccelerationStructureMemoryNV = (PFN_vkBindAccelerationStructureMemoryNV)vkGetDeviceProcAddr(device, "vkBindAccelerationStructureMemoryNV");
	pfn_vkCmdCopyAccelerationStructureNV = (PFN_vkCmdCopyAccelerationStructureNV)vkGetDeviceProcAddr(device, "vkCmdCopyAccelerationStructureNV");
	pfn_vkCmdTraceRaysNV = (PFN_vkCmdTraceRaysNV)vkGetDeviceProcAddr(device, "vkCmdTraceRaysNV");
	pfn_vkCreateRayTracingPipelinesNV = (PFN_vkCreateRayTracingPipelinesNV)vkGetDeviceProcAddr(device, "vkCreateRayTracingPipelinesNV");
	pfn_vkGetRayTracingShaderGroupHandlesNV = (PFN_vkGetRayTracingShaderGroupHandlesNV)vkGetDeviceProcAddr(device, "vkGetRayTracingShaderGroupHandlesNV");
	pfn_vkGetAccelerationStructureHandleNV = (PFN_vkGetAccelerationStructureHandleNV)vkGetDeviceProcAddr(device, "vkGetAccelerationStructureHandleNV");
	pfn_vkCmdWriteAccelerationStructuresPropertiesNV = (PFN_vkCmdWriteAccelerationStructuresPropertiesNV)vkGetDeviceProcAddr(device, "vkCmdWriteAccelerationStructuresPropertiesNV");
	pfn_vkCompileDeferredNV = (PFN_vkCompileDeferredNV)vkGetDeviceProcAddr(device, "vkCompileDeferredNV");
#endif // defined(VK_NV_ray_tracing)
#if defined(VK_NV_scissor_exclusive)
	pfn_vkCmdSetExclusiveScissorNV = (PFN_vkCmdSetExclusiveScissorNV)vkGetDeviceProcAddr(device, "vkCmdSetExclusiveScissorNV");
#endif // defined(VK_NV_scissor_exclusive)
#if defined(VK_NV_shading_rate_image)
	pfn_vkCmdSetCoarseSampleOrderNV = (PFN_vkCmdSetCoarseSampleOrderNV)vkGetDeviceProcAddr(device, "vkCmdSetCoarseSampleOrderNV");
	pfn_vkCmdSetViewportShadingRatePaletteNV = (PFN_vkCmdSetViewportShadingRatePaletteNV)vkGetDeviceProcAddr(device, "vkCmdSetViewportShadingRatePaletteNV");
	pfn_vkCmdBindShadingRateImageNV = (PFN_vkCmdBindShadingRateImageNV)vkGetDeviceProcAddr(device, "vkCmdBindShadingRateImageNV");
#endif // defined(VK_NV_shading_rate_image)
}

#endif // defined(VK_NO_PROTOTYPES)
