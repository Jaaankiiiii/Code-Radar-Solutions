#include <stdio.h>
int main()
{
    int num1,num2;
    scanf("%i %i",&num1,&num2);
    if(num1>num2){
        printf("%i",num1);
    }
    else if(num2>num1){
        printf("%i",num2);
    }
    else{
        printf("%i",num1);
    }
    return 0;
}
