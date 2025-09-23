

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {


    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int same=a[0];
    int count=0;
    int ans=-1;
    for(int i=1;i<n;i++)
    {
       if(same==a[i])
       {
           count++;
       }
       else if(same!=a[i])
       {
           same=a[i];
           count=0;
       }
       if(count==2)
       {
           ans=a[i];
           break;

       }
    }
    cout<<ans<<endl;
    }
}
