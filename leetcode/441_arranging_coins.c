
#include<stdio.h>
int coins(int n)
{
    int l,r;
    long long int mid;
    l=0,r=n;
    while(l<=r)
    {
        mid=(l+r)/2;
        long long int sum=(mid*(1+mid))/2;
        if(sum==n)
        {
            return mid;
        }
        else if(sum<n)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    return r ;
}
int main()
{int n;
scanf("%d",&n);
printf("%d",coins(n));
return 0;




}
