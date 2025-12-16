#include<bits/stdc++.h>
using namespace std;
void moreArray(int n)
{
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ans=1;
    int x=a[0];

      for(int i=1;i<n;i++)
    {
        if(x+1<a[i])
        {
            x=a[i];
            ans++;
        }
    }
    cout<<ans<<endl;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
    moreArray(n);
    }
}
