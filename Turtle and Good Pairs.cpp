#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> freq(26, 0);

        for (char c : s) {
            freq[c - 'a']++;
        }

        string ans;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 26; j++) {
                if (freq[j] > 0) {
                    ans.push_back((char)(j + 'a'));
                    freq[j]--;
                    //break; 
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
