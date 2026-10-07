#include<bits/stdc++.h>
using namespace std;

void solve()
{
  long long x,y,k;
   cin>>x>>y>>k;
   long long sum=0;
   while(2*x<=y && k)
   {
sum+=(y%x);
x++,y++;
k--;
   }
   cout<<sum+y%x*k<<endl;
   
}

int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
