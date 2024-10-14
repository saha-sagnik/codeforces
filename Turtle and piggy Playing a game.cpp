#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

long long findMedian(vector<long long> &nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    return nums[n / 2];
}

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll &x : v) cin >> x;
    cout << findMedian(v) << nl;
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
