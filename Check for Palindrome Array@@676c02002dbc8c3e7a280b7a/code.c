#include <stdio.h>
int main(){
    int n;
    scanf("%i",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%i",arr[i]);
    }
    int reversed[n];
    int j=0;
    for(int i=n-1;i>=0;i--){
        reversed[j++]=arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==reversed[i]){
            continue;
        }
        else{
            printf("NO");
        }
    }
    printf("YES");
    return 0;
}