#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    int n= s.size();
    int ans=0;
    for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
                ans++;
        }
        if(ans>2)
            cout<<"NO"<<endl;
        else
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
