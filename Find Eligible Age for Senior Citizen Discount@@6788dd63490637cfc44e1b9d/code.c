#include <stdio.h>
int main(){
    int age;
    scanf("%i",&age);
    if(age>=60){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}