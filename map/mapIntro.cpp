#include <bits/stdc++.h>

using namespace std;

int main(){
    // creation
    unordered_map<string, int> m;

    // insertion
    pair<string, int> p = make_pair("hello", 3);
    m.insert(p);

    // 2
    pair<string, int> pair2("arushi", 2);
    m.insert(pair2);

    // 3
    m["mera"] = 1;

    // this insertion will replace the current value 1 with the new vale
    m["mera"] = 2;

    return 0;
}
