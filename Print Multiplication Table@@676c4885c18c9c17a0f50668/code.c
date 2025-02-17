#include <stdio.h>
int main(){
    int num;
    scanf("%i",&num);
    for(int i=1;i<=10;i++){
        printf("%i x %i = %i\n",num,i,num*i);
    }
    return 0;
}