#include <stdio.h>
int main(){
    int num1,num2,num3;
    scanf("%i %i %i",&num1,&num2,&num3);
    if(num1>num2 & num1>num3){
        printf(num1);
    }
    else if(num2>num3){
        printf(num2);
    }
    else{
        printf(num3);
    }
    return 0;
}