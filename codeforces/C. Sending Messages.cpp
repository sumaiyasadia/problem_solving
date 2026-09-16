#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9;
void solve()
{
long long  n,f,a,b;
 cin>>n>>f>>a>>b;
 vector<long long>m;
 for(int i=0;i<n;i++)
 {
   long long x;
    cin>>x;
    m.push_back(x);
 }
 long long cost, prev=0;
 for(int i=0;i<n;i++)
 {
    cost=min((m[i]-prev)*a,b);
    f-=cost;
    prev=m[i];
 }
 if(f>0)
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
    return 0;
}