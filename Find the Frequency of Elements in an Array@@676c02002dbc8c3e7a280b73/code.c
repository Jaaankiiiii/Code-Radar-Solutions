#include <stdio.h>
int main(){
    int n;
    scanf("%i",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%i",&arr[i]);
    }

    for(int i=0;i<n;i++){
        int frequency=0;
        int alreadycounted=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                frequency++;
            }
            alreadycounted=1;
            if(alreadycounted){
                break;
            }
        }
        
        printf("%i %i\n",arr[i],frequency);
    }
    return 0;
}