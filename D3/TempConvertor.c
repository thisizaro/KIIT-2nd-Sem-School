#include <stdio.h>

int main() {
    int choice;
    float temp;

    printf("Choose conversion:\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    scanf("%d", &choice);

    printf("Enter temperature: ");
    scanf("%f", &temp);

    switch (choice) {
        case 1:
            printf("Converted temperature: %.2f Celsius\n", (temp - 32) * 5 / 9);
            break;
        case 2:
            printf("Converted temperature: %.2f Fahrenheit\n", (temp * 9 / 5) + 32);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
