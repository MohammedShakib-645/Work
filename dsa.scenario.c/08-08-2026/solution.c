#include <stdio.h>

int points[300], combo[3], n, k, count;

void backtrack(int start, int depth) {
    if (depth == 3) {
        if (combo[2] - combo[0] == k) {
            count++;
            printf("%d %d %d\n", combo[0], combo[1], combo[2]);
        }
        return;
    }

    for (int i = start; i < n; i++) {
        combo[depth] = points[i];
        backtrack(i + 1, depth + 1);
    }
}

int main() {
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        scanf("%d", &points[i]);
    }

    count = 0;
    backtrack(0, 0);

    printf("Total valid combinations: %d\n", count);
    
}
