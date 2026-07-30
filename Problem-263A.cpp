#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, y;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int d; cin >> d;
            if (d == 1) {
                x = i; 
                y = j;
            }
        }
    }
    cout << abs(x - 2) + abs(y - 2) << "\n";
    return 0;
}
