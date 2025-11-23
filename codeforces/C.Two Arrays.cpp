#include<bits/stdc++.h>
using namespace std;
void test (int a[],int n,int b[])
{
 bool result=true;

         for(int i=0;i<n;i++)
        {
            if (!(b[i] == a[i] || b[i] == a[i] + 1)) {
               result= false;
                break;
        }

    }
   cout << (result ? "YES" : "NO") << "\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--)

    {
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);

  test(a,n,b);
}
}
