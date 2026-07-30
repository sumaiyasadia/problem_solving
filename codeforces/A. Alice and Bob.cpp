#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,a;
    cin>>n>>a;
    int v[n];
    int h=0,l=0;

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(a>v[i])
            l++;
        if(a<v[i])
            h++;
    }
    if(l>h)
    {
        cout<<a-1<<"\n";
}
    else
    {
        cout<<a+1<<"\n";
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
}
