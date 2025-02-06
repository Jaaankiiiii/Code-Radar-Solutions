#include <stdio.h>
int main(){
    int num;
    scanf("%i",&num);
    if(num>=1 && num<=100){
        printf("In Range");
    }
    else{
        printf("Out of Range");
    }
    return 0;
}