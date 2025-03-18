#include <stdio.h>

int main() {
    int N;
    scanf("%i", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%i", &arr[i]);
    }

    int T;
    scanf("%i", &T);

    // Sort the array to group identical values together
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Now, find pairs with sum T
    for (int i = 0; i < N; i++) {
        // Skip duplicates in the outer loop
        if (i > 0 && arr[i] == arr[i - 1]) {
            continue;
        }
        
        for (int j = i + 1; j < N; j++) {
            if (arr[i] + arr[j] == T) {
                printf("%i %i\n", arr[i], arr[j]);
            }
        }
    }

    return 0;
}
