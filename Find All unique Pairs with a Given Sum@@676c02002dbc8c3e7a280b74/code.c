#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b; // Comparison function for qsort
}

void findUniquePairs(int arr[], int size, int target) {
    // Sort the array
    qsort(arr, size, sizeof(int), compare);

    int left = 0;
    int right = size - 1;
    int foundPairs = 0; // To track if we found any pairs

    while (left < right) {
        int currentSum = arr[left] + arr[right];

        if (currentSum == target) {
            // Print the pair
            printf("%d %d\n", arr[left], arr[right]);
            foundPairs = 1;

            // Move both pointers and skip duplicates
            while (left < right && arr[left] == arr[left + 1]) left++;
            while (left < right && arr[right] == arr[right - 1]) right--;

            left++;
            right--;
        } else if (currentSum < target) {
            left++; // Move left pointer to increase the sum
        } else {
            right--; // Move right pointer to decrease the sum
        }
    }

    if (!foundPairs) {
        printf("No unique pairs found.\n");
    }
}

int main() {
    int N;

    scanf("%d", &N);

    int arr[N];


    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int T;

    scanf("%d", &T);

    // Find and output unique pairs

    findUniquePairs(arr, N, T);

    return 0;
}