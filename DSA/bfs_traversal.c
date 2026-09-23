#include <stdio.h>
int a[100][100];
int vis[100];
int q[100];
int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < m; i++) {
        int u, v;
        scanf("%d%d", &u, &v);
        a[u][v] = 1;
        a[v][u] = 1;
    }
    int s;
    scanf("%d", &s);
    int f = 0, r = 0;
    q[r++] = s;
    vis[s] = 1;
    while (f < r) {
        int u = q[f++];
        printf("%d ", u);
        for (int v = 0; v < n; v++) {
            if (a[u][v] == 1 && vis[v] == 0) {
                vis[v] = 1;
                q[r++] = v;
            }
        }
    }
    return 0;
}
