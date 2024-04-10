#include <iostream>
using namespace std;

int firstOccurance(int arr[], int n, int key) {
    int start = 0;
    int end = n - 1;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            ans = mid;
            end = mid - 1; // Move left to find first occurrence
        } else if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}

int lastOccurance(int arr[], int n, int key) {
    int start = 0;
    int end = n - 1;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            ans = mid;
            start = mid + 1; // Move right to find last occurrence
        } else if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}

int totalOccurance(int first, int last){
    return (last-first)+1;
    
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

    int first= firstOccurance(array, size, key);
    int last= lastOccurance(array, size, key);

    cout<<"firstOccurance of the element is at index:  "<<first<<endl;
    cout<<"lastOccurance of the element is at index:  "<<last<<endl;

    cout<<"total occusrence:  "<<totalOccurance(first, last)<<endl;
  

    return 0;
}
