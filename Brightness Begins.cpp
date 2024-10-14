#include<bits/stdc++.h>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;
    
    while(test_cases--) {
        long long x;
        cin >> x;
        
        long long start = 1, end = 2e18, result = 0;
        while(start <= end) {
            long long middle = (start + end) / 2;
            long long root = sqrt(middle);

            while(root * root > middle) root--;
            while((root + 1) * (root + 1) <= middle) root++;

            long long remaining = middle - root;
            if(remaining >= x) {
                result = middle;
                end = middle - 1;
            } else {
                start = middle + 1;
            }
        }
        
        cout << result << '\n';
    }
}
