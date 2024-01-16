#include <stdio.h>

int main() {
    printf("Enter distance in meters: ");
    float distanceInMeters;
    scanf("%f", &distanceInMeters);

    float distanceInKilometers = distanceInMeters / 1000;

    printf("Distance in kilometers: %.2f\n", distanceInKilometers);
    return 0;
}

