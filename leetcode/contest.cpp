#include<iostream>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {


    int n,k;
    cin>>n>>k;
    if(n%k==0)
    {
        cout<<n<<endl;

    }
    else{
int h1,m1;
h1=n/k;
m1=k/2;
if(n%k<m1)
{

int r=(k*h1)+n%k;
cout<<r<<endl;

    }
    else
      {

int r=(k*h1)+m1;
cout<<r<<endl;

    }


   }
}
}

