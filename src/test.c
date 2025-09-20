#include <stdio.h>
#include "allocator.h"

int main() {
    int* a = (int*) my_malloc(sizeof(int) * 5);
    for (int i = 0; i < 5; i++) a[i] = i * 10;

    for (int i = 0; i < 5; i++) printf("%d ", a[i]);
    printf("\n");

    my_free(a);

    char* str = (char*) my_malloc(20);
    snprintf(str, 20, "Hello World");
    printf("%s\n", str);

    my_free(str);
    return 0;
}
