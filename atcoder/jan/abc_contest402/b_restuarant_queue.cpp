#include<bits/stdc++.h>

using namespace std;

int main() {

    int q; cin>>q;

    queue<int> wait_q;

    while(q--) {
        int type, menuNo;
        cin>>type;
        if(type == 1) {
            cin>>menuNo;
            wait_q.push(menuNo);
        }
        else {
            cout<<wait_q.front()<<"\n";
            wait_q.pop();
        }

    }

    return 0;
}