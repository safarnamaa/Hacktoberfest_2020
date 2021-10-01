/**
 * this a c++ solution
 * @brief Given the size and the direction of the asteroids.
 *
 * Description- Every character that cannot be paired with a same letter to its 
 *   left or right neighbours as itself would be functioning correctly.
 * The only case where we need to analyse is when a positive asteroid from left
 * side approaches a negative asteroid from the right side(In other cases, they dont collide).
 * 
 *
 * Time Complexity - O(n) Space Complexity - O(n)
 * Auxillary space needed - O(n)
 * 
 */

#include<bits/stdc++.h>
using namespace std;

void print_V(vector<int> v){
    for(int i=0 ; i<v.size() ; i++){
        cout<<v[i]<<" ";
    }
}

bool isNegative(int x){
    return x<0;
}

vector<int> destroy_ast(vector<int> & arr){
    vector<int> vec;
    int n=arr.size();
    for(int i=0 ; i<n ; i++){
        if(vec.empty() || !(!isNegative(vec[vec.size()-1]) && isNegative(arr[i]))){
            vec.push_back(arr[i]);
            i++;
        }else{
            int x=vec[vec.size()-1];
            vec.pop_back();
            if(abs(x) == abs(arr[i])){
                i++;
            }else{
                if(abs(x) > abs(arr[i])){
                    vec.push_back(x);
                    i++;
                }
            }
        }
    }
    return vec;
}

void solve(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0 ; i>n ; i++){
        cin>>v[i];
    }
    print_V(destroy_ast(v));
}

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        solve();
    }
    return 0;
}

/*
SAMPLE INPUT
4
3
5 10 -5
2
8 -8
3
10 2 -5
4
-5 -1 1 5
SAMPLE OUTPUT
5 10
10
-5 -1 1 5
*/