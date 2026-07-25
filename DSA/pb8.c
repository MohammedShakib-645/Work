#include<stdio.h>
int main()
{
    int i,j,n,k;
    printf("Enter the number of Employeee:");
    scanf("%d",&n);
    printf("Enter the team size:");
    scanf("%d",&k);
    for(i=5;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        printf("%d %d\n",i,j);
    }
   return 0;

}
