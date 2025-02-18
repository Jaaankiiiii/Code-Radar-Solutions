#include <stdio.h>
int main(){
    int num,n,bit;
    scanf("%i",&num);
    bit=(num>>n)&1;
    printf("%i",bit);
    return 0;
}