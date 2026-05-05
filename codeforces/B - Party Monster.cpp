#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int x=0,y=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(')
            x++;
        else
            y++;
    }
    if(x==y)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
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

