#include <stdio.h>
int main(){
    int N;
    scanf("%i",&N);

    int arr[N];
    for(int i=0; i<N; i++){
        scanf("%i",&arr[i]);
    }

    int T;
    scanf("%i",&T);

    for(int i=0;i<N;i++){
        for(int j=i;j<N;j++){
                if(arr[i]+arr[j]==T){
                    printf("%i %i\n",arr[i],arr[j]);
                }
        }

    }
    return 0;
}