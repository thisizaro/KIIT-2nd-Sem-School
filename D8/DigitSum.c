#include <stdio.h>

int main()
{
	int n;
	printf("n: ");
	scanf("%d", &n);
	
	int c = 0;
    while(n != 0)
    {
        c = c + (n % 10);
        n = n/10;
    }
    printf("Sum of digit: %d\n", c);
}