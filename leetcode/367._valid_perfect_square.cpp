#include <bits/stdc++.h>
using namespace std;
bool squrt(int n)
{


    int left ,right;
    long long mid;
    left=0,right=n;

    while(left<=right)
    {
        mid=(left+right)/2;
        if((mid*mid)==n)
        {
            return true;
            break;
        }
        else if(n>(mid*mid))
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    if(squrt(n))
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;

    }
    return 0;
}
