#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n; // length of the string
        string s;
        cin >> s; // given string
        bool isGood = false;

        // Check if first and last characters are the same
        if (s[0] == s[n - 1]) {
            isGood = false;
        } else {
            // Check for any adjacent characters that are different
            for (int i = 0; i < n - 1; i++) {
                if (s[i] != s[i + 1]) {
                    isGood = true;
                    break;
                }
            }
        }

        if (isGood) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
