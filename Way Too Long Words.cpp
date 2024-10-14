#include <bits/stdc++.h>

using namespace std;

string abbreviate(const string &word) {
    int len = word.length();
    if (len <= 10) return word; // No abbreviation needed if the word length is 2 or less
    return word[0] + to_string(len - 2) + word[len - 1];
}

vector<string> solve(vector<string> &str) {
    vector<string> result;
    for (const string &word : str) {
        result.push_back(abbreviate(word));
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<string> str(n);
    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }

    vector<string> results = solve(str);
    for (const string &res : results) {
        cout << res << endl;
    }

    return 0;
}
