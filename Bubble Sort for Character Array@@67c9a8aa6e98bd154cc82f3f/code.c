void bubbleSort(int arr[], int size)
{
    for(int i=0; i<size-1; i++){
        for(int j=i+1; j<size-1-i; j++ ){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=arr[j];
            }
        }
    }
}
void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        printf("%i ",arr[i]);
    }
}