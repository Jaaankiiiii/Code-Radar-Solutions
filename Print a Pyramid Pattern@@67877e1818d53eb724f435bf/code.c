#include <stdio.h>
int main(){
    int row,i,j,space;
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(space=1;space<=row;space++){
            printf(" ");
        }
        for(j=1;j<=row;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}