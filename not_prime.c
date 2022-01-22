#include <stdio.h>


int isNotPrime(int number);


int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d%*c", &number);

    printf("%d has %s 2 divisors.\n", number,
        isNotPrime(number) ? "more than": "exactly");
    
    return 0;
}


int isNotPrime(int number) {
    for (int i = 2; i < number; i++)
        if (number % i == 0)
            return 1;
    
    return 0;
}
