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
        // finding the smallest diff 
        // div that with 2 and +1 ; 
        
        // checking if the arr is non sorted 
        bool isNonSorted = false; 

        for(int i=0; i<n-1; i++){
            if(a[i] > a[i+1]){
                isNonSorted = true;
                break;  
            }
        }

        if(isNonSorted){
            cout<<0<<'\n'; 
        }
        else{

            int d =INT_MAX; 
            for(int i=0; i<n-1; i++){
                d = min( a[i+1] - a[i]  , d  ); 
            }

            int ans = ceil(d/2) + 1; 
            cout<<ans<<'\n'; 

        }

    }



    return 0 ; 
}