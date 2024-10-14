#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, x, y;
        cin >> n >> x >> y;
        int m = min(x, y);
        cout << (n + m - 1) / m << endl;
    }
    return 0;
}
