#include<stdio.h>
int duplicate(int a[],int n)
{


int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    int l,r;
    l=0,r=n;
    while(l<=r)
    {
        int  mid=(l+r)/2;
        if(mid==a[mid])
        {
            l=mid+1;
        }
      else
        {
            r=mid-1;
        }

        }


    }


}
int main()
{
    int n;
    scanf("%d",&n);
   int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[n]);
    }
    printf("%d",duplicate(a,n));
    return 0;
}
