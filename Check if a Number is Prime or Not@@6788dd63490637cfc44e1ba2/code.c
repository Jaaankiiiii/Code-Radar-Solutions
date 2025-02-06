#include <stdio.h>
int main(){
    int num,factor=1;
    scanf("%i",&num);
    for(int i=1;i<=num;i++){
        if(num%i==0){
            factor++;
        }
    }
    if(factor==2){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}