#include <stdio.h>

int main() {
    printf("Enter two numbers: ");
    float num1, num2;
    scanf("%f %f", &num1, &num2);

    printf("Multiplication: %.2f\n", num1 * num2);
    printf("Division: %.2f\n", num1 / num2);
    printf("Sum: %.2f\n", num1 + num2);
    printf("Subtraction: %.2f\n", num1 - num2);

    return 0;
}

