#include <bits/stdc++.h>
using namespace std;
int missing_num(long long int nums[],long long int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {

                int temp = nums[j];
              nums[j] = nums[j + 1];
               nums[j + 1] = temp;
            }
        }
    }
    int left,right;
    long long int mid;
    left =0,right=n-1;
    int ans=0  ;
    while(left<=right)
    {
        mid=(left+right)/2;

        if(nums[mid]==mid)
        {
            left=mid+1;
            ans=left;
        }
        else
        {
            right=mid-1;
        }

    }
    return ans;
}

int main()
{
    long long int n;
    scanf("%d",&n);
    long long int nums[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&nums[i]);

    }


    printf("%d",missing_num(nums,n));
//missing_num(nums,n);
    return 0;


}
