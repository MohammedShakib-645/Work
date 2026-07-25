#include<stdio.h>
int main()
{
    FILE* fp;
    int n,i,roll,age;
    char name[50];

    fp=fopen("student.txt","w");

    printf("Enter the number of student:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("\nEnter the Rollno:");
        scanf("%d",&roll);

        printf("\nEnter the name:");
        scanf("%s",name);

        printf("\nEnter the age:");
        scanf("%d",&age);

        fprintf(fp,"Roll no:%d\n",roll);
        fprintf(fp,"age:%d\n",age);
        fprintf(fp,"name:%s\n",name);
        fprintf(fp,"\n");

    }
    fclose(fp);
    printf("\nData saved successfully:");
    return 0;
}