#include <stdio.h>
int main()
{
    int N;
    scanf("%i",&N);

    int arr[N];
    for(int i=0; i<N; i++){
        scanf("%i",&arr[i]);
    }
    if(N<2){
        printf("-1");
        return 0;
    }
    //sorting; 
    for(int i=0; i<N; i++){
        for(int j=0; j<N-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    int left=arr[0];
    int right=arr[0];
    int min=__INT_MAX__;
    
    for(int i=0; i<N-1; i++){
        int difference;
        difference=arr[i+1]-arr[i];
        if(difference<min){
            min=difference;
            left=arr[i];
            right=arr[i+1];
        }
    }
    printf("%i %i",left,right);
}