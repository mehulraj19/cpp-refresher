#include<iostream>
#include<unordered_set>
#include<iterator>

using namespace std;

int main() {
    unordered_set<int> s;
    s.insert(3);
    s.insert(1);
    s.insert(4);
    s.insert(2);
    for(auto& i: s) cout << i << "  "; // 3 1 4 2
    cout << endl;

    // find function
    if(s.find(5) == s.end()) cout << "5 not found!!";
    else cout << "5 found";
    cout << endl;

    unordered_set<int>::hasher fn = s.hash_function();
    cout << fn(1) << endl;
    return 0;
}