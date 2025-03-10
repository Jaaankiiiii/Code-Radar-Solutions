#include <stdio.h>
int main(){
    int size;
    scanf("%i",&size);

    int arr[size];
    for(int i=0; i<size ;i++){
        scanf("%i",&arr[i]);
    }

    for(int i=0; i<size-1; i++){
        if(arr[i]==0 || arr[i+1==0]){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }

    for(int i=0; i<size ; i++){
        printf("%i",arr[i]);
    }
    return 0;
}