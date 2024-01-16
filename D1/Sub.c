#include <stdio.h>

int main() {
    printf("Enter two integers to subtract (minuend subtrahend): ");
    int a, b;
    scanf("%d%d", &a, &b);
    printf("Result: %d\n", a - b);
    return 0;
}
