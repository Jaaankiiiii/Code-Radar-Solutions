#include <stdio.h>
int main(){
    int num;
    scanf("%i",&num);
    for(int factor=1,factor<=num,factor++){
        if(num%factor==0){
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