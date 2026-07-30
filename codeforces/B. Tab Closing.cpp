#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a,n,b;
    cin>>a>>n>>b;
    if(n*b<=a || b>=a)
        cout<<1<<"\n";
    else
cout<<2<<"\n";

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

