#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main(){
    
    // user input 
    int n; 
    cin>>n; 

    vector<int>a(n); 

    for(int i=0; i<n; i++){
        cin>>a[i]; 
    }

    // ==>  logic 
    // i have to find abs(smallest number ) 

    int ans = INT_MAX ; 

    for(int i=0; i<n; i++){
        if(abs(a[i]) < ans){
            ans = abs(a[i]); 
        }
    }

    cout<<ans<<'\n'; 

    return 0; 
}