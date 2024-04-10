#include<iostream>
using namespace std;

class animal{
    public:
    void speaking(){
        cout<<"speaking"<<endl;
    }
};

class dog: public animal{
    public:
    void speaking(){
        cout<<"barking"<<endl;
    }
};

int main(){
    dog obj;
    obj.speaking();

    return 0;
}
