#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main() { 
    if (false) {
        const int size = 6;
        int array[size] = {1, 2, 3, 4, 5, 6};
        printf("3rd element - %d\n", *(*(&array + 1) - 3));
    }


    size_t elementsCount;
    printf("How many elements do you want in array? ");
    scanf("%zu", &elementsCount);

    int *array = (int *)calloc(elementsCount, sizeof(int));
    // int *array = (int *)malloc(elementsCount * sizeof(int));

    for (size_t i = 0; i < elementsCount; i++) {
        printf("Enter element n.%zu: ", i + 1);
        scanf("%d%*c", array + i);
    }    

    for (size_t i = 0; i < elementsCount; i++)
        printf("%d ", array[i]); // *(array + i)
    puts("");

    free(array);
    array = NULL;

    return 0;
}
