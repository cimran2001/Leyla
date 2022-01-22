#include <stdio.h>
#include <math.h>


int getDigitsCount(int number);


int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d%*c", &number);

    int power = getDigitsCount(number);
    
    int sum = 0;

    int temp = number;
    while (temp != 0) {
        int digit = temp % 10;
        sum += (int)pow(digit, power);
        temp /= 10;
    }

    printf("Is %sArmstrong number.\n", 
        sum != number ? "not " : "");
    
    return 0;
}


int getDigitsCount(int number) {
    int count = 0;
    for (; number != 0; count++, number /= 10);
    return count;
}
