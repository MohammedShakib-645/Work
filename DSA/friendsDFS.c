#include <stdio.h>
#define MAX 100
int n;
int a[MAX][MAX];
int visited[MAX];
void dfs(int person)
{
    visited[person] = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[person][i] == 1 && visited[i] == 0)
        {
            dfs(i);
        }
    }
}
int main(void)
{
    int choice = 0;
    printf("Enter the number of friends: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX)
    {
        printf("Invalid number of friends.\n");
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (scanf("%d", &a[i][j]) != 1)
            {
                printf("Invalid friendship matrix.\n");
                return 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (visited[i] == 0)
        {
            dfs(i);
            choice++;
        }
    }
    printf("The number of friend circles is: %d\n", choice);
    return 0;
}
