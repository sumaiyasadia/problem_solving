#include<bits/stdc++.h>
using namespace std;
void balanced(long long int n,long long int k)
{

    long long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

sort(a,a+n);
   long long ans=0;

        long long result=0;

    for(int i=0;i<n-1;i++)
    {

    if (a[i+1]-a[i]<=k)
    {
        ans++;

    }
    else
    {
        ans=0;
    }
    result= max(result,ans);
    }
    cout<<n-result-1<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long int n,k;
        cin>>n>>k;
        balanced(n,k);
    }

}
