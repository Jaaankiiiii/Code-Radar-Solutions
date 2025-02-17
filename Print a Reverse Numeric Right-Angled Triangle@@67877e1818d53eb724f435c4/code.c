#include <stdio.h>
int main(){
    int n,row,col;
    scanf("%i",&n);
    for(int row=n;row>=1;row--){
        for(col=1;col<=num;col++){
            if(col<=row){
                printf("%i",col);
            }
        }
        printf("\n");
    }
    return 0;
}