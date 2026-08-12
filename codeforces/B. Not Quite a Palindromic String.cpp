#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
	cin>>n>>k;

	string s;
	cin>>s;

	int cnt = count(s.begin(),s.end(),'1');
	cnt = abs(2*cnt-n)/2;
	if(k>=cnt && k%2 == cnt%2) cout<<"Yes\n";
	else cout<<"No\n";
}
int main(){
	int _;
	cin>>_;

	while(_--){
	solve();
}
}
