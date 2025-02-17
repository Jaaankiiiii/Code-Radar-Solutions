#include <stdio.h>
int main(){
    int n,row,col;
    int num;
    scanf("%i",&n);
    int count=1;
    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            if((row+col)%2==0){
                num=1;
            }
            else{
                num=0;
            }
            printf("%i",num);
            
        }
        printf("\n");
    }
    return 0;
}