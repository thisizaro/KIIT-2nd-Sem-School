#include <stdio.h>

int main()
{
    int x,y;
    
    printf("x: ");
    scanf("%d", &x);

    printf("y: ");
    scanf("%d", &y);

    if(x > y)
    {
        printf("Greater number is %d", x);
    }
    else
    {
        printf("Greater number is %d", y);
    }
}