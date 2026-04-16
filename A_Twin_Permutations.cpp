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

        int n; 
        cin>>n; 

        vector<int>a(n); 

        for(int i=0; i<n; i++){
            cin>>a[i]; 
        }

        for(int i=0; i<n; i++){
            cout<< n+1 - a[i] <<" "; 
        }
        cout<<'\n'; 
    }


    return 0; 
}