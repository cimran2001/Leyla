#include <stdio.h>


int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d%*c", &number);

    int odds = 0, evens = 0;
    while (number != 0) {
        int last_digit = number % 10;
        if (last_digit % 2 == 0)
            evens++;
        else
            odds++;
        
        // last_digit % 2 ? odds++ : evens++;
        number /= 10;
    }

    printf("Odds: %d, evens: %d\n", odds, evens);
    return 0;
}
