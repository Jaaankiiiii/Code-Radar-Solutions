#include <stdio.h>
int main(){
    int side1,side2,side3;
    scanf("%i %i %i",&side1,&side2,&side3);
    if(side1=side2=side3){
        printf("Equilateral");
    }
    else if(side1=side2 || side2=side3 || side3=side1){
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }
    return 0;
}