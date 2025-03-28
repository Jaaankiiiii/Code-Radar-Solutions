void selectionSort(int arr[], int size ){
    for(int i=0; i<size; i++){
        int min=i;
        for(int j=0; j<size; j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
       printf("%i ",arr[i]); 
    }
}