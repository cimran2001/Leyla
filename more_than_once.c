#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    const int size = 10;
    int arr1[size], arr2[size];

    srand(time(NULL));

    for (int i = 0; i < size; i++)
        arr1[i] = rand() % 10;
    
    for (int i = 0; i < size; i++)
        printf("%d ", arr1[i]);
    printf("\n");

    int counter = 0;

    for (int i = 0; i < size; i++) {
        // left-side check
        int toCheck = 1;
        for (int j = 0; j < i; j++) {
            if (arr1[i] == arr1[j]) {
                toCheck = 0;
                break;
            }
        }
        if (toCheck == 0)
            continue;
        
        // right-side check
        for (int k = i + 1; k < size; k++) {
            if (arr1[i] == arr1[k]) {
                arr2[counter++] = arr1[i];
                break;
            }
        }
    }
    
    for (int i = 0; i < counter; i++)
        printf("%d ", arr2[i]);
    printf("\n"); 

    return 0;
}