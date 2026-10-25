#include<stdio.h>

long fact(int num){
    long long f = 1;
    for(int i = 2; i <= num; i++){
        f *= i;
    }
    return f;
}

int main(){
    int i,n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    if(1<=n && n<=15){
        if(1<=k && k<=n){
            long long c = fact(n)/(fact(k)*fact(n-k));
            printf("the number of ways to select %d employees from %d employees is: %d\n", k, n, c);
        }
        else{
            printf("invalid group size");
        }
    }
    else{
        printf("invalid employee size");
    } 

    return 0;
}