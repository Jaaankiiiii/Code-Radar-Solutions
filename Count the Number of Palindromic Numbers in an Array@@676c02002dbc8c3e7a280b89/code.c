#include <stdio.h>
int main(){
    int size;
    scanf("%i",&size);

    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%i",&arr[i]);
    }
    int remainder=0;
    int count=0;
    for(int i=0; i<size; i++){
        int num;
        num=arr[i];
        remainder=num%10;
        num=num/10;
         
        reversed_no=reversed_no*10+remainder;
        if(num==reversed_no){
            count++;
        }
    }
    printf("%i",count);
}