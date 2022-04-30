#include <stdio.h>
#define ull unsigned long long

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    ull sum = 0;
    for (int i = 1; i <= number; i++)
        if (number % i == 0)
            sum += i;

    printf("Sum of divisors: %llu.\n", sum);
    return 0;
}
