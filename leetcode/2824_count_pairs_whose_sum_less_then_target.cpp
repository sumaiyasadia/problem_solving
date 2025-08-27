#include <bits/stdc++.h>
using namespace std;
int count_pair(int a[],int n, int t)
{
    for (int i = 0; i < n - 1; i++) {


        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
             int   temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }


    }
}

    int l=0,r=n-1,mid,pairs=0;
    mid=(l+r)/2;
    while(l<r)
    {
        if(a[l]+a[r]<t)
        {
            pairs=pairs+(r-l);
            l=l+1;
        }
        else
            {
            r=r-1;

            }
    }
    return pairs;
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
cout<<count_pair(a,n,t);
return 0;
}
