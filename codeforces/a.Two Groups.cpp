#include<iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int po=0,ne=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>=0)
            {
              po=po+a[i] ;
            }
            else
                {
                ne=ne+a[i];
                }
        }

            int result=abs(abs(po)-abs(ne));
            cout<<result<<endl;



    }

}
