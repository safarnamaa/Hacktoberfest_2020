// Problem name: Mean equality

// Algorithm:
//     The main idea is that we can split the numbers into the two halves, the big half and small half, we can place the bigger half at the odd positions and the smaller half at the even positions.

//     This works because the smallest big number is larger than the biggest small number. Hence, the mean of any two small numbers is smaller than any big number, and the mean of any two big numbers is bigger than any small number.


#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin >> n;

    int arr[2*n];
    for(int i=0; i<2*n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+2*n);

    int b[n], c[n];

    for(int i=0; i<n; i++) b[i] = arr[i];
    for(int i=n; i<2*n; i++) c[(2*n-1)-i] = arr[i];

    for(int i=0; i<n; i++){
        cout << c[i] << " " << b[i] << " ";
    }
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