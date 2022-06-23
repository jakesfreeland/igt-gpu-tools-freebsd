// SPDX-License-Identifier: MIT
/*
 * Copyright © 2019 Intel Corporation
 */

/* TODO: FreeBSD - libkmod library */
#ifdef __linux__

#include "igt.h"
#include "igt_kmod.h"

IGT_TEST_DESCRIPTION("Basic sanity check of DRM's buddy allocator (struct drm_buddy)");

igt_main
{
	igt_kselftests("test-drm_buddy", NULL, NULL, NULL);
}
#endif /* __linux__ */
