#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n; cin >> n;
    string s; cin >> s;
    int tongA = 0;
    int tongD = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') tongA++;
        else tongD++;
    }
    if (tongA > tongD) cout << "Anton\n";
    else if (tongA < tongD) cout << "Danik\n";
    else cout << "Friendship\n";
    return 0;
}


