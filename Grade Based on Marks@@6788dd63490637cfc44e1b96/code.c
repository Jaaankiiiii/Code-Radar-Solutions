#include <stdio.h>
int main(){
    int marks;
    scanf("%i",&marks);
    if(marks>=90){
        printf("A");
    }
    else if(80=<marks<90){
        printf("B");
    }
    else if(70<=marks<80){
        printf("C");
    }
    else if(60<=marks<70){
        printf("D");
    }
    else{
        printf("F");
    }
    return 0;
}