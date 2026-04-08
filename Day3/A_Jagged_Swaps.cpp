#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);



int main(){

    // user input  
    int t; 
    cin>>t; 

    while(t--){

        ll n; 
        cin>>n; 
        vector<ll>a(n); 

        for(int i=0; i<n; i++){
            cin>>a[i]; 
        }

        // logic 
        // just have to check if the 0th index is 1 or not 

        if(a[0] == 1 ){
            cout<<"YES" << '\n'; 
        }
        else{
            cout << "NO" << '\n';  
        }

    }

}