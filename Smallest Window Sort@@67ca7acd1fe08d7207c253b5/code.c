int findUnsortedSubarray(int arr[], int size)
{
    int length;
    for(int i=0; i<size; i++){
        if(arr[i]>arr[i+1]){
            length=size-1-i; //5
            return length;
        }
    }
    return 0;
}