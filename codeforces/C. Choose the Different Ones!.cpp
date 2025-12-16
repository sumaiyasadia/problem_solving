#include<bits/stdc++.h>
using namespace std;
void different(int n,int m,int k)
{
    int a[n],b[m];
    set<int>s1;
     set<int>s2;
       set<int>s3;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<=k)
           s1.insert(a[i]);

    }


    for(int i=0;i<m;i++)
    {
        cin>>b[i];
        if(b[i]<=k)
           s2.insert(b[i]);

    }

    s3.insert(s1.begin(), s1.end());

    s3.insert(s2.begin(), s2.end());
      if(s1.size()>=k/2 && s2.size()>=k/2&&s3.size()==k)
      {
          cout<<"YES"<<endl;
      }
      else
      {
          cout<<"NO"<<endl;
      }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        different(n,m,k);
    }
}
