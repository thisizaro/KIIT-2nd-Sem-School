#include <stdio.h>
#include <math.h>

void armstrong();

int main()
{
    int n;
	printf("n: ");
	scanf("%d", &n);

    for(int i = 0; i <= n; i++)
    {
        printf("\n%d = ",i);
        armstrong(i);
    }
    return 0;
}	

void armstrong(int n)
{
    // int n;
	// printf("n: ");
	// scanf("%d", &n);
	
	int c = 0, n1 = n;
    while(n != 0)
    {
        c++;
        n = n/10;
    }
    // printf("\nNo. of digit: %d\n", c);

    int sum = 0;
    n = n1;
    while(n != 0)
    {
        sum = sum + pow(n % 10, c);
        n = n / 10;
    }

    if(sum == n1)
    {
        printf("Armstrong no.");
    }
    else printf("Not Armstrong no.");
}