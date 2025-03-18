#include <stdio.h>
int main(){
    int N;
    scanf("%i",&N);

    int arr[N];
    for(int i=0; i<N; i++){
        scanf("%i",&arr[i]);
    }

    for(int i=0; i<N; i++){
        int count=0;
        for(int j=i+1;j<N;j++){
            if(arr[i]>arr[j]){
                count++;
            }
            else{
                count--;
            }
        }
        if(count==(N-i+1)){
            printf("%i",arr[i]);
        }
    }
}