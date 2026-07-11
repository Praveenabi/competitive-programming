#include <bits/stdc++.h>

using namespace std;

int main() {

    int n,m; cin>>n>>m;

    vector<int> c, s, ans;

    for(int i = 0; i < n; i++) {
        int t1, t2; cin >> t1 >> t2;
        c.push_back(t1);
        s.push_back(t2);
    }

    int maxC;
    for(int i = 1; i <= m; i++) {
        maxC = 0;
        for(int j = 0; j < n; j++) {
            if(c[j] == i && s[j] > maxC) {
                maxC = s[j];
            }
        }
        if(maxC) ans.push_back(maxC);
        else ans.push_back(-1);
    }

    for(int i = 0; i < m; i++) {
        cout<< ans[i] << " ";
    }
    printf("\n");

    return 0;
}