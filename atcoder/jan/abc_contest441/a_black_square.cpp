#include<bits/stdc++.h>

using namespace std;

int main() {

    int p,q,x,y; cin>>p>>q>>x>>y;

    if((x< p + 100 && x>=p) && (y < q + 100 && y >= q)) cout<<"Yes\n";
    else cout<<"No\n";

    return 0;
}