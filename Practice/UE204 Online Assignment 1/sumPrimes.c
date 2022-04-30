#include <stdio.h>
#define ull unsigned long long

int isPrime(int number);


int main() {
    int start, end;
    printf("Enter 2 numbers (first < second): ");
    scanf("%d %d", &start, &end);

    if (start >= end) {
        puts("Not a correct input. ");
        return -1;
    }

    ull sum = 0;
    for (; start <= end; start++)
        if (isPrime(start))
            sum += start;

    printf("The sum of primes within this range is %llu.\n", sum);
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
