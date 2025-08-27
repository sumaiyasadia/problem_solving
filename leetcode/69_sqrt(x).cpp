#include<iostream>
using namespace std;
int squrt( long long int n)
{
  long long int left=0,right=n,mid,result=0;
  while(left<=right)
  {
      mid=(left+right)/2;
      if((mid*mid)==n)
      {
          return mid;
break;
      }
      else if(n>(mid*mid))
              {
                  result=mid;
left=mid+1;
      }
      else
        {
        right =mid-1;

        }
  }
  return result;
}
int main()
{
   long long int n;
    cin>>n;
    cout<<squrt(n)<<endl;
    return 0;
}
