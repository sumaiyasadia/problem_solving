#include<iostream>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    s.pop_back();
    int bal=0;
for(char c:s)
{
    if(c=='(')
    bal++;
    else
    bal--;
    if(bal==0){
    cout<<"YES"<<"\n";
    break;
    }
    

}
if(bal==1)
cout<<"NO"<<"\n";

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
