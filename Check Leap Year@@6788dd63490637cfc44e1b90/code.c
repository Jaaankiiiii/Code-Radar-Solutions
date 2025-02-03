#include <stdio.h>
int main(){
    int year;
    scanf("%i",&year);
    if(year%4==0 and !(year%100==0) or year%400==0){
        printf("Leap Year");
    }
    else{
        printf("Not a Leap Year");
    }
    return 0;
}