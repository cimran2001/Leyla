#include <stdio.h>


int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d%*c", &number);

    int sum = 0;
    for (int i = 1; i < number; i++)
        if (number % i == 0)
            sum += i;
    
    printf(number > sum ? "Is deficient.\n" : "Is not deficient.\n");
    return 0;
}