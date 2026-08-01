#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    bool checked[10] = {false};
    int y; cin >> y;
    y++;
    while (true) {
        int tmp = y;
        bool trung = false;
        while (tmp != 0) {
            if (checked[tmp % 10]) {
                trung = true;
                break;
            } else checked[tmp % 10] = true;
            tmp /= 10;
        }
        if (!trung) break;
        memset(checked, false, 10);
        y++;
    }
    cout << y << "\n";
    return 0;
}


