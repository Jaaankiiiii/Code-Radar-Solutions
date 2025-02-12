#include <stdio.h>
int main(){
    int num,row,col;
    scanf("%i",&num);
    for(row=1;row<=num;row++){
        for(col=1;col<=num;col++){
            if(col<=row){
                printf("%i",row);
            }
        }
    }
}