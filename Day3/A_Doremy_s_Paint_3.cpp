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

        vector<int>a(n); 
        for(int i=0; i<n; i++){
            cin>>a[i]; 
        }

        // logic   

        // 1.count the odd and even index of arr 
        // 2. check the frq >= odd index 
        // 3. if(frq >= odd ) "yes" , else "no"

        int odd = (n+1) / 2; 
        int even = n/2; 

        unordered_map<int , int>frq; 
        
        for(int x : a ){
            frq[x] ++; 
        }

        int maxFrq = 0; 
        for(auto it : frq){
            maxFrq = max(maxFrq , it.second); 
        }


        if(frq.size() >= 3 ){
            cout<<"No"<<'\n'; 
        }
        else if(frq.size() == 1){
            cout << "Yes\n"; 
        }
        else{
            int f1 = frq.begin()->second;
            int f2 = next(frq.begin())->second;

            if(n % 2 == 0){
                if(f1 == f2) cout << "Yes\n";
                else cout << "No\n";
            }
            else{
                
                if(abs(f1 - f2) == 1) cout << "Yes\n";
                else cout << "No\n";
            }
        }

    }

    return 0; 



}
 