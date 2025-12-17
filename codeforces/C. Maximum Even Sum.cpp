#include<bits/stdc++.h>
using namespace std;
void evenSum(long long int a,long long int b)
{
    long long int  sum=0;
  long long int  k;
    if(b%2!=0)
    {
         k=b;
        sum=(a*k)+b/k;
    }
    else if(b%2==0)
{


        k=b/2;
        sum=(a*k)+b/k;
    }
    if(sum%2==0)
    {
        cout<<sum<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }
}
int main()
{
int t;
cin>>t;
while(t--)
{
long long int a,b;
cin>>a>>b;

evenSum(a,b);
}
}
