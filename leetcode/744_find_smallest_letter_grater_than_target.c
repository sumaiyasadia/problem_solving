#include<stdio.h>
char smallest(char ch[],int n,char t)
{
    int l,r,p=ch[0];
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(ch[mid]>=t)
        {
        p=ch[mid];
        r=mid-1;

        }
        else
        {
            l=mid+1;
        }
    }
    return p;
}
int main()
{
    int n;
    scanf("%d",&n);
    char ch[n];
    for(int i=0;i<n;i++)
    {
      scanf("%c",&ch[i]);
    }
    char t;
    scanf("%c",&t);
    printf("%c",smallest( ch,n,t));
}
