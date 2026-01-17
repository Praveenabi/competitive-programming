#include<bits/stdc++.h>

using namespace std;

bool alphabets[150] = {false};

int main() {

    string s; cin>>s;

    

    for(int i = 0; i < s.length(); i++) {
        int index = s[i];
        alphabets[index] = true;
    }   

    char ans;

    for(int i = 97; i <123; i++) {
        if(!alphabets[i]) {
            ans = i;
            break;
        } 
    }

    cout<<ans<<"\n";

    return 0;
}