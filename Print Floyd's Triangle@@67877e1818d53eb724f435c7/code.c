#include <stdio.h>
int main(){
    int num,row,col;
    scanf("%i",&num);
    for(row=num;row>=1;row--){
        for(col=1;col<=num;col++){
            if(col<=row){
                printf("%i ",col);
            }
        }
        printf("\n");
    }
    return 0;
}