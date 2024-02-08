#include <stdio.h>

int main()
{
    int unit;
    do
    {
        printf("Unit: ");
        scanf("%d", &unit);
    }while(unit < 0);
    
    printf("Total Bill: ");
    if (unit < 50)
    {
        printf("%d", unit * 3);
    }
    else if (unit < 100)
    {
        printf("%.2f", ((unit-50) * 4.5) + 150);
    }
    else
    {
        printf("%.2f", 375 + ((unit - 100) * 7.0));
    }
}