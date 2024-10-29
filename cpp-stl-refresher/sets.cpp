#include<iostream>
#include<set>
#include<iterator>

using namespace std;

int main() {
    // set always sort in ascending order
    set<int> s;
    s.insert(2);
    s.insert(1);
    for(auto& i: s) cout << i << " "; // o/p == 1 2 
    cout << endl;

    // set with descending order
    set<int, greater<>()> s1;
    s1.insert(1);
    s1.insert(2);
    for(auto& i: s1) cout << i << " "; // o/p == 2 1
    cout << endl;
    
    // size of set
    cout << "Size of set is : " << s.size() << endl;

    // check if set is empty
    cout << "Set is empty : " << s.empty() << endl;

    // check if val exists in set
    int val = 3;
    if(s.find(val) == s.end()) cout << val << " is not present!!" << endl;
    else cout << val << " is present!!" << endl;

    // swap in set
    set<int> s2{1, 2, 3, 4};
    set<int> s3{5, 6, 7, 8, 9};
    s2.swap(s3);
    cout << "set 2: ";
    for(auto& i : s2) cout << i << " ";
    cout << endl << "set 3 : ";
    for(auto i=s3.begin(); i != s3.end(); i++) cout << *i << "  ";
    cout << endl; 


    // we can not directly reverse the ordered set but we can:
    // 1. print the results in reverse order
    // 2. save the data in vector and reverse the vector and print that

    for(auto i=s3.rbegin(); i != s3.rend(); i++) cout << *i << "  ";
    cout << endl;

    return 0;
}