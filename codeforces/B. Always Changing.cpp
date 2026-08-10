#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin >> n;
	string s;
	cin>>s;
	int cnt0=0,cnt1=0,del0=0,del1=0;
	for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
            cnt0++;
        else
            cnt1++;
    }
    for(int i=1;i<n;i++)
    {
        if(s[i]==s[i-1])
        {
            if(s[i]=='0')
            {
                del0++;
            }
            else
            {
                del1++;
            }
        }
    }
    if(abs(cnt0-cnt1)>2)
    {
        cout<<-1<<"\n";

    }
    else
    {
        cout<<del0+del1+max(0,abs(del0-del1)-1)<<"\n";
    }
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	while(t--){
		solve();

	}
	return 0;
}

