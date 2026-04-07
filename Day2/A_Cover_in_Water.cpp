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

    while(t--){
        int n; 
        cin>>n;
        
        string s; 
        cin>>s; 
        
        // logic 

        // checking if there is any continues 3 ... 
        int threeDot = false; 
        int count = 0; 

        for(int i=0; i<n; i++){

            if(s[i] == '.' && i+1 < n && s[i+1] == '.' && i+2 < n && s[i+2] == '.'){
                threeDot = true; 
                break; 
            }

            if(s[i] == '.'){
                count ++; 
            }
        }

        if(threeDot){
            cout<< 2 <<'\n'; 
        }
        else{
            cout<< count << '\n'; 
        }
    }

    return 0; 


}