#include <stdio.h>

int main() {
    int a[] = {1, 4, 5, 6, 7}; // sorted
    int ele = 7;
    int low = 0, high = 4;
    int mid;

    while (low <= high) {
        mid = (low + high) / 2;

        if (a[mid] < ele) {
            low = mid + 1;
        }
        else if (a[mid] > ele) {
            high = mid - 1;
        }
        else {
            printf("Element found at index %d", mid);
            return 0;
        }
    }

    printf("Element not found");
    return 0;
}
