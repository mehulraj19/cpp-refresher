#include<iostream>
#include<array>
#include<iterator>

using namespace std;

int main() {

    array<int, 5> ar{{3,4,5,1,2}};

    // displaying array as it is
    for(auto i: ar) {
        cout << i << "  ";
    }
    cout << endl;

    // displaying array in sorted format
    sort(ar.begin(), ar.end());
    for(auto i: ar) {
        cout << i << "  ";
    }
    cout << endl;

    // displaying array in reverse sorted format
    reverse(ar.begin(), ar.end());
    for(auto i: ar) {
        cout << i << "  ";
    }
    cout << endl;

    // printing value at index 2
    cout << ar[1] << endl;


    // getting first and last element of array
    cout << ar.front() << "  " << ar.back() << endl;

    // check if array is empty
    cout << ar.empty() << endl;

    return 0;
}