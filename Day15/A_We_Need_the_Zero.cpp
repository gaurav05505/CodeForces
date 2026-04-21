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

        // logic 
        
        // even value 
        // if we have n = even the ans will always be 0 cause we have (a^b) ^ (x^x) = > (a^x) ^ (b^x) 
        // so   a^x = c and b^x = d 
        // c^d = e 
        // this is confirm that a^b will come e => a^b = e
        // if(e^e)(totalxor==0) = 0 else -1 (with the simple rule or xor)

        // odd value 
        // n = odd 
        // x = a^b^c...^n 

        int totalXor = 0; 

        for(int i=0; i<n; i++){
            totalXor ^= a[i];
        }

        if(n % 2 == 0){
            
            if(totalXor ==0 ){
                cout<<0<<'\n'; 
            }
            else{
                cout<<-1<<'\n';
            }

        }
        else{
            cout<<totalXor<<'\n'; 
        }
    }
    return 0; 
}