#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[200001]={0};
    while(n--)
    {
        int x;
        cin>>x;
        cout<<char('a'+arr[x]);
        arr[x]++;
    }
    cout<<endl;
}

int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
