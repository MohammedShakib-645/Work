// Problem 5: Employee Selection Combinations (nCr)
#include <stdio.h>

long long fact(int num) {
    long long f = 1;
    for (int i = 2; i <= num; i++) {
        f *= i;
    }
    return f;
}

int main() {
    int n, k;
    printf("Enter total employees (1-15): ");
    scanf("%d", &n);
    printf("Enter group size to select: ");
    scanf("%d", &k);

    if (n >= 1 && n <= 15) {
        if (k >= 1 && k <= n) {
            long long c = fact(n) / (fact(k) * fact(n - k));
            printf("Number of ways to select %d employees from %d is: %lld\n", k, n, c);
        } else {
            printf("Invalid group size\n");
        }
    } else {
        printf("Invalid employee size\n");
    }

    return 0;
}
