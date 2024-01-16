#include <stdio.h>

int main() {
    printf("Enter two numbers to swap: ");
    int a, b;
    scanf("%d %d", &a, &b);

    printf("Numbers before swap: a=%d, b=%d\n", a, b);

    a = (a + b) - (b = a);

    printf("Numbers after swap: a=%d, b=%d\n", a, b);
    return 0;
}
