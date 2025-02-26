#include <stdio.h>
int main(){
    int n,arr[];
    scanf("%i",&n);
    for(int i=0;i<n;i++){
        scanf("%i",&arr[i]);
    }
    int first=arr[0];
    for(int i=0;i<n;i++){
        if(first<=arr[i]){
            first=arr[i];
        }
        else{
            printf("Not Sorted");
            return 0;
        }
    }
    printf("Sorted");
    return 0;
}
