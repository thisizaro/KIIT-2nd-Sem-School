#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	printf("n: ");
	scanf("%d", &n);
	
	for(int i = 2; i < pow(n, 0.5); i++)
    {
        if(n % i == 0)
        {
            printf("Not a prime no.");
            return 0;
        }
    }
    printf("Prime no.");
}