#include<bits/stdc++.h>

using namespace std;

int  main() {

    int n,m,q; cin>>n>>m>>q;

    //! vector search is linear complexity (not enough to execute within time)
    //! set find method is logarithmic complexity 
    vector<set<int>> a(n);
    vector<bool> f(n);

    while(q--) {
        int t, x, y; cin>>t>>x;

        if(t == 1) {
            cin>>y;
            a[x-1].insert(y);
        }
        else if(t == 2) {
            f[x-1] = true;
        }
        else {
            cin>>y;
            if(f[x-1]) cout<<"Yes\n";
            else if(auto search = a[x-1].find(y); search != a[x-1].cend()) cout<<"Yes\n";
            else cout<<"No\n";
        }
    }



    return 0;
}