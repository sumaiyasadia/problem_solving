#include<stdio.h>
 #include <stdbool.h>
bool double_n (int a[],int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {

        for (j = 0; j < n - i - 1; j++) {

            if (a[j] > a[j + 1]) {

                temp = a[j];
                a[j] = a[j+ 1];
                a[j + 1] = temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        int target =2*a[i];
        int left,right,mid;
        left =0,right=n-1;
        while(left<=right)
        {
            mid=(left+right)/2;
            if((a[mid]==target)&&(mid!=i))
            {


                    return true;


            }
            else if(a[mid]<target)
            {
                left=mid+1;

            }
            else
            {
                right =mid-1;
            }
        }


    }
return false;
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
    if(double_n(a,n))
    {


    printf("True");
    }
    else
    {


        printf("False");
    }
    return 0;
}
