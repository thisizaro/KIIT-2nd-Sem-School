#include <stdio.h>

int main() {
    printf("Enter the base salary: ");
    float baseSalary;
    scanf("%f", &baseSalary);

    float hra = 0.025 * baseSalary;
    float da = 0.015 * baseSalary;
    float totalSalary = baseSalary + hra + da;

    printf("Total Salary: %.2f\n", totalSalary);
    return 0;
}
