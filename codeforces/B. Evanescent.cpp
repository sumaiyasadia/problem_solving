#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=1,x=0;
    for(int i=1;i<n;i++)
    {
        if(s[i]!=s[i-1])
        {
ans++;
        }
        if(i==n-1)
        break;
        if(s[i]!=s[i-1]&& s[i]!=s[i+1])
        {
            if(s[i+1]==s[i-1])
            x=2;
            else 
            x= max(x,1);
        }
    }
    cout<<ans-x<<endl;
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
