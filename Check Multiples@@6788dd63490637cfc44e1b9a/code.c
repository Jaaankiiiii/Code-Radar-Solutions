#include <stdio.h>
int main(){
    int num,divisior;
    scanf("%i %i",&num,&divisior);
    if(num%divisior==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}