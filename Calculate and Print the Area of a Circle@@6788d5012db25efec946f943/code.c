#include <stdio.h>
int main(){
    float radius,area_of_circle;
    const float PI=3.14;
    scanf("%f",&radius);
    area_of_circle=(float)PI*radius*radius;
    printf("Area: %.2f",area_of_circle);
    return 0;
}