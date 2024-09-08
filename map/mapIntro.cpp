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

    // Searching
    cout<< m["mera"]<<endl;
    cout<<m.at("arushi")<<endl;

    // it will create a new entry for this unknown key "abcd" at the 0th place/index
    cout<< m["abcd"]<<endl;

    // it will give output 0 if the key exist unless it will produce error if key does not exist
    cout<< m.at("abcd" )<<endl;

    // size
    cout<<m.size()<<endl;

    // to check presence
    cout<< m.count("arushi")<<endl;     //it will give 1 if key is present , unless will give 0

    // erase
    m.erase("arushi");
    cout<< m.size()<<endl;

    return 0;
}
