#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,x;
    cin>>n>>x;
    if(x>n-1)
    {
        for(int i=0;i<n;i++)
        {
            cout<<i<<" ";
            if(i==n-1)
            cout<<endl;
        }
    }
    
    else
    {
        for(int i=0;i<n;i++)
        {

            if(i==x && x<n-1)
            {
                cout<<i+1<<" ";
                
                i=i+1;
                continue;
            }
            else if (i!=x)
            cout<<i<<" ";
            
            
        }
        cout<<x<<endl;
    }

}
int main()
{
int t;
cin>>t;
while(t--)
{    solve();
}
return 0;

}