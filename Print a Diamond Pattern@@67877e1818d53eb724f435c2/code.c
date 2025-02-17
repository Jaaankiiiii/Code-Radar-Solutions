#include <stdio.h>
int main(){
    int rows,i,j,spaces,k,l,space;
    scanf("%i",&rows);
    for(int i=1;i<=rows;i++){
        for(spaces=1;spaces<=rows-i;spaces++){
            printf(" ");
        }
        for(int j=1;j<=(2*i-1);j++){
            printf("*");
        }
    printf("\n");
    }
    for(int k=rows+1;k<=rows+(rows-1);k++){
        for(space=-(rows-k);space<=-(rows-(rows+(rows-1)));space--){
            printf(" ");
        }
        for(int l=rows-1;l<=rows;l++){
            printf("*");
        }
    printf("\n");   
    }
    return 0;
}
