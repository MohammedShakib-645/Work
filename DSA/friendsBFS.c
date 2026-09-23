#include <stdio.h>
int a[500][500];
int vis[500];
int q[500];
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }
    int c = 0;
    for (int i = 0; i < n; i++) {
        if (vis[i] == 0) {
            c++;
            int f = 0, r = 0;
            q[r++] = i;
            vis[i] = 1;
            while (f < r) {
                int u = q[f++];
                for (int v = 0; v < n; v++) {
                    if (a[u][v] == 1 && vis[v] == 0) {
                        vis[v] = 1;
                        q[r++] = v;
                    }
                }
            }
        }
    }
    printf("%d", c);
    return 0;
}
