#include <stdio.h>

int main()
{
    int i;
    do
    {
        printf("Income: ");
        scanf("%d", &i);
    }while(i < 0);

    if(i < 150000)
    {
        printf("No Tax!");
    }
    else if (i < 300000)
    {
        printf("Total Tax = %d", (int)(i * 0.1));
    }
    else if (i < 500000)
    {
        printf("Total Tax = %d", (int)(i * 0.2));
    }

}