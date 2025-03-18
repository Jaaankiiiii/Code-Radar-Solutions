#include <stdio.h>
int main(){
    int N,k;
    scanf("%i %i",&N,&k);

    int arr[N];
    for(int i=0; i<N; i++){
        scanf("%i",&arr[i]);
    }

    int count=0;
    for(int i=0; i<N; i++){
        if(arr[i]==k){
            count++;
        }
    }
    printf("%i",count);
}