#include <stdio.h>
int main(){
    int n,row,col;
    scanf("%i",&n);
    for(row=n+64;row>=65;row--){
        for(col=65;col<=n+64;col++){
            if(row>=col){
                printf("%c ",col);
            }
        }
        printf("\n");
    }
    return 0;
}