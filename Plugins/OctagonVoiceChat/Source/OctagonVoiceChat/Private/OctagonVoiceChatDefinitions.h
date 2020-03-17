/*
	Copyright 2017 Octagon Interactive Ltd.
	support@octagon-interactive.com
*/

#pragma once

/** Max buffer size constants to match those defined in the voice engine subsystem. */
#ifndef MAX_UNCOMPRESSED_VOICE_BUFFER_SIZE
#define MAX_UNCOMPRESSED_VOICE_BUFFER_SIZE (22 * 1024)
#endif

#ifndef MAX_COMPRESSED_VOICE_BUFFER_SIZE
#define MAX_COMPRESSED_VOICE_BUFFER_SIZE (8 * 1024)
#endif

#ifndef MAX_VOICE_REMAINDER_SIZE
#define MAX_VOICE_REMAINDER_SIZE (1 * 1024)
#endif
