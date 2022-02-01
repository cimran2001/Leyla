#include <stdio.h>


int main() {
    // int a, b, c;
    // a = 5;

    // int *p1, *p2, *p3;
    // p1 = &a;

    int x = 6;

    int *p_x = &x;

    int **p_p_x = &p_x;


    void *pointer = NULL;

    // printf("p_p_x address: \t\t%p\n", &p_p_x);
    // printf("p_p_x value: \t\t%p\n", p_p_x);

    // printf("p_x address: \t\t%p\n", &p_x);
    // printf("p_x value: \t\t%p\n", p_x);

    // printf("x address: \t\t%p\n", &x);
    // printf("x value: \t\t%d\n", x);

    // printf("x value via p_x: \t%d\n", *p_x);
    // printf("x value via p_p_x: \t%d\n", **p_p_x);

    *p_x = 5;
    printf("x value: \t\t%d\n", x);

    **p_p_x = 10;
    printf("x value: \t\t%d\n", x);



    return 0;
}
