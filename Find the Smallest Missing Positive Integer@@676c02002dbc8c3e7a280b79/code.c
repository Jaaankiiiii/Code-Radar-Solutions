#include <stdio.h>
int main()
{
    int N;
    scanf("%i",&N);

    int arr[N];
    for(int i=0; i<N; i++){
        scanf("%i",&arr[i]);
    }

    //sorting 
    for(int i=0; i<N-i; i++){
        for(int j=0; j<N-i-1; j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

    //missing postive integer
    for(int i=0; i<N-1; i++){
        if(arr[i]>=0 && !(arr[i]==arr[i+1]+1)){
            printf("%i",arr[i]+1);
            return 0;
        }
    }
    printf("%i",1+arr[N-1]);
    return 0;
    
}