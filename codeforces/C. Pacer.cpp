
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
      bool p= false;
    while(n--)
    {
        int a,b;
        cin>>a>>b;

        if(a%2 != (b+p)%2)
        {
            m--;
            p=!p;

        }

    }
    cout<<m<<"\n";

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

