#include <iostream>
#include <cmath>

using namespace std;

bool isPerfectSquare(long long sum) {
    long long root = sqrt(sum);
    return root * root == sum;
}

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long total = 0;
        for (int i = 0; i < n; ++i) {
            int ai;
            cin >> ai;
            total += ai;
        }

        if (isPerfectSquare(total)) {
            cout << "YES"<<endl;
        } else {
            cout << "NO"<<endl;
        }
    }

    return 0;
}
