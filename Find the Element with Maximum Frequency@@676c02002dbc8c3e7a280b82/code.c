#include <stdio.h>
int main()
{
    int N;
    scanf("%i",&N);

    int arr[N];
    for(int i=0; i<N; i++){
        scanf("%i",&arr[i]);
    }

    int max=0;
    int max_arr=arr[0];

    for(int i=0; i<N; i++){
        freq=0;
        for(int i=0; i<N; i++){
            if(arr[i]==arr[j]){
                freq++;
            }
        }
        if(freq>max){
            max=freq;
            max_arr=arr[i];
        }
    }
    printf("%i",max_arr);
    return 0;
}