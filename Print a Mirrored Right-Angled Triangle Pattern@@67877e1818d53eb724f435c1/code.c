#include <stdio.h>
int main(){
    int num,row,col;
    scanf("%i",&num);
    for(row=num;row>0;row--){
        for(col=num;col>0;col--){
            if(!(row<=col)){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
    printf("\n");
    }
return 0;
}