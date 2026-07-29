#include <iostream>
#include <string>
using namespace std;

int main() {
    int n; cin >> n;
    if (n <= 2) cout << "NO\n"; //Trường hợp số 2 là edge case
    else if (n % 2 == 0) cout << "YES\n"; //Với mọi số chẵn > 2 thì ta luôn có cách để chia thành 2 số chẵn
    else cout << "NO\n";
    return 0;
}
