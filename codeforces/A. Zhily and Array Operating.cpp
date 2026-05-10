#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ans = 0;
    long long con = 0;

    for (int i = n - 1; i >= 0; i--) {
        if (a[i] > 0) {
            ans++;
            con += a[i];
        } else {

            if (a[i] + con > 0) {
                ans++;
                con += a[i];
            } else {
                con = 0;
            }
        }
    }
    cout << ans << endl;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
