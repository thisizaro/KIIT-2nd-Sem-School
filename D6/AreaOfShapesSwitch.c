#include <stdio.h>

int main() {
    int choice;
    float side, base, height, radius, area;

    printf("Enter your choice:\n");
    printf("1. Square\n");
    printf("2. Triangle\n");
    printf("3. Circle\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the side length of the square: ");
            scanf("%f", &side);
            area = side * side;
            printf("Area of the square: %.2f\n", area);
            break;
        case 2:
            printf("Enter the base length of the triangle: ");
            scanf("%f", &base);
            printf("Enter the height of the triangle: ");
            scanf("%f", &height);
            area = 0.5 * base * height;
            printf("Area of the triangle: %.2f\n", area);
            break;
        case 3:
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            area = 3.14159 * radius * radius;
            printf("Area of the circle: %.2f\n", area);
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}
