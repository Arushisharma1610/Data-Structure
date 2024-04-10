#include <iostream>
using namespace std;

int main(){
    int size;
    cin>>size;

    int num[100];
    for(int i=0; i<size; i++ ){
        cin>>num[i];

    }

    int sum=0;
    for(int i=0; i<size; i++){
        sum+=num[i];

     
     }
     cout << "Sum of all elements in the array: " << sum << endl;

    return 0;   
}

