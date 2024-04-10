#include<iostream>
using namespace std;

class A{
    public:
    void hello(){
        cout<<"hello"<<endl;
    }
    
    // same name of the function can be used, but with the different parameeter


    void hello(string color){
        cout<<"hello"<<endl;
    }

    //  also thier is no difference between void and int ,
    //   means by changing tha identifier we can not achiver funtion overlaoading ,
    // we have to pass diff parameter also

    int hello(int n){
        cout<<"hello"<<endl;

        return n;
    }

};

int main(){

    A object ;
    object.hello();

    return 0;
}