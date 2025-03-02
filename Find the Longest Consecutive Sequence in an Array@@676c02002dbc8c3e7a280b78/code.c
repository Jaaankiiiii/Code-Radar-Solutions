#include <stdio.h>
int main(){
    int n;
    scanf("%i",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%i",&arr[i]);
    }
    
    for(int i=0;i<n;i++){
        if(*(arr+i)>*(arr+i+1)){
            int temp=*(arr+i);
            *(arr+i)=*(arr+i+1);
            *(arr+i+1)=temp;
        }    
    }
    int consecutive=1;
    for(int i=0;i<n-1;i++){
        if(arr[i+1]=arr[i]+1){
            consecutive++;
        }else{
            break;
        }
    }
    printf("%i",consecutive);
    return 0;
}