#include <stdio.h>
int main(){
    int n,count=0,candidate,freq=0;
    scanf("%i",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%i",&arr[i]);
    }

    for(i=0;i<n;i++){
        if(count==0){
            candidate=arr[i];
            count=1;
        }
        else if (arr[i]==candidate){
            count++;
        }
        else{
            count--;
        }
    }

    for(int i=0;i<n;i++){
        if(arr[i]==candidate){
            freq++;
        }
    }

    if(freq>n/2){
        printf("%i",candidate);
    }
    else{
        printf("-1");
    }
    return 0;
}