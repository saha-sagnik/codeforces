#include <bits/stdc++.h>

using namespace std;

int solve(vector<int> &arr);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            int j;
            cin >> j;
            arr.push_back(j);
        }
        int result = solve(arr);
        cout<<result<<endl;
    }

    return 0;
}

int solve(vector<int> &arr)
{
    unordered_map<int, int> mp;

    for (int num : arr)
    {
        mp[num]++;
    }

    int n = arr.size();

    int ans = INT_MIN;

    for (auto it : mp)
    {
        ans = max(ans, it.second);
    }

    return (n - ans);
}