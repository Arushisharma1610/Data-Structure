#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            return mid;
        }

        if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}

int main() {
    cout << "Enter the size of the array: ";
    int size;
    cin >> size;

    cout << "Enter the elements of the array: ";
    int array[size];
    for (int i = 0; i < size; ++i) { // Fixed loop condition
        cin >> array[i];
    }

    cout << "Enter the element you want to search for: ";
    int key;
    cin >> key;

    int index = binarySearch(array, size, key);
    if (index != -1) {
        cout << "Element is at index: " << index << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}