#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>odd;
        vector<int>even;
        for(int i=0;i<2*n;i++){
            int x;
            cin>>x;
            if(x%2==0)
            even.push_back(x);
            else
            odd.push_back(x);
        }
        if(odd.size()>=n && even.size()>=n)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
    return 0;
}