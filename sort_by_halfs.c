#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    const int size = 10;
    int nums[size];

    srand(time(NULL));
    for (int i = 0; i < size; i++)
        nums[i] = rand() % 101;

    for (int i = 0; i < size; i++)
        printf("%d ", nums[i]);
    printf("\n");


    int swapped = 1;
    while (swapped) {
        swapped = 0;

        for (int i = 0; i < size / 2 - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                int temp = nums[i];
                nums[i] = nums[i + 1];
                nums[i + 1] = temp;
                swapped = 1;
            }
        }
    }

    swapped = 1;
    while (swapped) {
        swapped = 0;

        for (int i = size / 2; i < size - 1; i++) {
            if (nums[i] < nums[i + 1]) {
                int temp = nums[i];
                nums[i] = nums[i + 1];
                nums[i + 1] = temp;
                swapped = 1;
            }
        }
    }

    for (int i = 0; i < size; i++)
        printf("%d ", nums[i]);
    printf("\n");
}
