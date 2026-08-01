#include <iostream>
using namespace std;

int main()
{
    string s; cin >> s;
    int thuong = 0;
    int hoa = 0;
    for (char x : s) {
        if (x >= 'a' && x <= 'z') thuong++;
        else hoa++;
    }
    if (hoa > thuong) {
        for (char &x : s) {
            if (x >= 'a' && x <= 'z') x -= 32;
            cout << char(x);
        }
    } else {
        for (char &x : s) {
            if (x >= 'A' && x <= 'Z') x += 32;
            cout << char(x);
        }
    }
    return 0;
}


