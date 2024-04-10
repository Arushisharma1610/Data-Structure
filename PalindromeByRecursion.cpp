#include<iostream>
using namespace std;

bool checkPalindrome(string& str, int i, int j) {
    if (i >= j)
        return true;

    if (str[i] != str[j])
        return false;
    else
        return checkPalindrome(str, i + 1, j - 1);
}

int main() {
    string str;
    cout << "Enter the string: ";
    cin >> str;

    cout << "The string you entered: " << str << endl;

    bool isPalindrome = checkPalindrome(str, 0, str.length() - 1);

    if (isPalindrome) {
        cout << "is a palindrome string" << endl;
    }
    else {
        cout << "is not a palindrome string" << endl;
    }

    return 0;
}
