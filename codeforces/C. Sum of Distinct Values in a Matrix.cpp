#include<bits/stdc++.h>
using namespace std;
long long n,m,x,y;
void solve(){
	cin>>n>>m>>x>>y;
	vector<bool>a(n+m+1,0),b(n+m+1,0);
	for(int i=1;i<=x;i++){
		int t;
		cin>>t;
		a[t]=1;
	}
	for(int i=1;i<=y;i++){
		int t;
		cin>>t;
		b[t]=1;
	}
	long long ca=0,cb=0,cont=0,sum=0;
	for(long long i=n+m;i>=1;i--){
		if(!a[i]&&!b[i]){
			continue;
		}
		if((!a[i]&&cb==m)||(!b[i]&&ca==n)){
			continue;
		}
		sum+=i;
		cont++;
		if(a[i]&&!b[i]){
			ca++;
		}else if(!a[i]&&b[i]){
			cb++;
		}
		if(cont==n+m-1){
			break;
		}
	}
	cout<<sum<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
