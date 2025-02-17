#include <stdio.h>
int main(){
    int n,row,col;
    scanf("%i",&n);
    int count=1;
    for(row=1;row<=n;row++){
        for(col=1;col<=n;col++){
            if(col<=row){
                printf("%i ",count);
                if(count==1){
                    count=0;
                }else{
                    count=1;
                }
            }
        }
        printf("\n");
    }
    return 0;
}