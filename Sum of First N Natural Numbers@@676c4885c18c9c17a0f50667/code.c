#include <stdio.h>
int main(){
    int num,sum=0;
    scanf("%i",&num);
    for(int i=1;i<=num;i++){
        sum+=i;
    }
    printf("%i",sum);
    return 0;
}