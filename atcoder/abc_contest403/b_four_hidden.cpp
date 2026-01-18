#include<bits/stdc++.h>

using namespace std;

int main() {

    string t,u; cin>>t>>u;

    bool ans = false;

    for(int i = 0; i <= t.length()-u.length(); i++) {

        ans = true;

        for(int j = 0; j < u.length(); j++) {
            if(t[i+j] != '?' && t[i+j] != u[j]) {
                ans = false;
                break;
            }
        }

        if(ans) break;
    }

    if(ans) cout<<"Yes\n";
    else cout<<"No\n";

    return 0;
}