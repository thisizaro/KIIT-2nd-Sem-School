#include <stdio.h>

#define PI 3.14159

int main() {
    printf("Enter the radius of the circle: ");
    float r;
    scanf("%f", &r);
    printf("Perimeter: %.2f\n", 2 * PI * r);
    return 0;
}
