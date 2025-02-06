#include <stdio.h>
int main(){
    int num1,num2;
    scanf("%i %i",&num1,&num2);
    if(num1==num2){
        printf("Equal");
    }
    else if(num1>num2){
        printf("First");
    }
    else if(num2>num1){
        printf("Second");
    }
    return 0;
}