#include <stdio.h>

int main()
{
    int c, x, y;
    printf("1: +  2: -  3: *  4: /  \n Choice: ");
    scanf("%d", &c);

    printf("x,y: ");
    scanf("%d%d", &x, &y);

    if (c == 1) printf("%d", (x + y));
    else if (c == 2) printf("%d", (x - y));
    else if (c == 3) printf("%d", (x * y));
    else if (c == 4) printf("%.2f", (x * 1.0 / y));
    else printf("Invalid choice");
}