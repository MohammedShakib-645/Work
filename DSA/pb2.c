#include <stdio.h>
#include <math.h>

int main(void)
{
    int water;
    scanf("%d", &water);

    if (water == -1)
     {
        printf("system disconnected");
    } 
    else if (water <= 20) 
    {
        printf("ALERT");
    }
    else if (water == 100)
     {
        printf("TANK FULL");
    }
    else
       printf("TANK IS STILL FILLING");

    return 0;
}

