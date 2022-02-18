#include <stdio.h>
#include <stdlib.h>


typedef struct {
    int numer;
    int denom;
} Fraction;

size_t gcd(size_t a, size_t b);

Fraction createFraction(int numer, int denom);
Fraction simplifyFraction(Fraction fraction);

Fraction addFractions(Fraction fraction1, Fraction fraction2);
Fraction subtractFractions(Fraction fraction1, Fraction fraction2);
Fraction multiplyFractions(Fraction fraction1, Fraction fraction2);
Fraction divideFractions(Fraction fraction1, Fraction fraction2);

void printFraction(Fraction fraction);

int main() {
    Fraction fractions[2];

    for (size_t i = 0; i < 2; i++) {
        int numer, denom;
        printf("Enter numerator and denominator of fraction %lu: ", i + 1);
        scanf("%d%d", &numer, &denom);

        fractions[i] = createFraction(numer, denom);
    }

    printFraction(simplifyFraction(fractions[0]));
    printFraction(simplifyFraction(fractions[1]));

    printFraction(addFractions(fractions[0], fractions[1]));
    printFraction(subtractFractions(fractions[0], fractions[1]));
    printFraction(multiplyFractions(fractions[0], fractions[1]));
    printFraction(divideFractions(fractions[0], fractions[1]));

    return 0;
}

size_t gcd(size_t a, size_t b) {
    return b == 0 ? a : gcd(b, a % b);
}

Fraction createFraction(int numer, int denom) {
    Fraction fraction;
    
    fraction.numer = numer;
    fraction.denom = denom;

    if (denom == 0) {
        fraction.numer = 0;
        fraction.denom = 1;
    }

    return simplifyFraction(fraction);
}

Fraction simplifyFraction(Fraction fraction) {
    if (fraction.denom == 0) {
        fraction.numer = 0;
        fraction.denom = 1;
        return fraction;
    }
    
    if (fraction.numer == 0) {
        fraction.denom = 1;
        return fraction;
    }

    if (fraction.denom < 0) {
        fraction.numer *= -1;
        fraction.denom *= -1;
    }

    int divisor = gcd(abs(fraction.numer), fraction.denom);

    fraction.numer /= divisor;
    fraction.denom /= divisor;

    return fraction;
}

Fraction addFractions(Fraction fraction1, Fraction fraction2) {
    int newNumer = fraction1.numer * fraction2.denom + fraction2.numer * fraction1.denom;
    int newDenom = fraction1.denom * fraction2.denom;

    return createFraction(newNumer, newDenom); 
}

Fraction subtractFractions(Fraction fraction1, Fraction fraction2) {
    int newNumer = fraction1.numer * fraction2.denom - fraction2.numer * fraction1.denom;
    int newDenom = fraction1.denom * fraction2.denom;

    return createFraction(newNumer, newDenom); 
}

Fraction multiplyFractions(Fraction fraction1, Fraction fraction2) {
    return createFraction(fraction1.numer * fraction2.numer, fraction1.denom * fraction2.denom);
}

Fraction divideFractions(Fraction fraction1, Fraction fraction2) {
    if (fraction2.numer == 0)
        return createFraction(0, 1);

    return createFraction(fraction1.numer * fraction2.denom, fraction1.denom * fraction2.numer);
}

void printFraction(Fraction fraction) {
    printf("%d/%d\n", fraction.numer, fraction.denom);
}
