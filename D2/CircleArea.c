#include <stdio.h>

#define PI 3.14159

int main() {
    printf("Enter the radius of the circle: ");
    float r;
    scanf("%f", &r);
    printf("Area: %.2f\n", PI * r * r);
    return 0;
}
