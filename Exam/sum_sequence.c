#include <stdio.h>


int main() {
    int numer = 2, denom_1 = 3, denom_2 = 3;
    double sum = 1;

    double fraction;

    do {
        fraction = (double)numer / (denom_1 * denom_2);
        sum += fraction * ((numer / 2) % 2 != 0 ? 1 : -1);

        numer += 2;
        denom_1 += 2;
        denom_2 *= 3;
    } while (fraction >= 0.001);

    printf("First sum: %.3lf\n", sum);

    sum = 1;
    numer = 2;
    denom_2 = 3;

    int temp = 1;
    denom_1 = 2;
    do {
        fraction = (double)numer / (denom_1 * denom_2);
        sum += fraction * ((numer / 2) % 2 != 0 ? 1 : -1);

        numer += 2;

        // First variant (with temporary variable)
        // int temp_sum = denom_1 + temp;
        // temp = denom_1;
        // denom_1 = temp_sum;

        // Second variant (without any additional variable)
        denom_1 += temp;
        temp = denom_1 - temp;

        denom_2 *= 3;
    } while (fraction >= 0.001);

    printf("Second sum: %.3lf\n", sum);
    return 0;
}

