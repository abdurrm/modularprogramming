#include <stdio.h>
#include <math.h>

float triangle_area(float a, float b, float c) {
    float s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    float a1, b1, c1, a2, b2, c2;
    printf("Enter the sides of triangle 1: ");
    scanf("%f %f %f", &a1, &b1, &c1);
    printf("Enter the sides of triangle 2: ");
    scanf("%f %f %f", &a2, &b2, &c2);

    float area1 = triangle_area(a1, b1, c1);
    float area2 = triangle_area(a2, b2, c2);

    if (area1 > area2) {
        printf("Triangle 1 has a larger area.\n");
    } else if (area2 > area1) {
        printf("Triangle 2 has a larger area.\n");
    } else {
        printf("Both triangles have the same area.\n");
    }

    return 0;
}
