#include <stdio.h>
#define MAX 5


void printArray(int array[MAX]);
int addTwoNumbers(int num1, int num2);


int main() {
    int arr[MAX];

    for (int i = 0; i < MAX; i++) {
        scanf("%d", &arr[i]);
    }

    printArray(arr);

    int sum = 0;
    for (int i = 0; i < MAX; i++) {
        sum += arr[i];
    }

    printf("Sum is: %d\n", sum);

    printArray(arr);

    sum = addTwoNumbers(arr[0], arr[1]);
    printf("%d + %d = %d\n", arr[0], arr[1], sum);

    return 0;
}

void printArray(int array[MAX]) {
    for (int i = 0; i < MAX; i++)
        printf("%d ", array[i]);
    printf("\n");
}

int addTwoNumbers(int num1, int num2) {
    return num1 + num2;
}
