#include <iostream>
#include <vector>
using namespace std;

#define MAKS_T 100           
#define MAKS_KATU 10        
#define ELEMENTS_SEEMA 100   
#define DEFAULT_MANGAL -1   

int main() {
    int yatra;
    cin >> yatra;

    while (yatra--) {
        int sreni, akshara;
        cin >> sreni >> akshara;

        vector<vector<int>> mandal(sreni, vector<int>(akshara));
        for (int r = 0; r < sreni; ++r)
            for (int c = 0; c < akshara; ++c)
                cin >> mandal[r][c];

        if (sreni == 1 && akshara == 1) {
            cout << DEFAULT_MANGAL << endl;
            continue;
        }

        vector<int> tatva;
        for (int r = 0; r < sreni; ++r)
            for (int c = 0; c < akshara; ++c)
                tatva.push_back(mandal[r][c]);

        vector<int> palatayen(tatva.size());
        for (int i = 0; i < tatva.size(); ++i)
            palatayen[(i + 1) % tatva.size()] = tatva[i];

        vector<vector<int>> palatayi_mandal(sreni, vector<int>(akshara));
        for (int r = 0, k = 0; r < sreni; ++r)
            for (int c = 0; c < akshara; ++c, ++k)
                palatayi_mandal[r][c] = palatayen[k];

        for (int r = 0; r < sreni; ++r) {
            for (int c = 0; c < akshara; ++c) {
                cout << palatayi_mandal[r][c] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
