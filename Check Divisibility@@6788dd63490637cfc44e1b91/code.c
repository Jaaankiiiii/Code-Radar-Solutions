#include <stdio.h>
void main(){
    int num;
    scanf("%d",&num);
    if(num%5==0 && num%11==0){
        printf("Divisible");
    }
    else{
        printf("Not Divisible");
    }
}