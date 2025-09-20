#include "allocator.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>

typedef struct block {
    size_t size;
    int free;
    struct block* next;
} block_t;

#define BLOCK_SIZE sizeof(block_t)

static block_t* free_list = NULL;

void* my_malloc(size_t size) {
    block_t* current = free_list;
    block_t* last = NULL;

    // first-fit search
  
    while (current) {
        if (current->free && current->size >= size) {
            current->free = 0;
            return (void*)(current + 1);
        }
        last = current;
        current = current->next;
    }

    // allocate new block
  
    void* mem = sbrk(size + BLOCK_SIZE);
    if (mem == (void*) -1) {
        return NULL;   // sbrk failed
    }

    block_t* new_block = (block_t*) mem;
    new_block->size = size;
    new_block->free = 0;
    new_block->next = NULL;

    if (last) {
        last->next = new_block;
    } else {
        free_list = new_block;
    }

    return (void*)(new_block + 1);
}

void my_free(void* ptr) {
    if (!ptr) return;
    block_t* block_ptr = ((block_t*)ptr) - 1;
    block_ptr->free = 1;
}
