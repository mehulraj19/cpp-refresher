#include<iostream>
#include<vector>
#include<iterator>

using namespace std;

int main() {

    vector<int> v1;

    for(int i=0; i<5; i++) v1.push_back(i);

    // from left to right
    for(auto i = v1.begin(); i<v1.end(); i++) cout << *i << "  ";
    cout << endl;

    // from right to left
    for(auto i=v1.rbegin(); i<v1.rend(); i++) cout << *i << "  ";
    cout << endl;

    cout << "Size of the vector is : " << v1.size();

    cout << "Is Vector empty --- " << v1.empty();

    // reversing vector
    reverse(v1.begin(), v1.end());

    // removing element from the back
    v1.pop_back();

    // sorting in ascending order
    sort(v1.begin(), v1.end());

    // sort in descending order
    sort(v1.begin(), v1.end(), greater<int>());

    
    return 0;
}