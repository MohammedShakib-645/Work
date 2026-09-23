#include <stdio.h>

int firstEven(int array[], int size) {
    int low = 0;
    int high = size - 1;
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (array[mid]
             % 2 == 0) {
        
            result = mid;

            
            high = mid - 1;
        } else {
    
            low = mid + 1;
        }
    }

    return result;
}
int main(){
    int array[]={1,3,4,6,8};
    int size=sizeof(array)/sizeof(array[0]);
    int result=search(array,size);
    printf("%d",result);
    return 0;
}