#include<iostream>
using namespace std;

class animal{

    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"barking"<<endl;
    }
};

class dog: public animal{
    // calling single inheritance funtion
};

int main(){
    dog d;
    d.speak();

    return 0;
}