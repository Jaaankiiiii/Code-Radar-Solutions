#include <stdio.h>
int main(){
    int num,row,col,space;
    scanf("%i",&num);
    for(row=65;row<num+65;row++){
        for(col=65;col<num+65;col++){
            if(col<=row){
                printf("%c ",col);
            }
        }
        printf("\n");
    }
    return 0;
}