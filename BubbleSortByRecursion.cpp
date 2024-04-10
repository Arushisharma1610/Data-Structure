#include<iostream>
using namespace std;

void SortArray(int *array, int size){

    if(size==0|| size==1)
    return;

    for(int i=0; i<size-1; i++){
        if(array[i] > array[i+1])
        swap(array[i], array[i-1]);
    }

    SortArray(array, size-1);
}

int main(){
    cout<<"enter the size of the array";
    int size;
    cin>> size;

    cout<<"enter the element of the array";
    int array[size];
    for(int i=0; i<size; i++)
    cin>>array[i];

    SortArray(array ,size);
   for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;

    return 0;
}