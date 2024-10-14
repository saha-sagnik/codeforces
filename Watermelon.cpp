#include<bits/stdc++.h>

using namespace std;

string solve(int n){
    if(n==2)
    return "NO";
    if(n%2==0)
    return "YES";
    else
    return "NO";
}

int main(){
    int n;
    cin>>n;
    cout<<solve(n)<<endl;

    return 0;
}