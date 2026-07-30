#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    string s; cin >> s;
    map<char, int> mp;
    for (char x : s) {
        mp[x]++;
    }
    for (int i = 0; i < mp['1']; i++) {
        cout << "1";
        if (mp['+'] > 0) {
            cout << "+";
            mp['+']--;
        } 
    }
    for (int i = 0; i < mp['2']; i++) {
        cout << "2";
        if (mp['+'] > 0) {
            cout << "+";
            mp['+']--;
        } 
    }
    for (int i = 0; i < mp['3']; i++) {
        cout << "3";
        if (mp['+'] > 0) {
            cout << "+";
            mp['+']--;
        } 
    }
    return 0;
}
