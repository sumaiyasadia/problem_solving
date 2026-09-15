#include<bits/stdc++.h>
using namespace std;
void solve()
{
 int n;
 cin>>n;
 string s;
 cin>>s;
 string com="";
 for(int i=0;i<n;i++)
 {
if(s[i]=='1')
{
    com+='1';
}
else{
    if(com.empty()||com.back()!='0')
    com+='0';

}
 }

 int ones=0,zeros=0;
 for(int i=0;i<com.size();i++)
 {if(com[i]=='1')
    ones++;
    else
    zeros++;

 }
 if(ones>zeros)
 cout<<"YES\n";
 else
 cout<<"NO\n";

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