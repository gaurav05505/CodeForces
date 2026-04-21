#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main()
{
    int t;
    cin >> t; 
    while (t--)
    {
        long long n, a, b;
        cin >> n >> a >> b; 
        
        if (a + b + 2 <= n || (a == b && a == n)) // 1
            cout << "Yes" << '\n'; 
        else
            cout << "No" << '\n'; 
    }
    return 0;
}