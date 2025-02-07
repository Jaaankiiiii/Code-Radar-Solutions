#include <stdio.h>
int main(){
    int temp;
    scanf("%i",&temp);
    if(temp<=0){
        printf("Freezing");
    }
    else{
        printf("Above Freezing");
    }
    return 0;
}