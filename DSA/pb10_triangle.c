// Problem 10: Right-Aligned Star & Number Triangles
#include <stdio.h>

void rightAlignedStar(int n) {
    printf("--- Right-Aligned Star Triangle ---\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) printf(" ");
        for (int k = 1; k <= i; k++) printf("*");
        printf("\n");
    }
}

void rightAlignedNumber(int n) {
    printf("\n--- Right-Aligned Number Triangle ---\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) printf(" ");
        for (int k = 1; k <= i; k++) printf("%d", i);
        printf("\n");
    }
}

int main() {
    int n = 5;
    rightAlignedStar(n);
    rightAlignedNumber(n);
    return 0;
}
