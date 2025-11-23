#include<bits/stdc++.h>
using namespace std;
void division_sum(int a[],int n)
{
     int l=0,r=n-1;
    long long square=0,sum=0;
    sort(a,a+n);
    while(l<r)
    {
    int sum2=a[l]+a[r];
    square=sum2*sum2;
    sum=sum+square;
    l++;
    r--;

    }
    cout<<sum<<endl;
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


   division_sum(a, n);
    }
