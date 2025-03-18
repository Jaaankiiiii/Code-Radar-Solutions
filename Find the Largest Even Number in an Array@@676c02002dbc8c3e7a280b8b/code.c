#include <stdio.h>
int main()
{
    int N;
    scanf("%i",&N);

    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%i",&arr[i]);
    }

    int max=arr[0];
    for(int i=0;i<N;i++){
        if(arr[i]%2==0){
            if(arr[i]>max){
                max=arr[i];
            }
        }
    }
    printf("%i",max);
    return 0;
}