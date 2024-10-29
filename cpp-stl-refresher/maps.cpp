#include<iostream>
#include<map>
#include<iterator>
#include<string>

using namespace std;

int main() {
    map<string, int> mp;

    // inserting some values in the map 
    mp["one"] = 1;
    mp["two"] = 2;
    mp["three"] = 3;

    //setting iterator for map
    map<string, int>::iterator it = mp.begin();

    while (it != mp.end()){
        cout << "Key: " << it->first << ", Value: " << it->second << endl;
        ++it;
    }

    // size of the map
    cout << "Size of the map: " << mp.size();

    // checking if map is empty
    cout << "Is Map Empty: " << mp.empty();

    // find function in map
    string key = "three";
    if (mp.find(key) != mp.end()) {
        cout << "key : " << key << ", Value : " << mp[key] << endl;
    }
    
    return 0;
}