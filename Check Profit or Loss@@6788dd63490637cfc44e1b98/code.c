#include <stdio.h>
int main(){
    int costPrice, sellingPrice;
    scanf("%i %i",&costPrice,&sellingPrice);
    if(costPrice<sellingPrice){
        printf("Profit");
    }
    else if(sellingPrice<costPrice){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}