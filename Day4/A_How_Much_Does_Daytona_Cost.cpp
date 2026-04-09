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
        int k; 

        cin>>n>>k;

        vector<int>a(n); 

        for(int i=0; i<n; i++){
            cin>>a[i]; 
        }

        sort(a.begin(), a.end());

        bool found = false; 
        int start = 0; 
        int end  = n-1;

        while(start <= end){
            int mid = start + (end -start) / 2 ; 
            
            if(a[mid] == k){
                found = true;
                break;
            }
            else if(a[mid] > k ){
                end = mid-1; 
            }
            else{
                start = mid+1; 
            }
            
        }

        if(found) cout << "YES\n";
        else cout << "NO\n";

        

    }


}