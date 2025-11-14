#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        if(x>45)
        {
            cout<<"-1"<<endl;
        }
        int a[10];
        int index=0;
        for(int i=9;i>=1;i--)
        {
            if(x>=i)
            {
                a[index++]=i;
                x=x-i;
            }
        }
          sort(a,a+index);
           for(int j=0;j<index;j++)
           {
               cout<<a[j];
           }
           cout<<endl;

    }
}
