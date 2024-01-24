#include <stdio.h>

int main() {
        
    int a, kilo, meter;

    printf("enter a number in metre: ");
    scanf("%d",&a);
    
    kilo = a/1000;
    meter = a % 1000;
    
    printf("We can say %d meter as %d Kilometer and %d meter", a, kilo, meter);
    return 0;
}

