#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    int n; cin>>n;
		ll b,ans=0,sum=0;
		for(int i=0;i<n;i++){
			cin>>b;
			if(b>0)
                ans++;
			sum+=b;
		}
		cout<<min(ans,sum-n+1)<<endl;
}
int main(){
	int t;
	cin>>t;
while(t--)
    {
        solve();
	}
}
