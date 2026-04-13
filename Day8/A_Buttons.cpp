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

        vector<int>btns(3); 

        for(int i=0; i<3; i++){
            cin>>btns[i]; 
        }

        // logic  
        // a + b + c % 2 == 0 

        int a = btns[0];
        int b = btns[1];
        int c = btns[2];

        

        if(c % 2 == 1  ){

            if(b > a ){
                cout<<"Second" <<'\n';
            }
            else{
                cout<<"First" <<'\n';
            }
        }
        else{
             
            if(a > b){
                cout<<"First" <<'\n';
            }
            else{
                cout<<"Second" <<'\n';
            }
        }
    }

    return 0 ; 
}