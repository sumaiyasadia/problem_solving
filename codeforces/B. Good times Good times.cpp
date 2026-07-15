#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long ans= 0;
    for (int i = 0; i < n; i++) {
        long long needed = i + 1;
        long long avai = a[i] + ans;

        if (avai< needed) {
            cout << "NO\n";
            return;
        }
        ans= avai- needed;
    }
    cout << "YES\n";
}

int main() {
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
