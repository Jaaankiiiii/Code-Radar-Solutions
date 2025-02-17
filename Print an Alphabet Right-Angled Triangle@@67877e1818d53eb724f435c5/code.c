#include <stdio.h>
int main(){
    int n,row,col;
    scanf("%i",&n);
    for(int row=65;row<n+65;row++){
        for(int col=65;col<n+65;col++){
            if(row>=col){
                printf("%c ",col);
            }
        }
        printf("\n");
    }
    return 0;
}