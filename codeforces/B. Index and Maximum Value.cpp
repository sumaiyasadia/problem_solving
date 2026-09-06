#include<bits/stdc++.h>
using namespace std;
void solve()
{
 int n,m;
 cin>>n>>m;
 int v=INT_MIN;
 for(int i=0;i<n;i++)
 {
   int x;
   cin>>x;
   v=max(v,x);
 }
 char c;
 int l,r;
 for(int i=0;i<m;i++)
 {
   cin>>c>>l>>r;
   if(l<=v && v<=r)
   {
      if(c=='+')
      {
         v++;
      }
      else{
         v--;
      }
      
   }
   cout<<v;
   if(i==m-1)
   cout<<"\n";
   else
   {
      cout<<" ";
   }
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