#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    if (s.size() != t.size()) cout << "NO\n";
    else {
        bool giong = true;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != t[s.size() - i - 1]) {
                giong = false;
                break;
            }
        }
        if (giong) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}


