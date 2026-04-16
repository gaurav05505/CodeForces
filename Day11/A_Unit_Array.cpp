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

        // logic 
        int ntive = 0; 
        int ptive = 0; 
        int opr = 0; 

        for(int i=0; i<n; i++){
            if(a[i] <= -1 ){
                ntive++; 
            }
            else{
                ptive++; 
            }
        }


        while(ptive  < ntive || ntive % 2 != 0 ){
            opr++; 
            ptive++; 
            ntive--; 
        }


        cout<<opr<<'\n';
        

    }


    return 0; 
}