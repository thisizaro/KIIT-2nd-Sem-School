#include <stdio.h>

int main()
{
    printf("n: ");
    int n;
    scanf("%d", &n);

    if(n % 2 == 0)
    {
        printf("Even!");
    }
    else
    printf("Odd!");
}