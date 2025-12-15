#include <bits/stdc++.h>
using namespace std;


void gcd_value()
{
    int n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];


    long long g = arr[0];
    for (int i = 1; i < n; i++)
    {
        g =__gcd(g, arr[i]);
    }


    long long primes[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59};
    long long ans = -1;


    for (auto p : primes)
    {
        if (g % p != 0)
        {
            ans = p;
            break;
        }
    }

    cout << ans <<endl;
}

int main()
{


    int t;
    cin >> t;
    while (t--)
        gcd_value();

    return 0;
}

