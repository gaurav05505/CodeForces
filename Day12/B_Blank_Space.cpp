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

        int longestSpace = 0; 
        int currSpace = 0;

        for(int i=0; i<n; i++){

            if(a[i] == 0){
                currSpace++; 
                longestSpace = max(longestSpace , currSpace);
            }
            else {
                currSpace = 0; 
            }

        }

        cout<<longestSpace<<'\n';  

    }


    return 0; 
}