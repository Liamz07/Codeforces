#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s; cin >> s;
    string t; cin >> t;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            if (t[i] >= 'a' && t[i] <= 'z') t[i] -= 32;
        } else {
            if (t[i] >= 'A' && t[i] <= 'Z') t[i] += 32;
        }
        if (s[i] < t[i]) {
            cout << "-1\n";
            return 0;
        } else if (s[i] > t[i]) {
            cout << "1\n";
            return 0;
        }
    }
    cout << "0\n";
    return 0;
}
