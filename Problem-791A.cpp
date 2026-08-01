#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a > b) cout << "0\n";
    int nam = 1;
    while (3*a <= 2*b) {
        a *= 3;
        b *= 2;
        nam++;
    }
    cout << nam << "\n";
    return 0;
}


