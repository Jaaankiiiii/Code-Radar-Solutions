#include <stdio.h>

void reverse(int arr[], int start, int end) {
    while (start < end) {
        // Swap elements at start and end
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateArray(int arr[], int size, int k) {
    // Normalize k to ensure it's within the bounds of the array size
    k = k % size;
    if (k == 0) return; // No rotation needed

    // Step 1: Reverse the entire array
    reverse(arr, 0, size - 1);
    // Step 2: Reverse the first k elements
    reverse(arr, 0, k - 1);
    // Step 3: Reverse the remaining elements
    reverse(arr, k, size - 1);
}

int main() {
    int N;

    // Input: size of the array
 
    scanf("%d", &N);

    int arr[N];

    // Input: array elements
 
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int K;
    // Input: number of positions to rotate

    scanf("%d", &K);

    // Rotate the array
    rotateArray(arr, N, K);

    // Output: rotated array
    
    for (int i = 0; i < N; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}