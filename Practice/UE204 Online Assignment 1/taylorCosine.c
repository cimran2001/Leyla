#include <stdio.h>
#include <math.h>

#define ull unsigned long long

ull fact(int num);


int main() {
    int n;
    double x;

    printf("Enter n and x respectively: ");
    scanf("%d %lf", &n, &x);

    double result = 0;
    for (int i = 0; i <= n; i++)
        result += pow(-1, i) * pow(x * M_PI, 2 * i) / fact(2 * i);
    
    printf("cos(%gπ) = %lf\n", x, result);
    return 0;
}

ull fact(int num) {
    return num <= 1 ? 1 : num * fact(num - 1);
}
