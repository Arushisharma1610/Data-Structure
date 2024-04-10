#include<iostream>
using namespace std;

void reverse(string& str, int i, int j ){

    if(i>j)
    return;

    swap(str[i], str[j]);
    i++;
    j--;

    reverse(str, i ,j);
}



int main(){
    string str;
    cout << "Enter the string: ";
    cin >> str;

    cout << "The string you entered: " << str << endl;

    reverse(str, 0, str.length()-1);

    cout<< str <<endl;

    return 0;
}