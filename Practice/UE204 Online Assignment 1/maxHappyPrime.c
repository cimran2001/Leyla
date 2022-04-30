#include <stdio.h>

int isPrime(int number);
int isHappy(int number);
int sumDigitsSquared(int number);


int main() {
    int number;
    printf("Enter a positive number: ");
    scanf("%d", &number);
    if (number <= 0) {
        puts("Not a correct input.");
        return -1;
    }

    // int result = 0;
    // for (int i = number; i > 0; i--) {
    //     if (isPrime(i) && isHappy(i)) {
    //         result = i;
    //         break;
    //     }
    // }

    // if (result != 0)
    //     printf("Max Happy Prime: %d.\n", result);
    // else 
    //     printf("Not found.\n");

    int found = 0; // false
    for (int i = number; i > 0; i--) {
        if (isPrime(i) && isHappy(i)) {
            printf("Max Happy Prime: %d.\n", i);
            found = 1; // true
            break;
        }
    }
    if (!found)
        puts("Not found.");

    return 0;
}


int isPrime(int number) {
    if (number <= 1)
        return 0;

    for (int i = 2; i <= number / 2; i++)
        if (number % i == 0)
            return 0;
    
    return 1;
}

int isHappy(int number) {
    if (number == 1)
        return 1;
    if (number == 4)
        return 0;
    
    return isHappy(sumDigitsSquared(number));
}

int sumDigitsSquared(int number) {
    int sum = 0;

    while (number > 0) {
        int lastDigit = number % 10;
        sum += lastDigit * lastDigit;
        number /= 10;
    }

    return sum;
}
