#include <stdio.h>

int main()
{
	int n;
	printf("n: ");
	scanf("%d", &n);
	
	int c = 0;
    while(n != 0)
    {
        c++;
        n = n/10;
    }
    printf("No. of digit: %d\n", c);
}	

