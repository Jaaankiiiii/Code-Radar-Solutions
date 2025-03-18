#include <stdio.h>
int main(){
    int N;
    scanf("%i",&N);

    int arr[N];
    for(int i=0; i<N; i++){
        scanf("%i",&arr[i]);
    }

    for(int i=0; i<N; i++){
        int freq=0;
        for(int j=0; j<N; j++){
            if(arr[i]==arr[j]){
                freq++;
            }
        }
        if(freq>=2){
            printf("%i",arr[i]);
            return 0;
        }
    }
    printf("-1");
    return 0;
}