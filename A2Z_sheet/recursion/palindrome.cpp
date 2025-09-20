#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string& str, int i) {
    if (i >= str.size()/2)
        return true;

    if (str[i] != str[str.size()-i-1])
        return false;
    else
        return checkPalindrome(str, i + 1);
}

int main() {
    string str;
    cout << "Enter the string: ";
    cin >> str;

    cout << "The string you entered: " << str << endl;

    bool isPalindrome = checkPalindrome(str, 0);

    if (isPalindrome) {
        cout << "is a palindrome string" << endl;
    }
    else {
        cout << "is not a palindrome string" << endl;
    }

    return 0;
}
