#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    while(1){
        if(n<=-1){
            printf("system shutdown\n");

        }
        else if(n<=20){
            printf("water level is low\n", n);
            break;
        }
        else if(n>40 && n==100){
            printf("water is filling\n", n);
            break;
        }
        else{
            printf("water level is low\n", n);
            break;
        }
    }
    return 0;
}
