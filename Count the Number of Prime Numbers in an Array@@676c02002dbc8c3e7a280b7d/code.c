#include <stdio.h>
int is_prime(int num){
    int factor=0;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            factor++;
        }
    }
    if(factor==2){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int size;
    scanf("%i",&size);

    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%i",&arr[i]);
    }
    
    int prime_numbers=0
    for(int i=0;i<size;i++){
        if(is_prime(arr[i])){
            prime_numbers++;
        }
    }
    printf("%i",prime_numbers);
    return 0;
}