//A jewelry store layout is represented as a id grid of points.you want to place exactly 3 security cameras at different points such that the distance between the first and the third camera is exactly a target value K. find how many valid combinations of 3 points exist.

//input constraints 
//number of grid points(N):3<=N<=300
//target distance (K):1<=K<=10^5
//coordinates (\(X_{i}\)):sorted strictly increasing ,\(0<=X<=10^5)

#include <stdio.h>

int main() {
    int N, K;
    int X[300];

    // Read number of points
    scanf("%d", &N);
    
    // Read coordinates
    for (int i = 0; i < N; i++) {
        scanf("%d", &X[i]);
    }

    // Read target distance
    scanf("%d", &K);

    long long count = 0;

    int left = 0;
    int right = 1;

    while (right < N) {

        int distance = X[right] - X[left];

        if (distance < K) {
            // Need a larger distance
            right++;
        }
        else if (distance > K) {
            // Need a smaller distance
            left++;

            if (left == right) {
                right++;
            }
        }
        else {
            // Distance is exactly K
            // Points between left and right can be the 2nd camera

            count += (right - left - 1);

            left++;
            right++;

            if (left == right) {
                right++;
            }
        }
    }

    printf("%lld\n", count);

    return 0;
}