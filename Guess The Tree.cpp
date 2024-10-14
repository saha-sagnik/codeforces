#include <iostream>
#include <vector>

using namespace std;

int q(int a, int b) {
    cout << "?" << a << " " << b << endl;
    fflush(stdout);
    int r;
    cin >> r;
    return r;
}

void findEdges(int a, int b, vector<int>& vis, vector<pair<int, int>>& edges) {
    int x = q(a, b);
    if (x == a || x == b) {
        edges.push_back({a, b});
        vis[a] = 1;
        vis[b] = 1;
        return;
    }
    if (vis[a] && vis[x]) {
        findEdges(x, b, vis, edges);
    } else {
        findEdges(a, x, vis, edges);
        findEdges(x, b, vis, edges);
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n == 2) {
            cout << "! 1 2" << endl;
            fflush(stdout);
            continue;
        }

        vector<int> vis(n + 1, 0);
        vector<pair<int, int>> edges;

        
        for (int i = 1; i <= n; ++i) {
                for (int j = i + 1; j <= n; ++j) {
                    if (vis[j]) 
                    continue;
                        findEdges(i, j, vis, edges);
                    
                
            }
        }

        // Output the edges
        cout << "!";
        for (const auto& edge : edges) {
            cout << " " << edge.first << " " << edge.second;
        }
        cout << endl;
        fflush(stdout);
    }

    return 0;
}
