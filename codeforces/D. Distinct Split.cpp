#include <bits/stdc++.h>
using namespace std;

void solve(string s, int n)
{
    int pref[n], suff[n];
    bool seen[26] = {0};
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(!seen[s[i]-'a'])
        {
            seen[s[i]-'a'] = true;
            count++;
        }
        pref[i] = count;
    }
    memset(seen, 0, sizeof(seen));
    count = 0;
    for(int i = n-1; i >= 0; i--)
    {
        if(!seen[s[i]-'a'])
        {
            seen[s[i]-'a'] = true;
            count++;
        }
        suff[i] = count;
    }
    int ans = 0;
    for(int i = 0; i < n-1; i++) ans = max(ans, pref[i] + suff[i+1]);
    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        solve(s, n);
    }
}
