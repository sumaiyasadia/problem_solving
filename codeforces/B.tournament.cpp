#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, j, k;
        cin >> n >> j >> k;

        int a[n];

        for (int i = 0; i < n; ++i)
            cin >> a[i];

        int max_val = *max_element(a, a + n);
        int strength = a[j - 1];

        if (strength < max_val && k < 2)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}
