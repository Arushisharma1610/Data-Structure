#include<iostream>
using namespace std;

int* getPointer() {
    int a = 5;
    int* ans = &a;
    return ans;
}

int main() {
    int* pointer = getPointer();
    cout << "Value at the pointer: " << *pointer << endl;
    return 0;
}

