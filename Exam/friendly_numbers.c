#include <stdio.h>


int main() {
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d%*c", &num1);
    printf("Enter second number: ");
    scanf("%d%*c", &num2);

    int sum = 0;
    for (int i = 1; i < num1; i++)
        if (num1 % i == 0)
            sum += i;

    printf("This numbers are %sfriendly.\n", sum == num2 ? "" : "not ");
    return 0;
}