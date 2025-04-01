#include <stdio.h>
void reverse(int arr[], int start, int end){
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
void rotateArray(int arr[], int size, int k){
    k=k%size;
    if(k==0) return;

    reverse(arr,0,size-1);
    reverse(arr,0,k-1);
    reverse(arr,k,size-1);
}
int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int k;
    scanf("%d",&k);

    rotateArray(arr,n,k);

    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}