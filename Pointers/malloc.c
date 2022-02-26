#include <stdio.h>
#include <stdlib.h>


int main() {
    int *p_x = (int *)malloc(sizeof(int)); // memory allocation
    // int *p_x = (int *)calloc(1, sizeof(int));

    *p_x = 1;
    printf("Address: %p\n", &p_x);
    printf("Value: %p\n", p_x);
    printf("Value of x: %d\n", *p_x);

    free(p_x);
    p_x = NULL;

    return 0;
}
