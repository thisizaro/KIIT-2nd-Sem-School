#include <stdio.h>

int main()
{
    printf("n: ");
    int n;
    scanf("%d", &n);

    if(n > 0)
    {
        printf("Positive!");
    }
    else if (n < 0)
    printf("Negetive!");
    else
    printf("It's Zero");
}