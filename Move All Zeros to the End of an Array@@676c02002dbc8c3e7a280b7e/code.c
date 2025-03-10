#include <stdio.h>
int main()
{
    int n;
    scanf("%i",&n);

    int arr[n];
    for(int i=0; i<n;i++){
        scanf("%i",&arr[i]);
    }
  
  int *p=arr;
  int *q=arr;
  for(int i=0;i<n;i++){
    if(*(p+i)!=0){
      int temp=*q;
      *q=*(p+i);
      *(p+i)=temp;
      
      q++;
    } 
  }
  for(int i=0;i <n ;i++){
    printf("%i ",arr[i]);
  }
}
