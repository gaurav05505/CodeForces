#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    if (d < b) {
        cout << -1 << "\n";
        return;
    }

    ll moves = d - b;
    a += moves;

    if (a < c) {
        cout << -1 << "\n";
        return;
    }

    moves += (a - c);
    cout << moves << "\n";
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}