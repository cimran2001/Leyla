#include <stdio.h>


int main() {
    char c = '\0';

    int num = c;

    printf("%c\n", c);
    printf("%d\n", num);

    printf("Size: %lu\n", sizeof(char));

    return 0;
}