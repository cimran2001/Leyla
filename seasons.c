#include <stdio.h>


int main() {
    unsigned month_index;
    printf("Enter the number of a month: ");
    scanf("%u%*c", &month_index);

    switch (month_index) {
    case 1: case 2: case 12:
        printf("Winter.\n");
        break;

    case 3: case 4: case 5:
        printf("Spring.\n");
        break;

    case 6: case 7: case 8:
        printf("Summer.\n");
        break;

    case 9: case 10: case 11:
        printf("Autumn.\n");
        break;

    default:
        printf("Not a correct month number!\n");
        break;
    }

    return 0;
}