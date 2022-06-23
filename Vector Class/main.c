#include <stdio.h>
#include <stdbool.h>

int arr[10];


bool at(int index, int *output) {
    if (index < 0 || index >= 10)
        return false;

    *output = arr[index];
    return true;
}


int main() {
    arr[5] = 3;


    int x;
    if (at(15, &x) == true) {
        printf("Element %d\n", x);
    } else {
        printf("Not a correct index.\n");
    }
}
