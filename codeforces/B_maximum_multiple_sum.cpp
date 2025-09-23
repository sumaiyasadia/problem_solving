
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {


    int n;
    cin>>n;
    int max_sum=-1;
    int best=-1;
    for(int i=2;i<=n;i++)
    {
        int k=n/i;
        int sum = i * k * (k + 1) / 2;
        if (sum > max_sum) {
            max_sum = sum;
            best = i;
        }
    }
    cout<<best<<endl;
    }
}
