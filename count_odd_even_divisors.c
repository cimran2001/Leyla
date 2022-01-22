#include <stdio.h>



int main() {
    unsigned number;
    printf("Enter a number: ");
    scanf("%d%*c", &number);

    int odds = 0, evens = 0;
    for (int i = 1; i <= number; i++) {
        if (number % i != 0)
            continue;

        i % 2 ? odds++ : evens++;
    }

    printf("The number of odd divisors: %d, of evens: %d.\n", odds, evens);
    return 0;
}