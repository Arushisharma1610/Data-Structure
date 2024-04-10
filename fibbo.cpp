#include <iostream>
using namespace std;

int fibbo(int n){
    int a=0;
    int b=1;
    for(int i=2; i<=n; i++){
        int next= a+b;
        a=b;
        b=next;
        
    }
    return b;
}

int main(){
    int n;
    cin>>n;
    cout<<"the"<<n<<"th term of the series is"<<fibbo(n)<<endl;
    return 0;
}