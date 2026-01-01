#include <bits/stdc++.h>
using namespace std;

void result() {
    int n, q;
    cin >> n >> q;

    vector<long long> a(n + 1), pref(n + 1);
    pref[0] = 0;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        pref[i] = pref[i - 1] + a[i];
    }

    long long totalSum = pref[n];

    while (q--) {
        int l, r;
        long long k;
        cin >> l >> r >> k;

        long long rangeSum = pref[r] - pref[l - 1];
        long long len = r - l + 1;

        long long newSum = totalSum - rangeSum + len * k;

        if (newSum % 2 != 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        result();
    }
    return 0;
}
