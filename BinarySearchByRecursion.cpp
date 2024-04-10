#include <iostream>
#include <algorithm>
using namespace std;

// Function signature with correct parameter types
bool BinarySearch(int *array, int start, int end, int key) {
    if (start > end)
        return false;

    int mid = start + (end - start) / 2;

    if (array[mid] == key)
        return true;

    if (array[mid] > key) {
        return BinarySearch(array, start, mid - 1, key);
    }
    else {
        return BinarySearch(array, mid + 1, end, key);
    }
}

int main() {
    cout << "Enter the size of the Array" << endl;
    int size;
    cin >> size;

    cout << "Enter the elements of the Array" << endl;
    int array[size];
    for (int i = 0; i < size; i++)
        cin >> array[i];

    sort(array, array + size);

    cout << "The sorted Array is: " << endl;
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;

    cout << "Enter the element you want to search" << endl;
    int key;
    cin >> key;

    // Corrected variable names in function call
    cout << "Present or not: " << BinarySearch(array, 0, size - 1, key) << endl;

    return 0;
}
