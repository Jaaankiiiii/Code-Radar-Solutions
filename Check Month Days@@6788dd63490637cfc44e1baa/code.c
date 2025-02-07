#include <stdio.h>
int main(){
    int month;
    scanf("%i",&month);
    if(month<12 && month>0){
        if(month==2){
            printf("28");
        }
        else if(month==8){
            printf("31")
        }
        else{
            if(!(month%2==0)){
                printf("31");
            }
            else{
                printf("30");
            }
        }
    }
    return 0;
}