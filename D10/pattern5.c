#include <stdio.h>

int main()
{
    int n = 0;
    printf("n: ");
    scanf("%d", &n);

    int c = 1;
    for(int i = 0; i < n; i++)
    {
        if(c == 1)
        {
            for(int j = i + 1; j > 0; j--)
            {
                printf("%4d", j);
            }
        }
        else
        {
            for(int j = 1; j <= i + 1; j++)
            {
                printf("%4d", j);
            }
        }
        
        printf("\n");
        c = c * -1;
    }
}