#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n; cin >> n;
    int tong = 0;
    while (n > 0) {
        string s; cin >> s;
        if (s[0] == '-' || s[s.size() - 1] == '-') tong--;
        else tong++;
        n--;
    }
    cout << tong << "\n";
    return 0;
}
