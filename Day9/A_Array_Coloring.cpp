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
        // if summ of all the element is odd no else even 

        ll summ = a[0]; 
        for(int i=1; i<n; i++){
            summ += a[i];  
        }

        if(summ % 2 == 0){
            cout<<"YES"<<'\n'; 
        }
        else{
            cout<<"NO"<<'\n'; 
        }
    }

}