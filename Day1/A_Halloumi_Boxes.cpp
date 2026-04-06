#include <bits/stdc++.h>
using namespace std;

// shortcuts 
#define ll long long
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()


int main(){

    // user input  
    int t; 
    cin>>t; 

    int n; 
    int k; 

    while(t--){
        cin>>n >> k; 

        vector<int>a(n); 

        for(int i=0; i<n; i++){
            cin>> a[i]; 
        }

        // logic 

        // checking if the arr is already sorted        
            bool isSorted = true; 

            for(int i=1; i<n; i++){
                if(a[i] < a[i-1]){
                    isSorted = false; 
                    break; 
                }
            }

            if(k >= 2 ){
                cout<<"YES"<<'\n'; 
            }
            else{
                if(isSorted){
                    cout<<"YES"<<'\n'; 
                }
                else{
                    cout<<"NO"<<'\n';
                }
            }

    }

    return 0; 

}