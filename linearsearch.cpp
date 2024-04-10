#include <iostream>
using namespace std;

bool search(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;

}

int main(){
    int size;
    cin>>size;

    int num[100];
    for(int i=0; i<size; i++){
        cin>>num[i];
    }
    int key;
    cout<<"enter the element you seach for"<<endl;
    cin>>key;

    bool found= search(num,10,key);

    if(found){
        cout<<"key is present"<<endl;
    }
    else{
        cout<<"key is absent"<<endl;
    }

}