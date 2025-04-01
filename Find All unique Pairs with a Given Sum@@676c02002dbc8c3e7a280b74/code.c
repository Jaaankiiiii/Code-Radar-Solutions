#include <stdio.h>
#include <stdlib.h>

void findUniquePairs(int arr[], int size, int target) {
    int *hashTable = (int *)calloc(target + 1, sizeof(int)); // Create a hash table to track seen numbers
    int foundPairs = 0; // To track if we found any pairs

    for (int i = 0; i < size; i++) {
        int complement = target - arr[i];

        // Check if the complement exists in the hash table
        if (complement >= 0 && hashTable[complement] > 0) {
            // Print the pair in sorted order to ensure uniqueness
            if (arr[i] < complement) {
                printf("%d %d\n", arr[i], complement);
            } else {
                printf("%d %d\n", complement, arr[i]);
            }
            foundPairs = 1; // Mark that we found at least one pair
        }

        // Mark the current number in the hash table
        if (arr[i] >= 0 && arr[i] <= target) {
            hashTable[arr[i]]++;
        }
    }

    if (!foundPairs) {
        printf("No unique pairs found.\n");
    }

    free(hashTable); // Free the allocated memory
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

    int T;
    // Input: target sum
    scanf("%d", &T);

    // Find and output unique pairs
    printf("%d:\n", T);
    findUniquePairs(arr, N, T);

    return 0;
}