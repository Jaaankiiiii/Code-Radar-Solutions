#include <stdio.h>
int main(){
    int num,row,col;
    scanf("%i",&num);
    for(row=1;row<=num;row++){
        for(col=num;col>=;col--){
            if(col<=row){
                printf("%i",col);
            }
        }
        printf("\n");
    }
    return 0;
}