#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int tong = 0;
    while (n > 0) {
        int a, b, c;
        cin >> a >> b >> c;
        int dem = 0;
        if (a == 1) dem++;
        if (b == 1) dem++;
        if (c == 1) dem++;
        if (dem >= 2) tong++;
        n--;
    }
    cout << tong << "\n";
    return 0;
}
