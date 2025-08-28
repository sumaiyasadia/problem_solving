#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i;
    int a[n];
    double sum=0;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        sum=sum+((double)a[i]/100);
    }

    double result;
    result=(sum/n)*100;
    cout<<result<<endl;
    return 0;
}
