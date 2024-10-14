#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int x = 0;

    while (t--) {
        string str;
        cin >> str;
        if (str == "++x" || str == "x++") {
            x++;
        } else if (str == "--x" || str == "x--") {
            x--;
        }
    }

    cout << x << endl;
    return 0;
}
