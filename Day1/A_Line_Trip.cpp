#include <bits/stdc++.h>
using namespace std;

// shortcuts 
#define ll long long
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main(){

    // user input  
    int t ; 
    cin>>t; 

    int x; 
    int n;

    while(t--){
        cin>>n>>x;  
    
        vector<int>a(n); 
        for(int i=0; i<n; i++){
            cin>>a[i]; 
        }

        // t=1 
        // n = 3 x=10 
        // a = [2 ,3, 5]
        // formula = 2 * (x - last gas station) = 2 * (10-5) = 10 
        // walk throgh arr = [2 , 1 , 2 , 5  , 10 ] max = 10  ans 

        // logic 

        vector<int > maxTravel; 
        maxTravel.push_back(a[0]); 

        for(int i= 1; i<n; i++){
            int dis = a[i] - a[i-1]; 
            maxTravel.push_back(dis); 
        }

        int lastDis = x - a.back();
        int maxx = 2 * (lastDis); 

        maxTravel.push_back(lastDis);
        maxTravel.push_back(maxx);

        int m = maxTravel.size();
        int ans = maxTravel[0]; 

        for(int i=1; i<m; i++){
            if(ans <= maxTravel[i]){
                ans= maxTravel[i]; 
            }
        }
        cout<<ans<<'\n'; 

    }







}