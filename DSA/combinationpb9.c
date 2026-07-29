#include <stdio.h>

int notes[15];
int combination[100];

void find(int index, int N, int target, int currsum, int size) {
    if (currsum == target) {
        for (int i = 0; i < size; i++) {
            printf("%d ", combination[i]);
        }
        printf("\n");
        return;
    }

    if (currsum > target || index == N) {
        return;
    }

    combination[size] = notes[index];
    find(index, N, target, currsum + notes[index], size + 1);
    find(index + 1, N, target, currsum, size);
}

int main(void) {
    int N, target;

    printf("Enter the total notes: ");
    scanf("%d", &N);

    printf("Enter the type of notes: ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &notes[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    printf("\nPossible combinations are:\n");
    find(0, N, target, 0, 0);

    return 0;
}