#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);


bool check(ll x){
    ll digit = 0; 
    ll zero = 0; 
    
    while(x){
        if(x % 10 == 0 ){
            zero++;
        }
        digit++;
        x /= 10; 
    }

    return digit-1 == zero; 
}

int main(){

    vector<ll>rounded; 
    for(int i=0; i<999999; i++){
        if(check(i) == true){
            rounded.push_back(i); 
        }
    }

    int t; 
    cin>>t; 

    while(t--){
        int n; 
        cin>>n; 

        ll ans = 0; 
        for(int i=0; i<rounded.size() ; i++){
            if(rounded[i] <= n ){
                ans ++; 
            }
            else{
                break; 
            }
        }

        cout<<ans<<'\n'; 


    }



    return 0; 
}