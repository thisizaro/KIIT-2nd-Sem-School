#include <stdio.h>

int main() {
    int n = 1, sum = 0;
    printf("Enter a number: ");

    scanf("%d", &n);

    printf("Series: \n");


    for (int i = 1; i <= n; i++) {
        int fact = 1;

        for (int j = 1; j <= i; j++) {
            fact = fact * j;
            printf("%d * ", j);
        }
        sum += fact;
        printf(" = %d\n", fact);
    }

    printf("Sum of the series: %d\n", sum);

    return 0;
}