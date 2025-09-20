#ifndef ALLOCATOR_H
#define ALLOCATOR_H

#include <stddef.h>

// allocate a block of memory of given size

void* my_malloc(size_t size);

// free previously allocated block

void my_free(void* ptr);

#endif
