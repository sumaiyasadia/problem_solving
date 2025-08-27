
#include <bits/stdc++.h>
using namespace std;
int compare(int a[],int n)
{
    for (int i = 0; i < n - 1; i++)
    {


        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int   temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }


        }
    }
    int l=0,r=n-1;
    while(n>0)
    {
        if(a[0]>=n)
        {
            return n;

        }
        else
        {
            l=l+1;
            n=n-1;
        }
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
    cout<<compare(a,n)<<endl;
}
