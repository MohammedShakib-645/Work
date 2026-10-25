#include<stdio.h>
int team[30];
void generate(int s,int n, int k,int index)
{
    if(index==k)
    {
        for(int i=0;i<k;i++)
        {
            printf("%d ",team[i]);
        }
        printf("\n");
        return;
    }
    for(int i=s;i<=n;i++)
    {
        team[index]=i;
        generate(i+1,n,k,index+1);
    }
}
int main()
{
    int n,k;
    printf("Enter the number of Employees:");
    scanf("%d",&n);
    printf("Enter the team size:");
    scanf("%d",&k);
    generate(2,n,k,0);
    return 0;
}