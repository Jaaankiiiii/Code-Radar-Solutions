#include <stdio.h>
int main(){
    int num,row,col;
    scanf("%i %i %i",&num,&row,&col);
    for(row=0;row<num;row++){
        for(col=0;col<=num;col++){
            if(row<=col){
                printf("*");
            }
        }
    printf("\n");
    }
}
