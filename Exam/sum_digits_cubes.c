#include <stdio.h>


int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d%*c", &number);

    int sum = 0;
    while (number != 0) {
        int last_digit = number % 10;
        sum += last_digit * last_digit * last_digit;
        number /= 10;
    }

    printf("Result: %d\n", sum);
    return 0;
}
