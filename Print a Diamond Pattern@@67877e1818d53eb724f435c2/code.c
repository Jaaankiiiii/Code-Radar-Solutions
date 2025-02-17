#include <stdio.h>
int main(){
    int rows,i,j,spaces,k,l,space;
    scanf("%i",&rows);
    for(int i=1;i<=rows;i++){
        for(spaces=1;spaces<=row-i;spaces++){
            printf(" ");
        }
        for(int j=1;j<=(2*i-1);j++){
            printf("*");
        }
    printf("\n");
    }
    for(int k=row+1;k<=row+(row-1);k++){
        for(space=-(row-k);space<=-(row-(row+(row-1)));space--){
            printf(" ");
        }
        for(int l=row-1;l<=row;l++){
            printf("*");
        }
    printf("\n");   
    }
    return 0;
}
