void bubbleSort(char arr[], int size)
{
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-1-i; j++ ){
            if(arr[j]>arr[j+1]){
                char temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=arr[j];
            }
        }
    }
}
void printArray(char arr[], int size){
    for(int i=0; i<size; i++){
        printf("%c ",arr[i]);
    }
}