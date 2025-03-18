#include <stdio.h>
int main()
{
    int N,K;
    scanf("%i %i",&N,&K);

    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%i",&arr[i]);
    }

    int count=0;
    for(int i=0;i<N;i++){
        if(arr[i]>K){
            count++;
        }
    }
    printf("%i",count);
    return 0;
}