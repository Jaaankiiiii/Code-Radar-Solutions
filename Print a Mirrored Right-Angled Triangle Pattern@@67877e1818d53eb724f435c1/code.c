#include <stdio.h>
int main(){
    int num,row,col;
    scanf("%i",&num);
    for(row=1;row<=num;row++){
        for(col=num;col>0;col--){
            if(col<=row){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
    printf("\n");
    }
return 0;
}