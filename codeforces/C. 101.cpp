#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9;
void solve()
{
int n;
cin>>n;
vector<int>a;
for(int i=0;i<n;i++)
{
   int x;
   cin>>x;
   a.push_back(x);
}
for(int i=0;i<n;i++)
{
    if(a[i]==-1)
    a[i]=1;
    if(a[i]==1)
    break;
}
for(int i=n-1;i>=0;i--)
{
    if(a[i]==-1)
    a[i]=1;
    if(a[i]==1)
    break;
}
for(int i=0;i<n;i++)
{
    cout<<max(0,a[i])<<" ";
    if(i==n-1)
    cout<<endl;
}
 
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