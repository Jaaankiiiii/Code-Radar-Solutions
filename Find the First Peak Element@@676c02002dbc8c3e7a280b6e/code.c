#include <stdio.h>
int main(){
    int n;
    scanf("%i",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%i",&arr[i]);
    }
    for(int i=0;i<n-2;i++){
        if(arr[i]<arr[i+1] && arr[i+1]>arr[i+2]){
            printf("%i",arr[i+1]);
            return 0;
        }
    }
    if(n>1 && arr[n-2]<arr[n-1]){
        printf("%i",arr[n-1]);
        return 0;
    }
    printf("-1");
    return 0;
}