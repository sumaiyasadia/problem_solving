#include <bits/stdc++.h>
using namespace std;
int compare(int a[],int n)
{
    int x,ans=0;
    for( x=0;x<=n;x++)
    {
       for(int i=0;i<n;i++)
       {
           if(a[i]>=x)
           {
               ans++;
           }
       }
       if(x==ans)
       {
           return ans;
       }
       ans=0;
    }
return -1;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
   cout<<compare(a,n)<<endl;
}
