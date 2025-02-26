#include <stdio.h>
int main(){
    int n;
    scanf("%i",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%i\n",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]<arr[i+1] && arr[i+1]>arr[i+2]){
            printf("%i",arr[i+1]);
            return 0;
        }
    }
    printf("-1");
    return 0;
}