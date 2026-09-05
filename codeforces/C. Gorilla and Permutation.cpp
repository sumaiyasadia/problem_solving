#include<bits/stdc++.h>
using namespace std;
void solve()
{
 int n,m,k;
 cin>>n>>m>>k;
 vector<int>a;
 int i=n;
 while(i>m)
 {
    
    a.push_back(i);
    i--;
 }
 for(int j=1;j<=m;j++)
 {
    
    a.push_back(j);
 }
 for(int j=0;j<n;j++)
 {
    cout<<a[j];
    if(j==n-1)
    cout<<endl;
    else
    cout<<" ";
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