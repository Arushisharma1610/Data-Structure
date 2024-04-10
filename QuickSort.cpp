#include<iostream>
using namespace std;

int partition(int array[], int s, int e){

    int pivot = array[s];
    int cnt = 0;
    
    for(int i=s+1; i<=e; i++){
        if(array[i] <= pivot){
            cnt++;
        }
    }

    // placing pivot at right
    int pivotIndex = s+cnt;
    swap(array[pivotIndex], array[s]);

    // sorting both parts

    int i=s, j=e;

    while(i < pivotIndex && j>pivotIndex){

        while(array[i] < pivot)
            i++;
        
        while(array[j] > pivot)
            j--;

        if(i < pivotIndex && j > pivotIndex){
            swap(array[i], array[j]);
            i++;
            j--;
        }
    }

    return pivotIndex;
}

void quickSort(int array[], int s, int e){
    if(s>=e)
        return;

    int p = partition(array, s, e);

    // for left part
    quickSort(array, s, p-1);

    // for right part
    quickSort(array,p+1, e);
}


int main(){
    cout << "Enter the size of the array: ";
    int size;
    cin >> size;

    cout << "Enter the elements of the array: ";
    int array[size];
    for(int i = 0; i < size; i++)
        cin >> array[i];

    quickSort(array, 0, size-1);

    cout << "Sorted array:" << endl;
    for(int i = 0; i < size; i++){
        cout << array[i]<<" " ;
    }

    return 0;
}

