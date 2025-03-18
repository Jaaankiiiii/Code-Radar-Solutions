#include <stdio.h>
int main(){
    int N;
    scanf("%i",&N);

    int arr[N];
    for(int i=0; i<N; i++){
        scanf("%i",&arr[i]);
    }

    for(int i=0; i<N-1; i++){
        if(arr[i+1]>arr[i]){
            printf("%i ",arr[i]);
        }
    }
}