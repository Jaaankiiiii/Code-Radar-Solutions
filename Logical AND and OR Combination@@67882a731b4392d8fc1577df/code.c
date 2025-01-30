#include <stdio.h>
int main(){
    int num1,num2;
    scanf("%i %i",&num1,&num2);
    if(num1>0 && num2<0 || num1==0 && num2==0){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}