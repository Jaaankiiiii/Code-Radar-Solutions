#include <stdio.h>
int main(){
    int num,row,col,space;
    scanf("%i",&num);
    for(int row=1; row<=num ;row++){
        for(int space=1; space<=(num-row); space++){
            printf(" ");
        }
        for(int col=1; col<=num; col++){
            printf("%i ",col);
        }
        printf("\n");
    }
    return 0;
}