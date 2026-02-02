#include<bits/stdc++.h>

using namespace std;

int main() {    

    int n,m; cin>>n>>m;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin>>a[i];

    vector<int> table(m, 0);

    bool not_all = false;

    for(int i = 0; i < n; i++) {
        if(a[i] <= m) table[a[i]-1] +=1;
    }

    for(int i = 0; i < m; i++) {
        if(table[i] == 0) {
            not_all = true;
            break;
        }
    }

    int ans = 0; 

    if(!not_all) {
        for(int i = n-1; i >=0; i--) {
            if(a[i] <= m ) {

                table[a[i]-1] -=1;
                ans++;
                if(!table[a[i]-1]) break;
            }
        }
    }

    

    cout<<ans<<"\n";

    return 0;
}