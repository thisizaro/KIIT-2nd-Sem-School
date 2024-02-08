#include <stdio.h>

int main()
{
	int n;
	printf("n: ");
	scanf("%d", &n);
	
	long a = 0, b = 1, sum;
	printf("1 --- 0\n2 --- 1");
	for(int i = 3; i <= n; i++)
	{
		sum = a + b;
		printf("\n%d --- %ld", i, sum);
		a = b;
		b = sum;
	}
}	

