#include<bits/stdc++.h>
using namespace std;
void solve()
{
 int n,k;
 cin>>n>>k;
 vector<int>a(n,0);
 int small=1;
 for(int i =k-1;i<n;i+=k)
 {
    a[i]=small;
    small++;
 }
 int large=small;
 for(int i=0;i<n;i++)
 {
    if(a[i]==0)
    {
        a[i]=large;
        large++;
    }
 }
 for(int i=0;i<n;i++)
 {
    cout<<a[i]<<" ";
if(i==n-1)
cout<<endl;
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