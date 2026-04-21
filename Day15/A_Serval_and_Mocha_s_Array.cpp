#include <bits/stdc++.h>
using namespace std;
#include <numeric>

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

        vector<int>arr(n); 
        for(int i=0;i<n;i++){
            cin>>arr[i]; 
        }

        int check =0; 

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(__gcd(arr[i] , arr[j]) <= 2 ){
                    check = 1; 
                }
            }
        }

        if(check ==0 ){
            cout << "NO" << '\n';
        }
        else{
            cout << "YES" << '\n';
        }


    }


    return 0; 
}