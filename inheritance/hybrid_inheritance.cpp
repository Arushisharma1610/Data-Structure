#include<iostream>
using namespace std;

// implementing hybrid inheritance;

class A{
    public:
    void fun1(){
        cout<<"hello 1"<<endl;
    }
};

class D{
    public:
    void fun3(){
        cout<<"namaste"<<endl;
    }
};

class B: public A{
    public:
    void fun2(){
        cout<<"hello 2"<<endl;
    }
};

class C: public A, public D{

};

int main(){
    A object1;
    object1.fun1();

    C object2;
    object2.fun1();
    object2.fun3();
   

    B object3;
    object3.fun1();
    object3.fun2();

    return 0;


}