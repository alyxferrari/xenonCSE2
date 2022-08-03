// Released under the MIT licence.
// See LICENCE.txt for details.

#pragma once

#include <stddef.h>

unsigned char* readFile(const char* filename);
const unsigned char* FindResource(const char *name, const char *type, size_t *size);
