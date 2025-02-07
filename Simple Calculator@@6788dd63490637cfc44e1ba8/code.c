#include <stdio.h>
int main(){
    int num1,num2;
    char ch;
    scanf("%i %i %c",&num1,&num2,&ch);
    switch(ch){
        case '+':
            printf("%i",num1+num2);
            break;
        case '-':
            printf("%i",num1-num2);
            break;
        case '*':
            printf("%i",num1*num2);
            break;
        case '/':
            if (num2 == 0) {
                    printf("Error");
                } else {
                    printf("%i",num1 / num2);
            }
                break;
        default:
            printf("error");
    }
    return 0;
}