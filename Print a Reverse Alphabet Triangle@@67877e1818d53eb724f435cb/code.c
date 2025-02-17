#include <stdio.h>
int main(){
    int n,row,col;
    scanf("%i",&n);
    for(row=n+65;row>65;row++){
        for(col=65;col<n+65;col++){
            if(row>=col){
                printf("%i ",col);
            }
        }
        return 0;
    }
}