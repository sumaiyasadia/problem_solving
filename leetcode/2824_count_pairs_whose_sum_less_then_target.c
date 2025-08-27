#include <bits/stdc++.h>
using namespace std;
int(int a[],int n, int t)
{
    int l=0,r=n-1,mid,pair=0;
    mid=(l+r)/2;
    while(mid--)
    {
        if(a[l]+a[r]<t)
        {
            pair=pair+(r-l);
            l=l+1;
        }
        else
            {
            r=r-1;

            }
    }
    return pair;
}
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
int t;
cin>>t;
}
