#include <iostream>
#include <limits>
using namespace std;


int getMIN(int num[], int n){
    int mini= INT32_MAX;
    for(int i=0; i<n; i++){
        mini=min(mini, num[i]);
    }
    return mini;
}

int getMAX(int num[], int n){
    int maxi= INT32_MIN;
    for(int i=0; i<n; i++){
        maxi=max(maxi, num[i]);
    }
    return maxi;
}

int main(){
    int size;
    cin>>size;

    int num[100];
    for(int i=0; i<size; i++ ){
        cin>>num[i];

        cout<<"maximum value of the array"<<getMAX(num,size)<<endl;
        cout<<"minimum value of the array"<<getMIN(num,size)<<endl;

    }
       return 0;
}