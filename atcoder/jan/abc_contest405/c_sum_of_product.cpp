#include<bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {

    int n; cin>>n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin>>a[i];

    ll sum = 0;

    for(int i = 0; i < n; i++) {
        sum = sum  + a[i];
    }

    vector<ll> s(n-1);

    for(int i = 0; i < n-1; i++) {
        sum  = sum  - a[i];
        s[i] = sum;
    }

    ll ans = 0;

    for(int i = 0; i < n-1; i++) {
        ll t = a[i]  * s[i]  ;
        ans = (ans + t ) ;
    }
    
    cout<<ans<<"\n";

    return 0;
}