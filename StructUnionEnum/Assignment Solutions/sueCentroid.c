// size_t == unsigned long

#include <stdio.h>
#define MAX_COUNT 256

typedef struct {
    float x;
    float y;
} Point;


Point createPoint(float x, float y);
float getAverageX(Point points[MAX_COUNT], size_t count); 
float getAverageY(Point points[MAX_COUNT], size_t count);

int main() {
    Point points[MAX_COUNT];

    // Input
    size_t count;
    printf("Enter the number of points: ");
    scanf("%lu", &count);

    for (size_t i = 0; i < count; i++) {
        float x, y;

        printf("Enter x and y respectively for point %lu: ", i + 1);
        scanf("%f%f", &x, &y);

        points[i] = createPoint(x, y);
    }

    // Calculations
    float averageX = getAverageX(points, count);
    float averageY = getAverageY(points, count);

    // Output
    printf("(%g, %g)\n", averageX, averageY); 

    return 0;
}

Point createPoint(float x, float y) {
    Point point;

    point.x = x;
    point.y = y;

    return point;
}

float getAverageX(Point points[MAX_COUNT], size_t count) {
    if (count == 0)
        return 0.f;

    float average = 0.f;
    for (size_t i = 0; i < count; i++)
        average += points[i].x;
    average /= count;

    return average;
}

float getAverageY(Point points[MAX_COUNT], size_t count) {
    if (count == 0)
        return 0.f;

    float average = 0.f;
    for (size_t i = 0; i < count; i++)
        average += points[i].y;
    average /= count;

    return average;
}
