#include <stdio.h>
int main(){
    int N;
    scanf("%i",&N);

    int arr[N];
    for(int i=0; i<N; i++){
        scanf("%i",&arr[N]);
    }

    for(int i=0; i<N; i++){
        int freq=0;
        for(int j=0; j<N; j++){
            if(arr[i]==arr[j]){
                freq++;
            }
        }
        if(freq>1){
            printf("%i",arr[j]);
            return 0;
        }
    }
    printf("-1");
    return 0;
}