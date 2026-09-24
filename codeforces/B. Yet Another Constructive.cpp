#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k,m;
    cin >> n >> k>>m;
    if(k>m)
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    for(int i=1;i<=n;i++)
    {
if(i%k==0)
cout<<m-k+1<<" ";
    
    else 
    {
        cout<<1<<" ";
    }
}
 cout<<endl;   
    
   
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
