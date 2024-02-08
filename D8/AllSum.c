#include <stdio.h>

int main()
{
	int n = 0, sum = 0;
    do
    {   
        printf("n: ");
	    scanf("%d", &n);
        
        sum += n;
    }while( n != 0);

    printf("Sum = %d", sum);

}