#include <stdio.h>
int main(){
    int num1, num2, num3;
    float average;
    scanf("%i %i %i",&num1,&num2,&num3);
    average=(float)(num1+num2+num3)/3;
    printf("Average: %.2f",average);
    return 0;
}