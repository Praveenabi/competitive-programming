#include<bits/stdc++.h>

using namespace std;

int main() {

    int volume = 0;  bool music{false}; 

    int q; cin>>q;

    for(int i = 0; i < q; i++) {
        int a; cin>>a;

        if(a == 1) {
            volume++;
        }else if(a == 2 && volume >=1) {
            volume--;
        }else if(a == 3){
            if(music) music = false ;
            else music = true;
        }

        if(volume >=3 && music) cout<<"Yes\n";
        else cout<<"No\n";
    }


    return 0;
}