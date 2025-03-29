int findUnsortedSubarray(int arr[], int size)
{
    int length;
    for(int i=0; i<size; i++){
        if(i==0){
            if(arr[i]>arr[i+1]){
                return size;
            }
        }
        if(arr[i]>arr[i+1]){
            length=size-1-i; //4-1-0
            return length;
        }
    }
    return 0;
}