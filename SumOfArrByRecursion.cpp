#include<iostream>
using namespace std;

int arraySum(int *array, int size){
    if(size==1)
    return array[0];

    return array[size-1]+ arraySum(array, size-1);
}

int main(){
    cout<<"Enter the size of the Array"<<endl;
    int size;
    cin>>size;

    cout<<"enter the elements of the Array"<<endl;
    int array[size];
    for(int i=0; i<size; i++)
    cin>>array[i];

    int sum = arraySum(array, size);
    cout<<"the sum of the array element is"<<sum<<endl;
}