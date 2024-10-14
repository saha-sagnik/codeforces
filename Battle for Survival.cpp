#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    vector<long long> v(n);
    long long sum = 0;
    
    for (long long i = 0; i < n; ++i) {
        cin >> v[i];
        if (i < n - 2) {
            sum += v[i];
        }
    }
    
    cout << v[n - 1] - (v[n - 2] - sum) << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}