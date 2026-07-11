#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;

    vector<int> x; 
    for(int i = 0;  i < n; i++) {
        int t; cin >> t;
        x.push_back(t);
    } 

    bool ans = true;

    for(int i = 0; i < n; i++) {
        if (x[i] >= 0) {
            ans = false;
            break;
        }
    }

    if(ans) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;


    return 0;
}