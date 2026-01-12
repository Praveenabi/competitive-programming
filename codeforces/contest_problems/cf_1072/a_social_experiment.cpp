#include<bits/stdc++.h>
using namespace std;

int main() {

    int t; cin>>t;

    while(t--) {
        int n; cin>>n;

        if(n>3) {
            if(n%2 == 0) cout<<0<<"\n";
            else cout<<1<<"\n";
        }
        else cout<<n<<"\n";
    }

    return 0;
}