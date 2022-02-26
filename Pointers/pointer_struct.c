#include <stdio.h>
#include <stdlib.h>

typedef struct {
    double x;
    double y;
} Point;


Point* createPoint(double x, double y);
void printPoint(Point* point);


int main() {
    Point *point = createPoint(5.3, 6.5);

    printPoint(point);

    free(point);
    return 0;
}

Point* createPoint(double x, double y) {
    Point *p = (Point *)malloc(sizeof(Point));

    p->x = x;
    p->y = y;

    return p;
}

void printPoint(Point* point) {
    printf("(%g,%g)\n", point->x, point->y);
}
