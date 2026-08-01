#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int tong0 = 0;
    int tong1 = 0;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        if (x == 1) tong1++;
        else tong0++;
    }
    if (n == 1) {
        if (tong1 == 1) cout << "YES\n";
        else cout << "NO\n";
    } else {
        if (tong0 == 1) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}


