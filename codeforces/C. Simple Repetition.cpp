
#include <bits/stdc++.h>
using namespace std;
void isPrime(long long x,long long k)
{
    bool ans=true;
    if(x!=1&&k>1)
    {
        ans=false;
    }
    else
    {
        if((x==1&&k==1)||(x==1&&k!=2))
        {
            ans=false;
        }
        for(int i=2;i<sqrt(x);i++)
        {
            if(x%i==0)
            {
                ans=false;
                break;
            }
        }
    }
    if(ans)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
int main() {



    int t;
    cin >> t;
    while (t--) {
        long long x,k;
        cin >> x>>k;
        isPrime(x,k);

    }

    return 0;
}
