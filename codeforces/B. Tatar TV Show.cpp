#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int>parity(k,0);
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
        {
            parity[i%k]^=1;
        }
    }
    for(int i=0;i<k;i++)
    {
        if(parity[i]==1)
        {
            cout << "NO\n";
            return;

        }
    }
    cout<<"YES"<<endl;
}
int main()
{
int t;
cin>>t;
while(t--)
{
    solve();
}
}
