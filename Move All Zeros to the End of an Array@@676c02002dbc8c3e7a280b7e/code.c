#include <stdio.h>
int main()
{
  int arr[5]={0,1,0,3,12};
  int n=5;
  
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
