#include <stdio.h>
int main(){
    int num;
    scanf("%i",&num);
    if(num>0){
        printf("Positive");
    }
    else if(num==0){
        printf("Zero");
    }
    else{
        printf("Negative");
    }
    return 0;
}