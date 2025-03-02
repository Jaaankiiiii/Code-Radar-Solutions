#include <stdio.h>
int main(){
    int n;
    scanf("%i",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%i",&arr[i]);
    }

    int max=arr[0];
    int second_max=arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    for(int i=0;i<n;i++){
        if(arr[i]>second_max && second_max<max){
            second_max=arr[i];
        }
    }
    printf("%i",second_max);
    return 0;
}