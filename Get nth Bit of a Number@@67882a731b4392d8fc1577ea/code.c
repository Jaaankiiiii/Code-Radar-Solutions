#include <stdio.h>
int main(){
    int num,n,bit;
    scanf("%i %i",&num,&n);
    bit=(num>>n)&1;
    printf("%i",bit);
    return 0;
}