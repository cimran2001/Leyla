#include <stdio.h>

#define ull unsigned long long

unsigned getNext(unsigned num);

int main() {
    unsigned xn = 27;
    ull summa = 1;

    do {
        summa += xn;
    } while ((xn = getNext(xn)) != 1);

    printf("%llu\n", summa);
    return 0;
}

unsigned getNext(unsigned num) {
    return num % 2 == 0 ? num / 2 : 3 * num + 1;
}