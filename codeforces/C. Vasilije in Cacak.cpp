#include<bits/stdc++.h>
using namespace std;
void VasilijeCacak(long long  n,long long k,long long x)
{
    if((k*(k+1)/2)>x||((n-k+1+n)*k)/2<x)
       {
           cout<<"NO"<<endl;
       }
       else
        {
            cout<<"YES"<<endl;
        }

}
int main()
{
    long long t,n,k,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>x;
        VasilijeCacak(n, k,x);
    }
}
