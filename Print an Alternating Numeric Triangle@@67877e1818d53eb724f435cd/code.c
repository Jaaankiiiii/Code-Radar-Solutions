#include <stdio.h>
int main(){
    int n,row,col;
    scanf("%i",&n);
    int count=1;
    for(row=1;row<=n;row++){
        for(col=1;col<=n;col++){
            if(col<=row){
                printf("%i ",(row+col)%2);
            }
            
        }
        printf("\n");
    }
    return 0;
}