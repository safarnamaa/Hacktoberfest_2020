// Problem name: I Hate 1111

// Algorithm:
//     The main idea is that 1111=11.100+11 and similarly 11111=111⋅100+11. This implies that we can construct 1111 and all bigger numbers using only 11 and 111. So it suffices to check whether we can construct X from 11 and 111 only.


#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int x;
    cin >> x;

    while(true){
        if(x%11==0){
            cout << "YES";
            return;
        }
        else x-=111;

        if(x<0) break;
    }
    cout << "NO";
    
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;

    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}