#include <iostream>
using namespace std;

void Reverse(int arr[], int n){
    int start = 0;
    int end = n - 1;

    while (start <= end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[6] = {1, 2, 4, 5, 6, 7};
    int brr[5] = {1, 2, 3, 4, 5};

    Reverse(arr, 6);
    Reverse(brr, 5);

    cout << "Reversed arr: ";
    printArray(arr, 6);
    
    cout << "Reversed brr: ";
    printArray(brr, 5);

    return 0;
}
