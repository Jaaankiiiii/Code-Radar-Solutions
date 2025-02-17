#include <stdio.h>
int main(){
    int num,row,col;
    scanf("%i",&num);
    int n=1;
    for(row=1;row<=num;row++){
        for(col=num;col>=1;col--){
            if(col<=row){
                printf("%i ",n);
                n++;
                
            }
        }
        printf("\n");
    }
    return 0;
}