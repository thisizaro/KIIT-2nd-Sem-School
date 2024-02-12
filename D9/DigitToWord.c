#include <stdio.h>

void printDigitInWord(int digit) {
    switch (digit) {
        case 0:
            printf("Zero ");
            break;
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;
        default:
            printf("Invalid digit ");
            break;
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int temp = n * 10 + 1;
    n = 0;
    
    while(temp != 0)
    {
        n = n * 10;
        n = n + temp % 10;
        temp = temp / 10;
    }

    printf("Digits in word: ");
    while (n >= 10) {
        int digit = n % 10;
        printDigitInWord(digit);
        n /= 10;
    }

    return 0;
}
