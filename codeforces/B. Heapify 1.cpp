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

        bool ans=true;
        for(int i=1;i<=n;i++)
        {
            int x;
            cin>>x;
            int temp=i;
            while(x%2==0)
                x=x/2;
            while(temp %2==0)
                temp=temp/2;
                if(x!=temp)
                    ans=false;

        }
        if(ans)
        cout<<"YES"<<"\n";
        else
        {
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}
