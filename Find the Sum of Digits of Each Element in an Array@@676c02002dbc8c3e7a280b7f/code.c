#include <stdio.h>
int main(){
    int size;
    scanf("%i",&size);

    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%i",arr[i]);
    }

    int remainder=0; 
    
    for(int i=0; i<size; i++){
        int sum=0;
        while(arr[i]>0){
            remainder=arr[i]%10;
            arr[i]=arr[i]/10;
            sum+=remainder;
        }
        printf("%i ",sum);
    }
    return 0;
}