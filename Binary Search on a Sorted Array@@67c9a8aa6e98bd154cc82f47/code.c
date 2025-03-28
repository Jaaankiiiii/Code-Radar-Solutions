int binarySearch(int arr, int size, int target)
{
    for(int i=0; i<size; i++){
        if(arr[i]==target){
            result=i;
            return result
        }
    }
    result =-1;
    return result;
}