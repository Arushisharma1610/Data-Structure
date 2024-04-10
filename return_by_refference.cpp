#include <iostream>
using namespace std;

int& getValue() {
    static int value = 5; // Static variable with lifetime extending beyond the function call
    return value; // Returning a reference to the static variable
}

int main() {
    int& ref = getValue(); // Getting reference to the static variable
    cout << "Value before modification: " << ref << endl;

    ref = 10; // Modifying the value through the reference

    cout << "Value after modification: " << ref << endl;

    return 0;
}
