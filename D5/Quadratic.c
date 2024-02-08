#include <stdio.h>
#include <math.h>

int main()
{
    printf("Enter the coefficients of the quadratic equation:\n a, b, c: ");
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);

    if(a == 0 && b == 0 && c == 0)
    {
        printf("It is an Identity equation.\n");
    }
    else if(a == 0 && b != 0)
    {
        printf("It is a linear equation with solution: %f\n", (-c * 1.0 / b));
    }
    else
    {
        float d = (b*b) - 4 * a * c;
        if (d > 0)
        {
            float x = (-b * 1.0 ) / (2 * a), y = sqrt(d) / (2 * a);
            printf("1st root: %.2f\n", x + y);
            printf("2nd root: %.2f\n", x - y);

        }
        else if (d == 0)
        {
            printf("Root: %.2f", ((-b * 1.0 ) / (2 * a)));

        }
        else
        {
            float x = (-b * 1.0 ) / (2 * a), y = sqrt(-d) / (2 * a);
            printf("1st root: %.2f + i%.2f\n", x, y);
            printf("2nd root: %.2f - i%.2f\n", x, y);
        }
    }
}