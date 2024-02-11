#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three numbers: ");

    scanf("%d %d %d", &a, &b, &c);
    int g = 0;

    a > b ? (a < c ? (g = c) :( g = a)) : (b < c ? (g = c) : (g = b));
    printf("Greatest: %d", g);
}