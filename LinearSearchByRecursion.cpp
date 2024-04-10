#include<iostream>
using namespace std;

bool linearSearch(int array[], int size, int key){

    if(size==0)
    return false;

    if(array[0]==key)
    return true;
    
    else{
        bool remainingPart = linearSearch(array+1, size-1, key);
        return remainingPart;
    }
}

int main(){
     cout<<"Enter the size of the Array"<<endl;
    int size;
    cin>>size;

    cout<<"enter the elements of the Array"<<endl;
    int array[size];
    for(int i=0; i<size; i++)
    cin>>array[i];

    cout<<"enter the elemnet you want to search"<<endl;
    int key;
    cin>>key;

    bool ans = linearSearch(array, size, key);

    if(ans){
        cout<<"element is present in the array"<<endl;
    }
    else{
        cout<<"element is not present in the array"<<endl;
    }
}
