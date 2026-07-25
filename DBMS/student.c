#include<Stdio.h>
int main()
{
    FILE* fp;
    int roll,age;
    char name[50];

    fp=fopen("student.txt","w");

    printf("Enter Roll no:");
    scanf("%d",&roll);

    printf("Enter the name :");
    scanf("%s",name);

    printf("Enter the age:");
    scanf("%d",&age);

    fprintf(fp,"Roll no:%d\n",roll);
    fprintf(fp,"Name :%s\n",name);
    fprintf(fp,"Age:%d\n",age);
     
    fclose(fp);
    printf("student details saved successfully:");

    return 0;
}