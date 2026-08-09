// Problem 2: Maximum Stock Profit
#include <stdio.h>

int maxProfit(int p[], int n) {
    int minPrice = p[0];
    int maxPro = 0;
    for (int i = 1; i < n; i++) {
        if (p[i] < minPrice) {
            minPrice = p[i];
        } else if (p[i] - minPrice > maxPro) {
            maxPro = p[i] - minPrice;
        }
    }
    return maxPro;
}

int main() {
    int n;
    printf("Enter number of days: ");
    scanf("%d", &n);

    int p[n];
    printf("Enter stock prices: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }

    int profit = maxProfit(p, n);
    printf("Maximum profit: %d\n", profit);

    return 0;
}
