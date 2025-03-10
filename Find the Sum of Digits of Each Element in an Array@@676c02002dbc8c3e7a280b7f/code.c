#include <stdio.h>
int main(){
    int size;
    scanf("%i",&size);

    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%i",&arr[i]);
    }

    int remainder=0; 

    for(int i=0; i<size; i++){
        int sum=0;
        int temp=arr[i];
        while(temp>0){
            remainder=temp%10;
            temp=temp/10;
            sum+=remainder;
        }
        printf("%i ",sum);
    }
    return 0;
}