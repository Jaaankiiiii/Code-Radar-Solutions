#include <stdio.h>
int main(){
    int n;
    scanf("%i",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%i",&arr[i]);
    }
    
    for(int i=0;i<n;i++){
        int freq=0;
        for(int j=0;j<n;j++){
            freq++;
        }
        if(freq=n/2){
            printf("%i",arr[i]);
            return 0;
        }
    }
}