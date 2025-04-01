#include <stdio.h>

void replaceWithGreatest(int arr[], int size) {
    if (size == 0) return; // Handle empty array case

    int max_from_right = arr[size - 1]; // Start with the last element
    arr[size - 1] = -1; // Replace the last element with -1

    // Iterate from the second last element to the first
    for (int i = size - 2; i >= 0; i--) {
        int current = arr[i]; // Store the current element
        arr[i] = max_from_right; // Replace it with the max from the right
        if (current > max_from_right) {
            max_from_right = current; // Update max_from_right if current is greater
        }
    }
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

    // Replace elements with the greatest element on their right
    replaceWithGreatest(arr, N);

    // Output: modified array
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}