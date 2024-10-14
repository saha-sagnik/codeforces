#include <bits/stdc++.h>
using namespace std;

void dfs(int u, vector<vector<int>>& e, vector<int>& vis, vector<int>& dp, vector<int>& max_dp) {
    vis[u] = true;
    max_dp[u] = dp[u];

    for (int v : e[u]) {
        if (vis[v]) continue;
        dp[v] = dp[u] + 1;
        dfs(v, e, vis, dp, max_dp);
        max_dp[u] = max(max_dp[u], max_dp[v]);
    }
}

int solve(int n, vector<pair<int, int>>& edges) {
    vector<vector<int>> e(n + 1);
    vector<int> vis(n + 1, 0);
    vector<int> dp(n + 1, 0);
    vector<int> max_dp(n + 1, 0);
    vector<int> ct(n + 1, 0), ct2(n + 1, 0);

    for (auto& edge : edges) {
        e[edge.first].push_back(edge.second);
        e[edge.second].push_back(edge.first);
    }

    dfs(1, e, vis, dp, max_dp);

    for (int i = 1; i <= n; ++i) {
        ++ct[dp[i]];
        ++ct2[max_dp[i]];
    }

    int res = INT_MAX;
    int a = 0, b = 0;

    for (int i = 1; i <= n; ++i) {
        b += ct[i];
    }

    for (int i = 1; i <= n; ++i) {
        b -= ct[i];
        res = min(res, a + b);
        a += ct2[i];
    }

    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<pair<int, int>> edges(n - 1);
        for (int i = 0; i < n - 1; ++i) {
            int a, b;
            cin >> a >> b;
            edges[i] = {a, b};
        }

        cout << solve(n, edges) << endl;
    }

    return 0;
}
