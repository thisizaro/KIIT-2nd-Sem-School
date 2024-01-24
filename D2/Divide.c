#include <stdio.h>

int main() {
    printf("Enter two integers to divide (numerator denominator): ");
    int a, b;
    scanf("%d%d", &a, &b);
    printf("Result: %d\n", (1.0 * a / b));
    return 0;
}
