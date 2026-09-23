#include <stdio.h>
int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    int a[5000], b[5000], c[5000];
    for (int i = 0; i < m; i++)
        scanf("%d%d%d", &a[i], &b[i], &c[i]);
    int s, d, k;
    scanf("%d%d%d", &s, &d, &k);
    int dist[100];
    for (int i = 0; i < n; i++)
        dist[i] = 1000000000;
    dist[s] = 0;
    for (int x = 0; x <= k; x++) {
        int t[100];
        for (int i = 0; i < n; i++)
            t[i] = dist[i];
        for (int i = 0; i < m; i++) {
            if (dist[a[i]] + c[i] < t[b[i]])
                t[b[i]] = dist[a[i]] + c[i];
        }
        for (int i = 0; i < n; i++)
            dist[i] = t[i];
    }
    if (dist[d] == 1000000000)
        printf("-1");
    else
        printf("%d", dist[d]);
    return 0;
}
