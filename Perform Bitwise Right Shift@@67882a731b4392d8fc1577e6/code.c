#include <stdio.h>
int  main(){
    int num1,num2,result;
    scanf("%i %i",&num1,&num2);
    result = num1 >> num2;
    printf("%i",result);
    return 0;
}