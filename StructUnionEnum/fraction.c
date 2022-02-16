#include <stdio.h>

typedef struct {
    int numer; // numerator => числитель
    int denom; // denominator => знаменатель
} Fraction;

Fraction createFraction(int numer, int denom);
Fraction addFractions(Fraction f1, Fraction f2);
Fraction subtractFractions(Fraction f1, Fraction f2);
Fraction simplifyFraction(Fraction f);
void printFraction(Fraction f);


int main() {
    int numer, denom;

    printf("Enter numer: ");
    scanf("%d", &numer);

    printf("Enter denom: ");
    scanf("%d", &denom);

    Fraction f = createFraction(numer, denom);

    Fraction simplified = simplifyFraction(f);

    printFraction(f);
    printFraction(simplified);

    printFraction(addFractions(f, simplified));
    printFraction(subtractFractions(f, simplified));

    return 0;
}

Fraction createFraction(int numer, int denom) {
    Fraction f;

    f.numer = numer;
    f.denom = denom;

    return f;
}

Fraction addFractions(Fraction f1, Fraction f2) {
    Fraction f = createFraction(f1.numer * f2.denom + f1.denom * f2.numer, f1.denom * f2.denom);
    return simplifyFraction(f);
}

Fraction subtractFractions(Fraction f1, Fraction f2) {
    Fraction f = createFraction(f1.numer * f2.denom - f1.denom * f2.numer, f1.denom * f2.denom);
    return simplifyFraction(f);
}

Fraction simplifyFraction(Fraction f) {
    if (f.numer == 0) {
        f.denom = 1;
        return f;
    }

    if (f.denom < 0) { // 1/-2 => -1/2
        f.denom *= -1;
        f.numer *= -1;
    }

    int min = f.numer > f.denom ? f.denom : f.numer;
    
    for (int i = min; i > 1; i--) {
        if (f.numer % i == 0 && f.denom % i == 0) {
            f.numer /= i;
            f.denom /= i;
            break;
        }
    }

    return f;
}

void printFraction(Fraction f) {
    printf("%d/%d\n", f.numer, f.denom);
}
