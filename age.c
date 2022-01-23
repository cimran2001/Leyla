#include <stdio.h>


int main() {
    unsigned age;
    printf("Введите возраст: ");
    scanf("%u%*c", &age);

    if (age < 1 || age > 150) {
        printf("Люди столько не живут. =)\n");
        return 0;
    }

    printf("Вам %u ", age);

    unsigned last_digit = age % 10;
    if ((age < 11 || age > 14) && last_digit >= 1 && last_digit <= 4)
        printf(last_digit == 1 ? "год.\n" : "года.\n");
    else
        printf("лет.\n");

    return 0;
}