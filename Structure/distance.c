#include <stdio.h>

// Structure to store distance
struct Distance {
    int feet;
    int inch;
};

int main() {
    // Declare a variable of type Distance
    struct Distance d1, d2, *p1, *p2;
    p1 = &d1;
    p2 = &d2;

    printf("Enter distance in feet: ");
    scanf("%d", &p1->feet);

    printf("Enter distance in inches: ");
    scanf("%d", &p1->inch);

    printf("Distance: %d feet %d inches\n", d1.feet, p1->inch);

    return 0;
}