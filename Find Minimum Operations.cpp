#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;

    while(t--) {
        long long n, k;
        cin >> n >> k;
        long long ans = 0;

        if(k == 1) {
            cout << n << '\n';
            continue;
        }

        while(n) {
            ans += n % k;
            n /= k;
        }

        cout << ans << '\n';
    }

    return 0;
}
