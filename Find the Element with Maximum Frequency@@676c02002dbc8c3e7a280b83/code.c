#include <stdio.h>
int main(){
    int size;
    scanf("%i",&size);

    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%i",&arr[i]);
    }
    int max=0;
    int max_arr=arr[0];
    for(int i=0; i<size; i++){
        int freq=0;
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j]){
                max++;
            }
        }
        if(max<freq){
            max=freq;
            max_arr=arr[i];
        }
    }
    printf("%i",max_arr);
    return 0;
}