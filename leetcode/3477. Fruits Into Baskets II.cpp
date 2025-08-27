#include <bits/stdc++.h>
using namespace std;
void plased_fruit(int f[],int n, int b[],int m)
{
    sort(f,f+n);
    int unplased=0;
    for(int i=0; i<m; i++)
    {
        int target=b[i];
        int l=0,r=n-1,mid,small=0;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(f[mid]<=target)
            {
                small++;
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }

        }
        if(small>0)
        {
            l++;
        }
        else
        {
            unplased++;
        }
        small=0;

    }
    printf("%d",unplased);
}
int main()
{
    int n;
    scanf("%d",&n);
    int m;
    scanf("%d",&m);
    int f[n],b[m];

    for(int i=0; i<n; i++)
    {
        scanf("%d",&f[i]);

    }
    for(int i=0; i<m; i++)
    {
        scanf("%d",&b[i]);

    }
    plased_fruit(f,n,b,m);
}
