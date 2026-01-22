#include<bits/stdc++.h>

using namespace std;

int BoxContainMininumBall(vector<int>& a) {

    int min = a[1];
    int index = 1;

    for(int i = 2; i < a.size(); i++) {
        if(a[i] < min) {
            min = a[i];
            index = i;
        }
    }

    return index;
}


using namespace std;

int main() {

    int n,q; cin>>n>>q;
    
    vector<int> x(q + 1); for(int i = 1; i < q + 1; i++) cin>>x[i];

    vector<int> b_index(q+1,0); // holding box no.

    vector<int> boxes(n+1, 0); 

    for(int i = 1; i < q + 1; i++) {

        if( x[i] >= 1) {
            boxes[x[i]] +=1;
            b_index[i] = x[i];
        }
        else {
            int index = BoxContainMininumBall(boxes);
            boxes[index] +=1;
            b_index[i] = index;
        } 

    }

    for(int i = 1; i < q+1; i++) {
        cout<<b_index[i]<<"\n";
    }


    return 0;
}