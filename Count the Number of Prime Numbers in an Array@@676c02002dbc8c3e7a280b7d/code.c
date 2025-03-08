#include <stdio.h>
int main(){
    int size;
    scanf("%i",&size);

    int arr[n];
    for(int i=0; i<size; i++){
        scanf("%i",&arr[i]);
    }

    no_of_prime_number=0;
    for(int i=0;i<size;i++){
        factor=0;
        if(arr[i]%i==0){
            factor++;
        }
        if(factor==2){
            no_of_prime_number++;
        }
    }
    printf("%i",no_of_prime_number);
    return 0;
}