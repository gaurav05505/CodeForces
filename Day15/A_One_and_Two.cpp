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

        int countoftwo = 0; 
        for(int i=0; i<n; i++){
            if(a[i] == 2 ){
                countoftwo++; 
            }
        }

        if(countoftwo % 2 != 0){
            cout<<-1<<'\n'; 
        }
        else if(countoftwo % 2 ==0 ){
            int need = countoftwo / 2; 
            int currCount = 0; 

            for(int i=0; i<n; i++){
                
                if(a[i] == 2 ){
                    currCount++; 
                }
                
                if(currCount == need){
                    cout<<i+1<<'\n';
                    break;
                }
            }
        }

        else{
            cout<<1<<'\n'; 
        }

    }

    return 0; 
}