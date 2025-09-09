#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int even = 0;
        int odd = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] % 2 != i % 2) {
                if (i % 2 == 0)
                   even++;
                else
                    odd++;
            }
        }

        if (even != odd) {
            cout << -1 << endl;
        } else {
            cout << even << endl;
        }
    }
    return 0;
}
