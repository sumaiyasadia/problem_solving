#include<bits/stdc++.h>
using namespace std;
void solve()
{
  string s;
  cin>>s;
  int rem=0,dig=0;
  for(int i= s.size()-1;i>=0;i--)
  {
  
     if(s[i]!='0')
    {
        dig++;
    }
  else if (s[i]=='0' && dig==0)
    {
    rem++;

    }

  }
  int ans=rem+dig;
  
  
    cout<<ans-1<<endl;
  

  

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}