#include <bits/stdc++.h>
using namespace std;

char compareNumbers(long long x1, long long p1, long long x2, long long p2)
{
    int d1 = to_string(x1).size() + p1;
    int d2 = to_string(x2).size() + p2;


    if (d1 > d2) return '>';
    if (d1 < d2) return '<';


    long long mn = min(p1, p2);
    p1 -= mn;
    p2 -= mn;

    long long a = x1, b = x2;


    while (p1--) a *= 10;
    while (p2--) b *= 10;

    if (a > b)
    {
        return '>';
    }
    if (a < b)
    {
        return '<';
    }
    else
    {
        return '=';
    }
}

int main()
{


    int t;
    cin >> t;
    while (t--)
    {
        long long x1, p1, x2, p2;
        cin >> x1 >> p1 >> x2 >> p2;

        cout << compareNumbers(x1, p1, x2, p2) << endl;
    }
}
