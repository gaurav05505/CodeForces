#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main(){ 

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int n = s.length();

        string c1 = string(n, '(') + string(n, ')');

        string c2 = "";
        for (int i = 0; i < n; i++){
            c2 += "()";
        } 
            

        if (c1.find(s) == string::npos) {
            cout << "YES\n" << c1 << "\n";
        } else if (c2.find(s) == string::npos) {
            cout << "YES\n" << c2 << "\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}