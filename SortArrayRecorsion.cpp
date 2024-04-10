#include<iostream>
using namespace std;

bool isSorted(int *arr, int size){
    if(size==0 || size==1){
    return true;
    }

    if(arr[0] > arr[1]){
    return false;
    }
    else{
        bool remainingPart = isSorted(arr+1, size-1);
        return remainingPart;
    }
}

int main(){
     cout << "Enter the size of the array: ";
    int size;
    cin >> size;

    cout << "Enter the elements of the array: ";
    int arr[size];
    for (int i = 0; i < size; ++i) { // Fixed loop condition
        cin >> arr[i];
    }


    bool ans = isSorted(arr,size);

    if(ans){
        cout<<"Array is Sorted"<<endl;
    }
    else
    cout<<"Array is Unsorted"<<endl;

    return 0;
}