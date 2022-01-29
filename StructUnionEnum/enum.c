#include <stdio.h>


typedef enum {
    Monday = 1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
} Weekday;

int main() {
    Weekday dayOfTheWeek = Monday;

    switch (dayOfTheWeek) {
        case Monday: case Tuesday:
        case Wednesday: case Thursday:
        case Friday:
            printf("Leyla, idi v unik!\n");
            break;
        case Saturday: case Sunday:
            printf("Leyla, u teba utrom urok s Imranom!\n");
            break;
        default:
            printf("Invalid weekday index.\n");
            break;
    }

    int day = 1;

    switch (dayOfTheWeek) {
        case 1: case 2:
        case 3: case 4:
        case 5:
            printf("Leyla, idi v unik!\n");
            break;
        case 6: case 0:
            printf("Leyla, u teba utrom urok s Imranom!\n");
            break;
        default:
            printf("Invalid weekday index.\n");
            break;
    }

    return 0;
}
