#include <iostream>
using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;
    int tong = 0;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        if (x <= h) tong++;
        else tong += 2;
    }
    cout << tong << "\n";
    return 0;
}
