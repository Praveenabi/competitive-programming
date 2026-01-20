#include<bits/stdc++.h>

using namespace std;

int main() {

    int n; cin>>n;
    float s; cin>>s;

    vector<int> t(n); for(int i = 0; i < n; i++) cin>>t[i];

    bool ans = true;

    if(t[0] <= s) {
        for(int i = 1; i < n; i++) {

            int a = t[i] - t[i-1];
            if(!(a <= s)) {
                ans = false;
                break;
            }
        }
    }
    else ans = false;

    

    if(ans) cout<<"Yes\n";
    else cout<<"No\n";


    return 0;
}