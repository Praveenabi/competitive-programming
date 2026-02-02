#include<bits/stdc++.h>

using namespace std;

int main() {

    int n,k; cin>>n>>k;

    int sum = n;
    int noy = 0; 

    while(sum < k) {
        n++;
        sum += n;
        noy++;
    }

    cout<<noy<<"\n";

    return 0;
}