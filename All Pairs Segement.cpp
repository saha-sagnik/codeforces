#include <bits/stdc++.h>
using namespace std;

string joinStrings(const vector<string>& elements, const string& delimiter) {
    string result;
    for (size_t i = 0; i < elements.size(); ++i) {
        result += elements[i];
        if (i < elements.size() - 1) {
            result += delimiter;
        }
    }
    return result;
}

string toString(long long num) {
    string res = "";
    bool isNegative = false;
    
    if (num == 0) {
        return "0";
    }
    
    if (num < 0) {
        isNegative = true;
        num = -num;
    }
    
    while (num > 0) {
        res += (num % 10) + '0';
        num /= 10;
    }
    
    if (isNegative) {
        res += '-';
    }
    
    reverse(res.begin(), res.end());
    return res;
}

string processTestCase(long long n, long long q, const vector<long long>& x, const vector<long long>& queries) {
    unordered_map<long long, long long> frequencyMap;

    for (long long i = 1; i <= n; ++i) {
        long long segmentValue = (i - 1) * (n - i + 1) + (n - i);
        frequencyMap[segmentValue]++;

        if (i < n) {
            long long gap = x[i] - x[i - 1] - 1;
            if (gap > 0) {
                long long gapCoverage = i * (n - i);
                frequencyMap[gapCoverage] += gap;
            }
        }
    }

    vector<string> resultStrings;
    for (long long k : queries) {
        resultStrings.push_back(toString(frequencyMap[k]));
    }

    return joinStrings(resultStrings, " ");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    vector<string> results;

    while (t--) {
        long long n, q;
        cin >> n >> q;

        vector<long long> x(n);
        for (long long i = 0; i < n; ++i) {
            cin >> x[i];
        }

        vector<long long> queries(q);
        for (long long i = 0; i < q; ++i) {
            cin >> queries[i];
        }

        string result = processTestCase(n, q, x, queries);
        results.push_back(result);
    }

    cout << joinStrings(results, "\n") << endl;

    return 0;
}
