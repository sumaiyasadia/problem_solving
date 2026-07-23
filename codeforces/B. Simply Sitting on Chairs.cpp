#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int>a(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int ans=0;
    map<int,int>mp;
    for(int i=1;i<=n;i++)
    {
        if(a[i]>i+1 )
        {

            ans++;
            mp.[i];
    }
    else if(a[i]==i)
        ans++;
    else if(a[i]<i)
    {
        if (mp.count(i) > 0) {
    continue;
    }
    else
        ans++;

}
    }
    cout<<ans<<endl;
}

int main() {
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
