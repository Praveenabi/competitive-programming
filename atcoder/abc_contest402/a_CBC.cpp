#include<bits/stdc++.h>

using namespace std;

int main() {

    string s; cin>>s;

    string ans = "";

    for(int i = 0 ; i < s.length(); i++) {
        if(s[i] >= 65 && s[i] <= 91) ans+=s[i];
    }

    cout<<ans<<"\n";

    return 0;
}