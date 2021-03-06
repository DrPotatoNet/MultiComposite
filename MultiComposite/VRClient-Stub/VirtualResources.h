#pragma once
#include "openvr.h"

class VirtualResources
{
public:
	void* virtualResources;
	void* steamResources;

	// ------------------------------------
	// Shared Resource Methods
	// ------------------------------------

	/** Loads the specified resource into the provided buffer if large enough.
	* Returns the size in bytes of the buffer required to hold the specified resource. */
	uint32_t LoadSharedResource(const char* pchResourceName, char* pchBuffer, uint32_t unBufferLen);

	/** Provides the full path to the specified resource. Resource names can include named directories for
	* drivers and other things, and this resolves all of those and returns the actual physical path.
	* pchResourceTypeDirectory is the subdirectory of resources to look in. */
	uint32_t GetResourceFullPath(const char* pchResourceName, const char* pchResourceTypeDirectory, VR_OUT_STRING() char* pchPathBuffer, uint32_t unBufferLen);
};
