#include <stdio.h>
int main(){
    int size;
    scanf("%i",&size);

    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%i",&arr[i]);
    }

    for(int i=0; i<size; i++){
        int freq=0;
        for(int j=0; j<size; j++){
            if(arr[i]==arr[j]){
                freq++
            }
        }
        if(!(freq==1)){
            printf("%i",arr[i]);
        }
        return 0;
    }
}