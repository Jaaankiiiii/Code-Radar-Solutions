#include <stdio.h>
int main(){
    int n;
    scanf("%i",&n);

    if(n<2){
        printf("-1");
        return 0;
    }

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%i",&arr[i]);
    }

    int max=arr[0];
    int second_max=-1;

    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    for(int i=0;i<n;i++){
        if(second_max<arr[i] && arr[i]<max){
            second_max=arr[i];
        }
        
    }
    if(second_max==-1){
        printf("-1");
    }else{
        printf("%i",second_max);
    }
    return 0;
}