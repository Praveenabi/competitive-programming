#include<bits/stdc++.h>

using namespace std;

int main() {

    int n; cin>>n;
    bool login = false;
    int ans = 0;
    while(n--) {
        string s; cin>>s;
        if(s == "login") login = true;
        else if(s == "logout") login = false;
        else if(s == "private") if(!login) ans++;
    }

    cout<<ans<<"\n";

    return 0;
}