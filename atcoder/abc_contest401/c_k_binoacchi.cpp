#include<bits/stdc++.h>

using namespace std;

int main() {

    int n,k; cin>>n>>k;

    uint64_t s = k;

    vector<uint64_t> a(n+1,1);

    for(int i = k; i < n+1; i++) {
        a[i] = s;
        s+=a[i];
        s-=a[i-k];
        s = (s+1000000000) % 1000000000;
    }


    cout<<a[n]<<"\n";

    return 0;
}