#include <stdio.h>
#include <math.h>

typedef struct {
    int x, y;
} Point;


Point createPoint(int x, int y);
double distance(Point point1, Point point2);


int main() {
    Point p1 = createPoint(3, 4);
    Point p2 = createPoint(6, 8);

    printf("Distance: %g\n", distance(p1, p2));
}

Point createPoint(int x, int y) {
    Point p;

    p.x = x;
    p.y = y;

    return p;
}

double distance(Point point1, Point point2) {
    return sqrt(pow(point1.x - point2.x, 2) + pow(point1.y - point2.y, 2));
}
