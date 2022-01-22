#include <stdio.h>


int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d%*c", &number);

    int min = number % 10;
    number /= 10;

    while (number != 0) {
        int digit = number % 10;
        if (min > digit)
            min = digit;

        number /= 10;
    }

    printf("The minimal digit in this number is %d.\n", min);
    return 0;
}
