#include<stdio.h>
int main(){
	int p[6];
	int n;
	for(int i=0; i<p[6], i++){
		
	}
}
int maxp(int p[],int n){
    int minp=p[0];
    int maxp=0;
    for(int i=1;i<n; i++){
        if(p[i]<minp){
            minp=p[i];
        }
        else if(p[i]-minp>maxp){
            maxp=p[i]-minp;
        }
    }
}
