#include <stdio.h>

int factorial(int n) 
{
    if (n == 0) 
    {
        return 1;
    } 
    else {
        return n * factorial(n - 1);
    }
}

int main() 
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    if (num < 0) 
    {
        printf("Error: Factorial of a negative number is undefined.");
    } 
    else {
        int result = factorial(num);
        printf("Factorial of %d is %d", num, result);
    }
    
    return 0;
}