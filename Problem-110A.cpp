#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    long long n; cin >> n;
    int dem = 0;
    while (n > 0) {
        if (n % 10 == 4 || n % 10 == 7) {
            dem++;
        }
        n /= 10;
    }
    if (dem == 0) {
        cout << "NO\n";
        return 0;
    }
    while (dem > 0) {
        if (dem % 10 != 4 && dem % 10 != 7) {
            cout << "NO\n";
            return 0;
        }
        dem /= 10;
    }
    cout << "YES\n";
    return 0;
}


