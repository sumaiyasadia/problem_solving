#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long>a(n);
    map<long long, int> mp;
     for(int i=0;i<n;i++)
     {
         int x;

         cin>>x;
         a.push_back(x);
         mp[x]++;

     }
     sort(a.rbegin(),a.rend());
     long long ans=0,mex=0;
      while(n--)
     {
       if(mex==a[0])
        mex++;
       ans+=mex+a[0];
       if(mp[mex])
        mex++;
     }

    cout << ans<< endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
