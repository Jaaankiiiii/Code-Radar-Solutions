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
                    printf("Error: Division by zero");
                } else {
                    printf("%.2f", (float)num1 / num2);  // Typecasting for float division
            }
                break;
        default:
            printf("error");
    }
    return 0;
}