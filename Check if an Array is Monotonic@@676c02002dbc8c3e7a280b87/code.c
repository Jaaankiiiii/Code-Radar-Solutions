#include <stdio.h>
int main(){
    int size;
    scanf("%i",&size);

    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%i",&arr[i]);
    }
    int inc=0;
    int dec=0;
    for(int i=0; i<size-1; i++){
        if(arr[i]>=arr[i+1]){
            inc++;
        }
        else{
            inc--;
        }
    }
    for(int i=0; i<size-1; i++){
        if(arr[i]<=arr[i+1]){
            dec++;
        }
        else{
            dec--;
        }
    }
    
    }
    if(inc==size || dec==size){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}