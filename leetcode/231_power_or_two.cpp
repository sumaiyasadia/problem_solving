#include<iostream>
using namespace std;
bool power(long long int n)
{
    if(n==1)
    {
        return true;
    }
    else
    {
        if(n%2==0)
        {
           return power(n/2);
        }
        else
        {
            return false;
        }

    }

}
int main()
{
   long long int n;
    cin>>n;
    if(power(n))
    {


    cout<<"TRUE";
    }
    else
    {
        cout<<"FALSE";
    }
}

