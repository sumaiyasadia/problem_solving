#include<iostream>
using namespace std;
int beautifull_string(string s, int n)
{
    int count=0;
     int i=0;
      while(i<=n)
     {
         if((s[i]=='m'&&s[i+1]=='a'&&s[i+2]=='p')||(s[i]=='p'&&s[i+1]=='i'&&s[i+2]=='e'))
         {
             count++;
             i=i+3;
         }
         else
         {
             i++;
         }
     }
     return count;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
     string s;
     cin>>s;
     int result=beautifull_string(s,  n);
cout<<result<<endl;
    }
}

