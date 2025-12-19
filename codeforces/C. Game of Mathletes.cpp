#include<bits/stdc++.h>
using namespace std;
void mathletes(int n,int k)
{
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int l=0,r=n-1;
    int ans=0;
    while(l<r)
    {
        if(a[l]+a[r]==k)
        {
            ans++;
            l++;
            r--;
        }
        else if(a[l]+a[r]>k)
        {
           r--;
        }
        else
        {
            l++;
        }

    }


    cout << ans << "\n";


}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        mathletes(n,k);
    }

}
