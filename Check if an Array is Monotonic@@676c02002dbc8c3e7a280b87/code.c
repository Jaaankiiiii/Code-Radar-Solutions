#include <stdio.h>
int main(){
    int size;
    scanf("%i",&size);

    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%i",&arr[i]);
    }
    int count=0;
    for(int i=0; i<size-1; i++){
        if(arr[i]>=arr[i+1] || arr[i]<=arr[i+1]){
            count++;
        }
        else{
            count--;
        }
    }
    if(count==size){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}