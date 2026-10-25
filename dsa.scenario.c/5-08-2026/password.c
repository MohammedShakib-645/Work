    #include <stdio.h>

    // Global variables
    int n, a, arr[100];
    int unique[100];
    int uniqueCount;
    int result[100];

    // Recursive function to generate all n-digit combinations
    // using the unique numbers entered
    void makeCombos(int position) {
        int i;
        // If we reached the password length, print the combination
        if (position == n) {
            for (i = 0; i < n; i++) {
                printf("%d", result[i]);
            }
            printf("\n");
            return;
        }

        // Try each unique number at this position
        for (i = 0; i < uniqueCount; i++) {
            result[position] = unique[i];
            makeCombos(position + 1);
        }
    }

    int main() {
        int i, j, isDuplicate;

        printf("Enter the length of password: ");
        scanf("%d", &n);
        printf("Enter how many numbers to use: ");
        scanf("%d", &a);

        // Read only 'a' numbers (per the second input)
        for (i = 0; i < a; i++) {
            printf("Enter number %d: ", i + 1);
            scanf(" %d", &arr[i]);
        }

        // Remove duplicate numbers - keep only unique values
        uniqueCount = 0;
        for (i = 0; i < a; i++) {
            isDuplicate = 0;
            for (j = 0; j < uniqueCount; j++) {
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
        for (i = 0; i < uniqueCount; i++) {
            printf("%d ", unique[i]);
        }
        printf("\n\nAll possible %d-digit combinations:\n", n);
        makeCombos(0);

        return 0;
    }
