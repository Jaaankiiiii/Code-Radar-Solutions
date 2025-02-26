#include <stdio.h>
int main(){
    int n;
    scanf("%i",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%i",&arr[i]);
    }
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(min>=arr[i]){
            min=arr[i];
        }
    }
    printf("%i ",min);

    int max=arr[0];
    for(int i=0;i<n;i++){
        if(max<=arr[i]){
            max=arr[i];
        }
    }
    printf("%i ",max);
    return 0;
}