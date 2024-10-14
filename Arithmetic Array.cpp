#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>nums;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            nums[i] = x; 
        }
        int sum = accumulate(nums.begin(),nums.end());

        double mean = sum/n;
        mean = mean-1.0;
        int ans = mean*n;

        cout<<ans<<endl;
    }
    return 0;
}