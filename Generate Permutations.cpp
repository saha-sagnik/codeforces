#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    if (n % 2 == 0) {
        cout << "-1\n";
        return;
    }
    for (int i = 1; i <= n / 2; ++i) {
        cout << i << " ";
    }
   
    for (int i = n; i > n / 2; --i) {
        cout << i << " ";
    }
    
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
