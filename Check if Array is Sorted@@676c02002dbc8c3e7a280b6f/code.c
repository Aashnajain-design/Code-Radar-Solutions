#include <stdio.h>

int isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return 0; // Not sorted
        }
    }
    return 1; // Sorted
}

int main() {
    int arr[] = {}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]);

    if (isSorted(arr, n)) {
        printf("Sorted");
    } else {
        printf("Not Sorted");
    }

    return 0;
}
