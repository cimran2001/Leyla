#include <stdio.h>
#define MAX_COUNT 256

typedef struct {
    float x;
    float y;
} Point;


Point createPoint(float x, float y);


int main() {
    Point points[MAX_COUNT];

    size_t count;
    printf("Enter the number of points: ");
    scanf("%lu", &count);

    for (size_t i = 0; i < count; i++) {
        float x, y;

        printf("Enter x and y respectively for point %lu: ", i + 1);
        scanf("%f%f", &x, &y);

        points[i] = createPoint(x, y);
    }

    float sum = 0.f;
    for (size_t i = 0; i <= count - 2; i++)
        sum += points[i].x * points[i + 1].y - points[i + 1].x * points[i].y;
    
    if (sum < 0)
        sum *= -1;
    sum /= 2;

    printf("The area of polygon is %g.\n", sum);

    return 0;
}

Point createPoint(float x, float y) {
    Point point;

    point.x = x;
    point.y = y;

    return point;
}
