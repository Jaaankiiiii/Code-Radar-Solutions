int partition(int arr[], int left, int right) {
    int pivot = arr[right];
    int i = left - 1;
    for (int j = left; j < right; j++) {
        if (arr[j] <= pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[right];
    arr[right] = temp;
    return i + 1;
}

// QuickSelect function to find k-th smallest element
int quickSelect(int arr[], int left, int right, int k) {
    if (left <= right) {
        int pivotIndex = partition(arr, left, right);
        if (pivotIndex == k)
            return arr[pivotIndex];
        if (pivotIndex > k)
            return quickSelect(arr, left, pivotIndex - 1, k);
        return quickSelect(arr, pivotIndex + 1, right, k);
    }
    return -1;
}