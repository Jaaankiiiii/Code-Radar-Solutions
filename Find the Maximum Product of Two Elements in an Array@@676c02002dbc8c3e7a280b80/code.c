#include <stdio.h>
int main(){
    int size;
    scanf("%i",&size);

    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%i",&arr[i]);
    }

    int max=arr[0];
    for(int i=0; i<size; i++){
        if(arr[i]<0){
            if(max>arr[i]){
                max=arr[i];
            }
        }
        else if(arr[i]>max){
            max=arr[i];
        }
    }

    int second_max=arr[0];
    for(int i=0; i<size; i++){
        if(arr[i]>second_max && arr[i]<max){
            second_max=arr[i];
        }
    }

    printf("%i",max*second_max);
    return 0;
}