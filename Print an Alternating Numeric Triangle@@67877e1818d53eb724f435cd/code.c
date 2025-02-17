#include <stdio.h>
int main(){
    int n,row,col;
    scanf("%i",&n);
    int count=1;
    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            printf("%i",(col+row)%2);
            
        }
        printf("\n");
    }
    return 0;
}