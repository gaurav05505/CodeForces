#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

void doublee(string & x , int & minOpr){

    x += x; 
    minOpr++ ;  
}


// kmp 
bool kmp(string text , string pattern ){
   int n = pattern.size(); 
   int m = text.size(); 
   vector<int>Lps(n); 

    // build LPS 
   int prifix = 0 , suffix = 1; 

   while(suffix < n){
        if(pattern[prifix] == pattern[suffix]){
            Lps[suffix] = prifix +1 ; 
            prifix++; 
            suffix++; 
        }
        else{
            if(prifix==0){
                Lps[suffix] = 0;
                suffix++; 
            }
            else{
                prifix = Lps[prifix-1]; 
            }
        }
   }

    // kmp search
    
    int i =0 , j = 0; 
    while(i < m){
        if(text[i] == pattern[j]){
            i++; 
            j++; 
        }

        if(j == n){
            return true; 
        }
        else if(i <m && text[i] != pattern[j]){
            if(j != 0){
                j = Lps[j - 1]; 
            }
            else{
                i++; 
            }
        }
    }

    return false; 

}


// using kmp algo 
bool check(string &s , string&x , int n , int m ){
    
    if(kmp(x , s)){
        return true; 
    }
    else{
        return false; 
    }

}


int main(){

    // user input 
    int t; 
    cin>>t; 

    while(t--){
        int n; 
        int m; 

        cin>> n >> m; 

        string s; 
        string x; 

        cin>>x>>s; 

        // s => s i have to find it in the x;  (m)
        // x => i have to double and chek we can make s sub string (n)

        int minOpr = 0; 
        bool found = false;
        while(x.size() <= 100){
            if(check(s , x , n , m )){
                cout << minOpr << '\n';
                found = true; 
                break;
            }
            else{
                doublee(x, minOpr);
            }
        }

        if(!found){
            cout<<-1<<'\n'; 
        }
    }

}