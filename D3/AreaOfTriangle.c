#include <stdio.h>
#include <math.h>

int main() {
    printf("Enter the lengths of the three sides of the triangle: ");
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    // Heron's formula to calculate area
    float s = (a + b + c) / 2;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("Area of the triangle: %.2f\n", area);
    return 0;
}
