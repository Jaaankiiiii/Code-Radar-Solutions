#include <stdio.h>
int main(){
    int size;
    scanf("%i",&size);

    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%i",&arr[i]);
    }
    int j=0;
    for(int i=0; i<size; i++){
        int sum=0;
        sum=arr[i]+arr[i-1];
        arr[j++]=sum;
    }

    for(int i=0; i<j; i++){
        printf("%i ",arr[i]);
    }
    return 0;
}