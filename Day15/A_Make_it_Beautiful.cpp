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
        int n; 
        cin>>n; 

        vector<int>a(n); 
        for(int i=0; i<n; i++){
            cin>>a[i]; 
        }

        sort(a.begin() , a.end()); 

        int maxx = a[n-1]; 
        int minn = a[0]; 

        if(maxx == minn){
            cout<<"NO"<<'\n'; 
        }
        else{
            cout<<"YES"<<'\n'; 
            cout<<maxx<<" "; 

            for(int i=0; i<n-1; i++){
                cout<<a[i]<<" "; 
            }
            cout<<'\n'; 
        }

    }

    return 0; 
}