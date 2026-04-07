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
    while(t--){ 
        cin>>n; 

        if(n %3 ==0){
            cout<<"Second" <<'\n' ; 
        }
        else{
            cout<<"First" << '\n' ; 
        }


    }

    return 0; 


}