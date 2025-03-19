#include <stdio.h>
int main(){
    int size;
    scanf("%i",&size);

    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%i",&arr[i]);
    }
    int remainder;
    int count=0;
    int reversed_no=0;
    for(int i=0; i<size; i++){
        int num,original_no;
        original_no=arr[i];
        num=arr[i];
        remainder=num%10;
        num=num/10;
         
        reversed_no=reversed_no*10+remainder;
        if(original_no==reversed_no){
            count++;
        }
    }
    printf("%i",count);
}