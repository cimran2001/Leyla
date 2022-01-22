#include <stdio.h>


int main() {
    unsigned number;
    printf("Enter a positive number: ");
    scanf("%u%*c", &number);


    int sumOdds = 0, sumEvens = 0;

    while (number != 0) {
        int last_digit = number % 10;
        if (last_digit % 2 == 0) 
            sumEvens += last_digit;
        else 
            sumOdds += last_digit;

        number /= 10;
    }

    printf("Sum of odd digits: %d, of evens: %d.\n", sumOdds, sumEvens);
    return 0;
}