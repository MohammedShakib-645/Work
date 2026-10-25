#include<stdio.h>
#include<math.h>
int main()
{
    float distance,fare=50,peak;
    char y;

    printf("Enter the distance:");
    scanf("%f",&distance);

    if(distance>5&&distance<=15)
    {
        fare=fare+(distance-5)*10;
    }
    else if(distance>15)
    {
        fare=fare+(10*10)+(distance-15)*15;
    }
    
    printf("is it peak time?\n");
    scanf("%c", &y);

    if(peak=='y')
    {
        fare+=fare*0.20;
    }

    printf("final fare:%f",fare);

    return 0;
}