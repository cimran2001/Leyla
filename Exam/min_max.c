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


    int min = array[0], max = array[0];
    for (int i = 0; i < size; i++) {
        if (min > array[i])
            min = array[i];

        if (max < array[i])
            max = array[i];
    }
    printf("Min = %d, max = %d.\n", min, max);

    return 0;
}
