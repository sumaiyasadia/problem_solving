#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9;
void solve()
{
 int n,m;
 cin>>n>>m;
 vector<vector<char>>a(n,vector<char>(m));
       
 for(int i=0;i<n;i++)
 {
    for(int j=0;j<m;j++)
    {cin>>a[i][j];
    }
 }
 pair<int,int> top={ INF,INF}, bottom={-INF,-INF};
 for(int i=0;i<n;i++)
 {
    for(int j=0;j<m;j++)
    {if(a[i][j]=='#')
        {
        top=min(top,{i,j});
        bottom=max(bottom,{i,j});
        }
    }
 }
 assert (top.second==bottom.second);
 cout<<(top.first+bottom.first)/2+1<<" "<<top.second+1<<endl;
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