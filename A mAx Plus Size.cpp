#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> nums(n); 
        
        for (int i = 0; i < n; i++) {
            cin >> nums[i]; 
        }

        int even = 0, even_count = 0;
        int odd = 0, odd_count = 0;

        for (int i = 0; i < n; i += 2) {
            even = max(even, nums[i]);
            even_count++;
        }

        for (int i = 1; i < n; i += 2) {
            odd = max(odd, nums[i]);
            odd_count++;
        }

        int even_val = even + even_count;
        int odd_val = odd + odd_count;

        cout << max(even_val, odd_val) << endl;
    }
    
    return 0;
}
