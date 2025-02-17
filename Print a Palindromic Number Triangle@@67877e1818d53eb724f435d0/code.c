#include <stdio.h>
int main(){
    int n,row,col,space;
    scanf("%i",&n);
    int dec=2;
    for(row=1;row<=n;row++){
        for(space=1;space<=n-row;space++){
            printf(" ");
        }
        for(col=1;col<=(2*row-1);col++){
    
            if(col>row){
                printf("%i",col-dec);
                dec++;
            }else{
            printf("%i",col);
            }
        }
        printf("\n");
    }
    return 0;
}