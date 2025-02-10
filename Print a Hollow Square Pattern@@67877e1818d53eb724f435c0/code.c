#include <stdio.h>
int main(){
    int num,row,col;
    scanf("%i",&num);
    for(row=0;row<num;row++){
        for(col=0;col<num;col++){
            if(row==0 || row==(num-1)){
                printf("*");
            }
            
        }
    printf("\n");
    }
    return 0;
}