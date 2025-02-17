#include <stdio.h>
int main(){
    int num,row,col,space;
    scanf("%i",&num);
    for( row=1; row<=num ;row++){
        for(space=1; space<= num-row; space++){
            printf(" ");
        }
        for(col=1; col<=row; col++){
            printf("%i ",col);
        }
        printf("\n");
    }
    return 0;
}