#include <stdio.h>


void swap(int *a, int *b);


int main() {
    int x = 5, y = 6;

    printf("x = %d, y = %d\n", x, y);

    swap(NULL, &y);

    printf("x = %d, y = %d\n", x, y);

    return 0;
}

void swap(int *a, int *b) {
    if (a == NULL || b == NULL)
        return;

    int temp = *a;
    *a = *b;
    *b = temp;
}
