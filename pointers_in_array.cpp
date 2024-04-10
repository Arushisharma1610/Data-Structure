#include<iostream>
using namespace std;

int main(){
    int arr[5]={2,4,6,7,8};

    cout<<&arr<<endl;
    cout<<&arr[0]<<endl;
    cout<< arr <<endl;

    cout<<*arr<<endl;
    cout<<*arr + 1<<endl;
    cout<<*(arr + 1)<<endl;

   return 0;
}
