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

        string s; 
        cin>>s; 

        int start =0 , end = n-1 , ans=0; 

        while(start <  end && s[start] != s[end]){
            start++; 
            end--; 
        
        }

        cout<<end - start +1 <<'\n'; 


    }

    return 0; 
}