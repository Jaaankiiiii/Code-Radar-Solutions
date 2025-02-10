#include <stdio.h>
int main(){
    int num,row,col;
    scanf("%i %i %i",&num,&row,&col);
    for(row=0;row<num;row++){
        for(col=0;col<num;col++){
            if(row==0 || row==(num-1)){
                print("*");
            }
            
        }
    printf("\n");
    }
    return 0;
}