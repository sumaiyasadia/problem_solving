#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int a[n];
long long k=n*3;
    for(int i=1;i<=n;i++)
    {
        cout<<i<<" "<<k-1<<" "<<k<<" ";
        k-=2;
    }
    cout<<endl;
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
