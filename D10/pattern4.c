#include <stdio.h>

int main()
{
    int n = 0;
    printf("n: ");
    scanf("%d", &n);\
    
    int m = 0;
    for(int i = 1; i <= n; i++)
    {
        m = m + i;
        for(int j = m; j > m-i; j--)
        {
            printf("%4d", j);
        }
        printf("\n");
    }
}