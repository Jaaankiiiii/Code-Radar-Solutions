#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int findSmallestMissingPositive(int arr[], int size) {
    // Rearrange the array
    for (int i = 0; i < size; i++) {
        while (arr[i] > 0 && arr[i] <= size && arr[arr[i] - 1] != arr[i]) {
            swap(&arr[i], &arr[arr[i] - 1]);
        }
    }

    // Find the first missing positive integer
    for (int i = 0; i < size; i++) {
        if (arr[i] != i + 1) {
            return i + 1; // Return the first missing positive integer
        }
    }

    return size + 1; // If all integers from 1 to size are present
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

    // Find and output the smallest missing positive integer
    int result = findSmallestMissingPositive(arr, N);
    printf("%d\n", result);

    return 0;
}