#include <stdio.h>
int main(){
    int n;
    scanf("%i", &n);

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%i",&arr[i]);
    }

    void bubbleSort(arr, n)
    {

        for(int i=0;i<n;i++){
            for(int j=0; j<n-i-1; j++){
                if(arr[j]>arr[j+1]){
                    arr[j],arr[j+1]=arr[j+1],arr[j];
                }
            }
        }
    }

    void printArray(arr, n){
        for(int i=0; i<n; i++){
            printf("%i ",arr[i]);
        }
    }
    bubbleSort(arr,n);
    printArray(arr,n);
    return 0;
}
