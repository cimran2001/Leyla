#include <stdio.h>
#define MAX_COUNT 256


typedef struct {
    float x;
    float y;
    float z;
} Point;

Point createPoint(float x, float y, float z);

float getMinX(Point points[MAX_COUNT], size_t count);
float getMaxX(Point points[MAX_COUNT], size_t count);

float getMinY(Point points[MAX_COUNT], size_t count);
float getMaxY(Point points[MAX_COUNT], size_t count);

float getMinZ(Point points[MAX_COUNT], size_t count);
float getMaxZ(Point points[MAX_COUNT], size_t count);

int main() {
    Point points[MAX_COUNT];

    size_t count;
    printf("Enter the number of points: ");
    scanf("%lu", &count);

    for (size_t i = 0; i < count; i++) {
        float x, y, z;

        printf("Enter x, y and z respectively for point %lu: ", i + 1);
        scanf("%f%f%f", &x, &y, &z);

        points[i] = createPoint(x, y, z);
    }

    float minX = getMinX(points, count);
    float minY = getMinY(points, count);
    float minZ = getMinZ(points, count);

    float maxX = getMaxX(points, count);
    float maxY = getMaxY(points, count);
    float maxZ = getMaxZ(points, count);

    printf("(%g, %g, %g)(%g, %g, %g)\n", minX, minY, minZ, maxX, maxY, maxZ);

    return 0;
}

Point createPoint(float x, float y, float z) {
    Point point;

    point.x = x;
    point.y = y;
    point.z = z;

    return point;
}

float getMinX(Point points[MAX_COUNT], size_t count) {
    if (count == 0)
        return 0;

    float minX = points[0].x;

    for (size_t i = 1; i < count; i++)
        if (minX > points[i].x)
            minX = points[i].x;

    return minX;
}
float getMaxX(Point points[MAX_COUNT], size_t count) {
    if (count == 0)
        return 0;

    float maxX = points[0].x;

    for (size_t i = 1; i < count; i++)
        if (maxX < points[i].x)
            maxX = points[i].x;

    return maxX;
}

float getMinY(Point points[MAX_COUNT], size_t count) {
    if (count == 0)
        return 0;

    float minY = points[0].y;

    for (size_t i = 1; i < count; i++)
        if (minY > points[i].y)
            minY = points[i].y;

    return minY;
}
float getMaxY(Point points[MAX_COUNT], size_t count) {
    if (count == 0)
        return 0;

    float maxY = points[0].y;

    for (size_t i = 1; i < count; i++)
        if (maxY < points[i].y)
            maxY = points[i].y;

    return maxY;
}

float getMinZ(Point points[MAX_COUNT], size_t count) {
    if (count == 0)
        return 0;

    float minZ = points[0].z;

    for (size_t i = 1; i < count; i++)
        if (minZ > points[i].z)
            minZ = points[i].z;

    return minZ;
}

float getMaxZ(Point points[MAX_COUNT], size_t count) {
    if (count == 0)
        return 0;

    float maxZ = points[0].z;

    for (size_t i = 1; i < count; i++)
        if (maxZ < points[i].z)
            maxZ = points[i].z;

    return maxZ;
}

