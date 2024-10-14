#include<bits/stdc++.h>
#define int long long
using namespace std;

int findMaxElement(const vector<int>& arr) {
    int maxElement = LLONG_MIN;
    for (auto x : arr)
        maxElement = max(maxElement, x);
    return maxElement;
}

int accumulateSum(const vector<int>& arr) {
    int totalSum = 0;
    for (auto x : arr)
        totalSum += x;
    return totalSum;
}

#undef int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        vector<long long> arr(n);

        for (auto &element : arr)
            cin >> element;

        long long maxElement = findMaxElement(arr);
        long long totalSum = accumulateSum(arr);

        for (long long i = n; i > 0; i--) {
            long long quotient = (totalSum + k) / i;

            if (quotient * i <= totalSum - 1)
                continue;
            if (quotient <= maxElement - 1)
                continue;

            cout << i << endl;
            break;
        }
    }

    return 0;
}
