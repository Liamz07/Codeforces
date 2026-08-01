#include <iostream>
#include <string>
using namespace std;

//Sử dụng hai con trỏ

int main()
{
    int n; cin >> n;
    string s; cin >> s;
    if (n == 1) cout << "0\n";
    else {
        int dem = 0;
        int idx = 0;
        for (int i = 1; i < n; i++) {
            if (s[i] == s[idx]) dem++;
            else idx = i;
        }
        cout << dem << "\n";
    }
    return 0;
}


