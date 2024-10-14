#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int count = 0;
    while (t--)
    {

        int temp = 0;
        for (int i = 0; i < 3; i++)
        {
            int n;
            cin >> n;

            if (n == 1)
                temp++;
        }
        if (temp >= 2)
            count++;
    }

    cout << count;

    return 0;
}