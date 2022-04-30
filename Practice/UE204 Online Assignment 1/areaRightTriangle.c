#include <stdio.h>


int main() {
    float Ax, Ay;
    float Bx, By;

    printf("Enter x and y of A: ");
    scanf("%f %f", &Ax, &Ay);

    printf("Enter x and y of B: ");
    scanf("%f %f", &Bx, &By);

    float AC = Bx - Ax;
    float BC = By - Ay;

    float area = 0.5f * AC * BC;
    if (area < 0)
        area *= -1;

    printf("The area of triangle is %g.\n", area);
}
