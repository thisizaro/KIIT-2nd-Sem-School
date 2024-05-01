#include <stdio.h>
int main()
{
    int n;
    
    while (1)
    {
        printf("n: ");
        scanf("%d", &n);
        switch (n)
        {
            case 1:
                printf("    *\n");
                printf("    *\n");
                printf("    *\n");
                printf("    *\n");
                printf("    *\n\n");
                break;

            case 2:
                printf("*****\n");
                printf("    *\n");
                printf("*****\n");
                printf("*    \n");
                printf("*****\n\n");
                break;

            case 3:
                printf("*****\n");
                printf("    *\n");
                printf("*****\n");
                printf("    *\n");
                printf("*****\n\n");
                break;

            case 4:
                printf("*   *\n");
                printf("*   *\n");
                printf("*****\n");
                printf("    *\n");
                printf("    *\n\n");
                break;

            case 5:
                printf("*****\n");
                printf("*    \n");
                printf("*****\n");
                printf("    *\n");
                printf("*****\n\n");
                break;

            case 6:
                printf("*****\n");
                printf("*    \n");
                printf("*****\n");
                printf("*   *\n");
                printf("*****\n\n");
                break;

            case 7:
                printf("*****\n");
                printf("    *\n");
                printf("    *\n");
                printf("    *\n");
                printf("    *\n\n");
                break;

            case 8:
                printf("*****\n");
                printf("*   *\n");
                printf("*****\n");
                printf("*   *\n");
                printf("*****\n\n");
                break;

            case 9:
                printf("*****\n");
                printf("*   *\n");
                printf("*****\n");
                printf("    *\n");
                printf("    *\n\n");
                break;

            case 0:
                printf("*****\n");
                printf("*   *\n");
                printf("*   *\n");
                printf("*   *\n");
                printf("*****\n\n");
                break;
            default:
                printf("Invalid number");
        }
        printf("\n");
    }
}