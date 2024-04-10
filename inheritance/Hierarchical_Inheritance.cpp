#include<iostream>
using namespace std;

class A{

    public:
    void func1(){
        cout<<"ye hai fun1"<<endl;
    }
};

class B: public A{
    public:
    void func2(){
        cout<<"ye hai fun2"<<endl;
    }
};

class C: public A{
    public:
    void func3(){
        cout<<"ye hai fun3"<<endl;
    }
};

int main(){

    A object1;
    object1.func1();

    B object2;
    object2.func1();
    object2.func2();

    C object3;
    object3.func1();
    object3.func3();


    return 0;

}