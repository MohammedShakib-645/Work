// Problem 7: Password Combinations
#include <stdio.h>

int n, a, arr[100];
int unique[100];
int uniqueCount;
int result[100];

void makeCombos(int position) {
    if (position == n) {
        for (int i = 0; i < n; i++) {
            printf("%d", result[i]);
        }
        printf("\n");
        return;
    }

    for (int i = 0; i < uniqueCount; i++) {
        result[position] = unique[i];
        makeCombos(position + 1);
    }
}

int main() {
    int isDuplicate;

    printf("Enter password length: ");
    if (scanf("%d", &n) != 1) return 0;

    printf("Enter number count: ");
    if (scanf("%d", &a) != 1) return 0;

    for (int i = 0; i < a; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    uniqueCount = 0;
    for (int i = 0; i < a; i++) {
        isDuplicate = 0;
        for (int j = 0; j < uniqueCount; j++) {
            if (unique[j] == arr[i]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            unique[uniqueCount] = arr[i];
            uniqueCount++;
        }
    }

    printf("\nDistinct numbers: ");
    for (int i = 0; i < uniqueCount; i++) {
        printf("%d ", unique[i]);
    }
    printf("\n\nAll %d-digit combinations:\n", n);
    makeCombos(0);

    return 0;
}
