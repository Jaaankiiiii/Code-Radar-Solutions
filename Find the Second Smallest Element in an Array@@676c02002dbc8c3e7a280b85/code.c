#include <stdio.h>
int main(){
    int size;
    scanf("%i",&size);

    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%i",&arr[i]);
    }

    int min=arr[0];
    int second_min=arr[0];
    for(int i=0; i<size; i++){
        if(arr[i]<=min){
            min=arr[i];
        }
    }

    for(int i=0; i<size; i++){
        if(arr[i]<=second_min && arr[i]>min){
            second_min=arr[i];
        }
    }
    printf("%i",second_min);
    return 0;
    
}