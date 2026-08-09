// Problem 6: ATM Coin/Note Combination
#include <stdio.h>

void findCombinations(int den[], int n, int target, int combo[], int idx, int startIdx) {
    if (target == 0) {
        for (int i = 0; i < idx; i++) {
            printf("%d ", combo[i]);
        }
        printf("\n");
        return;
    }

    for (int i = startIdx; i < n; i++) {
        if (den[i] <= target) {
            combo[idx] = den[i];
            findCombinations(den, n, target - den[i], combo, idx + 1, i);
        }
    }
}

int main() {
    int n, den[10], target;
    printf("Enter number of denominations: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    printf("Enter denominations: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &den[i]);
    }

    printf("Enter target amount: ");
    scanf("%d", &target);

    int combo[500];
    printf("\nValid combinations:\n");
    findCombinations(den, n, target, combo, 0, 0);

    return 0;
}
