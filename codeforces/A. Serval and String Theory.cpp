#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    string r( s.rbegin(),s.rend());
    int g= r>s;
    sort(s.begin(),s.end());
cout << ((g || (k >= 1 && s[0] != s[n-1])) ? "YES\n" : "NO\n");
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
