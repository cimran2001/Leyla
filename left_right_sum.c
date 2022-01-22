#include <stdio.h>

unsigned getDigitsCount(unsigned number);

int main() {
    unsigned number;
    printf("Enter a number: ");
    scanf("%u%*c", &number);

    // number : done
    // count of digits : done
    
    // count => count / 2 + (1 if count is odd) + count / 2

    unsigned count = getDigitsCount(number);

    unsigned sumLeft = 0, sumRight = 0;
    for (unsigned i = 0; i < count / 2; i++) {
        sumRight += number % 10;
        number /= 10;
    }

    if (count % 2 != 0)
        number /= 10;

    for (unsigned i = 0; i < count / 2; i++) {
        sumLeft += number % 10;
        number /= 10;
    }

    printf(sumLeft == sumRight ? "Equal sums.\n" : "Not equal sums.\n");
    return 0;
}


unsigned getDigitsCount(unsigned number) {
    unsigned count = 0;
    while (number != 0) {
        number /= 10;
        count++;
    }

    return count;
}
