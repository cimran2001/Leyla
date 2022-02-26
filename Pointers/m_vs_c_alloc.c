#include <stdio.h>
#include <stdlib.h>


void printArray(int *array, size_t size);


int main() {
    const size_t size = 1000;
    int* allocated_with_calloc = (int *)calloc(size, sizeof(int));
    int* allocated_with_malloc = (int *)malloc(size * sizeof(int));

    printf("Calloc: ");
    printArray(allocated_with_calloc, size);
    free(allocated_with_calloc);

    printf("Malloc: ");
    printArray(allocated_with_malloc, size);
    free(allocated_with_malloc);

    return 0;
}

void printArray(int *array, size_t size) {
    for (size_t i = 0; i < size; i++)
        printf("%d ", *(array + i));
    puts("");
}
