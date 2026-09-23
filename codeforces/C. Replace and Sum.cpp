#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, q;
    cin >> n >> q;
    
    
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
   
    vector<pair<int, int>> p(q);
    for(int i = 0; i < q; i++)
    {
        cin >> p[i].first >> p[i].second;
    }
    
  
    for(int i = 0; i < n; i++)
    {
        if(b[i] > a[i])
            a[i] = b[i];
    }

    
    for(int i = n - 2; i >= 0; i--)
    {
        if(a[i+1] > a[i])
        {
            a[i] = a[i+1];
        }
    }

    vector<long long> pref(n + 1, 0);
    for(int i = 0; i < n; i++)
    {
        pref[i + 1] = pref[i] + a[i];
    }
 
    for(int i = 0; i < q; i++)
    {
        int l = p[i].first;
        int r = p[i].second;
        
       
        long long sum = pref[r] - pref[l - 1]; 
        cout << sum << " "; 
    }
    cout << "\n";
}

int main()
{
   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
