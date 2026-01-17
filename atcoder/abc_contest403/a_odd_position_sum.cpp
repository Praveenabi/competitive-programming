#include<bits/stdc++.h>

using namespace std; 

int main() {

    int n; cin>>n;
    int ans = 0;

    for(int i = 0; i < n; i++) {
        int t; cin>>t;
        if( i % 2 == 0) ans+=t;
    }

    cout<<ans<<"\n";

    return 0;
}