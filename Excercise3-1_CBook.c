#include <stdio.h>

int binsearch(int x, int v[], int n) {
    int low, high, mid;
    low = 0;
    high = n - 1;

    while (low < high) {
        mid = (low + high) / 2;

        if (x <= v[mid]) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }

    // After loop, check if the found position actually contains x
    if (v[low] == x) {
        return low;
    }
    return -1; // no match
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11}; // Sorted array
    int target = 7; // Value to search for
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate array size

    int result = binsearch(target, arr, n);
    
    if (result != -1) {
        printf("Element %d found at index %d.\n", target, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }
    
    return 0;
}
