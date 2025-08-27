#include <stdio.h>

int guess(int num,int pick)
{

    if(num>pick)
    {


        return -1;
    }
    else if(num<pick)
    {
        return 1;

    }
    else if(num==pick)
    {
        return 0;
    }
}
int guess_number(int n,int pick)
{
    int l, r, mid;
    l=1,r=n;
    while(l<=r)
    {

        mid=(l+r)/2;
        int ans=guess(mid,pick);
        if(ans==0)
        {
            return mid;
        }
        else if(ans== 1)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    return l;
}
    int main()
    {
        int n,pick;
        scanf("%d %d",&n,&pick);
        printf("%d", guess_number(n,pick));
        return 0;
    }
