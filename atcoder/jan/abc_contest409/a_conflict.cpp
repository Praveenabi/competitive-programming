#include<bits/stdc++.h>

using namespace std;

int main() {

    int n; cin>>n;
    string t,a; cin>>t>>a;

    bool ans = false;

    for(int i = 0; i < n; i++) {
        if(t[i] == a[i] && t[i] == 'o') {
            ans = true;
            break;
        }
    }

    if(ans) cout<<"Yes\n";
    else cout<<"No\n";


    return 0;
}