#include <stdio.h>
int main(){
    int num1;
    scanf("%i",&num1);
    if(num1 & (1<<31)){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}