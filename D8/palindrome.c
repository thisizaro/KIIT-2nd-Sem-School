#include <stdio.h>

int main()
{
	int n;
	printf("n: ");
	scanf("%d", &n);
	
    int r = 0, m = n;
    while(n != 0)
    {   
        r = r * 10;
        r += (n % 10);
        n = n/10;
    }

    if(m == r)
        printf("It's Palindrome");
    else
        printf("It's not a plaindrome.");
}