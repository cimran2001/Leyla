#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    const int size = 10;
    int array[size];
    srand(time(NULL));
    

    for (int i = 0; i < size; i++)
        array[i] = rand() % 21 - 10; 

    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);
    printf("\n");


    int max = array[0], maxIndex = 0;
    for (int i = 0; i < size; i++) {
        if (max < array[i]) {
            maxIndex = i;
            max = array[i];
        }
    }
    printf("Max 1: %d\n", max);

    max = array[maxIndex == 0 ? 1 : 0];
    for (int i = 0; i < size; i++) {
        if (i == maxIndex)
            continue;

        if (max < array[i])
            max = array[i];
    }
    printf("Max 2: %d\n", max);

    return 0;
}
