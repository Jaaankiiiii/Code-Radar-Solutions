#include <stdio.h>
int main(){
    int num1;
    scanf("%i",&num1);
    if(num1>0){
        printf("Positive");
    }
    else if(num1<0){
        printf("Negarive");
    }
    else{
        printf("Zero");
    }
    return 0;
}