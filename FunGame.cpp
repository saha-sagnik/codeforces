#include <iostream>
#include <vector>
using namespace std;

string canTransform(string s, string t) {
    int n = s.size();
    int prefix_xor = 0;

    for (int i = 0; i < n; ++i) {
        if ((prefix_xor % 2) != (s[i] - '0')) {
          
            s[i] = (s[i] == '0') ? '1' : '0';
            prefix_xor ^= 1; 
        }

        if (s[i] != t[i]) {
            return "No";
        }
        if (i < n - 1) {
            prefix_xor ^= (s[i] - '0'); 
        }
    }

    return "Yes";
}

int main() {
    int q;
    cin >> q;

    while (q--) {
        int n;
        cin >> n;

        string s, t;
        cin >> s >> t;

        cout << canTransform(s, t) << endl;
    }

    return 0;
}
