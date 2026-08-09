// Problem 1: Water Tank Level Monitor
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n < 0) {
        printf("system shutdown\n");
    } else if (n <= 20) {
        printf("water level is low\n");
    } else if (n == 100) {
        printf("tank is full\n");
    } else if (n > 40) {
        printf("water is filling\n");
    } else {
        printf("water level is normal\n");
    }

    return 0;
}
