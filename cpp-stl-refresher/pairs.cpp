#include<iostream>
#include<utility>
#include<tuple>

using namespace std;

int main() {
    
    // initialization of pair in 3 ways
    pair<int, int> p1;
    p1.first = 1;
    p1.second = 2;

    pair<int, int> p2(3, 4);
    
    pair<int, int> p3;
    p3 = make_pair(5, 6);

    // swapping contents of pair
    p1.swap(p2);

    // tie -- getting vals out of pair
    int a, b, c;
    tie(a, b) = p1;

    cout << a << "  " << b << endl; // 1 2

    pair<int, pair<int, int>> p4(7,{8, 9});
    tie(a, ignore) = p4;
    tie(b, c) = p4.second;
    cout << a << " " << b << " " << c << endl; // o/p == 7 8 9

    return 0;
}