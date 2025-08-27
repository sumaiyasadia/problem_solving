
#include<iostream>
#include<cmath>
using namespace std;
int main()
{


    int t;
    cin>>t;
  while(t--)
{
    int a,b;
    cin>>a>>b;

        int result=0;
    for(int i=a;i<=b;i++)
    {

        if((i%10==2)||(i%10==3)||(i%10==9))
        {
            result++;
        }

    }

      cout<<result<<endl;
}
return 0;

}
