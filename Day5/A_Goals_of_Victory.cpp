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
        vector<int>a(n-1); //contain n-1 elements

        for(int i=0; i<n-1; i++){
            cin>>a[i]; 
        }

        // a = [3 , -4 , 5] 
        // ef. of team  = total number of goal - total num of goal opp 
        // we can say => total score = total lose (opponent won) => Sum of all efficiencies = 0

        ll summ = 0; 
        for(int i=0; i<n-1; i++){
            summ += a[i]; 
        }

        int ans = -(summ); 
        
        cout<<ans<<'\n'; 

    }


    
}