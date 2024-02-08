#include <stdio.h>

int main()
{
    char array[100];
   
    printf("Enter a string\n");
    scanf("%s", array);

    printf("Your string: %c%c\n", array[2], array[3]);


    if(array[2] == '0')
    {
        if (array[3] == '5')
            printf("CSE\n");
        if (array[3] == '1')
            printf("CIVIL");
        if (array[3] == '2')
            printf("Mechanical");
    }
    else if (array[2] == '2')
    {
        if (array[3] == '8')
            printf("System Engineering");
        if (array[3] == '9')
            printf("Communication engineering");
    }
    else
        printf("INVALID");
    return 0;
}