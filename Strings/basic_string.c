#include <stdio.h>
#include <stdlib.h>

int main() {

    // Incorrect variant!
    // char *string = (char *)malloc(sizeof(char) * 5);
    // string[0] = 'H';
    // string[1] = 'e';
    // string[2] = 'l';
    // string[3] = 'l';
    // string[4] = 'o';

    // printf("%s\n", string);
    // free(string);

    char string[] = "Hello"; // 'H', 'e', 'l', 'l', 'o', '\0'
    const char *string2 = "Hello";

    printf("%s\n", string);

    return 0;
}