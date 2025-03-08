#include <stdio.h>
int is_prime(int factor){
    if(factor==2){
        return 1;
    }
}
int main(){
    int size=0;
    scanf("%i",&size);

    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%i",&arr[i]);
    }

    int prime_number=0
    for(int i=1;i<=size;i++){
        int factor=0;
        if(arr[i]%i==0){
            factor++;
        }
        is_prime(factor);
        prime_number++;
    }
    printf("%i",prime_number);
    return 0;
    
}