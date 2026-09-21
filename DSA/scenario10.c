#include <stdio.h>

#define MAX_HOUSES 500
#define INF 1000000000

int main(void)
{
   int n;
   int cost[MAX_HOUSES][MAX_HOUSES];
   int cheapest[MAX_HOUSES];
   int connected[MAX_HOUSES] = {0};
   int totalCost = 0;
   int i, j;

   scanf("%d", &n);

   for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
         scanf("%d", &cost[i][j]);
      }
      cheapest[i] = INF;
   }

   /* Start with house 0. */
   cheapest[0] = 0;

   for (i = 0; i < n; i++) {
      int nextHouse = -1;

      /* Find the cheapest house not connected yet. */
      for (j = 0; j < n; j++) {
         if (!connected[j]
               && (nextHouse == -1 || cheapest[j] < cheapest[nextHouse])) {
            nextHouse = j;
         }
      }

      connected[nextHouse] = 1;
      totalCost += cheapest[nextHouse];

      /* Update the cheapest pipe for every unconnected house. */
      for (j = 0; j < n; j++) {
         if (!connected[j] && cost[nextHouse][j] < cheapest[j]) {
            cheapest[j] = cost[nextHouse][j];
         }
      }
   }

   printf("%d\n", totalCost);
   return 0;
}