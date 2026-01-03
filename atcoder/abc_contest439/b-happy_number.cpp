#include<bits/stdc++.h>

using namespace std;

int compute_ssd(int a) {
    int sum = 0;
    int rem = 0;
    while(a>0) {
        rem = a%10;
        a = a/10;
        sum+=rem*rem;
    }
    return sum;
}

bool isInVector(vector<int>& a, int s) {
    bool found = false;
    for(int i =0; i < a.size(); i++) {
        if(a[i] == s) {
            found = true;
            break;
        }
    }
    return found;
}

int main() {

    int n; cin>>n;
    vector<int> a;

    while(n!=1) {
        int sum = compute_ssd(n);
        if(isInVector(a, sum)) break;
        else {
            a.emplace_back(sum);
            n = sum;
        }
    }

    if(n==1) cout<<"Yes\n";
    else  cout<<"No\n";

    return 0;
}