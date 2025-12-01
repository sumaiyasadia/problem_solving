#include <bits/stdc++.h>
using namespace std;

long long po[20];
long long costArr[20];

void precompute() {
    po[0] = 1;
    for (int i = 1; i < 20; i++) {
        po[i] = po[i - 1] * 3;
    }

    for (int x = 0; x < 20; x++) {
        if (x == 0) costArr[x] = 3;
        else costArr[x] = po[x] * 3 + x * po[x - 1];
    }
}

long long solve(long long n) {
    long long ans = 0;

    while (n > 0) {

        // log approximation
        int x = floor(log((long double)n) / log((long double)3));

        // adjust x upward if possible
        while (x + 1 < 20 && po[x + 1] <= n) x++;

        // adjust x downward if needed
        while (po[x] > n) x--;

        ans += costArr[x];
        n -= po[x];
    }

    return ans;
}

int main() {

    precompute();

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout << solve(n) << "\n";
    }

    return 0;
}
