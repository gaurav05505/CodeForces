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
        vector<string>grid(10); 
        
        for(int i=0; i< 10; i++){
            cin>>grid[i]; 
        }

        // logic part 
        // finding the pos x from top and from left 
        // then cal the pos from bottom and right with => n - i + 1 , n-j+1 
        // take the min of all four then add it  
 
        int ans = 0; 

        for(int i=0; i< 10; i++){
            for(int j=0; j<10; j++){
                if(grid[i][j] == 'X'){
                    int row = i + 1; 
                    int col = j +1;  

                    int ring = min(min(row , col) , min(11 - row , 11 - col ) ); 

                    ans += ring; 
                }


            }
        }

        cout<<ans<<'\n'; 


    }


    return 0; 
}