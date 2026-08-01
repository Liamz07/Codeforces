#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int tong_x = 0;
    int tong_y = 0;
    int tong_z = 0;
    while (n--) {
        int x, y, z;
        cin >> x >> y >> z;
        tong_x += x;
        tong_y += y;
        tong_z += z;
    }
    if (tong_x == 0 && tong_y == 0 && tong_z == 0) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}


