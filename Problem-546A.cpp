#include <iostream>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    int gia = k * (w * (w + 1) / 2);
    if (n >= gia) cout << "0\n";
    else cout << gia - n << "\n";
    return 0;
}
