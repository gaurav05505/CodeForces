#include <bits/stdc++.h>
using namespace std;
#include <set>

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main(){

    int t; 
    cin>>t; 

    while(t--){
        ll a , b; //position of knight 
        cin>>a >> b; 

        ll xk , yk; //position of king
        cin>>xk >> yk; 

        ll xq , yq; //pos of queen 
        cin>>xq >> yq; 

        // logic i will create 2 sets one for queen all position and another of all king position 
        // runn a loop in both and find the same positon and increase the count 

        set<pair<int, int>> kingMoves; 
        set<pair<int, int>> QueenMoves;
        
        int dx[8] = {a, a, -a, -a, b, b, -b, -b}; 
        int dy[8] = {b, -b, b, -b, a, -a, a, -a}; 

        for(int i =0; i<8; i++){
            kingMoves.insert({xk + dx[i] , yk + dy[i]});
            QueenMoves.insert({xq + dx[i] , yq + dy[i]});
        }

        ll count = 0; 
        for(auto pos : QueenMoves){
            if(kingMoves.count(pos)){
                count++; 
            }
        }

        cout<<count<<'\n'; 
    }
    return 0; 
}