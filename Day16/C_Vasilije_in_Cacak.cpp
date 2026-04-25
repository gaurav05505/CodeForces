#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main(){

    int t; 
    cin>>t; 

    while(t--){
        ll n , k , x; 
        cin>>n>>k>>x; 

        // min possible value
        ll minSum = k * (k+1)/2;  
        ll maxSum = k * (2*n - k+1)/2;  

        if(minSum <= x && x <= maxSum){
            cout<<"YES"<<'\n'; 
        }
        else{
            cout<<"NO"<<'\n'; 
        }

    }

    return 0; 
}