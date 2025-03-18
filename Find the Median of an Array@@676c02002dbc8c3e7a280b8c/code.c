#include <stdio.h>
int main(){
    int N;
    scanf("%i",&N);

    int arr[N];
    for(int i=0; i<N; i++){
        scanf("%i",&arr[i]);
    }

    for(int i=0;i<N-i;i++){
        for(int j=0;j<N-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int median=0;
    if(!(N%2==0)){
        int element=N/2;
        median=arr[element];
    }

    else{
        int left=N/2-1;
        int right=N/2;
        median=(arr[left]+arr[right])/2;
    }
    printf("%i",median);
    return 0;
}