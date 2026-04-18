#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main(){

    int t; 
    cin >> t; 
    while (t--) 
    {
        long long n, k; 
        cin >> n >> k; 

        if (n % 2 == 0 || (n - k) % 2 == 0) 
            cout << "YES" << endl; 
        else
            cout << "NO" << endl; 
    }


    return 0; 
}