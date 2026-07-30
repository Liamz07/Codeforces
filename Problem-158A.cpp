#include <iostream>
#include <set>
#include <map>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    set<int> s;
    map<int, int> mp;
    int mang[n];
    int tong = 0;
    for (int i = 0; i < n; i++) {
        cin >> mang[i];
        s.insert(mang[i]);
        mp[mang[i]]++;
    }
    for (auto x : s) {
        if (x > 0 && x >= mang[k - 1]) tong += mp[x];
    }
    cout << tong << "\n";
    return 0;
}
