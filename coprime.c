#include <stdio.h>


int coprime(int num1, int num2);


int main() {
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d%*c", &num1);

    printf("Enter second number: ");
    scanf("%d%*c", &num2);

    printf(coprime(num1, num2) ? "Coprime.\n" : "Not coprime.\n");
    return 0;
}


int coprime(int num1, int num2) {
    int min = num1 < num2 ? num1 : num2;
    for (int i = 2; i < min; i++)
        if (num1 % i == 0 && num2 % i == 0)
            return 0;
    
    return 1;
}
