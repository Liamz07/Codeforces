#include <iostream>
using namespace std;

int main()
{
    string s; cin >> s;
    char v[6] = {'a', 'o', 'y', 'e', 'u', 'i'};
    for (char &x : s) {
        bool giong = false;
        if (x >= 'A' && x <= 'Z') x += 32;
        for (int i = 0; i < 6; i++) {
            if (x == v[i]) {
                giong = true;
                break;
            }
        }
        if (!giong) cout << "." << x;
    }
    return 0;
}


