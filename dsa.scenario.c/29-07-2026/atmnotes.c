#include <stdio.h>

void Comb(int den[], int n, int target, int combo[], int idx) {
    if (target == 0) {
        for (int i = 0; i < idx; i++) {
            printf("%d ", combo[i]);
        }
        printf("\n");
        return;
    }
    for (int i = 0; i < n; i++) {
        if (den[i] <= target) {
            if (idx == 0 || den[i] >= combo[idx - 1]) {
                combo[idx] = den[i];
                Comb(den, n, target - den[i], combo, idx + 1);
            }
        }
    }
}

int main() {
    int n, den[10], target;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &den[i]);
    }
    scanf("%d", &target);
    int combo[500];
    Comb(den, n, target, combo, 0);
    return 0;
}