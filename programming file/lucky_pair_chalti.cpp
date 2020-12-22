#include <bits/stdc++.h>
using namespace std;

int dynamicProgramming(string str1, string str2, int l1, int l2){
    if (l1 == 0 || l2 == 0)  
        return 0;  
    if (str1[l1-1] == str2[l2-1])  
        return 1 + dynamicProgramming(str1, str2, l1-1, l2-1);  
    else
        return max(dynamicProgramming(str1, str2, l1, l2-1), dynamicProgramming(str1, str2, l1-1, l2));
}

void solve(){
    string str1,str2;
    cin>>str1>>str2;
    int l1 = str1.length();
    int l2 = str2.length();
    int ans = dynamicProgramming(str1,str2,l1,l2);
    if(ans>2.5){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main(){

    int t;
    cin>>t;
    while(t-->0){
        solve();
    }

    return 0;
}