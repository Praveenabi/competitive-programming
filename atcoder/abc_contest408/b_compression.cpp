#include<bits/stdc++.h>

using namespace std;

int main() {

    int n; cin >>n;

    set<int> a; for(int i = 0; i < n; i++) {
        int t; cin>>t;

        a.insert(t);
    }

    vector<int> ans(a.begin(), a.end());

    cout<<ans.size()<<"\n";
    for(int i = 0; i < ans.size(); i++) cout<<ans[i]<<"\n";

    return 0;
}