#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    
    return 1;
}

int main() {
    int n = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    int c = 0;
    
    printf("Prime numbers between 1 and %d are: ", n);
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            c++;
            printf(" \n%d: %d", c, i);
        }
    }
    
    return 0;
}
