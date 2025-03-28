void selectionSort(char arr[],int size){
    for(int i=0; i<size-1; i++){
        int min=i;
        for(int j=i+1; j<size; j++){
            if(arr[j]<arr[i]){
                min=j;
            }
        }
        char temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}
void printArray ( char arr[], int size){
    for(int i=0; i<size; i++){
        printf("%c ",arr[i]);
    }
}