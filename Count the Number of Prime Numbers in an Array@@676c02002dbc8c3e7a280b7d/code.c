#include <stdio.h>
int is_prime(int num){
    int factor=0;
    for(int i=1; i<=num ;i++){
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
    for(int j=0; j<size; j++){
        scanf("%i",&arr[j]);
    }

    int prime_numbers=0
    for(int j=0; j<size; j++){
        if(is_prime(arr[j])){
            prime_numbers++;
        }
    }
    printf("%i",prime_numbers);
    return 0;
}