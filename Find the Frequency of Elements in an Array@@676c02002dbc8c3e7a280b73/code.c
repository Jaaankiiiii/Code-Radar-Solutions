#include <stdio.h>
int main(){
    int n;
    scanf("%i",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%i",arr[i]);
    }
    int j=0;

    for(int i=0;i<n;i++){
        int frequency=0;
        if(arr[i]){
            frequency++;
        }
        printf("%i %i\n",arr[i],frequency);
    }
    return 0;
}