#include <iostream>
#include <string>
using namespace std;

int main()
{
    bool used[26] = {0};
    string s; cin >> s;
    int dem = 0;
    for (char x : s) {
        if (!used[x - 'a']) {
            used[x - 'a'] = true;
            dem++;
        }
    }
    if (dem % 2 == 0) cout << "CHAT WITH HER!\n";
    else cout << "IGNORE HIM!\n";
    return 0;
}
