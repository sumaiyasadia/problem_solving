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
        int space=0,maximum=0;
         for(int i=0;i<n;i++)
        {
            if(a[i]==0)
           {
               space++;
               if(space>maximum)
               {
                   maximum=space;
               }
           }
           else
            {
            space=0;
            }
        }
        cout<<maximum<<endl;
    }
}
