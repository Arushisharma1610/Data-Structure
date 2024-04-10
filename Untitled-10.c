#include <stdio.h>

// Function to perform linear search recursively
int linearSearchRecursive(int arr[], int key, int index, int size) {
    // Base case: element not found
    if (index >= size) {
        return -1;
    }

    // Base case: element found
    if (arr[index] == key) {
        return index;
    }

    // Recursive case: search in the remaining array
    return linearSearchRecursive(arr, key, index + 1, size);
}

int main() {
    int size, key;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input the array elements
    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the key to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Perform linear search recursively
    int result = linearSearchRecursive(arr, key, 0, size);

    // Check if the element was found or not
    if (result != -1) {
        printf("Element %d found at index %d\n", key, result);
    } else {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}
