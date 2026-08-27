#include<bits/stdc++.h>
using namespace std;
void solve()
{
 int n;
 cin>>n;
 string s;
 cin>>s;
 map<int, int>mp;
for(int i=0;i<n;i++)
{
    mp[s[i]]++;
};
vector<pair<int,char>>v;
for(auto it :mp)
{
v.push_back({it.second,it.first});
}
 sort(v.begin(),v.end());
 s[s.find(v[0].second)]= v. back().second;
 cout<<s<<endl;

 
 
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