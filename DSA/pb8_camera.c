// Problem 8: Camera Placement Problem
#include <stdio.h>

int points[300], combo[3], n, k, totalCount;

void backtrack(int start, int depth) {
    if (depth == 3) {
        if (combo[2] - combo[0] == k) {
            totalCount++;
            printf("Combination: %d %d %d\n", combo[0], combo[1], combo[2]);
        }
        return;
    }

    for (int i = start; i < n; i++) {
        combo[depth] = points[i];
        backtrack(i + 1, depth + 1);
    }
}

int main() {
    printf("Enter N and K: ");
    if (scanf("%d %d", &n, &k) != 2) return 0;

    printf("Enter %d coordinates: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &points[i]);
    }

    totalCount = 0;
    printf("\nValid combinations:\n");
    backtrack(0, 0);

    printf("Total combinations: %d\n", totalCount);
    return 0;
}
