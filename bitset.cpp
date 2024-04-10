#include <iostream>
using namespace std;

int setBitsB(int b){
    int count=0;
    while(b != 0){
        if(b&1) {
        count++;
        }
        b=b>>1;
    }
      return count;  
}
int setBitsA(int a){
    int count=0;
    while(a != 0){
        if(a&1) {
        count++;
        }
        a=a>>1;
    }
      return count;  
}

int main(){
    int a,b;
    cin>>a>>b;
    int ans1=setBitsB(b);
    int ans2=setBitsA(a);
    cout<<"no. of bits in A:  "<<ans1<<endl;
    cout<<"no. of bits in B:  "<<ans2<<endl;
    
    int ans=ans1+ans2;

    cout<<"total nom of bits:  "<<ans<<endl;

    return 0;

}

