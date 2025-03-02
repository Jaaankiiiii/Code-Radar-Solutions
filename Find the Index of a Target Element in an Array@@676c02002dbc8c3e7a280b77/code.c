#include <stdio.h>
int main(){
    int n;
    scanf("%i",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%i",&arr[i]);
    }
    int key;
    scanf("%i",&key);

    for(int i=0;i<n;i++){
        if(key==arr[i]){
            printf("%i",i);
            return 0;
        }
    }
    printf("-1");
    return 0;
}