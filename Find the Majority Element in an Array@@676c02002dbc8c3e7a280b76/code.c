#include <stdio.h>
int main(){
    int n;
    scanf("%i",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%i",&arr[i]);
    }

    if(n<2){
        printf("%i",arr[0]);
        return 0;
    }
    
    for(int i=0;i<n;i++){
        int freq=0;
        for(int j=0;j<n;j++){
            freq++;
        }
        if(freq=n/2){
        printf("%i",arr[i]);
        }else{
        printf("-1");
        }
    }

    return 0;
}