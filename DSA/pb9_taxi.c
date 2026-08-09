// Problem 9: Taxi Fare Calculator (Distance & Peak Time Surcharge)
#include <stdio.h>

int main() {
    float distance, fare = 50.0;
    char peak;

    printf("Enter distance (in km): ");
    if (scanf("%f", &distance) != 1) return 0;

    if (distance > 5 && distance <= 15) {
        fare += (distance - 5) * 10;
    } else if (distance > 15) {
        fare += (10 * 10) + (distance - 15) * 15;
    }

    printf("Is it peak time? (y/n): ");
    scanf(" %c", &peak);

    if (peak == 'y' || peak == 'Y') {
        fare += fare * 0.20;
    }

    printf("Final fare: %.2f\n", fare);

    return 0;
}
