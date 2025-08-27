#include<iostream>
using namespace std;
int compare (int a[],int n)
{
    int neg=0,pos=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            neg++;
        }
        if(a[i]>=0)
        {
            break;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]>0)
        {
            pos++;
        }
        if(a[i]<=0)
        {
            break;
        }
    }
  if(neg>pos)
  {
      return neg;
  }
  else
    {
        return pos;
    }
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
    cout<<compare ( a, n)<<endl;
}
