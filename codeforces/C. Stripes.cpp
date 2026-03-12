#include <bits/stdc++.h>
using namespace std;

void strips()
{
    string s;
    int a = 8;
    int k = 0;

    while (a--) {
        cin >> s;
        if (s == "RRRRRRRR")
            k++;
    }

    if (k > 0)
        cout << "R\n";
    else
        cout << "B\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        strips();
    }
}
