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

        ll n , k; 
        cin>>n>>k; 

        string s; 
        cin>>s; 

        vector<int>frq(26 , 0); 

        // frq of the string 
        for(int i=0; i<n; i++){
            int index = s[i] - 'a'; 
            frq[index]++; 
        }

        // count the odd and the even len 
        int oddCount =0;
        int evenCount =0; 

        for(int i=0; i<26; i++){
            if(frq[i] % 2 != 0){
                oddCount++;
            }
        }

        if(oddCount -1 <= k ){
            cout<<"YES"<<'\n'; 
        }
        else{
            cout<<"NO"<<'\n'; 
        }
    }

    return 0; 
}