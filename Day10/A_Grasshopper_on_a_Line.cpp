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
        int x , k; 
        cin>>x>>k; 

        if(x % k ==0 ){
            cout<<2<<'\n'; 
            cout<<1<< " " <<x-1<<'\n'; 
        }
        else{
            cout<<1<<'\n';
            cout<<x<<'\n'; 
        }

    }


    return 0; 
}