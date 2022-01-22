#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    const int size = 5;
    int arr1[size], arr2[size];

    srand(time(NULL));

    for (int i = 0; i < size; i++)
        arr1[i] = rand() % 500;
    
    for (int i = 0; i < size; i++)
        printf("%d ", arr1[i]);
    printf("\n");

    int counter = 0;
    for (int i = 0; i < size; i++)
        if ((arr1[i] / 10) % 10 == 0)
            arr2[counter++] = arr1[i];
    
    for (int i = 0; i < counter; i++)
        printf("%d ", arr2[i]);
    printf("\n");

    // inds:   0,   1,   2,   3,   4,   5,   6
    // arr1: 100, 280, 357, 206, 138, 966, 800
    // arr2: 100, 206, 800


    // i => counter
    // 0 => 0
    // 3 => 1
    // 6 => 2

    return 0;
}