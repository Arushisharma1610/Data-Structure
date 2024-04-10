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

class desiKutta: public dog{

};

int main(){
    desiKutta g;
    g.speak();

    return 0;
}